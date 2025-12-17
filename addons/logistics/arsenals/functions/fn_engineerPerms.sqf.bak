params ["_unit"];
_unit setUnitTrait ["engineer", true];
_unit setVariable ["ACE_isEngineer", 2, true];
hint "Engineer Perms Given";

// Log to SERVER RPT (no extra function)
[ [_unit, "ACE Crate", "engineer"], {
    params ["_unit","_source","_role"];
    diag_log format ["%1 (%2) got %3 perms via %4", name _unit, getPlayerUID _unit, _role, _source];
}] remoteExec ["BIS_fnc_call", 2];
