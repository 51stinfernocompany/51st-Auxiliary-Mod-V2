//if (isClass(configFile >> "CfgPatches" >> "OPTRE_Suit_Scripts_DEV")) exitWith {};

OPTRE_fnc_addHudEventhandler = {
  disableSerialization;
  if (OPTRE_MJOLNIR_hudEventHandlerAdded) exitWith {};

  OPTRE_nearUnitsRadarHandle = [] spawn {
    while {OPTRE_MJOLNIR_hudEventHandlerAdded} do {
      OPTRE_nearUnitsHandlerRadar call OPTRE_nearUnitsHandlerRadar;
      sleep ((OPTRE_throttleTime) + 1);
    };
  };

  /*
  ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////
  ///////                                                                                                                                                                                          ///////
  ////////    Yes, I know this is a dumb way to move all the hud elements, I didnt know how to utilize control groups properly at the time. Might redo this properly at some point. - Akaviri     ////////
  ///////                                                                                                                                                                                          ///////
  ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////    ////////
  */

  OPTRE_MJOLNIR_hudEventHandlerAdded = true;
  OPTRE_notMovingTimer = 0;
  hudAngleX = 0;
  hudAngleY = 0;
  oldViewAngleX = 0;
  oldViewAngleY = 0;
  ["OPTRE_MOVING_HUD", "onEachFrame",{

    private _cameraview = getCameraViewDirection player;
    private _overlayHelmet = (OPTRE_hudHelmetOutline#0); 
    private _overlayTexture = (OPTRE_hudOverlay#0); 
    private _overlayShield = (OPTRE_PM_shieldBar#0);
    private _overlayShieldAlert = (OPTRE_hudShieldDownAlert#0);
    private _overlayRadar = (OPTRE_mjolnirRadar#0);
    private _overlayRadarTexture = (OPTRE_mjolnirRadarTexture#0);
    private _overlayRadarTextureView = (OPTRE_mjolnirRadarTextureView#0);
    private _overlayRadarText = (OPTRE_mjolnirRadarText#0);

    private _overlayInfoTexture = (OPTRE_hudInfoDisplayTexture#0);
    private _overlayCurrentWeapon = (OPTRE_hudCurrentWeapon#0);
    private _overlaySecondaryWeapon = (OPTRE_hudSecondaryWeapon#0);
    private _overlayLauncher = (OPTRE_hudLauncher#0);
    private _overlayGrenade = (OPTRE_hudGrenade#0);
    
    private _overlayEnergyText = (OPTRE_mjolnirHud_energyText#0);
    private _overlayGridText = (OPTRE_mjolnirHud_gridText#0);
    private _overlayDirText = (OPTRE_mjolnirHud_dirText#0);
    private _overlayRangeText = (OPTRE_mjolnirHud_rangeText#0);
    private _overlayAmmoText = (OPTRE_mjolnirHud_ammoText#0);
    private _overlayMagazineText = (OPTRE_mjolnirHud_magazinesText#0);

    private _overlayfireModeText = (OPTRE_mjolnirHud_fireModText#0);
    private _overlayGrenadeNameText = (OPTRE_mjolnirHud_grenadeNameText#0);
    private _overlayGrenadeAmountText = (OPTRE_mjolnirHud_grenadeAmountText#0);
    private _overlayRangedToText = (OPTRE_mjolnirHud_rangedToText#0);
    
    private _newViewAngleX = ([0,0,0] getDir _cameraview);

    private _newViewAngleY = (_cameraview select 2) * 1000;

    private _viewAngleDifferenceY = abs(oldViewAngleY - _newViewAngleY);
    if (_viewAngleDifferenceY > 0.1) then {
      private _angleChangeY = _newViewAngleY - oldViewAngleY;
      _angleChangeY = -_angleChangeY;
      if (_angleChangeY > 0) then {
        if (hudAngleY - _angleChangeY >= -400) then {
            hudAngleY = hudAngleY - _angleChangeY;
        };
      } else {
          if (hudAngleY - _angleChangeY <= 400) then {
              hudAngleY = hudAngleY - _angleChangeY;
          };
      };
    } else {
      if (hudAngleY != 0) then {
          private _angleChangeY = hudAngleY;
          
          if (abs(_angleChangeY) < 0.0001) then {
              hudAngleY = 0;
          } else {
              hudAngleY = hudAngleY - (5 * _angleChangeY * diag_deltaTime);
          };
      };
    };
    
    private _viewAngleDifferenceX = abs(oldViewAngleX - _newViewAngleX);
    if (_viewAngleDifferenceX > 0.02) then { 
      private _angleDeltaX = _newViewAngleX - oldViewAngleX; 
      if (_angleDeltaX > 180) then {_angleDeltaX = _angleDeltaX - 360}; 
      if (_angleDeltaX < -180) then {_angleDeltaX = _angleDeltaX + 360}; 
      
      private _angleChangeX = _angleDeltaX / 1; 
      
      if (_angleChangeX > 0) then {
        if (hudAngleX - _angleChangeX >= -120) then {
            hudAngleX = hudAngleX - _angleChangeX;
        };
      } else {
          if (hudAngleX - _angleChangeX <= 120) then {
              hudAngleX = hudAngleX - _angleChangeX;
          };
      };
    } else {
      if (hudAngleX != 0) then {
          private _angleChangeX = hudAngleX / 1;
          
          if (abs(_angleChangeX) < 0.0001) then {
              hudAngleX = 0;
          } else {
              hudAngleX = hudAngleX - (3 * _angleChangeX * diag_deltaTime);
          };
      };
    };
    
    oldViewAngleX = _newViewAngleX; 
    oldViewAngleY = _newViewAngleY; 

    private _positionAdjustX = abs(safeZoneX) * hudAngleX / 2500;
    private _positionAdjuxtY = abs(safeZoneX) * hudAngleY / 16000;

    private _infoPosition = [0.809375 * safeZoneW + safeZoneX + _positionAdjustX,0.819 * safeZoneH + safeZoneY + _positionAdjuxtY,0.154687 * safeZoneW,0.143 * safeZoneH];
    private _gun1Pos = [0.868672 * safeZoneW + safeZoneX + _positionAdjustX,0.8310 * safeZoneH + safeZoneY + _positionAdjuxtY,0.0876563 * safeZoneW,0.154 * safeZoneH];
    private _gun2Pos = [0.819688 * safeZoneW + safeZoneX + _positionAdjustX,0.793 * safeZoneH + safeZoneY + _positionAdjuxtY,0.0670312 * safeZoneW,0.11 * safeZoneH];
    private _gun3Pos = [0.943438 * safeZoneW + safeZoneX + _positionAdjustX,0.8290 * safeZoneH + safeZoneY + _positionAdjuxtY,0.0670312 * safeZoneW,0.121 * safeZoneH];
    private _hudPosition = [-0.1259 * safeZoneW + safeZoneX + _positionAdjustX, -0.61 * safeZoneH + safeZoneY + _positionAdjuxtY, 1.25 * safeZoneW, 2.18 * safeZoneH]; 
    private _shieldPosition = [0.389888 * safeZoneW + safeZoneX + _positionAdjustX,0.083375 * safeZoneH + safeZoneY + _positionAdjuxtY,0.21798 * safeZoneW,0.048125 * safeZoneH];
    private _radarPosition = [0.0153125 * safeZoneW + safeZoneX + _positionAdjustX, 0.7695 * safeZoneH + safeZoneY + _positionAdjuxtY, 0.118594 * safeZoneW, 0.209 * safeZoneH]; 
    
    private _energyTextPos = [0.474219 * safeZoneW + safeZoneX + _positionAdjustX,0.09675 * safeZoneH + safeZoneY + _positionAdjuxtY,0.0515625 * safeZoneW,0.0275 * safeZoneH];
    private _gridTextPos = [0.891875 * safeZoneW + safeZoneX + _positionAdjustX,0.850625 * safeZoneH + safeZoneY + _positionAdjuxtY,0.0309375 * safeZoneW,0.011 * safeZoneH];
    private _dirTextPos = [0.0153125 * safeZoneW + safeZoneX + _positionAdjustX,0.951 * safeZoneH + safeZoneY + _positionAdjuxtY,0.0257812 * safeZoneW,0.028875 * safeZoneH];
    private _rangeTextPos = [0.891875 * safeZoneW + safeZoneX + _positionAdjustX,0.8355 * safeZoneH + safeZoneY + _positionAdjuxtY,0.0309375 * safeZoneW,0.011 * safeZoneH];
    private _ammoTextPos = [0.799062 * safeZoneW + safeZoneX + _positionAdjustX,0.89120 * safeZoneH + safeZoneY + _positionAdjuxtY,0.0464063 * safeZoneW,0.033 * safeZoneH];
    private _magazineTextPos = [0.848525 * safeZoneW + safeZoneX + _positionAdjustX,0.89220 * safeZoneH + safeZoneY + _positionAdjuxtY,0.020625 * safeZoneW,0.033 * safeZoneH];

    private _fireModePos = [0.922813 * safeZoneW + safeZoneX + _positionAdjustX,0.875875 * safeZoneH + safeZoneY + _positionAdjuxtY,0.0360937 * safeZoneW,0.011 * safeZoneH];
    private _grenadeNamePos = [0.922113 * safeZoneW + safeZoneX + _positionAdjustX,0.85635 * safeZoneH + safeZoneY + _positionAdjuxtY,0.0338737 * safeZoneW,0.009 * safeZoneH];
    private _grenadeAmountPos = [0.942664 * safeZoneW + safeZoneX + _positionAdjustX,0.831875 * safeZoneH + safeZoneY + _positionAdjuxtY,0.0139219 * safeZoneW,0.02475 * safeZoneH];
    private _rangedToTextPos = [0.922813 * safeZoneW + safeZoneX + _positionAdjustX,0.929 * safeZoneH + safeZoneY + _positionAdjuxtY,0.0360937 * safeZoneW,0.011 * safeZoneH];
    private _grenadeImagePos = [0.930289 * safeZoneW + safeZoneX + _positionAdjustX,0.834125 * safeZoneH + safeZoneY + _positionAdjuxtY,0.0139219 * safeZoneW,0.023375 * safeZoneH];

    _overlayHelmet ctrlSetPosition _hudPosition;
    _overlayShield ctrlSetPosition _shieldPosition;
    _overlayTexture ctrlSetPosition _hudPosition;
    _overlayShieldAlert ctrlSetPosition _hudPosition;

    _overlayRadar ctrlSetPosition _radarPosition;
    _overlayRadarTexture ctrlSetPosition _radarPosition;
    _overlayRadarTexture ctrlSetAngle [360 - _newViewAngleX,0.5,0.5];
    _overlayRadarText ctrlSetAngle [360 - _newViewAngleX,0.5,0.5];
    _overlayRadarTextureView ctrlSetPosition _radarPosition;

    _overlayInfoTexture ctrlSetPosition _infoPosition;
    _overlayCurrentWeapon ctrlSetPosition _gun1Pos;
    _overlaySecondaryWeapon ctrlSetPosition _gun2Pos;
    _overlayLauncher ctrlSetPosition _gun3Pos;
    _overlayGrenade ctrlSetPosition _grenadeImagePos;

    _overlayEnergyText ctrlSetPosition _energyTextPos;
    _overlayGridText ctrlSetPosition _gridTextPos;
    _overlayDirText ctrlSetPosition _dirTextPos;
    _overlayRangeText ctrlSetPosition _rangeTextPos;
    _overlayAmmoText ctrlSetPosition _ammoTextPos;
    _overlayMagazineText ctrlSetPosition _magazineTextPos;

    _overlayDirText ctrlSetPosition _dirTextPos;
    _overlayRangeText ctrlSetPosition _rangeTextPos;
    _overlayAmmoText ctrlSetPosition _ammoTextPos;
    _overlayMagazineText ctrlSetPosition _magazineTextPos;

    _overlayfireModeText ctrlSetPosition _fireModePos;
    _overlayGrenadeNameText ctrlSetPosition _grenadeNamePos;
    _overlayGrenadeAmountText ctrlSetPosition _grenadeAmountPos;
    _overlayRangedToText ctrlSetPosition _rangedToTextPos;

    _overlayHelmet ctrlCommit 0; 
    _overlayShield ctrlCommit 0; 
    _overlayTexture ctrlCommit 0; 
    _overlayShieldAlert ctrlCommit 0; 

    _overlayRadar ctrlCommit 0;
    _overlayRadarTexture ctrlCommit 0;
    _overlayRadarText ctrlCommit 0;
    _overlayRadarTextureView ctrlCommit 0;

    _overlayInfoTexture ctrlCommit 0;
    _overlayCurrentWeapon ctrlCommit 0;
    _overlaySecondaryWeapon ctrlCommit 0;
    _overlayLauncher ctrlCommit 0;
    _overlayGrenade ctrlCommit 0;

    _overlayEnergyText ctrlCommit 0;
    _overlayGridText ctrlCommit 0;
    _overlayDirText ctrlCommit 0;
    _overlayRangeText ctrlCommit 0;
    _overlayAmmoText ctrlCommit 0;
    _overlayMagazineText ctrlCommit 0;

    _overlayfireModeText ctrlCommit 0;
    _overlayGrenadeNameText ctrlCommit 0;
    _overlayGrenadeAmountText ctrlCommit 0;
    _overlayRangedToText ctrlCommit 0;
    
  }] call BIS_fnc_addStackedEventHandler;

  OPTRE_MJOLNIR_radarScale = 60;
  OPTRE_MJOLNIR_radarXFactor = (OPTRE_MJOLNIR_radarScale/0.0567185);//059297
  OPTRE_MJOLNIR_radarYFactor = (OPTRE_MJOLNIR_radarScale/0.099);//1045
  OPTRE_MJOLNIR_activeIcons = [];

  ["OPTRE_MJOLNIR_RADAR", "onEachFrame",{
    if (call CBA_fnc_currentUnit != player) then {continue;};
    _dialog = uiNamespace getVariable "OPTRE_MJOLNIR_RADAR";
    _refreshTime = 0.01;
    _ctrlGroupRadar = (OPTRE_mjolnirRadar#0);
    _index = 15000;
    _sideplayer = side player;
		_playerPos = getPos player;
		_dir = ([0,0,0] getDir getCameraViewDirection  player);
		_color = [1,1,1,1];

		_radarSize = OPTRE_MJOLNIR_radarScale - 0.5;

		OPTRE_MJOLNIR_hudSineDir = sin(_dir);
    OPTRE_MJOLNIR_hudCosDir = cos(_dir);

		_deleteIcons = +OPTRE_MJOLNIR_activeIcons;

    _transparencyplayer = (((vectorMagnitude velocity player) * 3.6) / 10) max (player getVariable ['OPTRE_MJOLNIR_detectedShootingTimer',0]);
		_ctrlplayer = player getVariable ["OPTRE_MJOLNIR_hudRadarBlipCtrl",objNull];

		if(isNull _ctrlplayer) then {
			_ctrlplayer = _dialog ctrlCreate ["RscPicture", _index, _ctrlGroupRadar];
			player setVariable ["OPTRE_MJOLNIR_hudRadarBlipCtrl",_ctrlplayer];
			OPTRE_MJOLNIR_activeIcons pushBack _ctrlplayer;
			_index = _index + 1;
		};

    _playerTeamColour = [0,0,0,_transparencyplayer];
    /*
		_playerTeamColour = switch (assignedTeam player) do {
			case "MAIN": {[ic51_allison_radar_color select 0,ic51_allison_radar_color select 1,ic51_allison_radar_color select 2,_transparencyplayer]};
			case "RED": {[1,0,0,_transparencyplayer]};
			case "GREEN": {[0,1,0,_transparencyplayer]};
			case "BLUE": {[0,0,1,_transparencyplayer]};
			case "YELLOW": {[1,1,0,_transparencyplayer]};
		};
    */

		_playerWidth = 0.00953906 * safeZoneW;
		_playerHight = 0.0165 * safeZoneH;

    _playerIcon = ["\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_radarplayerVehicle.paa", "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_radarplayer.paa"] select (isNull objectParent player);
		_ctrlplayer ctrlSetText _playerIcon;
		_ctrlplayer ctrlSetTextColor _playerTeamColour;
		_ctrlplayer ctrlSetPosition [(0.059297 * safeZoneW) - (_playerWidth/2),0.1045 * safeZoneH - (_playerHight/2),_playerWidth,_playerHight];
		_ctrlplayer ctrlCommit 0;

		_deleteIcons deleteAt (_deleteIcons find _ctrlplayer);


		{
			private _unit = _x; 
			private _distance = (player distance2D _unit);
			private _unitSide = side _unit;
			private _isFriend = (_unitSide getFriend _sideplayer);
			private _unitSpeed = ((vectorMagnitude velocity _unit) * 3.6) / 10;
			private _unitShotTime = _unit getVariable ['OPTRE_MJOLNIR_detectedShootingTimer',0];
      private _unitIcon = "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_radarBlipUnit.paa";
			
			_transparency = if (_unitSide == _sideplayer) then {1} else {_unitSpeed max _unitShotTime};
			if(_distance > _radarSize OR _transparency == 0 OR !isNull objectParent _unit OR vehicle player == _unit) then {continue;};

			_iconScale = [2, 1] select ((_unit isKindOf 'MAN') || (_unit isKindOf 'StaticWeapon'));

			private _ctrl = _unit getVariable ["OPTRE_MJOLNIR_hudRadarBlipCtrl",objNull];
			private _pos = [_playerPos,getPos _unit,_iconScale] call OPTRE_fnc_mjolnirRadarCalculatePosition;

			if(isNull _ctrl) then {
				_ctrl = _dialog ctrlCreate ["RscPicture", _index, _ctrlGroupRadar];
				_unit setVariable ["OPTRE_MJOLNIR_hudRadarBlipCtrl",_ctrl];
				OPTRE_MJOLNIR_activeIcons pushBack _ctrl;
				_index = _index + 1;
			};
			if (_unitSide == civilian OR lifeState _unit == 'INCAPACITATED') then {
				_color = [ic51_hud_netural_color select 0,ic51_hud_netural_color select 1,ic51_hud_netural_color select 2,_transparency];
        _unitIcon = ["\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_radarBlipFriendly.paa", "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_radarBlipFriendlyVehicle.paa"] select (_iconScale == 2);
			} else {
				if ( _isFriend > 0.6 && _isFriend < 10) then {
					_color = (if (group player == group _unit) then {
						(
							switch (assignedTeam _unit) do {
								case 'MAIN': {ic51_hud_netural_color};
								case 'RED': {[1,0,0,1]};
								case 'GREEN': {[0,1,0,1]};
								case 'BLUE': {[0,0,1,1]};
								case 'YELLOW': {[1,1,0,1]};
							}
						)
					} else {
						[ic51_hud_friendly_color select 0,ic51_hud_friendly_color select 1,ic51_hud_friendly_color select 2,_transparency]
					});
          _unitIcon = ["\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_radarBlipFriendly.paa", "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_radarBlipFriendlyVehicle.paa"] select (_iconScale == 2);
				} else {
					_color = [ic51_hud_enemy_color select 0,ic51_hud_enemy_color select 1,ic51_hud_enemy_color select 2,_transparency];
          _unitIcon = ["\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_radarBlipUnit.paa", "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_radarBlipVehicle.paa"] select (_iconScale == 2);
				};
			};
			_ctrl ctrlSetTextColor _color;
			_ctrl ctrlSetText _unitIcon;
			_ctrl ctrlSetPosition _pos;
			_ctrl ctrlCommit 0;

			_deleteIcons deleteAt (_deleteIcons find _ctrl);
		} forEach OPTRE_nearUnitsRadar;
    
		{
			ctrlDelete _x;
		} forEach _deleteIcons;
		OPTRE_MJOLNIR_activeIcons = OPTRE_MJOLNIR_activeIcons - _deleteIcons;    
  }] call BIS_fnc_addStackedEventHandler;
};


OPTRE_fnc_removeHudEventhandler = {
  if (!OPTRE_MJOLNIR_hudEventHandlerAdded) exitWith {};
  OPTRE_MJOLNIR_hudEventHandlerAdded = false;
  (OPTRE_hudOverlay#0) ctrlSetTextColor [0,0,0,0];
	(OPTRE_hudOverlayColor#0) ctrlSetTextColor [0,0,0,0];
  ["OPTRE_MOVING_HUD", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
  ["OPTRE_MJOLNIR_RADAR", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
};


OPTRE_throttleTime = 0.3;

OPTRE_nearUnitsHandler = {
	private _filteredUnits = [];
	private _nearUnits = nearestObjects [player, ["MAN","CAR","TANK","AIR","StaticWeapon"], OPTRE_threatRange, true];
   
  OPTRE_nearUnits = _nearUnits select {
    private _unitBlocked = lineIntersects [eyePos player, eyePos _x, vehicle player, _x] OR terrainIntersectASL [eyePos player, eyePos _x];
    alive _x && vehicle _x != vehicle player && !_unitBlocked && !(_x isKindOf "Animal");
  };
};


OPTRE_fnc_addTargetingEventhandler = {
  if (OPTRE_targetingHandlerAdded OR !ic51_allison_allow_targeting_setting) exitWith {};
  OPTRE_targetingHandlerAdded = true;
  
  OPTRE_nearUnitsHandlerHandle = [] spawn {
    while {OPTRE_targetingHandlerAdded} do {
      while {OPTRE_showIcons} do {
        OPTRE_nearUnitsHandler call OPTRE_nearUnitsHandler;
        sleep OPTRE_throttleTime;
      };
      sleep 1;
    };
  };

  ["OPTRE_TARGETING_HUD", "onEachFrame",{
    if (OPTRE_showIcons && isNull(findDisplay 312) && (call CBA_fnc_currentUnit == player)) then {
      {
        private _unit = _x;
        private _distance = positionCameraToWorld [0,0,0] distance _unit;
        private _icon = "";
        private _color = [1,0,0,0.8];
        private _size = 0;
        private _sideUnit = side _unit;
        private _sideplayer = side player;
        private _hostileCheck = _sideplayer getFriend _sideUnit;
        private _fov = getObjectFOV vehicle player;
        private _pos = [0,0,0];
        
        if (_unit isKindOf "MAN") then {
          _pos = _unit modelToWorldVisual (_unit selectionPosition "spine3");
          if (_sideUnit == civilian OR lifeState _unit == "INCAPACITATED") then {
            _color = ic51_hud_group_color;
          } else {
            if (_hostileCheck < 0.6) then {
              _color = ic51_hud_enemy_color;
            } else {
              if (group player isEqualTo group _unit) then {
                private _transparency = ic51_hud_group_color select 3;
                _color = switch (assignedTeam _unit) do {
                  case "MAIN": {ic51_hud_group_color};
                  case "RED": {[1,0,0,_transparency]};
                  case "GREEN": {[0,1,0,_transparency]};
                  case "BLUE": {[0,0,1,_transparency]};
                  case "YELLOW": {[1,1,0,_transparency]};
                };
              } else {
                _color = ic51_hud_friendly_color;
              };
            };
          };
          _icon = ic51_hud_human_icon;
          _size = (ic51_hud_human_size / tan(_fov /2) / _distance) max 0.5;
        } else {
          if (_sideUnit == civilian OR lifeState _unit == "INCAPACITATED") then {
            _color = ic51_hud_group_color;
          } else {
            if (_hostileCheck < 0.6) then {
              _color = ic51_hud_enemy_color;
            } else {
              if (group player isEqualTo group _unit) then {
                _color = ic51_hud_group_color;
              } else {
                _color = ic51_hud_friendly_color;
              };
            };
          };
          if (_unit isKindOf "StaticWeapon") then {
            _pos = _unit modelToWorldVisual (_unit selectionPosition ["osahlavne", "Memory"]);
            _icon = ic51_hud_static_icon;
            _size = (ic51_hud_static_size / tan(_fov /2) / _distance) max 0.5;
          } else {
            _pos = _unit modelToWorldVisual (_unit selectionPosition ["zamerny", "Memory"]);
            _icon = ic51_hud_vehicle_icon;
            _size = (ic51_hud_vehicle_size / tan(_fov /2) / _distance) max 0.5;
          };
        };
        drawIcon3D [_icon,_color,_pos,_size,_size,0,"",0,0,"RobotoCondensed","center",false];
      } forEach OPTRE_nearUnits;
    };
  }] call BIS_fnc_addStackedEventHandler;
};

OPTRE_fnc_removeTargetingEventhandler = {
  if (!OPTRE_targetingHandlerAdded) exitWith {
  };
  OPTRE_targetingHandlerAdded = false;
  ["OPTRE_TARGETING_HUD", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
};
