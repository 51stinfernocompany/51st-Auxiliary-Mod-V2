/*
    SERVER: Spawns a plane that overflies the smoke and drops a crate.

    New: request includes a unique projectile ID (netId string).
    We claim it once on the server so ACE/locality races can’t spawn two planes.
*/

params ["_targetASL", ["_owner", objNull], ["_projId", ""]];

// ---------- SERVER DEDUPE BY PROJECTILE ID ----------
if (_projId != "") then {
    private _key = format ["ic51_claim_proj_%1", _projId];
    if (missionNamespace getVariable [_key, false]) exitWith {
        diag_log format ["[IC51] Server dedupe: projId %1 already claimed — ignoring.", _projId];
    };
    missionNamespace setVariable [_key, true, true];
};

// ---------- (optional) PER-PLAYER GUARD ----------
if (!isNull _owner) then {
    if (_owner getVariable ["ic51_dropInProgress", false]) exitWith {
        diag_log format ["[IC51] Guard: %1 already has a drop in progress — aborting.", _owner];
    };
    _owner setVariable ["ic51_dropInProgress", true, true];
};

// --- Tunables ---
private _planeClass = "ic51_laat_ls";
private _crateClass = "ic51_crate_large";
private _parachute  = "B_Parachute_02_F";

private _flyAlt     = 30;   // ASL pass height
private _radius     = 2000;  // spawn distance from target
private _exitExtra  = 1000;  // exit distance past target
private _cleanupSec = 30;

private _leadMeters = 10;    // drop BEFORE the smoke
private _alongTol   = 1;    // along-track tolerance
private _crossTol   = 1;    // cross-track tolerance

private _prox2D     = 350;   // << keep exact case (D uppercase)
private _maxTime    = 25;
// -----------------

// Random approach
private _dir    = random 360;
private _dirVec = [sin _dir, cos _dir, 0];

private _startASL = _targetASL vectorAdd (_dirVec vectorMultiply _radius);
_startASL set [2, (_targetASL select 2) + _flyAlt];

private _endASL = _targetASL vectorAdd ((_dirVec vectorMultiply -(_radius + _exitExtra)));
_endASL set [2, (_targetASL select 2) + _flyAlt];

// Group + plane
private _grp   = createGroup [west, true];
private _plane = createVehicle [_planeClass, ASLToATL _startASL, [], 0, "FLY"];
_plane setPosASL _startASL;
private _dirTo = [_startASL, _targetASL] call BIS_fnc_dirTo;
_plane setDir _dirTo;

_plane setVelocityModelSpace [0, 300, 0];
_plane flyInHeightASL [_flyAlt, _flyAlt, _flyAlt];

createVehicleCrew _plane;
_grp addVehicle _plane;

{
    _x setSkill 0.6;
    _x allowFleeing 0;
    _x setBehaviour "CARELESS";
    _x setCombatMode "BLUE";
    _x disableAI "TARGET";
    _x disableAI "AUTOTARGET";
    _x disableAI "AUTOCOMBAT";
    _x disableAI "FSM";
} forEach crew _plane;

_plane setCaptive true;
_plane setSpeedMode "FULL";

// Keep pushing toward target so it doesn't wander
[_plane, _targetASL] spawn {
    params ["_pl","_tASL"];
    while {alive _pl} do { _pl doMove (ASLToATL _tASL); sleep 1; };
};

diag_log format ["[IC51] Plane spawned (projId=%1); monitoring for drop", _projId];

// --- Drop monitor with robust triggers (precise / proximity / timed) ---
[_plane, _targetASL, _crateClass, _parachute, _leadMeters, _alongTol, _crossTol, _prox2D, _endASL, _owner, _maxTime] spawn {
    params ["_plane","_tgtASL","_crateClass","_parachute","_lead","_alongTol","_crossTol","_prox2D","_endASL","_owner","_maxTime"];
    private _dropped = false;

    private _lzXY = [_tgtASL select 0, _tgtASL select 1];
    private _havePrev = false;
    private _prevAlongErr = 0;
    private _tStart = time;

    private _doDrop = {
        params ["_pASL"];
        private _dropATL = ASLToATL (_plane modelToWorldWorld [0, -6, -1.2]);

        _plane allowDamage false;

        private _chute = createVehicle [_parachute, _dropATL, [], 0, "FLY"];
        private _crate = createVehicle [_crateClass, _dropATL, [], 0, "NONE"];
        _crate allowDamage false;
        _chute setVelocity [0,0,0];
        _crate setVelocity [0,0,0];
        _crate attachTo [_chute, [0,0,0]];

        private _uprightLoop = [_crate] spawn {
            params ["_c"];
            while { !isNull _c && {!isNull attachedTo _c} } do {
                _c setVectorUp [0,0,1];
                sleep 0.02;
            };
        };

        private _windLock = [_chute, _crate, _lzXY] spawn {
            params ["_ch","_cr","_xy"];
            while { !isNull _ch && {!isNull _cr} && {!isTouchingGround _cr} } do {
                private _z = (getPosASL _ch) select 2;
                _ch setPosASL [_xy select 0, _xy select 1, _z];
                _ch setVelocity [0,0,(velocity _ch select 2)];
                _cr setVectorUp [0,0,1];
                sleep 0.02;
            };
        };

        [_crate] call ic51_fnc_fillCrate;

        [_plane, _crate, _chute, _uprightLoop, _windLock, _owner] spawn {
            params ["_pl","_c","_ch","_up","_wl","_owner"];
            waitUntil { sleep 0.1; isNull _c || isTouchingGround _c || (getPosATL _c select 2) < 0.4 };

            if (!isNull _c) then {
                detach _c;
                if (!isNull _ch) then { deleteVehicle _ch; };
                if (!isNil "_up") then { terminate _up; };
                if (!isNil "_wl") then { terminate _wl; };

                private _atl = getPosATL _c; _atl set [2,0];
                _c setPosATL _atl;
                _c setVectorUp [0,0,1];
                _c setVelocity [0,0,0];
                //_c enableSimulationGlobal false;
                _c allowDamage false;
            };

            [_pl] spawn { params ["_p"]; sleep 3; if (!isNull _p) then { _p allowDamage false; }; };

            if (!isNull _owner) then {
                _owner setVariable ["ic51_dropInProgress", false, true];
            };
        };

        diag_log "[IC51] Crate dropped (wind-locked, upright).";

        if (!isNull _plane && alive _plane) then {
            _plane doMove (ASLToATL _endASL);
        };
    };

    while { !isNull _plane && alive _plane && !_dropped } do {
        private _pASL = getPosASL _plane;

        private _fwd  = vectorDir _plane; _fwd set [2,0];
        private _mag  = vectorMagnitude _fwd; if (_mag < 0.01) then { _fwd = [0,1,0]; _mag = 1; };
        private _fwdN = _fwd vectorMultiply (1/_mag);

        private _toTgt = _tgtASL vectorDiff _pASL; _toTgt set [2,0];

        private _along = _toTgt vectorDotProduct _fwdN;
        private _cross = vectorMagnitude (_toTgt vectorDiff (_fwdN vectorMultiply _along));
        private _alongErr = _along - _lead;

        private _zeroCross = false;
        if (_havePrev) then { _zeroCross = (_prevAlongErr * _alongErr) <= 0; };
        _prevAlongErr = _alongErr; _havePrev = true;

        if ( ((abs _alongErr) <= _alongTol && _cross <= _crossTol)
          || (_zeroCross && {_cross <= (_crossTol * 1.2)}) ) then {
            _dropped = true; [_pASL] call _doDrop; break;
        };

        if ( (_pASL distance2D _tgtASL) <= _prox2D && {_cross <= (_crossTol * 1.5)} ) then {
            _dropped = true; [_pASL] call _doDrop; break;
        };

        if ((time - _tStart) > _maxTime) then {
            _dropped = true; [_pASL] call _doDrop; break;
        };

        sleep 0.02;
    };
};

// Cleanup aircraft
[_plane, _cleanupSec] spawn {
    params ["_plane","_sec"];
    sleep _sec;
    if (!isNull _plane) then {
        { deleteVehicle _x; } forEach crew _plane;
        deleteVehicle _plane;
        diag_log "[IC51] Plane cleaned up.";
    };
};
