//if (isClass(configFile >> "CfgPatches" >> "OPTRE_Suit_Scripts_DEV")) exitWith {};

if (false) then {

	//execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\settings.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\hudEventhandler.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\hudBootUp.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\hudInit.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\jump.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\none.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\armor.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\shield.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\preventfalldamage.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\restdamage.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\system.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\systemMessages.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\system_AI.sqf";

};

//Addon Scripts

if (true) then {

	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\hudEventhandler.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\hudBootUp.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\hudInit.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\jump.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\none.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\armor.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\shield.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\preventfalldamage.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\restdamage.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\system.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\systemMessages.sqf";
	execVM "\x\ic51\addons\community_scripts\shieldsystem\scripts\system_AI.sqf";

};

OPTRE_targetingSystemSoundOn = "RscDisplayCurator_visionMode";
OPTRE_targetingSystemSoundOff = "click";
OPTRE_MJOLNIR_currentWeapon = "NOWEAPON";
OPTRE_MJOLNIR_currentThrowable = "NOWEAPON";
OPTRE_MJOLNIR_hudOverlay = "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_hudBackground.paa";
OPTRE_MJOLNIR_hudHelmetOutline = "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_hudHelmetOutline.paa";

["OPTRE Powered MJOLNIR","optre_jump_test", "Jump", {[] spawn {call optre_suit_fnc_jump};}, "", [0x39, [false, true, false]]] call CBA_fnc_addKeybind;

OPTRE_fnc_mjolnirMapScale = {
	_scale = switch worldName do {
		case "Altis": {0.014};	
		case "Stratis": {0.045};
		case "Malden": {0.035};
		case "Tanoa": {0.024};
		case "vr": {0.050};
		
		case "optre_gridlock": {0.4};
		case "Iribus_OPTRE": {0.094};
		case "Blood_OPTRE": {0.094};

		default {0.024}; 
	};

	_scale
};

//OPTRE_MJOLNIR_hud_radarScale = [] call OPTRE_fnc_mjolnirMapScale;
OPTRE_MJOLNIR_hud_radarScale = 0.045;

["OPTRE Powered MJOLNIR","OPTRE_toggleIconsKey", "Toggle Threat Detector Icons", {
	if (player getVariable ["OPTRE_hasArmor",false] && player getVariable ["OPTRE_hasHelmet",false] && player getVariable ["OPTRE_TARGETING_ALLOWED", false] && ic51_allison_allow_targeting_setting) then {
		
		if (OPTRE_showIcons) then {
			[] spawn {
				_targetingEffect = ppEffectCreate ["ColorCorrections",2593]; 
				_targetingEffect ppEffectForceInNVG true; 
				_targetingEffect ppEffectEnable true; 
				_targetingEffect ppEffectAdjust [0,1,0,[0.105,0.105,0.105,0.5],[1,1,1,0],[1,1,1,0],[1,1,0,0,0,0,10]]; 
				_targetingEffect ppEffectCommit 0.3;
				playSound OPTRE_targetingSystemSoundOn;
				["Threat detector offline", "auspexToggle",2] call OPTRE_fnc_addSystemMessage;
				sleep 0.2;
				OPTRE_showIcons = false;
				sleep 0.5;
				ppEffectDestroy _targetingEffect;
			};
		} else {
			[] spawn {
				_targetingEffect = ppEffectCreate ["ColorCorrections",2593]; 
				_targetingEffect ppEffectForceInNVG true; 
				_targetingEffect ppEffectEnable true; 
				_targetingEffect ppEffectAdjust [0,1,0,[0.105,0.105,0.105,0.5],[1,1,1,0],[1,1,1,0],[1,1,0,0,0,0,10]]; 
				_targetingEffect ppEffectCommit 0.3;
				playSound OPTRE_targetingSystemSoundOn;
				["Threat detector online", "auspexToggle",2] call OPTRE_fnc_addSystemMessage;
				sleep 0.2;
				OPTRE_showIcons = true;
				sleep 0.5;
				ppEffectDestroy _targetingEffect;
			};
		};
	};
}, "", [0x14, [false, false, true]]] call CBA_fnc_addKeybind;	

["OPTRE Powered MJOLNIR","OPTRE_threatRangeUpKey", "Increase Threat Detector Range", {
	if (player getVariable ["OPTRE_hasArmor",false] && player getVariable ["OPTRE_hasHelmet",false] && player getVariable ["OPTRE_TARGETING_ALLOWED", false] && ic51_allison_allow_targeting_setting) then {
		if (OPTRE_threatRange < ic51_allison_targeting_max_range) then {
			OPTRE_threatRange = (OPTRE_threatRange + ic51_allison_targeting_interval_range) min ic51_allison_targeting_max_range;
			playSound "click";
			["Threat detector range: " + str OPTRE_threatRange + "m", "auspexRange",2] call OPTRE_fnc_addSystemMessage;

			terminate OPTRE_nearUnitsHandlerHandle;

			OPTRE_nearUnitsHandlerHandle = [] spawn {
				while {OPTRE_targetingHandlerAdded} do {
					while {OPTRE_showIcons} do {
						OPTRE_nearUnitsHandler call OPTRE_nearUnitsHandler;
						sleep OPTRE_throttleTime;
					};
					sleep 1;
				};
			};
		};
	};
}, "", [0xC8, [true, false, false]]] call CBA_fnc_addKeybind;

["OPTRE Powered MJOLNIR","OPTRE_threatRangeDownKey", "Decrease Threat Detector Range", {
	if (player getVariable ["OPTRE_hasArmor",false] && player getVariable ["OPTRE_hasHelmet",false] && player getVariable ["OPTRE_TARGETING_ALLOWED", false] && ic51_allison_allow_targeting_setting) then {
		if (OPTRE_threatRange > ic51_allison_targeting_min_range) then {
			OPTRE_threatRange = (OPTRE_threatRange - ic51_allison_targeting_interval_range) max ic51_allison_targeting_min_range;
			playSound "click";
			["Threat detector range: " + str OPTRE_threatRange + "m", "auspexRange",2] call OPTRE_fnc_addSystemMessage;

			terminate OPTRE_nearUnitsHandlerHandle;

			OPTRE_nearUnitsHandlerHandle = [] spawn {
				while {OPTRE_targetingHandlerAdded} do {
					while {OPTRE_showIcons} do {
						OPTRE_nearUnitsHandler call OPTRE_nearUnitsHandler;
						sleep OPTRE_throttleTime;
					};
					sleep 1;
				};
			};
		};
	};
}, "", [0xD0, [true, false, false]]] call CBA_fnc_addKeybind;

["OPTRE Powered MJOLNIR","OPTRE_toggleLowLightKey", "Toggle Low Light Vision", {
	if (player getVariable ["OPTRE_hasArmor",false] && player getVariable ["OPTRE_hasHelmet",false] && player getVariable ["OPTRE_TARGETING_ALLOWED", false] && ic51_allison_allow_lowlight_setting) then {
		if (OPTRE_lowLight) then {
			playSound "RscDisplayCurator_visionMode";
			setAperture -1;
			OPTRE_lowLight = false;
			["Low light vision disabled", "lowlightToggled",2] call OPTRE_fnc_addSystemMessage;
		} else {
			playSound "RscDisplayCurator_visionMode";
			setAperture OPTRE_lowLightAperture;
			OPTRE_lowLight = true;
			["Low light vision enabled", "lowlightToggled",2] call OPTRE_fnc_addSystemMessage;
		};
	};
}, "", [0x26, [true, false, false]]] call CBA_fnc_addKeybind;

["OPTRE Powered MJOLNIR","OPTRE_lowLightUpKey", "Increase Low Light Sensitivity", {
	if (player getVariable ["OPTRE_hasArmor",false] && player getVariable ["OPTRE_hasHelmet",false] && player getVariable ["OPTRE_TARGETING_ALLOWED", false] && ic51_allison_allow_lowlight_setting) then {
		if (OPTRE_lowLightAperture > 0.5) then {
			OPTRE_lowLightAperture = (OPTRE_lowLightAperture - 0.1) max 0;
			playSound "click";
			if (OPTRE_lowLight) then {
				setAperture OPTRE_lowLightAperture;
			};
			["Low Light Sensitivity: " + str round(abs(OPTRE_lowLightAperture - 2) * 100) + "%", "lowlightSensitivitiy",2] call OPTRE_fnc_addSystemMessage;
		};
	};
}, "", [0xCD, [true, false, false]]] call CBA_fnc_addKeybind;

["OPTRE Powered MJOLNIR","OPTRE_lowLightDownKey", "Decrease Low Light Sensitivity", {
	if (player getVariable ["OPTRE_hasArmor",false] && player getVariable ["OPTRE_hasHelmet",false] && player getVariable ["OPTRE_TARGETING_ALLOWED", false] && ic51_allison_allow_lowlight_setting) then {
		if (OPTRE_lowLightAperture < 1.5) then {
			OPTRE_lowLightAperture = OPTRE_lowLightAperture + 0.1;
			playSound "click";
			if (OPTRE_lowLight) then {
				setAperture OPTRE_lowLightAperture;
			};
			["Low Light Sensitivity: " + str round(abs(OPTRE_lowLightAperture - 2) * 100) + "%", "lowlightSensitivitiy",2] call OPTRE_fnc_addSystemMessage;
		};
	};
}, "", [0xCB, [true, false, false]]] call CBA_fnc_addKeybind;

OPTRE_fnc_setShieldValues = {
	params ["_unit"];

	switch (true) do {
		case (vest _unit in ic51_allison_shield_modifier_suits_1): {
			_unit setVariable ["OPTRE_shieldModifier",ic51_allison_shield_modifier_1];
		};
		case (vest _unit in ic51_allison_shield_modifier_suits_2): {
			_unit setVariable ["OPTRE_shieldModifier",ic51_allison_shield_modifier_2];
		};
		case (vest _unit in ic51_allison_shield_modifier_suits_3): {
			_unit setVariable ["OPTRE_shieldModifier",ic51_allison_shield_modifier_3];
		};
		case (vest _unit in ic51_allison_shield_modifier_suits_4): {
			_unit setVariable ["OPTRE_shieldModifier",ic51_allison_shield_modifier_4];
		};
		case (vest _unit in ic51_allison_shield_modifier_suits_5): {
			_unit setVariable ["OPTRE_shieldModifier",ic51_allison_shield_modifier_5];
		};
		default {
			_unit setVariable ["OPTRE_shieldModifier",1];
			//_unit getVariable ["OPTRE_shieldModifier",1];
		};
	};
	
	if ((getNumber (configFile >> 'CfgWeapons' >> (vest _unit) >> 'MJOLNIR_isArmor')) == 1 && !(missionNamespace getVariable ["ic51_allison_overwrite_config_shield", false])) then {
		_unit setVariable ["OPTRE_shieldStrength",getNumber (configFile >> 'CfgWeapons' >> (vest _unit) >> 'MJOLNIR_shieldStrength')];
		_unit setVariable ["OPTRE_shieldChargeValue",getNumber (configFile >> 'CfgWeapons' >> (vest _unit) >> 'MJOLNIR_shieldChargeValue')];
		_unit setVariable ["OPTRE_shieldChargeDelay",getNumber (configFile >> 'CfgWeapons' >> (vest _unit) >> 'MJOLNIR_shieldChargeDelay')];
	} else {
		if (isPlayer _unit) then {
			_unit setVariable ["OPTRE_shieldStrength",round(ic51_allison_shield_energy) * (_unit getVariable ["OPTRE_shieldModifier",1])];
			_unit setVariable ["OPTRE_shieldChargeValue",round(ic51_allison_shield_regen)];
			_unit setVariable ["OPTRE_shieldChargeDelay",ic51_allison_shield_delay];
		} else {
			_unit setVariable ["OPTRE_shieldStrength",round(ic51_allison_shield_energy_AI) * (_unit getVariable ["OPTRE_shieldModifier",1])];
			_unit setVariable ["OPTRE_shieldChargeValue",round(ic51_allison_shield_regen_AI)];
			_unit setVariable ["OPTRE_shieldChargeDelay",0.1];
		};
	};
};

//Applies scripts on AIs that get spawned after mission init
["CAManBase", "init", {
	(_this select 0) params ["_unit"];
	[_unit] spawn {
		[_this] call {
			(_this select 0) params ["_unit"];
			_unit setVariable ["OPTRE_hasUniform",uniform _unit in optre_jump_enabled_suits OR (getNumber (configFile >> 'CfgWeapons' >> (uniform _unit) >> 'MJOLNIR_isUndersuit')) == 1];
			_unit setVariable ["OPTRE_hasArmor",vest _unit in optre_powered_suits OR (getNumber (configFile >> 'CfgWeapons' >> (vest _unit) >> 'MJOLNIR_isArmor')) == 1];
			if (!(isPlayer _unit) && _unit getVariable ["OPTRE_hasArmor",false] && alive _unit && missionNamespace getVariable "ic51_allison_activate_ai" && local _unit) then {
				[_unit] call optre_suit_fnc_system_AI;
			};
		};
	};
}] call CBA_fnc_addClassEventHandler;

//Reapplys AI scripts when AI unit switches locality
["CAManBase", "Local", {
	(_this select 0) params ["_unit","_local"];
	[_unit] spawn {
		[_this] call {
			(_this select 0) params ["_unit","_local"];
			if (!(isPlayer _unit) && (vest _unit in optre_powered_suits) && alive _unit && missionNamespace getVariable "ic51_allison_activate_ai" && local _unit) then {
				[_unit] call optre_suit_fnc_system_AI;
			};
		};
	};
}] call CBA_fnc_addClassEventHandler;


OPTRE_hitEffect = {
	params ["_target"];
	if (!(_target getVariable ["OPTRE_hasHelmet",false]) OR !(_target getVariable ["OPTRE_MJOLNIR_hudInitiated", false])) exitWith {};
	if (_target getVariable ["optre_suit_energy",0] > 0) then {
		(OPTRE_hudHitEffect#0) ctrlSetTextColor ic51_allison_hiteffect_color;
	} else {
		(OPTRE_hudHitEffect#0) ctrlSetTextColor ic51_allison_hiteffect_depleted_color;
	};
	(OPTRE_hudHitEffect#0) ctrlSetFade 0.5;
	(OPTRE_hudHitEffect#0) ctrlCommit 0;
	sleep 0.1;
	(OPTRE_hudHitEffect#0) ctrlSetFade 1;
	(OPTRE_hudHitEffect#0) ctrlCommit 0.5;
};

OPTRE_shieldChargeAnimation = {
	playSound "OPTRE_MjolnirShieldBootUp";
	(OPTRE_mjolnirHud_energyText#0) ctrlSetTextColor ic51_allison_energy_bar_text_color;
	(OPTRE_mjolnirHud_energyText#0) ctrlCommit 0;
	[] spawn {
		(OPTRE_hudShieldChargeTexture#0) ctrlSetFade 0;
		(OPTRE_hudShieldChargeTexture#0) ctrlCommit 0.5;
		
		sleep 1;
		(OPTRE_hudShieldChargeTexture#0) ctrlSetFade 1;
		(OPTRE_hudShieldChargeTexture#0) ctrlCommit 0.5;
	};

	[] spawn {
		(OPTRE_hudShieldChargeEffect#0) ctrlSetPosition [-0.000156274 * safeZoneW + safeZoneX,0.885 * safeZoneH + safeZoneY,safeZoneW,0.484 * safeZoneH];
		(OPTRE_hudShieldChargeEffect#0) ctrlSetFade 0;
		(OPTRE_hudShieldChargeEffect#0) ctrlCommit 0;

		(OPTRE_hudShieldChargeEffect#0) ctrlSetPosition [0.0101562 * safeZoneW + safeZoneX,-0.391 * safeZoneH + safeZoneY,safeZoneW,0.484 * safeZoneH];
		(OPTRE_hudShieldChargeEffect#0) ctrlCommit 1;
		sleep 1;
		(OPTRE_hudShieldChargeEffect#0) ctrlSetFade 1;
		(OPTRE_hudShieldChargeEffect#0) ctrlCommit 0;
	};
};

OPTRE_shieldParticleEffect = {
	params ["_target", "_position"];
	_velocity = velocity _target;

	_spark = "#particlesource" createVehicleLocal (ASLToATL _position);  
	_spark attachTo [_target];

	_distort setParticleRandom [0,[0,0,0],[0,0,0],0,0,[0, 0, 0, 0],1,0];
	_spark setParticleParams [["\A3\data_f\blesk1",1, 0, 1], "", "SpaceObject", 1, 0.2, [0, 0, 0], _velocity, 0, 10,7.9, 0.005, [0.005, 0.005, 0.005], [[0.91, 0.01, 0.01, 1], [0.9, 0.8, 0.1, 1], [0.9, 0.8, 0.1, 1]], [0.08], 1, 0, "", "", _hitsparks];
	_spark setDropInterval 0.1;

	_distort = "#particlesource" createVehicleLocal (ASLToATL _position);
	_distort attachTo [_target]; 

	_distort setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d", 1, 0, 1],"","Billboard",1,0.12,[0, 0, 0],_velocity,17,10,7.9,0, [0.5],[[0,0,0,0.7]],[0.08],1,0,"","",_distort];
	_distort setParticleRandom [0,[0,0,0],[0,0,0],0,0,[0, 0, 0, 0],1,0];
	_distort setParticleCircle [0,[0, 0, 0]];
	_distort setDropInterval 0.0007;

	_light = "#lightpoint" createVehicleLocal (ASLToATL _position);

	_light setLightIntensity 250;
	_light setLightAmbient [0.0, 0.0, 0.0];
	_light setLightColor [0.4,0.6,1];
	_light setLightAttenuation [0, 0, 0, 0, 20, 20];

	[_spark,_distort,_light,_hitsparks] spawn {
		_spark = _this select 0;
		_distort = _this select 1;
		_light = _this select 2;
		sleep 0.2;
		deleteVehicle _spark;
		deleteVehicle _light;
		sleep 0.1;
		deleteVehicle _distort;
	};
};

OPTRE_hitPartCode = {
	params ["_target", "_shooter", "_position", "_selection", "_ammo"];

	if (_target == player) then {
		[_target] spawn OPTRE_hitEffect;
		playSound "OPTRE_MjolnirHitSound";
	};

	if ((_target getVariable "OPTRE_suit_mode" == "armor") && (_target getVariable "optre_suit_energy" >= 0)) then {
		[[_target, _position], {
			params ["_target", "_position"];
			[_target, _position] call OPTRE_shieldParticleEffect;
		}] remoteExec ["call"];
		
		_energyloss = (_ammo select 0);
		_hitbodypart = (_selection select 0);
		_currentenergy = _target getVariable "optre_suit_energy";

		_target setVariable ["OPTRE_shieldTimer", 4];
		if (!(_target getVariable ["optre_beingshotat", false])) then {
			_target setVariable ["optre_beingshotat", true];
			_target setVariable ["optre_stopcharging", true];
			[_target] spawn {
				(_this select 0) params ["_target"];
				
				while {(_target getVariable ["OPTRE_shieldTimer", 0] > 0) && (_target getVariable ["OPTRE_suit_mode","none"] == "armor")} do {
					_timer = _target getVariable "OPTRE_shieldTimer";
					_target setVariable ["OPTRE_shieldTimer", _timer - 1];
					sleep 1;
				};
				_target setVariable ["optre_beingshotat", false];
				_target setVariable ["optre_stopcharging", false];

				if (_target == player && (_target getVariable "optre_suit_energy" > 0) && _target getVariable ["OPTRE_hasHelmet",false] && _target getVariable ["OPTRE_MJOLNIR_hudInitiated", false]) then {
					call OPTRE_shieldChargeAnimation;
				};
			};
		};


		_target setVariable ["optre_beingshotat", true];
		
		_target setVariable ["optre_suit_energy", (_currentenergy - _energyloss) max 0];
		
		if (_energyloss > _currentenergy) then {
			_restDamage = (_energyloss - _currentenergy);
			[_target,_hitbodypart,_selection,_restdamage] spawn {
				[_this] call OPTRE_fnc_restDamage;
			}
		};
	};
};

//Detects hits and deducts energy according to ammo type. Also spawns sparks.
["CAManBase", "HitPart", {
    (_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo"];
	[_this, {
		(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo"];
		if (true) then {};
		
		if ((_target getVariable ["OPTRE_hasArmor",false]) && (alive _target)) then {
			[_target, _shooter, _position, _selection, _ammo] call OPTRE_hitPartCode;
		};
	}] remoteExec ["call", _target];
	
}] call CBA_fnc_addClassEventHandler;

optre_suit_fnc_suit_ready = {	

	OPTRE_threatRange = (ic51_allison_targeting_min_range * 2) min ic51_allison_targeting_max_range;
	OPTRE_MJOLNIR_shotDetectedTime = 1.6; //how long shooting units show up on radar
	OPTRE_nearUnits = [];
	OPTRE_nearUnitsRadar = [];
	OPTRE_lowLightAperture = 1;
	OPTRE_MJOLNIR_hudEventHandlerAdded = false;
	OPTRE_targetingHandlerAdded = false;
	OPTRE_showIcons = true;
	OPTRE_lowLight = false;
	OPTRE_systemMessages = [];
	OPTRE_systemMessageAllowed = false;
	OPTRE_helmetOverlayShown = false;
	//OPTRE_MJOLNIR_stopRadar = false;

	_animations = [
		"LadderCivilDownLoop",
		"LadderCivilDownOff",
		"LadderCivilOn_Bottom",
		"LadderCivilOn_Top",
		"LadderCivilStatic",
		"LadderCivilTopOff",
		"LadderCivilUpLoop",
		"LadderRifleDownLoop",
		"LadderRifleDownOff",
		"LadderRifleOn",
		"LadderRifleStatic",
		"LadderRifleTopOff",
		"LadderRifleUpLoop"
	];
	OPTRE_MJOLNIR_ladderAnimations = [];
	{OPTRE_MJOLNIR_ladderAnimations pushBack (toLower _x)} forEach _animations;

	player setVariable ["OPTRE_hasHelmet",headgear player in optre_powered_suits_helmets OR (getNumber (configFile >> 'CfgWeapons' >> (headgear player) >> 'MJOLNIR_isHelmet')) == 1];
	player setVariable ["OPTRE_hasUniform",uniform player in optre_jump_enabled_suits OR (getNumber (configFile >> 'CfgWeapons' >> (uniform player) >> 'MJOLNIR_isUndersuit')) == 1];
	player setVariable ["OPTRE_hasArmor",vest player in optre_powered_suits OR (getNumber (configFile >> 'CfgWeapons' >> (vest player) >> 'MJOLNIR_isArmor')) == 1];

	player setVariable ["optre_beingshotat", false];
	player setVariable ["optre_stopcharging", false];
	player setVariable ["OPTRE_suitActive",false];
	player setVariable ["optre_disable_suit", false];
	player setVariable ["optre_preventfalldamage",false];
	player setVariable ["OPTRE_suit_mode", "none"];
	[] spawn {call optre_suit_fnc_preventfalldamage;};
/*
	//Activate Suit action
	optre_suit_activate_action = player addAction ["<t color='#B1EE58'>Activate MJOLNIR</t>", {
		(_this select 0) params ["_target"];
		[_this] call optre_suit_fnc_suit_activation
		}, [], 6, false, true,"","(alive _originalTarget) && (player getVariable ['OPTRE_hasArmor',false]) && !(player getVariable 'OPTRE_suitActive') && (missionNamespace getVariable 'ic51_allison_show_activate')"
	];
	
	//Deactivate Suit action.
	optre_suit_deactivate_action = player addAction ["<t color='#ff0000'>Deactivate MJOLNIR</t>", {
			(_this select 0) params ["_target"];
			_target setVariable ["optre_disable_suit", true];
			playSound "Simulation_Fatal";
		}, [], 6, false, true,"","(alive _originalTarget) && (player getVariable ['OPTRE_hasArmor',false]) && (player getVariable 'OPTRE_suitActive') && !(player getVariable 'optre_disable_suit') && (missionNamespace getVariable 'ic51_allison_show_activate') && (missionNamespace getVariable 'ic51_allison_show_deactivate')"
	];

	OPTRE_activateHudAction = player addAction ["<t color='#B1EE58'>Boot VISR</t>", {
		[] spawn OPTRE_fnc_hudBootUp
	}, [], 6, false, true,"","(alive _originalTarget) && !(player getVariable ['OPTRE_MJOLNIR_hudInitiated', false]) && (player getVariable ['OPTRE_hasArmor',false]) && (player getVariable 'OPTRE_suitActive') && (player getVariable ['OPTRE_hasHelmet',false])"];
*/
	call optre_suit_fnc_updateGearVariables;
};

optre_suit_fnc_suit_activation = {	
	(_this select 0) params ["_target"];
	player setVariable ["OPTRE_suitActive",true];
	player setVariable ["optre_disable_suit", false];
	player setVariable ["optre_speed_increased", false];
	player setVariable ["optre_preventfalldamage",false];
	player setVariable ["OPTRE_MJOLNIR_HUD_ACTIVE", false];

	player setVariable ["optre_suit_energy", player getVariable ["OPTRE_shieldStrength",ic51_allison_shield_energy * (player getVariable ["OPTRE_shieldModifier",1])]];
	
	player setVariable ["OPTRE_suit_mode", "armor"];

	player addEventHandler ["FiredNear", {
		params ["_gunner", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

		if (isNil {_gunner getVariable "OPTRE_MJOLNIR_detectedShootingTimer"}) then {
			_gunner setVariable ["OPTRE_MJOLNIR_detectedShootingTimer",OPTRE_MJOLNIR_shotDetectedTime];
			[_gunner] spawn {
				params ["_gunner"];
				while {alive _gunner && _gunner getVariable "OPTRE_MJOLNIR_detectedShootingTimer" > 0} do {
				sleep 0.1;
				_gunner setVariable ["OPTRE_MJOLNIR_detectedShootingTimer", ((_gunner getVariable "OPTRE_MJOLNIR_detectedShootingTimer") - 0.2) max 0];
				};
				_gunner setVariable ["OPTRE_MJOLNIR_detectedShootingTimer",nil];
			};
		} else {
			_gunner setVariable ["OPTRE_MJOLNIR_detectedShootingTimer",OPTRE_MJOLNIR_shotDetectedTime];
		};
	}];
	
	call OPTRE_fnc_hudMjolnirInit;
	[] spawn optre_suit_fnc_armor;
	
	player enableFatigue false;
	[player] spawn optre_suit_fnc_system;
	[player] spawn OPTRE_fnc_shieldLoop;

	//call OPTRE_fnc_addHudEventhandler; //this is already being done in OPTRE_fnc_hudMjolnirInit
};

OPTRE_MJOLNIR_hudSetWeaponIcons = {
	params ["_currentWeapon","_currentThrowable"];

	//set the correct icon for the weapons
	_primaryWeapon = primaryWeapon player;
	_handgunWeapon = handgunWeapon player;
	_launcherWeapon = secondaryWeapon player;
	_primaryIcon = getText (configFile >> "CfgWeapons" >> _primaryWeapon >> "pictureMjolnirHud");
	_handgunIcon = getText (configFile >> "CfgWeapons" >> _handgunWeapon >> "pictureMjolnirHud");
	_launcherIcon = getText (configFile >> "CfgWeapons" >> _launcherWeapon >> "pictureMjolnirHud");
	_getPrimaryIcon = [_handgunIcon, "\x\ic51\addons\community_scripts\shieldsystem\textures\weaponIcons\Unknown\unknownWeapon_icon.paa"] select ((_handgunWeapon != "") && (_handgunIcon == ""));
	_getHandgunIcon = [_handgunIcon, "\x\ic51\addons\community_scripts\shieldsystem\textures\weaponIcons\Unknown\unknownWeapon_icon.paa"] select ((_handgunWeapon != "") && (_handgunIcon == ""));
	_getLauncherIcon = [_launcherIcon, "\x\ic51\addons\community_scripts\shieldsystem\textures\weaponIcons\Unknown\unknownWeapon_icon.paa"] select ((_launcherWeapon != "") && (_launcherIcon == ""));

	//please forgive me for this, I wrote it at 7am without any sleep
	if (_currentWeapon != "") then {
		switch (true) do {
			case (_currentWeapon == _primaryWeapon): {
				if (_handgunWeapon == "") then {
					(OPTRE_hudCurrentWeapon#0) ctrlSetText _getPrimaryIcon;
					(OPTRE_hudSecondaryWeapon#0) ctrlSetText _getLauncherIcon;
					(OPTRE_hudLauncher#0) ctrlSetText "";
				} else {
					if (_handgunWeapon == "") then {
						(OPTRE_hudCurrentWeapon#0) ctrlSetText _getPrimaryIcon;
						(OPTRE_hudSecondaryWeapon#0) ctrlSetText _getLauncherIcon;
						(OPTRE_hudLauncher#0) ctrlSetText "";
					} else {
						(OPTRE_hudCurrentWeapon#0) ctrlSetText _getPrimaryIcon;
						(OPTRE_hudSecondaryWeapon#0) ctrlSetText _getHandgunIcon;
						(OPTRE_hudLauncher#0) ctrlSetText _getLauncherIcon;
					};
				};
			};
			case (_currentWeapon == _handgunWeapon): {
				if (_primaryWeapon == "") then {
					(OPTRE_hudCurrentWeapon#0) ctrlSetText _getHandgunIcon;
					(OPTRE_hudSecondaryWeapon#0) ctrlSetText _getLauncherIcon;
					(OPTRE_hudLauncher#0) ctrlSetText "";
				} else {
					(OPTRE_hudCurrentWeapon#0) ctrlSetText _getHandgunIcon;
					(OPTRE_hudSecondaryWeapon#0) ctrlSetText _getPrimaryIcon;
					(OPTRE_hudLauncher#0) ctrlSetText _getLauncherIcon;
				};
			};
			case (_currentWeapon == _launcherWeapon): {
				if (_primaryWeapon == "") then {
					(OPTRE_hudCurrentWeapon#0) ctrlSetText _getLauncherIcon;
					(OPTRE_hudSecondaryWeapon#0) ctrlSetText _getHandgunIcon;
					(OPTRE_hudLauncher#0) ctrlSetText "";
				} else {
					if (_handgunWeapon == "") then {
						(OPTRE_hudCurrentWeapon#0) ctrlSetText _getLauncherIcon;
						(OPTRE_hudSecondaryWeapon#0) ctrlSetText _getPrimaryIcon;
						(OPTRE_hudLauncher#0) ctrlSetText "";
					} else {
						(OPTRE_hudCurrentWeapon#0) ctrlSetText _getLauncherIcon;
						(OPTRE_hudSecondaryWeapon#0) ctrlSetText _getHandgunIcon;
						(OPTRE_hudLauncher#0) ctrlSetText _getPrimaryIcon;
					};
				};
			};
			default {};
		};
	} else {
		if (_launcherWeapon == "") then {
			if (_primaryWeapon == "") then {
				if (_handgunWeapon == "") then {
					(OPTRE_hudCurrentWeapon#0) ctrlSetText "";
					(OPTRE_hudSecondaryWeapon#0) ctrlSetText "";
					(OPTRE_hudLauncher#0) ctrlSetText "";
				} else {
					(OPTRE_hudCurrentWeapon#0) ctrlSetText _getHandgunIcon;
					(OPTRE_hudSecondaryWeapon#0) ctrlSetText "";
					(OPTRE_hudLauncher#0) ctrlSetText "";
				};
			} else {
				if (_handgunWeapon == "") then {
					(OPTRE_hudCurrentWeapon#0) ctrlSetText _getPrimaryIcon;
					(OPTRE_hudSecondaryWeapon#0) ctrlSetText "";
					(OPTRE_hudLauncher#0) ctrlSetText "";
				} else {
					(OPTRE_hudCurrentWeapon#0) ctrlSetText _getPrimaryIcon;
					(OPTRE_hudSecondaryWeapon#0) ctrlSetText _getHandgunIcon;
					(OPTRE_hudLauncher#0) ctrlSetText "";
				};
			};
		} else {
			if (_primaryWeapon == "") then {
				if (_handgunWeapon == "") then {
					(OPTRE_hudCurrentWeapon#0) ctrlSetText _getLauncherIcon;
					(OPTRE_hudSecondaryWeapon#0) ctrlSetText "";
					(OPTRE_hudLauncher#0) ctrlSetText "";
				} else {
					(OPTRE_hudCurrentWeapon#0) ctrlSetText _getHandgunIcon;
					(OPTRE_hudSecondaryWeapon#0) ctrlSetText _getLauncherIcon;
					(OPTRE_hudLauncher#0) ctrlSetText "";
				};
			} else {
				if (_handgunWeapon == "") then {
					(OPTRE_hudCurrentWeapon#0) ctrlSetText _getPrimaryIcon;
					(OPTRE_hudSecondaryWeapon#0) ctrlSetText _getLauncherIcon;
					(OPTRE_hudLauncher#0) ctrlSetText "";
				} else {
					(OPTRE_hudCurrentWeapon#0) ctrlSetText _getPrimaryIcon;
					(OPTRE_hudSecondaryWeapon#0) ctrlSetText _getHandgunIcon;
					(OPTRE_hudLauncher#0) ctrlSetText _getLauncherIcon;
				};
			};
		};
	};

    OPTRE_MJOLNIR_currentWeapon = _currentWeapon;

	//set correct icon for the grenade
	_getGrenadeIcon = "";
	if (count _currentThrowable == 0) then {
		OPTRE_MJOLNIR_currentThrowable = "NOWEAPON";
		_getGrenadeIcon = "\x\ic51\addons\community_scripts\shieldsystem\textures\weaponIcons\Unknown\unknownGrenade_icon.paa";
	} else {
		OPTRE_MJOLNIR_currentThrowable = (_currentThrowable select 0);
		_grenadeIcon = getText (configFile >> "CfgMagazines" >> (_currentThrowable select 0) >> "pictureMjolnirHud");
		_getGrenadeIcon = [_grenadeIcon, "\x\ic51\addons\community_scripts\shieldsystem\textures\weaponIcons\Unknown\unknownGrenade_icon.paa"] select (_grenadeIcon == "");
	};
	(OPTRE_hudGrenade#0) ctrlSetText _getGrenadeIcon;
};

//Initiates the script on player units and loops a check for wether the scripts are running on the given player unit
if (hasInterface) then {
	[] spawn {
		[] call {
			waitUntil {
				sleep 1;
				(!(isNull player) && (time > 0))
			};
			call optre_suit_fnc_suit_ready;
			while {true} do {
				sleep 5;
				if (isNil {player getVariable 'OPTRE_suitActive'}) then {
					call optre_suit_fnc_suit_ready;
					optre_eventHandlerSuit_Killed = player addEventHandler ["Killed", {
						player removeAction optre_suit_activate_action;
						player removeAction optre_suit_deactivate_action;
					}];
					optre_eventHandlerSuit_Respawn = player addEventHandler ["Respawn", {
						[] spawn {
							[] call {
								sleep 2;
								call optre_suit_fnc_suit_ready;
							};
						};
					}];
				};
			};
		};
	};
};

//Apply scripts to all AI present on mission start
if (isServer OR !hasInterface) then {
	{
		[_x] spawn {
			[_this] call {
				sleep 1;
				(_this select 0) params ["_unit"];
				_unit setVariable ["OPTRE_hasUniform",uniform _unit in optre_jump_enabled_suits OR (getNumber (configFile >> 'CfgWeapons' >> (uniform _unit) >> 'MJOLNIR_isUndersuit')) == 1];
				_unit setVariable ["OPTRE_hasArmor",vest _unit in optre_powered_suits OR (getNumber (configFile >> 'CfgWeapons' >> (vest _unit) >> 'MJOLNIR_isArmor')) == 1];
				if (!(isPlayer _unit) && _unit getVariable ["OPTRE_hasArmor",false] && alive _unit && missionNamespace getVariable "ic51_allison_activate_ai" && local _unit) then {
					[_unit] call optre_suit_fnc_system_AI;
				};
			};
		};
	} forEach allUnits;
};

optre_eventHandlerSuit_Killed = player addEventHandler ["Killed", {
	player removeAction optre_suit_activate_action;
	player removeAction optre_suit_deactivate_action;
}];

optre_suit_fnc_updateGearVariables = {
	player setVariable ["OPTRE_hasHelmet",headgear player in optre_powered_suits_helmets OR (getNumber (configFile >> 'CfgWeapons' >> (headgear player) >> 'MJOLNIR_isHelmet')) == 1];
	player setVariable ["OPTRE_hasUniform",uniform player in optre_jump_enabled_suits OR (getNumber (configFile >> 'CfgWeapons' >> (uniform player) >> 'MJOLNIR_isUndersuit')) == 1];
	player setVariable ["OPTRE_hasArmor",vest player in optre_powered_suits OR (getNumber (configFile >> 'CfgWeapons' >> (vest player) >> 'MJOLNIR_isArmor')) == 1];
	OPTRE_firstPersonCheck = ((cameraView == "INTERNAL") OR (cameraView == "GUNNER"));

	if (player getVariable ["OPTRE_hasArmor",false]) then {
		[player] call OPTRE_fnc_setShieldValues;
		if (player getVariable ["OPTRE_hasHelmet",false]) then {
			_outline = getText (configFile >> 'CfgWeapons' >> (headgear player) >> 'MJOLNIR_helmetOutline');
			_overlay = getText (configFile >> 'CfgWeapons' >> (headgear player) >> 'MJOLNIR_helmetOverlay');
			
			OPTRE_MJOLNIR_hudHelmetOutline = ["\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_hudHelmetOutline.paa", _outline] select (_outline != "");
			OPTRE_MJOLNIR_hudOverlay = ["\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_hudBackground.paa", _overlay] select (_overlay != "");
			
			if (player getVariable ["OPTRE_suitActive",false]) then {
				(OPTRE_hudHelmetOutline#0) ctrlSetText OPTRE_MJOLNIR_hudHelmetOutline;
				(OPTRE_hudHelmetOutline#0) ctrlCommit 0;

				(OPTRE_hudOverlay#0) ctrlSetText OPTRE_MJOLNIR_hudOverlay;
				(OPTRE_hudOverlay#0) ctrlCommit 0;
				_currentWeapon = currentWeapon player;
				_currentThrowable = currentThrowable player;
				[_currentWeapon,_currentThrowable] call OPTRE_MJOLNIR_hudSetWeaponIcons;
			};
		};
	};
	if (player getVariable ["OPTRE_hasArmor",false] && !(player getVariable 'OPTRE_suitActive') && missionNamespace getVariable "ic51_allison_start_on_init") then {
		call optre_suit_fnc_suit_activation;
	};
};

player addEventHandler ["Respawn", {
	[] spawn {
		waitUntil {
			sleep 1;
			(!(isNull player) && (time > 0))
		};
		call optre_suit_fnc_suit_ready;
	};
}];

player addEventHandler ["Take", {
	call optre_suit_fnc_updateGearVariables;
}];

player addEventHandler ["Put", {
	call optre_suit_fnc_updateGearVariables;
}];

player addEventHandler ["InventoryOpened", {
	call optre_suit_fnc_updateGearVariables;
}];

player addEventHandler ["InventoryClosed", {
	call optre_suit_fnc_updateGearVariables;
}];

["ace_arsenal_displayClosed",{
	call optre_suit_fnc_updateGearVariables;
}] call CBA_fnc_addEventHandler;

[missionNamespace, "arsenalClosed", {
	call optre_suit_fnc_updateGearVariables;
}] call BIS_fnc_addScriptedEventHandler;

//Reapply scripts on TeamSwitch, untested in multiplayer
if (isServer && teamSwitchEnabled) then {
	addMissionEventHandler ["TeamSwitch", {
		
		_unit = (_this select 0);
		_unitNew = (_this select 1);
		_unit removeAction optre_suit_activate_action;
		_unit removeAction optre_suit_deactivate_action;

		(_this select 0) setVariable ["optre_disable_suit", true];
		(_this select 1) setVariable ["optre_disable_suit", true];

		//Applies AI scripts on previously controlled unit
		[_unit] spawn {
			[_this] call {
				(_this select 0) params ["_unit"];
				if (!(isPlayer _unit) && (vest _unit in optre_powered_suits) && alive _unit && missionNamespace getVariable "ic51_allison_activate_ai" && local _unit) then {
					[_unit] call optre_suit_fnc_system_AI;
				};
			};
		};

		//Reapplies Activate Suit action to newly controlled unit.
		optre_suit_activate_action = _unitNew addAction ["Activate Suit", {
			(_this select 0) params ["_target"];
			if (missionNamespace getVariable "ic51_allison_hud_active_intro") then {
					call optre_suit_fnc_hud_start;
				};
				[_this] call optre_suit_fnc_suit_activation
			}, [], 6, false, true,"","(alive _originalTarget) && (player getVariable ['OPTRE_hasArmor',false]) && !(player getVariable 'OPTRE_suitActive') && (missionNamespace getVariable 'ic51_allison_show_activate')"
		];
		optre_suit_deactivate_action = player addAction ["Deactivate Suit", {
			(_this select 0) params ["_target"];
			_target setVariable ["optre_disable_suit", true];
			playSound "Simulation_Fatal";
		}, [], 6, false, true,"","(alive _originalTarget) && (player getVariable ['OPTRE_hasArmor',false]) && (player getVariable 'OPTRE_suitActive') && !(player getVariable 'optre_disable_suit') && (missionNamespace getVariable 'ic51_allison_show_activate') && (missionNamespace getVariable 'ic51_allison_show_deactivate')"
		];
	}];
};
