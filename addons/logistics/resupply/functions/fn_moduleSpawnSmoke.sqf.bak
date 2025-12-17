/*
    Zeus module: spawn IC51 supply smoke at module position, then run settle→flyover.
    - Runs on SERVER only.
    - Marks the projectile as "handled" so client ProjectileCreated EH ignores it.
*/
params ["_logic","_units","_activated"];
if (!_activated) exitWith {};
if (!isServer) exitWith {};

private _posATL = getPosATL _logic;
deleteVehicle _logic;

// Spawn the smoke projectile and mark as handled
private _smoke = createVehicle ["ic51_SupplySmoke_Ammo", _posATL, [], 0, "CAN_COLLIDE"];
_smoke setVariable ["ic51_handled", true, true];   // <-- prevents client duplicate path

// Use the same local settle logic, but thrower is unknown (objNull)
[_smoke, objNull] spawn ic51_fnc_handleSmoke;
