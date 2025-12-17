// Server: drop the folded item on the ground.
params ["_posATL"];
if (!isServer) exitWith {};

private _holder = createVehicle ["GroundWeaponHolder_Scripted", _posATL, [], 0, "CAN_COLLIDE"];
_holder setVectorUp surfaceNormal _posATL;
_holder addItemCargoGlobal ["ic51_item_recon_drone", 1];
