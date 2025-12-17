_unitWithSword = _this;

[_unitWithSword] spawn {
    private _unit = _this select 0;
    waitUntil { !isNull _unit && { alive _unit } };

    private _weapon = primaryWeapon _unit;
    private _mag = currentMagazine _unit;

    // Get max ammo count from the magazine config
    private _maxAmmo = getNumber (configFile >> "CfgMagazines" >> _mag >> "count");

    while { alive _unit } do {
        sleep 0.2;

        if ((_unit ammo _weapon) == 0 && currentMagazine _unit != "") then {
            // Play fake reload animation
            _unit playMoveNow "reloadMagazine";

            // Wait ~1.5 seconds to let animation play
            sleep 1.5;

            // Magically refill the current mag
            _unit setAmmo [_weapon, _maxAmmo];
        };
    };
};

if (isPlayer _unitWithSword) exitWith {
    _unitWithSword setVariable ["disableUnitSFX",1,true];
    _unitWithSword removeAllEventHandlers "Killed";
    _unitWithSword addEventHandler ["Killed", {
        _unitWithSword = _this select 0;
        [_unitWithSword, selectRandom ["B1_DeathSound_1","B1_DeathSound_2","B1_DeathSound_3","B1_DeathSound_4","B1_DeathSound_5","B1_DeathSound_6","B1_DeathSound_7","B1_DeathSound_8"], 90, 10] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
        _rndANim = selectRandom ["B1_Droid_die_1","B1_Droid_die_2","B1_Droid_die_3"];
    }];
};

_unitWithSword setSkill 0.7;

_unitWithSword disableAI "PATH";
_unitWithSword disableAI "MINEDETECTION";
_unitWithSword disableAI "SUPPRESSION";
_unitWithSword disableAI "COVER";
_unitWithSword disableAI "AIMINGERROR";
_unitWithSword allowFleeing 0;
_unitWithSword setSpeaker "NoVoice";
_unitWithSword setVariable ["disableUnitSFX",1,true];
_unitWithSword removeAllEventHandlers "Killed";

_unitWithSword spawn {
    private _unit = _this;

    waitUntil {
        sleep 0.6;
        (!isNull _unit) && { alive _unit }
    };

    while { alive _unit } do {
        if (lifeState _unit isEqualTo "INCAPACITATED") exitWith {
            _unit setDamage 1;
        };
        sleep 1;
    };
};

_unitWithSword addEventHandler ["Killed", {
    _unitWithSword = _this select 0;
    [_unitWithSword, selectRandom ["B1_DeathSound_1","B1_DeathSound_2","B1_DeathSound_3","B1_DeathSound_4","B1_DeathSound_5","B1_DeathSound_6","B1_DeathSound_7","B1_DeathSound_8"], 90, 10] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
    _rndANim = selectRandom ["B1_Droid_die_1","B1_Droid_die_2","B1_Droid_die_3"];
}];

_unitWithSword addEventHandler ["HandleDamage", {
    _objHit = _this select 0;
    if ((animationState _objHit == "B1_Droid_execution_main")) exitWith {};
    _hitter = _this select 3;
    _objHit reveal _hitter;
    if (side _hitter != side _objHit) then {
        _objHit doWatch (getPos _hitter);
    };
    if (_objHit != _hitter and (alive _objHit)) then {
        if (isNil {_objHit getVariable "B1Speak"}) then {
            _objHit spawn {
                _this setVariable ["B1Speak",1];
                [_this, selectRandom ["B1_hit_1","B1_hit_2","B1_hit_3","B1_hit_4","B1_hit_5","B1_hit_6"], 90] call CBA_fnc_globalSay3d;
                sleep 10;
                _this setVariable ["B1Speak",nil];
            };
        };
    };
}];

_unitWithSword addEventHandler ["Fired", {
    _unitWithSword = _this select 0;
    if (isNil {_unitWithSword getVariable "B1Speak"}) then {
        _unitWithSword spawn {
            _this setVariable ["B1Speak",1];
            [_this, selectRandom ["B1_shooting_1","B1_shooting_2","B1_shooting_3","B1_shooting_4"], 60] call CBA_fnc_globalSay3d;
            sleep (random 10);
            _this setVariable ["B1Speak",nil];
        };
    };
}];

_unitWithSword setUnitPos "UP";

_actFr = [{
    _array = _this select 0;
    _mutant = _array select 0;
    if ((currentWeapon _mutant == secondaryWeapon _mutant)) exitWith {};
    _g = count (_mutant nearObjects ["GrenadeHand", 4]);
    if ((_g >= 1)) then {
        [_mutant, selectRandom ["B1_incGrenade_1","B1_incGrenade_2","B1_incGrenade_3","B1_incGrenade_4"], 60] call CBA_fnc_globalSay3d;
    };

    if ((_mutant getVariable "canMakeAttack" == 0) and (alive _mutant) and lifeState _mutant != "INCAPACITATED" and animationState _mutant != "B1_Droid_hit_1" and animationState _mutant != "B1_Droid_hit_2" and animationState _mutant != "B1_Droid_execution_main") then {
        _mutant playActionNow "B1_GunHolding";
    } else {
        _mutant playActionNow "Disable_Gesture";
    };
}, 2, [_unitWithSword]] call CBA_fnc_addPerFrameHandler;

waitUntil {
    sleep 0.5;
    if (isNull _unitWithSword) exitWith { true };
    (!(alive _unitWithSword))
};
[_actFr] call CBA_fnc_removePerFrameHandler;
