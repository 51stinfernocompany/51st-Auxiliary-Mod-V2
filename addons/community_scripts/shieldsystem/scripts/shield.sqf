//if (isClass(configFile >> "CfgPatches" >> "OPTRE_Suit_Scripts_DEV")) exitWith {};
OPTRE_fnc_shieldLoop = {
	_unit = _this select 0;
	private _sleepTime = _unit getVariable ["OPTRE_shieldChargeDelay",ic51_allison_shield_delay];
	//if (OPTRE_HUD_ONLY) exitWith {};

	while {alive _unit && _unit getVariable ["OPTRE_suitActive",false]} do  {

		while {alive _unit && _unit getVariable ["OPTRE_suitActive",false]} do {

			_currentEnergy = _unit getVariable ["optre_suit_energy",0];
			_playerShieldStrength = player getVariable ["OPTRE_shieldStrength",ic51_allison_shield_energy * (player getVariable ["OPTRE_shieldModifier",1])];
			_energyPercent = _currentenergy/_playerShieldStrength;

			if (((_unit getVariable "optre_suit_energy" < _playerShieldStrength ) && (_unit getVariable "optre_suit_energy" != 0) && (_unit getVariable "optre_suit_energy" >= 0)) && (_unit getVariable ["OPTRE_hasArmor",false]) && !(_unit getVariable "optre_stopcharging")) then {
				_unit setVariable ["optre_suit_energy", (_currentenergy + (_unit getVariable ["OPTRE_shieldChargeValue",ic51_allison_shield_regen])) min (_playerShieldStrength)];				
			};
			

			if ((((_unit getVariable "optre_suit_energy" == 0) or (_unit getVariable "optre_suit_energy" < 0) ) && (_unit getVariable ["OPTRE_hasArmor",false]))) then {
				
				_unit setVariable ["optre_suit_energy", 0];
				_unit setVariable ["OPTRE_suit_mode","none"];
				_unit allowDamage true;
				_unit setVariable ["optre_beingshotat", false];
				_unit setVariable ["optre_stopcharging", true];
				playSound "OPTRE_MjolnirShieldBroken";
				//hint 'Energy depleted';
				if (player getVariable ["OPTRE_MJOLNIR_hudInitiated", false] && player getVariable ["OPTRE_hasHelmet",false]) then {
					[] spawn {
						[] spawn {
							for "_i" from 1 to 16 do {
								(OPTRE_hudShieldDownAlert#0) ctrlSetFade 0;
								(OPTRE_hudShieldDownAlert#0) ctrlCommit 0.25;
								sleep 0.25;
								(OPTRE_hudShieldDownAlert#0) ctrlSetFade 1;
								(OPTRE_hudShieldDownAlert#0) ctrlCommit 0.25;
								sleep 0.25;
							};
						};

						(OPTRE_mjolnirHud_energyText#0) ctrlSetTextColor [ic51_allison_depleted_alert_color select 0,ic51_allison_depleted_alert_color select 1,ic51_allison_depleted_alert_color select 2,ic51_allison_energy_bar_text_color select 3];
						(OPTRE_mjolnirHud_energyText#0) ctrlCommit 0;

						(OPTRE_hudShieldDownEffect#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_shieldDownEffect.paa";
						(OPTRE_hudShieldDownEffect#0) ctrlSetFade 0;
						(OPTRE_hudShieldDownEffect#0) ctrlCommit 0;
						(OPTRE_hudShieldDownEffect#0) ctrlSetPosition [0.190625 * safeZoneW + safeZoneX,0.423 * safeZoneH + safeZoneY,0.61875 * safeZoneW,0.264 * safeZoneH]; 
						(OPTRE_hudShieldDownEffect#0) ctrlCommit 1;
						sleep 0.5;

						(OPTRE_hudShieldDownEffect#0) ctrlSetFade 1;
						(OPTRE_hudShieldDownEffect#0) ctrlCommit 0.5;
						sleep 0.5;

						(OPTRE_hudShieldDownEffect#0) ctrlSetPosition [0.422657 * safeZoneW + safeZoneX,0.115 * safeZoneH + safeZoneY,0.154687 * safeZoneW,0.088 * safeZoneH]; 
						(OPTRE_hudShieldDownEffect#0) ctrlCommit 0;
					};
				};
				[_unit, {
					params ["_unit"];
					if (missionNamespace getVariable "ic51_allison_enable_sparks_shield") then {

						_light = "#lightpoint" createVehicleLocal (_unit modelToWorldVisual (_unit selectionPosition "spine3"));
						_light setLightIntensity 150;
						_light setLightAmbient [0.0, 0.0, 0.0];
						_light setLightColor [0.6,0.8,1];
						_light setLightAttenuation [0, 0, 0, 0, 20, 20];

						private _depletedsparks = "#particlesource" createVehicleLocal getPos _unit;  

						_depletedsparks attachTo [_unit, [0, 0, 0], "Spine3"];
						_depletedsparks setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
						_depletedsparks setParticleParams [["\A3\data_f\blesk1",1, 0, 1], "", "SpaceObject", 1, 0.2, [0, 0, 0], [0, 0, 0], 0, 10,7.9, 0.005, [0.01, 0.01, 0.01], [[0.01, 0.01, 0.01, 1], [0.9, 0.8, 0.1, 1], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _depletedsparks];
						_depletedsparks setDropInterval 0.1;
						sleep 4;
					
						_depletedsparks setDropInterval 0.2;
						sleep 4;
						deleteVehicle _light;
						deleteVehicle _depletedsparks;
					};
				}] remoteExec ["spawn"];
				sleep 8;

				waitUntil {lifeState _unit != "INCAPACITATED"};
				if (_unit getVariable ["OPTRE_hasHelmet",false] && _unit getVariable ["OPTRE_MJOLNIR_hudInitiated", false]) then {
					call OPTRE_shieldChargeAnimation;
				};
				_unit setVariable ["optre_suit_energy", _currentenergy + 1];
				_unit setVariable ["optre_stopcharging", false];
				_unit setVariable ["OPTRE_suit_mode","armor"];
				[] spawn optre_suit_fnc_armor;
				if (!(missionNamespace getVariable "ace_advanced_fatigue_enabled")) then {
					_unit enableFatigue false;
				};
			};
			sleep _sleepTime;
		};
		_unit setVariable ["OPTRE_shieldActive",false];
		sleep 5;
	};
};
