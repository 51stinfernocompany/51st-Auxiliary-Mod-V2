/*
    LOCAL (client) handler for the thrown IC51 smoke.
    Wait for landing & settle; then ask SERVER to run flyover by position.
    Now includes a unique projectile ID (netId) so the server can dedupe.
*/
params ["_proj", "_thrower"];
if (isNull _proj) exitWith {};

private _t0 = time;
waitUntil {
    sleep 0.05;
    if (isNull _proj) exitWith {true};
    private _atl = getPosATL _proj;
    (isTouchingGround _proj || (_atl select 2) < 0.3) && {speed _proj < 0.2} && {time > (_t0 + 0.8)}
};
if (isNull _proj) exitWith {};

private _posASL  = getPosASL _proj;
if (surfaceIsWater (ASLToATL _posASL)) then { _posASL set [2, (_posASL select 2) + 0.5]; };

// Unique ID for this throw (works across clients)
private _projId = netId _proj;          // e.g. "2:1234"
if (isNil "_projId") then { _projId = ""; };

diag_log format ["[IC51] (client) Smoke settled at %1 ASL; requesting server flyover (projId=%2)", _posASL, _projId];

// Send to server with owner + unique projectile ID
[_posASL, _thrower, _projId] remoteExec ["ic51_fnc_flyoverDrop", 2 /*server*/];
