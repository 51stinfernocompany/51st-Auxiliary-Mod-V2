// Server-authoritative pack: despawn UAV and return the folded item.
params ["_uav","_picker"];
if (!isServer) exitWith {};
if (isNull _uav || {isNull _picker}) exitWith {};

// Clean up and delete
{ deleteVehicle _x } forEach crew _uav;
deleteVehicle _uav;

// Give folded item back (client manages inventory; fallback: drop on ground)
[_picker, getPosATL _picker] remoteExec ["ic51_fnc_giveFoldedItem_client", _picker, true];
