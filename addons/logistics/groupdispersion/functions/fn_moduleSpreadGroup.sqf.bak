params ["_logic", "_units", "_activated"];
if (!_activated) exitWith {};

if (local _logic) then {
// Slider bounds and default (meters)
private _R_MIN = 10;
private _R_MAX = 1000;
private _R_DEF = 150;

private _center = objNull;

// Resolve from provided units
{
    if (_x isEqualType objNull && {!isNull _x} && {_x isKindOf "CAManBase"} && {alive _x}) exitWith { _center = _x };
} forEach (_units param [0, []]);

// Fallback to nearest AI
if (isNull _center) then {
    private _near = nearestObjects [getPosATL _logic, ["CAManBase"], 10, true];
    if (_near isNotEqualTo []) then { _center = _near#0; };   // <-- fix
};
if (isNull _center) exitWith {
    ["Place module directly ON an AI unit."] remoteExec ["hintSilent", remoteExecutedOwner];
};

private _members = units (group _center) select { alive _x };

if (!isNil "zen_dialog_fnc_create") then {
    // ZEN signature: [type, label, default, conditionBool, args[min,max,decimals]]
    private _controls = [
		["SLIDER:RANGE", format ["Radius (m) [%1..%2]", _R_MIN, _R_MAX], [_R_MIN, _R_MAX, _R_DEF, 0]]
    ];

    [
        "Spread Group",
        _controls,
        // onConfirm
        {
            params ["_results", "_args"];
            _args params ["_center","_members","_R_MIN","_R_MAX","_logic"];
            private _val = _results#0;

            // Guard for very old ZEN that reports 0..1
            private _radius = (
                if (_val <= 1 && {_val >= 0} && {_R_MAX > _R_MIN}) then {
                    _R_MIN + (_R_MAX - _R_MIN) * _val
                } else {
                    _val
                }
            );
            _radius = (round _radius) max _R_MIN min _R_MAX;

            // Do the spread on server
            [_center, _members, _radius] remoteExec ["ic51_fnc_doSpreadGroup", 2];

            // Delete the module (server deletes; replicates)
            if (!isNull _logic) then { [_logic] remoteExecCall ["deleteVehicle", 2]; };
        },
        // onCancel
        {
            params ["_results", "_args"];
            _args params ["", "", "", "", "_logic"];
            if (!isNull _logic) then { [_logic] remoteExecCall ["deleteVehicle", 2]; };
        },
        [_center, _members, _R_MIN, _R_MAX, _logic]
    ] call zen_dialog_fnc_create;

} else {
    // No ZEN: default radius, then delete module
    [_center, _members, _R_DEF] remoteExec ["ic51_fnc_doSpreadGroup", 2];
    ["ZEN not detected. Using default radius 150 m."] remoteExec ["hintSilent", remoteExecutedOwner];
    if (!isNull _logic) then { [_logic] remoteExecCall ["deleteVehicle", 2]; };
};
};
