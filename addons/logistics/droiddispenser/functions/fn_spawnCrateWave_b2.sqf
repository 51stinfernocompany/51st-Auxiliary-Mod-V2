params [
    ["_posATL", [0,0,0], [[]], 3],
    ["_alt", 1000, [0]],
    ["_dispenserClass", "Box_NATO_Ammo_F", [""]],
    ["_side", east, [sideUnknown]],
    ["_factionFilter", "", [""]],
    ["_unitClasses", [], [[]]],
    ["_radius", 5, [0]],
    ["_durationSeconds", 300, [0]],
    ["_intMin", 2, [0]],
    ["_intMax", 10, [0]],
    ["_unitsPer", 1, [0]],
    ["_maxAlive", 50, [0]],
    ["_stopOnCrateDeath", true, [true]],
    ["_gid"]
];

private _module = objNull;
{
    if (_x isKindOf "IC51_Module_SupplyCrateWave") exitWith { _module = _x };
} forEach (nearestObjects [_posATL, ["Logic"], 15]);

// Classes
private _dropClass  = "ic51_droidDespener_DropProxy_b2"; // falls
private _finalClass = "ic51_droidDespener_b2";           // tanky, destroyable

// Spawn proxy up high
private _spawnPos = +_posATL; _spawnPos set [2, (_posATL select 2) + _alt];
private _drop = createVehicle [_dropClass, _spawnPos, [], 0, "CAN_COLLIDE"];
_drop setDir random 360;
_drop setVectorUp [0,0,1];
_drop enableSimulationGlobal true;
_drop allowDamage false; // don't let it die mid-air

// vertical drop (no tumble) + speed
_drop setVectorDirAndUp [[0,0,-1], [0,0,1]];
_drop setVelocity [0,0,-500];  // faster fall (tune)

// Keep upright during fall (CBA PFH), remove when landed
private _pfh = [{
    params ["_args","_pfhId"]; _args params ["_c"];
    if (isNull _c) exitWith { [_pfhId] call CBA_fnc_removePerFrameHandler; };
    private _altNow = (getPosATL _c) select 2;
    if (isTouchingGround _c || _altNow <= 0.3) exitWith { [_pfhId] call CBA_fnc_removePerFrameHandler; };
    _c setVectorDirAndUp [[0,0,-1],[0,0,1]];
    // keep minimal downward speed if needed:
    // private _v = velocity _c; if (_v#2 > -100) then { _c setVelocity [_v#0, _v#1, -100]; };
}, 0, [_drop]] call CBA_fnc_addPerFrameHandler;

// Wait until impact
waitUntil {
    uiSleep 0.05;
    isNull _drop || isTouchingGround _drop || ((getPosATL _drop select 2) <= 0.25)
};
if (isNull _drop) exitWith { false }; // aborted

// Hard snap + pin a moment
private _impactPos = getPosATL _drop;
_drop setPosATL [_impactPos#0, _impactPos#1, 0];
_drop setVectorUp (surfaceNormal _impactPos);
_drop setVelocity [0,0,0];
[_drop] spawn {
    params ["_c"]; private _end = time + 1.0; private _p = getPosATL _c;
    while {time < _end && {!isNull _c}} do {
        _c setVelocity [0,0,0]; _c setPosATL _p; _c setVectorUp (surfaceNormal _p); uiSleep 0.01;
    };
};

// Impact FX
[_drop] call ic51_fnc_makeImpactFX;

// Create the invisible anchor once it's pinned it to the ground
private _anchor = createVehicle ["Land_HelipadEmpty_F", _impactPos, [], 0, "CAN_COLLIDE"];
_anchor enableSimulationGlobal false;
_anchor setPosATL _impactPos;
_anchor setVectorUp (surfaceNormal _impactPos);

// Swap to the FINAL object
private _dispenser = createVehicle [_finalClass, _impactPos, [], 0, "CAN_COLLIDE"];
_dispenser setDir (getDir _drop);
_dispenser setVectorUp (surfaceNormal _impactPos);
_dispenser allowDamage true;     // final object is damageable
_dispenser attachTo [_anchor, [0,0,0]];  // lock in place
_dispenser setVariable ["ic51_anchor", _anchor, true];

// Delete proxy
deleteVehicle _drop;



// stop spawning if you also gate on a var (belt & suspenders)
_dispenser addEventHandler ["Killed", {
  params ["_obj", "_killer", "_instigator", "_useEffects"];

	// 1) tell the spawner loop to stop (in addition to your `!alive _dispenser` check)
	_obj setVariable ["ic51_stopSpawning", true, true];
}];


//small delay before starting to spawn units
sleep 5;

if (_unitClasses isEqualTo []) then {
    private _defaults = switch (_side) do {
        case west: {["B_Soldier_F","B_Soldier_AR_F","B_Soldier_GL_F","B_Soldier_LAT_F"]};
        case resistance: {["I_Soldier_F","I_Soldier_AR_F","I_Soldier_GL_F","I_Soldier_LAT_F"]};
        case civilian: {["C_man_p_beggar_F","C_man_p_fugitive_F"]};
        default {["ic51_opfor_unit_b2_standard"]};
    };
    if (_factionFilter != "") then {
        private _pool = [];
        {
            private _cfg = _x;
            if (isClass _cfg) then {
                private _clsName = configName _cfg;
                private _isMan = getNumber (_cfg >> "isMan") == 1;
                private _sideCfg = getNumber (_cfg >> "side");
                private _fac = getText (_cfg >> "faction");
                if (_isMan && { toLower _fac == toLower _factionFilter } && { _sideCfg == [west, east, resistance, civilian] find _side }) then {
                    _pool pushBack _clsName;
                };
            };
        } forEach ("true" configClasses (configFile >> "CfgVehicles"));
        if (_pool isNotEqualTo []) then { _defaults = _pool select [0, (count _pool) min 20] };
    };
    _unitClasses = _defaults;
};

private _startTime = time;
private _spawnedGroups = [];
private _aliveUnits = [];

if (!isNull _module) then {
    _module setVariable ["ic51_scw_crate", _dispenser, true];
    _module setVariable ["ic51_scw_groups", _spawnedGroups, true];
};
// need to take the below and wrap it into a function

private _grp = _dispenser getVariable ["ic51_persistentGroup", grpNull];
if (isNull _grp) then {
    _grp = createGroup [_side, true];

    // Make a unique, readable group ID using the dispenser's netId
    private _gid = format ["IC51-DISP-%1", netId _dispenser];
    // Set group ID globally so all clients see it
    if (!isNil "setGroupIdGlobal") then {
        _grp setGroupIdGlobal [_gid];
    } else {
        _grp setGroupId [_gid];
    };

    _dispenser setVariable ["ic51_persistentGroup", _grp, true];
    if (!isNull _module) then { _module setVariable ["ic51_scw_group", _grp, true]; };
};

// (optional) track it in your array just once
if (!(_grp in _spawnedGroups)) then { _spawnedGroups pushBack _grp; };

playSound3D ["\ic51_droidDispenser\data\droidDispenser_sound_mono44k_16bit_125x.wss", _dispenser, false, getPos _dispenser, 5, 1, 150]; 
if (isNull _grp) then {
_grp = createGroup [_side, true];
private _gid = format ["IC51-DISP-%1", netId _dispenser];
if (!isNil "setGroupIdGlobal") then { _grp setGroupIdGlobal [_gid]; } else { _grp setGroupId [_gid]; };
_dispenser setVariable ["ic51_persistentGroup", _grp, true];
if (!(_grp in _spawnedGroups)) then { _spawnedGroups pushBack _grp; };
if (!isNull _module) then { _module setVariable ["ic51_scw_groups", _spawnedGroups, true]; };
};

for "_i" from 1 to 3 do {
	private _uc = selectRandom _unitClasses;
	private _ang = random 360;
	private _dist = 5 + random _radius;
	private _pos = (getPosATL _dispenser) getPos [_dist, _ang];
	_pos set [2, 0];

	private _u = _grp createUnit [_uc, _pos, [], 0, "FORM"];
	_u setDir (random 360);
	_u setBehaviourStrong "AWARE";
	_u setCombatMode "RED";
	_aliveUnits pushBack _u;
};

sleep (_intMin + random (_intMax max _intMin - _intMin));
	
while { true } do {
    if (_stopOnCrateDeath && ( !alive _dispenser || { _dispenser getVariable ["ic51_stopSpawning", false] } )) exitWith {};
    if ((_durationSeconds > 0) && {(time - _startTime) > _durationSeconds}) exitWith {};

    _aliveUnits = _aliveUnits select { alive _x };
    if (_maxAlive == 0 || { (count _aliveUnits) < _maxAlive }) then {
		playSound3D ["\ic51_droidDispenser\data\droidDispenser_sound_mono44k_16bit_125x.wss", _dispenser, false, getPos _dispenser, 5, 1, 150]; 
        if (isNull _grp) then {
			_grp = createGroup [_side, true];
			if (!isNil "setGroupIdGlobal") then { _grp setGroupIdGlobal [_gid]; } else { _grp setGroupId [_gid]; };
			if (!(_grp in _spawnedGroups)) then { _spawnedGroups pushBack _grp; };
			if (!isNull _module) then { _module setVariable ["ic51_scw_groups", _spawnedGroups, true]; };
		};
		private _uc = selectRandom _unitClasses;
		private _ang = random 360;
		private _dist = 5 + random _radius;
		private _pos = (getPosATL _dispenser) getPos [_dist, _ang];
		_pos set [2, 0];

		private _u = _grp createUnit [_uc, _pos, [], 0, "FORM"];
		_u setDir (random 360);
		_u setBehaviourStrong "AWARE";
		_u setCombatMode "RED";
		_aliveUnits pushBack _u;
    };

    sleep (_intMin + random (_intMax max _intMin - _intMin));
};

true;
