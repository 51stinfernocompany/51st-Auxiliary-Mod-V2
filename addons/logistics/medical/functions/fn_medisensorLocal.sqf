#include "..\script_component.hpp"

#define MED_LOG_STR "%1 checked for %2: %3um"
#define BV_LOG_STR "%1 checked Blood Volume: %2"

/*
Function: mti_medical_fnc_medisensorLocal

Description:
    Local callback for medisensor scan.

Arguments:
    _medic - treating unit
 	_patient - treated patient
 	_bodyPart - body part to be treated

Return Value:
    None

Example:
    (begin example)
        [player, cursorTarget, "Head"] call mti_medical_fnc_medisensorLocal
    (end)

Author:
	Glowbal, Mokka
*/

params ["_medic", "_patient", "_bodyPart"];

private _scanOutput = "";
private _outputHeight = 2;

// grab heart rate and blood pressure first

// --- HEART RATE ---
private _hrVal = _patient getVariable ["ace_medical_heartRate", objNull];
// normalize to text
private _hrText = "none";
if (!isNil "_hrVal" && {typeName _hrVal == "SCALAR"}) then {
    _hrText = str (round _hrVal);
};

private _bloodPressure = [_patient] call ace_medical_status_fnc_getBloodPressure;

_bloodPressure params ["_bloodPressureLow", "_bloodPressureHigh"];

if (_bloodPressureHigh <= 20) then {
	_bloodPressure = "none";
} else {
	_bloodPressure = format ["%1/%2", _bloodPressureHigh, _bloodPressureLow];
};

// add to log now because we wanna include the meds as well
[_patient, "quick_view", "$STR_ACE_Medical_Treatment_Check_Pulse_Log", [_medic call ace_common_fnc_getName, _hrText]] call ace_medical_treatment_fnc_addToLog;
[_patient, "quick_view", "$STR_ACE_Medical_Treatment_Check_Bloodpressure_Log", [_medic call ace_common_fnc_getName, _bloodPressure]] call ace_medical_treatment_fnc_addToLog;

private _medStrings = format["Heart Rate: %1<br/>Blood Pressure: %2", _hrText, _bloodPressure];

// --- BLOOD VOLUME (always show) ---
private _defaultBloodVolumeL = 6; // ACE default is ~6 liters
private _bloodVolume = _patient getVariable ["ace_medical_bloodVolume", _defaultBloodVolumeL];

// ACE stores liters; convert to milliliters
private _maxBloodVolume = round (_defaultBloodVolumeL * 1000);
_bloodVolume = _bloodVolume * 1000;

// Add some fuzz/randomness
_bloodVolume = (_bloodVolume - 250) + (random [0, 250, 500]);
_bloodVolume = (round _bloodVolume) min _maxBloodVolume;

private _bloodVolumeStr = format ["%1 / %2 ml", _bloodVolume, _maxBloodVolume];

// Append to display string
_medStrings = format ["%1<br/>Blood Volume: %2", _medStrings, _bloodVolumeStr];
_outputHeight = _outputHeight + 0.75;

// Log it
[_patient, "quick_view", "%1 checked Blood Volume: %2",
    [_medic call ace_common_fnc_getName, _bloodVolumeStr]
] call ace_medical_treatment_fnc_addToLog;


// now grab medication data
private _medications = "true" configClasses (configFile >> "ACE_Medical_Treatment" >> "Medication");

{
    private _medCfg  = _x;                   // config entry
    private _medName = configName _medCfg;   // string class name

    // ACE expects class name string here
    private _concentration = [_patient, _medName, false] call ace_medical_status_fnc_getMedicationCount;

	// Normalize to a SCALAR no matter what ACE returns
	switch (typeName _concentration) do {
		case "SCALAR": {/* ok as-is */};
		case "ARRAY":  {
			// Pick a sensible numeric value. Often the first element is the active count.
			_concentration = if (count _concentration > 0) then {_concentration select 0} else {0};
		};
		default {
			_concentration = 0;
		};
	};

    // Read singleDose directly from the config entry, with fallback
    private _singleDose = getNumber (_medCfg >> "singleDose");
    if (_singleDose == 0) then { _singleDose = 400 };   // fallback

    private _currentDose = _singleDose * _concentration;

    if (_currentDose > 5) then {
        private _doseStr = format ["%1: %2um", _medName, round _currentDose];

        // build the UI string you’re already constructing
        _medStrings = format ["%1<br/>%2", _medStrings, _doseStr];
        _outputHeight = _outputHeight + 0.75;

        // add to quick view log (same as you had, but pass med name as string)
        [_patient, "quick_view", "%1 checked for %2: %3um",
            [_medic call ace_common_fnc_getName, _medName, round _currentDose]
        ] call ace_medical_treatment_fnc_addToLog;
    };

} forEach _medications;

