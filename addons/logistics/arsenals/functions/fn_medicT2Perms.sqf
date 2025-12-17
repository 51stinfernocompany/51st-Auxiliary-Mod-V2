params ["_unit"];
_unit setUnitTrait ["Medic", true];
_unit setVariable ["ace_medical_medicClass", 2, true];
hint "Medic T2 Perms Given";

// Log to SERVER RPT
[ [_unit, "ACE Crate", "doctor"], {
    params ["_unit","_source","_role"];
    diag_log format ["%1 (%2) got %3 perms via %4", name _unit, getPlayerUID _unit, _role, _source];
}] remoteExec ["BIS_fnc_call", 2];
