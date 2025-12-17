if ((count _this) == 1) exitWith {
    // ---------- CLIENT BRANCH ----------
    params ["_unit"];
    if (!hasInterface || {isNull _unit}) exitWith {};

    // Require the packed item (your class)
    if !("ic51_item_recon_drone" in items _unit) exitWith {
        ["You need the Packed Recon Drone in your inventory."] call BIS_fnc_showSubtitle;
    };

    // Placement ~1.5m ahead of the player, clamped to ground
    private _dir = getDir _unit;
    private _pATL = getPosATL _unit;
    private _aheadATL = _pATL;
    _aheadATL set [0, (_aheadATL#0) + 1.5 * sin _dir];
    _aheadATL set [1, (_aheadATL#1) + 1.5 * cos _dir];
    _aheadATL set [2, 0];

    private _posASL = ATLToASL _aheadATL;
    private _hit = lineIntersectsSurfaces [_posASL, _posASL vectorAdd [0,0,-3], _unit, objNull, true, 1, "GEOM", "NONE"];
    if (_hit isNotEqualTo []) then { _posASL = (_hit#0)#0; };

    // Basic clearance
    if (((ASLToATL _posASL) nearEntities ["AllVehicles", 2]) findIf {_x != _unit} > -1) exitWith {
        ["Not enough space to deploy the drone."] call BIS_fnc_showSubtitle;
    };

    // Consume the packed item locally
    _unit removeItem "ic51_item_recon_drone";

    // Decide which vehicle class to spawn (default to YOUR subclass so it carries your ACE “Pack UAV”)
    private _defaultClass = "ic51_recon_drone";
    private _class = missionNamespace getVariable ["ic51_uav_class", _defaultClass];

    // Call SERVER branch of THIS SAME FUNCTION
    [_unit, _class, _posASL, _dir] remoteExec ["ic51_fnc_deployAsUAV", 2];
};

// --- SERVER BRANCH ---
if (!isServer) exitWith {};
params ["_unit","_class","_posASL","_dir"];
if (isNil "_class") exitWith {};

// Spawn the UAV
private _uav = createVehicle [_class, ASLToATL _posASL, [], 0, "NONE"];
_uav setDir _dir;
_uav setPosASL _posASL;
_uav setVectorUp surfaceNormal (ASLToATL _posASL);
_uav lock 0;

// <<< KEY: give it a UAV AI crew so terminals can see it >>>
createVehicleCrew _uav;            // adds the “UAV AI” driver appropriate for the class
_uav setAutonomous true;           // advertise as controllable by terminals

// Optional: keep it still until someone connects
{
    _x disableAI "PATH";
    _x disableAI "TARGET";
    _x disableAI "AUTOTARGET";
} forEach crew _uav;

_uav setFuel 1;
_uav setDamage 0;
{ _x addCuratorEditableObjects [[_uav], true]; } forEach allCurators;
