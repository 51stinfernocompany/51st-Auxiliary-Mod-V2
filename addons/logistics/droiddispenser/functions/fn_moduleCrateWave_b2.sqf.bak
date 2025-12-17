/*
    Function: ic51_fnc_moduleCrateWave
    Zeus module driver. All tunables are defined HERE (SQF), not in config attributes.
*/
params ["_logic", "_units", "_activated"];
if (!_activated) exitWith {};
if (!isServer) exitWith {};

if (_logic getVariable ["ic51_ddb2_done", false]) exitWith {};
_logic setVariable ["ic51_ddb2_done", true, true];

// === TUNABLES (edit these) ===
private _dropAltitude    = 1000;                      // meters above module pos
private _dispenserClass      = "ic51_droidDespener_b2";        // falling object classname
private _spawnRadius     = 5;                       // meters
private _durationSeconds = 60;                      // 0 = run while crate alive
private _intervalMin     = 8;                        // seconds
private _intervalMax     = 18;                       // seconds
private _unitsPerWave    = 3;                        // count per tick
private _maxUnitsAlive   = 20;                       // 0 = uncapped
private _side            = east;                     // west / east / resistance / civilian
private _factionFilter   = "";                       // optional CfgFactionClasses name
private _unitClasses     = [];                       // optional explicit soldier classnames
private _stopOnCrateDeath= true;                     // stop when crate destroyed
private _despawnOnDelete = true;                     // deleting module = cleanup
// ============================

private _pos = getPosATL _logic;
private _args = [
    _pos, _dropAltitude, _dispenserClass, _side, _factionFilter, _unitClasses,
    _spawnRadius, _durationSeconds, _intervalMin, _intervalMax,
    _unitsPerWave, _maxUnitsAlive, _stopOnCrateDeath
];

private _handle = _args spawn ic51_fnc_spawnCrateWave_b2;

// Optional cleanup when module is deleted
if (_despawnOnDelete) then {
    _logic addEventHandler ["Deleted", {
        params ["_logic"];
        private _grpVar = _logic getVariable ["ic51_scw_groups", []];
        {
            { deleteVehicle _x } forEach units _x;
            deleteGroup _x;
        } forEach _grpVar;
        private _crate = _logic getVariable ["ic51_scw_crate", objNull];
        if (!isNull _crate) then { deleteVehicle _crate };
    }];
};

_logic setVariable ["ic51_scw_handle", _handle];
true;
