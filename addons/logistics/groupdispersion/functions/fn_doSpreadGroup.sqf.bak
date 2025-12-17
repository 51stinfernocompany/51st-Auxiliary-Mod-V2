/*
    ic51_fnc_doSpreadGroup — runs server-side
    [_center, _units, _radius]
*/
if (!isServer) exitWith { _this remoteExec ["ic51_fnc_doSpreadGroup", 2]; };

params [
    ["_center", objNull, [objNull]],
    ["_units", [], [[]]],
    ["_radius", 150, [0]]
];
if (isNull _center) exitWith {};

private _base = getPosATL _center;

// === SETTINGS ===
private _maxInBuildings = 6;   // <<<< total AI allowed in buildings (global cap; platforms uncapped)

// ---------- helpers ----------

// Count whether a unit is inside a building (vertical raycast; ignores platforms)
private _isUnitInBuilding = {
    params ["_man"];
    if (isNull _man) exitWith {false};
    private _p = getPosATL _man;
    private _fromASL = ATLToASL [_p#0, _p#1, (_p#2) + 1.5];
    private _toASL   = ATLToASL [_p#0, _p#1, (_p#2) - 1.5];
    private _hits = lineIntersectsSurfaces [
        _fromASL, _toASL,
        _man, objNull,     // ignore self
        true, 1, "GEOM", "VIEW"
    ];
    if (_hits isEqualTo []) exitWith {false};
    private _obj = (_hits#0)#2;
    (!isNull _obj) && { _obj isKindOf "House" || { _obj isKindOf "House_F" } || { _obj isKindOf "Building" } }
};

// Gather building interior/roof positions within radius (buildings only)
private _collectBuildingPositions = {
    params ["_origin","_radius"];
    private _out = [];
    private _seen = [];
    for "_i" from 1 to 30 do {
        private _p  = _origin getPos [random _radius, random 360];
        private _b  = nearestBuilding _p;
        if (!isNull _b && { !(_b in _seen) }) then {
            _seen pushBack _b;
            {
                if ((_x isEqualTo [0,0,0]) && {(_x distance2D _origin) <= _radius} && {!surfaceIsWater _x}) then {
                    _out pushBack _x;  // buildingPos returns ATL
                };
            } forEach (_b buildingPos -1);
        };
    };
    _out
};

// Probe for flat, walkable surfaces on objects (roofs/platforms) using vertical raycasts (platforms)
private _collectPlatformPositions = {
    params ["_origin","_radius","_zRef"];
    private _cands = [];
    for "_i" from 1 to 60 do {
        private _p = _origin getPos [random _radius, random 360];

        private _fromASL = ATLToASL [_p#0, _p#1, _zRef + 30];
        private _toASL   = ATLToASL [_p#0, _p#1, _zRef - 30];

        private _hits = lineIntersectsSurfaces [
            _fromASL, _toASL,
            objNull, objNull,
            true, 1, "GEOM", "VIEW"
        ];
        if (_hits isEqualTo []) then { continue };

        private _h      = _hits#0;
        private _posASL = _h#0;
        private _n      = _h#1;   // <-- surface normal (vector [x,y,z])
        private _obj    = _h#2;   // <-- hit object (objNull if terrain)

        // Must hit an object (not terrain) and be reasonably flat
        if (isNull _obj) then { continue };
        if (_obj isKindOf "CAManBase" || {_obj isKindOf "AllVehicles"}) then { continue };

        // flatness check (~20° max slope)
        if ((_n vectorDotProduct [0,0,1]) < 0.94) then { continue };

        private _posATL = ASLToATL _posASL;
        if ((_posATL distance2D _origin) > _radius) then { continue };
        if (surfaceIsWater _posATL) then { continue };

        _posATL set [2, (_posATL#2) + 0.05];   // tiny lift
        _cands pushBack _posATL;
    };
    _cands
};

// Pop a random position from a pool (avoids stacking multiple units)
private _popPos = {
    params ["_pool"];
    if ((count _pool) == 0) exitWith {[0,0,0]};
    _pool deleteAt floor random (count _pool)
};

// ---------- build candidate pools once ----------
private _zRef = (getPosATL _center)#2;
private _poolBuild = [_base, _radius] call _collectBuildingPositions;          // buildings only
private _poolPlat  = [_base, _radius, _zRef] call _collectPlatformPositions;   // platforms/roofs

// Compute how many AI are already inside buildings within the area (all sides)
private _nearMen = _base nearEntities ["CAManBase", _radius];
private _alreadyInBuildings = { [_x] call _isUnitInBuilding } count _nearMen;
private _remainingBuildingSlots = (_maxInBuildings - _alreadyInBuildings) max 0;

// ---------- spread ----------
{
    private _u = _x;
    if (!alive _u) then { continue };
    if (_u isEqualTo _center) then { continue };  // keep center in place

    private _pos = [0,0,0];

    // 1) Try buildings if we still have global building capacity left
    if (_remainingBuildingSlots > 0 && { _poolBuild isNotEqualTo [] }) then {
        _pos = [_poolBuild] call _popPos;
        if ((_pos isEqualTo [0,0,0])) then {
            _remainingBuildingSlots = _remainingBuildingSlots - 1;
        };
    };

    // 2) Otherwise, try platforms (uncapped)
    if (_pos isEqualTo [0,0,0] && { _poolBuild isNotEqualTo [] }) then {
        _pos = [_poolPlat] call _popPos;
    };

    // 3) Fallback to ground
    if (_pos isEqualTo [0,0,0]) then {
        _pos = [_base, 3, _radius, 5, 0, 0.6, 0, [], []] call BIS_fnc_findSafePos;
        _pos set [2, 0];
    };

    _u setPosATL _pos;
    _u setDir (random 360);
    doStop _u;
    _u setUnitPos "AUTO";
    _u enableAI "PATH";
} forEach _units;

// mild behavior tune
private _g = if (_units isNotEqualTo []) then { group (_units select 0) } else { grpNull };
if (!isNull _g) then {
    _g setSpeedMode "LIMITED";
    _g setBehaviourStrong "AWARE";
};

true;
