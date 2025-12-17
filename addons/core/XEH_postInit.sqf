#include "script_component.hpp"

// Custom mod message system.
private _modClass = configFile >> "CfgPatches" >> "ic51_core";
private _modVersion = getText (_modClass >> "versionStr");
private _playerName = profileName;  // Returns the local player’s profile name

diag_log format ["[51st Inferno Company - Auxiliary Mod] v%1 loaded by %2", _modVersion, _playerName];

// Medic Sensor
["ic51_medisensorLocal", {
    params ["_medic", "_patient", "_bodyPart"];
    [_medic, _patient, _bodyPart] call ic51_fnc_medisensorLocal;
}] call CBA_fnc_addEventHandler;
