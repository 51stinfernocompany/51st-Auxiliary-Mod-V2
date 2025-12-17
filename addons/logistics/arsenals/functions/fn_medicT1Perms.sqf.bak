params ["_unit"];
_unit setUnitTrait ["Medic", true];
_unit setVariable ["ace_medical_medicClass", 1, true];
hint "Medic T1 Perms Given";

// Log to SERVER RPT (no extra function)
[ [_unit, "ACE Crate", "medic"], {
    params ["_unit","_source","_role"];
    diag_log format ["%1 (%2) got %3 perms via %4", name _unit, getPlayerUID _unit, _role, _source];
}] remoteExec ["BIS_fnc_call", 2];
