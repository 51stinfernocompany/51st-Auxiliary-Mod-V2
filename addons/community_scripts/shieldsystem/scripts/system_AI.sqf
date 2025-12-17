//if (isClass(configFile >> "CfgPatches" >> "OPTRE_Suit_Scripts_DEV")) exitWith {};
optre_suit_fnc_system_AI =
{	
	sleep 1;
	(_this select 0) params ["_unit"];
	//[format ['loop called for %1', _unit]] remoteexec ['systemchat'];
	_unit setVariable ["OPTRE_hasUniform",uniform _unit in optre_jump_enabled_suits OR (getNumber (configFile >> 'CfgWeapons' >> (uniform _unit) >> 'MJOLNIR_isUndersuit')) == 1];
	_unit setVariable ["OPTRE_hasArmor",vest _unit in optre_powered_suits OR (getNumber (configFile >> 'CfgWeapons' >> (vest _unit) >> 'MJOLNIR_isArmor')) == 1];
	_unit getVariable ["OPTRE_hasUniform",false];
	_unit getVariable ["OPTRE_hasArmor",false];
	_unit setVariable ["optre_beingshotat", false];
	_unit setVariable ["optre_stopcharging", false];
	_unit setVariable ["OPTRE_suitActive",true];
	_unit setVariable ["optre_disable_suit", false];
	_unit setVariable ["optre_preventfalldamage",false];	
	_unit setVariable ["OPTRE_suit_mode", "armor"];
	_unit setVariable ["optre_suit_armor_lock_on", false];

	[_unit] call OPTRE_fnc_setShieldValues;

	_sleepTime = _unit getVariable ["OPTRE_shieldChargeDelay",0.1];
	_unitShieldStrength = _unit getVariable ["OPTRE_shieldStrength",ic51_allison_shield_energy_AI * (_unit getVariable ["OPTRE_shieldModifier",1])];
	_unit setVariable ["optre_suit_energy", _unitShieldStrength];
	_unit allowDamage false;
	
	while {alive _unit && (_unit getVariable ["OPTRE_hasArmor",false]) && missionNamespace getVariable "ic51_allison_activate_ai" && local _unit && !(_unit getVariable "optre_disable_suit")} do {
		if ((_unit getVariable ["OPTRE_hasArmor",false]) && (_unit getVariable "OPTRE_suitActive")) then {
			
			_currentenergy = _unit getVariable "optre_suit_energy";
			if ((((_unit getVariable "optre_suit_energy" == 0) or (_unit getVariable "optre_suit_energy" < 0) ) && (_unit getVariable ["OPTRE_hasArmor",false]))) then {
				
				_unit setVariable ["optre_suit_energy", 0];
				_currentenergy = _unit getVariable "optre_suit_energy";
				_unit setVariable ["OPTRE_suit_mode","none"];
				_unit allowDamage true;
				
				[_unit, {
					params ["_unit"];
					if (missionNamespace getVariable "ic51_allison_enable_sparks_shield") then {

						_light = "#lightpoint" createVehicleLocal (_unit modelToWorldVisual (_unit selectionPosition "spine3"));
						_light attachTo [_unit, [0, 0, 0], "Spine3"];
						_light setLightIntensity 150;
						_light setLightAmbient [0.0, 0.0, 0.0];
						_light setLightColor [0.4,0.6,1];
						_light setLightAttenuation [0, 0, 0, 0, 20, 20];

						private _depletedsparks = "#particlesource" createVehicleLocal getPos _unit;  

						_depletedsparks attachTo [_unit, [0, 0, 0], "Spine3"];
						_depletedsparks setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
						_depletedsparks setParticleParams [
			
							["\A3\data_f\blesk1",
							1, 
							0, 
							1], 
							"", 
							"SpaceObject", 
							1, 
							0.2, 
							[0, 0, 0], 
							[0, 0, 0], 
							0, 
							10,
							7.9, 
							0.005, 
							[0.01, 0.01, 0.01], 
							[[0.01, 0.01, 0.01, 1], 
							[0.9, 0.8, 0.1, 1], 
							[0.5, 0.5, 0.5, 0]], 
							[0.08], 
							1, 
							0, 
							"", 
							"", 
							_depletedsparks
							];
						_depletedsparks setDropInterval 0.1;
						sleep 4;
					
						_depletedsparks setDropInterval 0.2;
						sleep 4;
						deleteVehicle _light;
						deleteVehicle _depletedsparks;
					};
				}] remoteExec ["spawn"];
				sleep 4;

				sleep 4;

				waitUntil {lifeState _unit != "INCAPACITATED"};

				_unit setVariable ["optre_suit_energy", _currentenergy + 1];
				_unit setVariable ["optre_beingshotat", false];
				_unit setVariable ["OPTRE_suit_mode","armor"];	
				_unit allowDamage false;
			};
			
			if (((_unit getVariable "optre_suit_energy" < _unitShieldStrength) ) && (_unit getVariable "optre_suit_energy" > 0) && (_unit getVariable ["OPTRE_hasArmor",false]) && !(_unit getVariable "optre_stopcharging")) then {
				_unit setVariable ["optre_suit_energy", _currentenergy + (_unit getVariable ["OPTRE_shieldChargeValue",ic51_allison_shield_regen_AI])];				
			};
			
		};
		sleep _sleepTime;
	};	
	_unit setVariable ["OPTRE_suitActive",false];
	_unit setVariable ["OPTRE_suit_mode", "none"];
	_unit setVariable ["optre_disable_suit",false];
	_unit setVariable ["optre_suit_energy", 0];
	_unit allowDamage true;
	//[format ['loop stopped for %1', _unit]] remoteexec ['systemchat'];
	
};
