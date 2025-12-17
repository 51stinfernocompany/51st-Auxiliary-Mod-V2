// Client: try to add folded item; if no space, ask server to drop it.
params ["_picker","_posATL"];
if (!hasInterface || {player != _picker}) exitWith {};

private _item = "ic51_item_recon_drone";
if (player canAdd _item) then {
  player addItem _item;
  ["Folded UAV added to inventory."] call BIS_fnc_showSubtitle;
} else {
  [_posATL] remoteExec ["ic51_fnc_spawnFoldedItem_server", 2];
  ["No space: dropped Folded UAV at your feet."] call BIS_fnc_showSubtitle;
};
