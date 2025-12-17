#include "..\script_component.hpp"

/*
Function: mti_medical_fnc_medisensor

Description:
    Handles medisensor event triggering.

Arguments:
    _medic - treating unit
 	_patient - treated patient
 	_bodyPart - body part to be treated

Return Value:
    None

Example:
    (begin example)
        [player, cursorTarget, "Head"] call mti_medical_fnc_medisensor
    (end)

Author:
	Glowbal, Mokka
*/

params ["_medic", "_patient", "_bodyPart"];

["ic51_medisensorLocal", [_medic, _patient, _bodyPart], _patient] call CBA_fnc_targetEvent;
