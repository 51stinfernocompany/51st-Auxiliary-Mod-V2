params ["_medic", "_patient","_usedItem"];

["ace_medical_treatment_fullHealLocal", _patient, _patient] call CBA_fnc_targetEvent;
[_patient, "activity", "%1 applied %2", [name _medic, getText (configFile >> "CfgWeapons" >> _usedItem >> "displayName")]] call ace_medical_treatment_fnc_addToLog;
