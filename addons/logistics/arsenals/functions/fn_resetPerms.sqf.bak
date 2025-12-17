params ["_unit"];
_unit setUnitTrait ["Medic", true];
_unit setVariable ["ace_medical_medicClass", 0, true];
_unit setUnitTrait ["engineer", true];
_unit setVariable ["ACE_isEngineer", 0, true];
hint "Perms Removed";

// Log to SERVER RPT (no extra function)
[ [_unit, "ACE Crate", "medic"], {
    params ["_unit","_source","_role"];
    diag_log format ["%1 (%2) got %3 perms via %4", name _unit, getPlayerUID _unit, _role, _source];
}] remoteExec ["BIS_fnc_call", 2];
