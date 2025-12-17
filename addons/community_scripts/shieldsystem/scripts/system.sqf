//if (isClass(configFile >> "CfgPatches" >> "OPTRE_Suit_Scripts_DEV")) exitWith {};
optre_suit_fnc_system =
{	
	(_this select 0) params ["_target"];
	_HelmetVisionModeChanged = false;
	_lastvisionmode = currentVisionMode player;
	_visionmodechanged = false;
	if (missionNamespace getVariable "ace_advanced_fatigue_enabled") then {
		oldPerformanceFactor = ace_advanced_fatigue_performanceFactor;
		oldRecoveryFactor = ace_advanced_fatigue_recoveryFactor;
	};
	
	_compatibleMagazines = currentWeapon (vehicle player) call CBA_fnc_compatibleMagazines;
	_availableMagCount = {_x in _compatibleMagazines} count magazines (vehicle player);
	_currentAmmo = (vehicle player) ammo currentWeapon (vehicle player);
	_magazineCapacity = getNumber(configFile >> "CfgMagazines" >> ((weaponState (vehicle player)) select 3) >> "count");
	_currentZeroing = currentZeroing player;
	_currentWeaponMode = currentWeaponMode player;
	_currentThrowable = [];
	_currentThrowableName = "";
	_currentThrowableAmount = 0;
	_currentThrowableIcon = "";

	while {alive player && (player getVariable ["OPTRE_hasArmor",false]) && !(player getVariable "optre_disable_suit")} do {
		player setVariable ["OPTRE_hasHelmet",headgear player in optre_powered_suits_helmets OR (getNumber (configFile >> 'CfgWeapons' >> (headgear player) >> 'MJOLNIR_isHelmet')) == 1];
		player setVariable ["OPTRE_hasUniform",uniform player in optre_jump_enabled_suits OR (getNumber (configFile >> 'CfgWeapons' >> (uniform player) >> 'MJOLNIR_isUndersuit')) == 1];
		player setVariable ["OPTRE_hasArmor",vest player in optre_powered_suits OR (getNumber (configFile >> 'CfgWeapons' >> (vest player) >> 'MJOLNIR_isArmor')) == 1];
		OPTRE_firstPersonCheck = ((cameraView == "INTERNAL") OR (cameraView == "GUNNER"));
		_playerShieldStrength = player getVariable ["OPTRE_shieldStrength",ic51_allison_shield_energy * (player getVariable ["OPTRE_shieldModifier",1])];
		_currentenergy = player getVariable "optre_suit_energy";
		_energyPercent = _currentenergy/_playerShieldStrength;
		private _hudActive = player getVariable ["OPTRE_MJOLNIR_HUD_ACTIVE",false];
		private _hudCheck = OPTRE_helmetOverlayShown;
		private _hasHelmet = player getVariable ["OPTRE_hasHelmet",false];

		if (_hasHelmet) then {
			if ((player getVariable ["OPTRE_hasArmor",false]) && (player getVariable "OPTRE_suitActive")) then {
				
				if (_hasHelmet && missionNamespace getVariable "ic51_allison_energy_bar_active" && !(isNil "OPTRE_PM_shieldBar")) then {				
					if (player getVariable ["OPTRE_MJOLNIR_HUD_ALLOWED",false]) then {
						(OPTRE_PM_shieldBar#0) progressSetPosition (_currentenergy/(_playerShieldStrength));
					};
					
					_playerVehicle = vehicle player;
					_currentWeapon = currentWeapon player;
					_weaponState = if (_playerVehicle == player) then {weaponState _playerVehicle} else {weaponState [_playerVehicle,((assignedVehicleRole player) select 1)]};
					

					if (_playerVehicle != player) then {
						if ((_weaponState select 0) != "") then {
							_compatibleMagazines = (_weaponState select 3);
							if ((assignedVehicleRole player) select 0 == "Cargo") then {
								_availableMagCount = {_x in _compatibleMagazines} count (magazines player);
								_currentWeaponMode = currentWeaponMode player;
							} else {
								_availableMagCount = {_x in _compatibleMagazines} count (_playerVehicle magazinesTurret [((assignedVehicleRole player) select 1),false]);
								if (_availableMagCount > 0) then {
									_availableMagCount = _availableMagCount - 1;
								};
								_currentWeaponMode = "---";
							};
							_currentAmmo = (_weaponState select 4);
							_magazineCapacity = getNumber(configFile >> "CfgMagazines" >> ((_weaponState select 3)) >> "count");
						} else {
							_availableMagCount = "--";
							_currentAmmo = "---";
							_currentWeaponMode = "---";
						};
						_currentZeroing = "---";
					} else {
						if (((_weaponState) select 0) == ((_weaponState) select 1)) then {
							_compatibleMagazines = currentWeapon _playerVehicle call CBA_fnc_compatibleMagazines;
						} else {
							_compatibleMagazines = [configFile >> "CfgWeapons" >> ((_weaponState) select 0) >> ((_weaponState) select 1)] call CBA_fnc_compatibleMagazines;
						};
						
						_currentZeroing = currentZeroing player;
						_currentWeaponMode = currentWeaponMode player;

						_availableMagCount = {_x in _compatibleMagazines} count magazines _playerVehicle;
						_currentAmmo = (_weaponState) select 4;
						_magazineCapacity = getNumber(configFile >> "CfgMagazines" >> ((_weaponState) select 3) >> "count");
					};

					_ins = lineIntersectsSurfaces [AGLToASL positionCameraToWorld [0,0,0],AGLToASL positionCameraToWorld [0,0,5000],vehicle player,objNull,true,1,"FIRE","NONE"];
					_cursor_distance = if (count _ins > 0) then [{(_ins select 0 select 0) vectorDistance (eyePos player)},{5000}];
					_aim_dist_txt = if (count _ins > 0) then [{str(round _cursor_distance)},{"---"}];
					_aim_pos = (_ins select 0) select 0;
					_mapGrid = if (count _ins > 0) then [{mapGridPosition _aim_pos},{"---"}];

					_cameraview = getCameraViewDirection player;
					_azimuth = (_cameraview select 0) atan2 (_cameraview select 1);
					_azimuth = round((_azimuth + 360) % 360);
					if (_azimuth == 360) then {_azimuth = 0};

					(OPTRE_mjolnirHud_energyText#0) ctrlSetText format["%1%2 - (%3 / %4)",_energyPercent * 100,"%" ,_currentenergy,_playerShieldStrength];
					(OPTRE_mjolnirHud_gridText#0) ctrlSetText format["%1", _mapGrid];
					(OPTRE_mjolnirHud_dirText#0) ctrlSetText format["%1°", _azimuth];
					(OPTRE_mjolnirHud_rangeText#0) ctrlSetText format["%1m", _aim_dist_txt];
					(OPTRE_mjolnirHud_ammoText#0) ctrlSetText format["%1", _currentAmmo];
					(OPTRE_mjolnirHud_magazinesText#0) ctrlSetText format["%1", _availableMagCount];
					if (typeName _currentAmmo isEqualTo "SCALAR" && typeName _magazineCapacity isEqualTo "SCALAR" && _currentWeapon != "") then {
						if (_currentAmmo < (_magazineCapacity/5)) then {
							(OPTRE_mjolnirHud_ammoText#0) ctrlSetTextColor [1,0.2,0.2,0.8];
						} else {
							(OPTRE_mjolnirHud_ammoText#0) ctrlSetTextColor ic51_allison_infotext_color;
						};
						if (_availableMagCount == 0) then {
							(OPTRE_mjolnirHud_magazinesText#0) ctrlSetTextColor [1,0.2,0.2,0.8];
						} else {
							(OPTRE_mjolnirHud_magazinesText#0) ctrlSetTextColor ic51_allison_infotext_color;
						};
					} else {
						(OPTRE_mjolnirHud_ammoText#0) ctrlSetTextColor ic51_allison_infotext_color;
						(OPTRE_mjolnirHud_magazinesText#0) ctrlSetTextColor ic51_allison_infotext_color;
					};
					
					_currentThrowable = currentThrowable player;
					if (count currentThrowable player != 0) then {
						_currentThrowableName = getText (configFile >> "CfgMagazines" >> (_currentThrowable select 0) >> "displayName");
						_currentThrowableAmount = {_x == (_currentThrowable select 0)} count magazines player;
					} else {
						_currentThrowableName = "None";
						_currentThrowableAmount = 0;
					};

					(OPTRE_mjolnirHud_fireModText#0) ctrlSetText _currentWeaponMode;
					(OPTRE_mjolnirHud_grenadeNameText#0) ctrlSetText _currentThrowableName;
					(OPTRE_mjolnirHud_grenadeAmountText#0) ctrlSetText format ["%1", _currentThrowableAmount];
					(OPTRE_mjolnirHud_rangedToText#0) ctrlSetText format ["%1m", _currentZeroing];


					
					if (count _currentThrowable == 0) then {_currentThrowable = ["NOWEAPON"]};
					if (OPTRE_MJOLNIR_currentWeapon != _currentWeapon OR OPTRE_MJOLNIR_currentThrowable != (_currentThrowable select 0)) then {
						[_currentWeapon,_currentThrowable] call OPTRE_MJOLNIR_hudSetWeaponIcons;
					};
				};
			};

			if (missionNamespace getVariable "ic51_allison_suppress_recoil") then {
				player setUnitRecoilCoefficient  ic51_allison_recoil_modifier;
				player setCustomAimCoef ic51_allison_recoil_modifier;
			};
			
			if (missionNamespace getVariable "ic51_allison_increased_speed") then {
				if (missionNamespace getVariable "ace_advanced_fatigue_enabled") then {
					ace_advanced_fatigue_performanceFactor = 500;
					ace_advanced_fatigue_recoveryFactor = 500;
				};
				if ((player getVariable ["OPTRE_hasArmor",false]) && (speed player > 11)) then {
					[_target, {
						params ["_target","_speed"];
						_target setAnimSpeedCoef ic51_allison_speed_modifier;
					}] remoteExec ["call"];
					player setVariable ["optre_speed_increased", true];
				};
			};
			
			if (player getVariable "optre_speed_increased" && (speed player < 11)) then {
				[_target, {
					params ["_target","_speed"];
					_target setAnimSpeedCoef 1;
				}] remoteExec ["call"];
				player setVariable ["optre_speed_increased", false];
			};
		};

		if (_hasHelmet && _hudActive) then {
			if (_HelmetVisionModeChanged) then {
				_HelmetVisionModeChanged = false;
			};

			_visionmodechanged = ((currentVisionMode player) isEqualTo _lastvisionmode);
			_HelmetVisionModeChanged = _visionModeChanged && (isNull objectParent player);
				
			if (_HelmetVisionModeChanged) then {
				/*
				if (_lastvisionmode != 2) then {
					playSound "RscDisplayCurator_visionMode";
				};
				*/
				_lastvisionmode = (currentVisionMode player);
			};
		};

		if (_hasHelmet && !(_hudCheck) && OPTRE_firstPersonCheck) then {
			OPTRE_helmetOverlayShown = true;
			if (!(player getVariable ["OPTRE_MJOLNIR_outlineHidden",false])) then {
				(OPTRE_hudHelmetOutline#0) ctrlSetFade 0;
				(OPTRE_hudHelmetOutline#0) ctrlCommit 0;
				(OPTRE_hudOverlay#0) ctrlSetFade 1;
				(OPTRE_hudOverlay#0) ctrlCommit 0;
			} else {
				(OPTRE_hudHelmetOutline#0) ctrlSetFade 1;
				(OPTRE_hudHelmetOutline#0) ctrlCommit 0;
				(OPTRE_hudOverlay#0) ctrlSetFade 0;
				(OPTRE_hudOverlay#0) ctrlCommit 0;
			};
			
		};
		if ((_hasHelmet && _hudCheck && !OPTRE_firstPersonCheck)) then {
			OPTRE_helmetOverlayShown = false;
			(OPTRE_hudHelmetOutline#0) ctrlSetFade 1;
			(OPTRE_hudOverlay#0) ctrlSetFade 1;
			(OPTRE_hudHelmetOutline#0) ctrlCommit 0;
			(OPTRE_hudOverlay#0) ctrlCommit 0;
		};
		
		if (!(_hasHelmet)) then {
			OPTRE_helmetOverlayShown = false;
			call OPTRE_fnc_clearHud;
			player setVariable ["OPTRE_MJOLNIR_HUD_ACTIVE", false];
		};

		sleep 0.1;
	};

	call OPTRE_fnc_clearHud;

	player setVariable ["OPTRE_suitActive",false];
	player setVariable ["OPTRE_suit_mode", "none"];
	//player setVariable ["optre_disable_suit",false];
	player setVariable ["optre_suit_energy", 0];
	player setUnitRecoilCoefficient  1;
	player setCustomAimCoef 1;

	player setVariable ["OPTRE_MJOLNIR_HUD_ACTIVE", false];
	"OPTRE_MJOLNIR_OVERLAY_BASE" cutText ["","PLAIN",-1,false];
	"OPTRE_MJOLNIR_RADAR" cutText ["", "PLAIN", -1, false];
	"OPTRE_HUD_INFO" cutText ["", "PLAIN", -1, false];
	"OPTRE_HUD_BOOTUP" cutText ["", "PLAIN", -1, false];
	"OPTRE_HUD_SYSTEMMESSAGES" cutText ["", "PLAIN", -1, false];
	"OPTRE_PM_SHIELD_BAR" cutText ["", "PLAIN", -1, false];
	if (missionNamespace getVariable "ace_advanced_fatigue_enabled") then {
		ace_advanced_fatigue_performanceFactor = oldPerformanceFactor;
		ace_advanced_fatigue_recoveryFactor = oldRecoveryFactor;
	};
	if (!(missionNamespace getVariable "ace_advanced_fatigue_enabled")) then {
		player enableFatigue true;
	};
	if (player getVariable "optre_speed_increased") then {
		[_target, {
			params ["_target","_speed"];
			_target setAnimSpeedCoef 1;
		}] remoteExec ["call"];
		player setVariable ["optre_speed_increased", false];
	};
};
