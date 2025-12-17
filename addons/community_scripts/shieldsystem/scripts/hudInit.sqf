//if (isClass(configFile >> "CfgPatches" >> "OPTRE_Suit_Scripts_DEV")) exitWith {};
OPTRE_fnc_hudMjolnirInit = {
	call OPTRE_fnc_removeHudEventhandler;

	"OPTRE_MJOLNIR_OVERLAY_BASE" cutText ["","PLAIN",-1,false];
	"OPTRE_MJOLNIR_RADAR" cutText ["", "PLAIN", -1, false];
	"OPTRE_HUD_INFO" cutText ["", "PLAIN", -1, false];
	"OPTRE_HUD_BOOTUP" cutText ["", "PLAIN", -1, false];
	"OPTRE_HUD_SYSTEMMESSAGES" cutText ["", "PLAIN", -1, false];
	"OPTRE_PM_SHIELD_BAR" cutText ["", "PLAIN", -1, false];

	"OPTRE_MJOLNIR_OVERLAY_BASE" cutRsc ["OPTRE_MJOLNIR_OVERLAY_BASE", "PLAIN", -1, false];
	"OPTRE_MJOLNIR_RADAR" cutRsc ["OPTRE_MJOLNIR_RADAR", "PLAIN", -1, false];
	"OPTRE_HUD_INFO" cutRsc ["OPTRE_HUD_INFO", "PLAIN", -1, false];
	"OPTRE_HUD_BOOTUP" cutRsc ["OPTRE_HUD_BOOTUP", "PLAIN", -1, false];
	"OPTRE_HUD_SYSTEMMESSAGES" cutRsc ["OPTRE_HUD_SYSTEMMESSAGES", "PLAIN", -1, false];
	"OPTRE_PM_SHIELD_BAR" cutRsc ["OPTRE_SHIELD_BAR_BASE","PLAIN",-1,false];

	with uiNamespace do {
		_displayOverlay = uiNamespace getVariable "OPTRE_MJOLNIR_OVERLAY_BASE";
		_displayRadar = uiNamespace getVariable "OPTRE_MJOLNIR_RADAR";
		_displayInfoText = uiNamespace getVariable "OPTRE_HUD_INFO_TEXT";
		_displayBootUp = uiNamespace getVariable "OPTRE_HUD_BOOTUP";
		_displayMessage = uiNamespace getVariable "OPTRE_HUD_SYSTEMMESSAGES";
		_displayShield = uiNamespace getVariable "OPTRE_TAG_SHIELD";
		
		OPTRE_hudHelmetOutline = _displayOverlay ctrlCreate ["RscPicture", 28635];

		OPTRE_hudOverlay = _displayOverlay ctrlCreate ["RscPicture", 28636];
		OPTRE_hudHitEffect = _displayOverlay ctrlCreate ["RscPicture", 28637];
		OPTRE_hudShieldDownEffect = _displayOverlay ctrlCreate ["RscPicture", 28638];
		OPTRE_hudShieldDownAlert = _displayOverlay ctrlCreate ["RscPicture", 28639];

		OPTRE_hudInfoDisplayTexture = _displayOverlay ctrlCreate ["RscPicture", 28001];
		OPTRE_hudCurrentWeapon = _displayOverlay ctrlCreate ["RscPicture", 28002];
		OPTRE_hudSecondaryWeapon = _displayOverlay ctrlCreate ["RscPicture", 28003];
		OPTRE_hudLauncher = _displayOverlay ctrlCreate ["RscPicture", 28004];
		OPTRE_hudGrenade = _displayOverlay ctrlCreate ["RscPicture", 28005];

		OPTRE_hudShieldChargeTexture = _displayOverlay ctrlCreate ["RscPicture", 28641];
		OPTRE_hudShieldChargeEffect = _displayOverlay ctrlCreate ["RscPicture", 28642];

		OPTRE_mjolnirRadar = _displayRadar displayCtrl 500;
		OPTRE_mjolnirRadarTexture = _displayOverlay ctrlCreate ["RscPicture", 28643];
		OPTRE_mjolnirRadarTextureView = _displayOverlay ctrlCreate ["RscPicture", 28644];

		OPTRE_hudBootUpBox = _displayBootUp ctrlCreate ["RscPicture", 10861];
		OPTRE_hudBootUpBar = _displayBootUp ctrlCreate ["RscPicture", 10862];
		OPTRE_hudBootUpBoxTextField = _displayBootUp displayCtrl 10263;
		OPTRE_hudBootUpHeadline = _displayBootUp displayCtrl 10264;

		OPTRE_systemMessagesControlGroup = _displayMessage displayCtrl 110863;
		OPTRE_systemMessagesTextField = _displayMessage displayCtrl 10863;

		OPTRE_mjolnirHud_energyText = _displayInfoText displayCtrl 10860;
		OPTRE_mjolnirHud_gridText = _displayInfoText displayCtrl 10861;
		OPTRE_mjolnirHud_dirText = _displayInfoText displayCtrl 10862;
		OPTRE_mjolnirHud_rangeText = _displayInfoText displayCtrl 10863;
		OPTRE_mjolnirHud_ammoText = _displayInfoText displayCtrl 10864;
		OPTRE_mjolnirHud_magazinesText = _displayInfoText displayCtrl 10865;

		OPTRE_mjolnirHud_fireModText = _displayInfoText displayCtrl 10866;
		OPTRE_mjolnirHud_grenadeNameText = _displayInfoText displayCtrl 10867;
		OPTRE_mjolnirHud_grenadeAmountText = _displayInfoText displayCtrl 10868;
		OPTRE_mjolnirHud_rangedToText = _displayInfoText displayCtrl 10869;

		OPTRE_PM_shieldBar = _displayShield displayCtrl -1;
	};

	OPTRE_hudHelmetOutline = [uiNamespace getVariable "OPTRE_hudHelmetOutline"];

	OPTRE_hudOverlay = [uiNamespace getVariable "OPTRE_hudOverlay"];
	OPTRE_hudHitEffect = [uiNamespace getVariable "OPTRE_hudHitEffect"];
	OPTRE_hudShieldDownEffect = [uiNamespace getVariable "OPTRE_hudShieldDownEffect"];
	OPTRE_hudShieldDownAlert = [uiNamespace getVariable "OPTRE_hudShieldDownAlert"];
	OPTRE_hudShieldChargeTexture = [uiNamespace getVariable "OPTRE_hudShieldChargeTexture"];
	OPTRE_hudShieldChargeEffect = [uiNamespace getVariable "OPTRE_hudShieldChargeEffect"];

	OPTRE_mjolnirRadar = [uiNamespace getVariable "OPTRE_mjolnirRadar"];
	OPTRE_mjolnirRadarTexture = [uiNamespace getVariable "OPTRE_mjolnirRadarTexture"];
	OPTRE_mjolnirRadarTextureView = [uiNamespace getVariable "OPTRE_mjolnirRadarTextureView"];

	OPTRE_hudBootUpBox = [uiNamespace getVariable "OPTRE_hudBootUpBox"];
	OPTRE_hudBootUpBar = [uiNamespace getVariable "OPTRE_hudBootUpBar"];
	OPTRE_hudBootUpBoxTextField = [uiNamespace getVariable "OPTRE_hudBootUpBoxTextField"];
	OPTRE_hudBootUpHeadline = [uiNamespace getVariable "OPTRE_hudBootUpHeadline"];

	OPTRE_systemMessagesControlGroup = [uiNamespace getVariable "OPTRE_systemMessagesControlGroup"];
	OPTRE_systemMessagesTextField = [uiNamespace getVariable "OPTRE_systemMessagesTextField"];

	OPTRE_hudInfoDisplayTexture = [uiNamespace getVariable "OPTRE_hudInfoDisplayTexture"];
	OPTRE_hudCurrentWeapon = [uiNamespace getVariable "OPTRE_hudCurrentWeapon"];
	OPTRE_hudSecondaryWeapon = [uiNamespace getVariable "OPTRE_hudSecondaryWeapon"];
	OPTRE_hudLauncher = [uiNamespace getVariable "OPTRE_hudLauncher"];
	OPTRE_hudGrenade = [uiNamespace getVariable "OPTRE_hudGrenade"];

	OPTRE_mjolnirHud_energyText = [uiNamespace getVariable "OPTRE_mjolnirHud_energyText"];
	OPTRE_mjolnirHud_gridText = [uiNamespace getVariable "OPTRE_mjolnirHud_gridText"];
	OPTRE_mjolnirHud_dirText = [uiNamespace getVariable "OPTRE_mjolnirHud_dirText"];
	OPTRE_mjolnirHud_rangeText = [uiNamespace getVariable "OPTRE_mjolnirHud_rangeText"];
	OPTRE_mjolnirHud_ammoText = [uiNamespace getVariable "OPTRE_mjolnirHud_ammoText"];
	OPTRE_mjolnirHud_magazinesText = [uiNamespace getVariable "OPTRE_mjolnirHud_magazinesText"];

	OPTRE_mjolnirHud_fireModText = [uiNamespace getVariable "OPTRE_mjolnirHud_fireModText"];
	OPTRE_mjolnirHud_grenadeNameText = [uiNamespace getVariable "OPTRE_mjolnirHud_grenadeNameText"];
	OPTRE_mjolnirHud_grenadeAmountText = [uiNamespace getVariable "OPTRE_mjolnirHud_grenadeAmountText"];
	OPTRE_mjolnirHud_rangedToText = [uiNamespace getVariable "OPTRE_mjolnirHud_rangedToText"];

	OPTRE_PM_shieldBar = [uiNamespace getVariable "OPTRE_PM_shieldBar"];

	OPTRE_MJOLNIR_bootBoxEndPos = [0.267969 * safeZoneW + safeZoneX,0.258 * safeZoneH + safeZoneY,0.464062 * safeZoneW,0.418 * safeZoneH];
	_controlPositionBox = OPTRE_MJOLNIR_bootBoxEndPos;
	_controlSizeBox = [_controlPositionBox select 2, _controlPositionBox select 3];
	_centerPositionBox = [(_controlPositionBox select 0) + ((_controlSizeBox select 0) / 2), (_controlPositionBox select 1) + ((_controlSizeBox select 1) / 2)];
	OPTRE_MJOLNIR_bootBoxStart = [(_centerPositionBox select 0), (_centerPositionBox select 1),0,0];
	
	if (ic51_allison_show_outline) then {
		(OPTRE_hudHelmetOutline#0) ctrlSetText OPTRE_MJOLNIR_hudHelmetOutline;
	} else {
		(OPTRE_hudHelmetOutline#0) ctrlSetText "";
	};
	(OPTRE_hudHelmetOutline#0) ctrlSetTextColor [1,1,1,1];
	(OPTRE_hudHelmetOutline#0) ctrlSetFade 0;
	(OPTRE_hudHelmetOutline#0) ctrlCommit 0;

	if (ic51_allison_show_overlay) then {
		(OPTRE_hudOverlay#0) ctrlSetText OPTRE_MJOLNIR_hudOverlay;
	} else {
		(OPTRE_hudOverlay#0) ctrlSetText "";
	};
	(OPTRE_hudOverlay#0) ctrlSetTextColor ic51_allison_overlay_color;
	(OPTRE_hudOverlay#0) ctrlSetFade 1;
	(OPTRE_hudOverlay#0) ctrlCommit 0;

	(OPTRE_hudInfoDisplayTexture#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_hudInfoDisplay.paa";
	(OPTRE_hudInfoDisplayTexture#0) ctrlSetTextColor ic51_allison_infodisplay_color;
	(OPTRE_hudInfoDisplayTexture#0) ctrlSetFade 1;
	(OPTRE_hudInfoDisplayTexture#0) ctrlCommit 0;

	(OPTRE_hudCurrentWeapon#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\weaponIcons\AssaultRifles\ma5c_icon.paa";
	(OPTRE_hudCurrentWeapon#0) ctrlSetTextColor ic51_allison_weapon_icon_color;
	(OPTRE_hudCurrentWeapon#0) ctrlSetFade 1;
	(OPTRE_hudCurrentWeapon#0) ctrlCommit 0;

	(OPTRE_hudSecondaryWeapon#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\weaponIcons\Pistols\m6b_icon.paa";
	(OPTRE_hudSecondaryWeapon#0) ctrlSetTextColor ic51_allison_weapon_icon_color;
	(OPTRE_hudSecondaryWeapon#0) ctrlSetFade 1;
	(OPTRE_hudSecondaryWeapon#0) ctrlCommit 0;

	(OPTRE_hudLauncher#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\weaponIcons\ExplosiveWeapons\launcher_icon.paa";
	(OPTRE_hudLauncher#0) ctrlSetPosition [-0.1259 * safeZoneW + safeZoneX, -0.61 * safeZoneH + safeZoneY, 1.25 * safeZoneW, 2.18 * safeZoneH];
	(OPTRE_hudLauncher#0) ctrlSetTextColor ic51_allison_weapon_icon_color;
	(OPTRE_hudLauncher#0) ctrlSetFade 1;
	(OPTRE_hudLauncher#0) ctrlCommit 0;

	(OPTRE_hudLauncher#0) ctrlSetAngle [90,0.5,0.5];

	(OPTRE_hudGrenade#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\weaponIcons\Grenades\m9_icon.paa";
	(OPTRE_hudGrenade#0) ctrlSetPosition [0.930289 * safeZoneW + safeZoneX,0.834125 * safeZoneH + safeZoneY,0.0139219 * safeZoneW,0.023375 * safeZoneH];
	(OPTRE_hudGrenade#0) ctrlSetTextColor ic51_allison_weapon_icon_color;
	(OPTRE_hudGrenade#0) ctrlSetFade 1;
	(OPTRE_hudGrenade#0) ctrlCommit 0;

	(OPTRE_hudHitEffect#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_hudHitEffect.paa";
	(OPTRE_hudHitEffect#0) ctrlSetTextColor [1,1,0.2,1]; //shield down color
	(OPTRE_hudHitEffect#0) ctrlSetFade 1;
	(OPTRE_hudHitEffect#0) ctrlSetPosition [safeZoneX, safeZoneY, safeZoneW, safeZoneH]; 
	(OPTRE_hudHitEffect#0) ctrlCommit 0;

	(OPTRE_hudShieldDownEffect#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_shieldDownEffect.paa";
	(OPTRE_hudShieldDownEffect#0) ctrlSetTextColor ic51_allison_depleted_effect_color;
	(OPTRE_hudShieldDownEffect#0) ctrlSetFade 1;
	(OPTRE_hudShieldDownEffect#0) ctrlSetPosition [0.422657 * safeZoneW + safeZoneX,0.115 * safeZoneH + safeZoneY,0.154687 * safeZoneW,0.088 * safeZoneH]; 
	(OPTRE_hudShieldDownEffect#0) ctrlCommit 0;

	(OPTRE_hudShieldDownAlert#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_shieldDownAlert.paa";
	(OPTRE_hudShieldDownAlert#0) ctrlSetTextColor ic51_allison_depleted_alert_color;
	(OPTRE_hudShieldDownAlert#0) ctrlSetFade 1;
	(OPTRE_hudShieldDownAlert#0) ctrlCommit 0;

	(OPTRE_hudShieldChargeTexture#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_shieldCharging.paa";
	(OPTRE_hudShieldChargeTexture#0) ctrlSetTextColor ic51_allison_depleted_charge_texture_color;
	(OPTRE_hudShieldChargeTexture#0) ctrlSetPosition [safeZoneX, safeZoneY, safeZoneW, safeZoneH]; 
	(OPTRE_hudShieldChargeTexture#0) ctrlSetFade 1;
	(OPTRE_hudShieldChargeTexture#0) ctrlCommit 0;

	(OPTRE_hudShieldChargeEffect#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_shieldChargeEffect.paa";
	(OPTRE_hudShieldChargeEffect#0) ctrlSetTextColor ic51_allison_depleted_charge_effect_color;
	(OPTRE_hudShieldChargeEffect#0) ctrlSetFade 1;
	(OPTRE_hudShieldChargeEffect#0) ctrlSetPosition [-0.000156274 * safeZoneW + safeZoneX,0.885 * safeZoneH + safeZoneY,safeZoneW,0.484 * safeZoneH];
	(OPTRE_hudShieldChargeEffect#0) ctrlCommit 0;

	(OPTRE_mjolnirRadarTexture#0) ctrlSetTextColor ic51_allison_radar_color;
	(OPTRE_mjolnirRadarTexture#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_radarTexture.paa";
	(OPTRE_mjolnirRadarTexture#0) ctrlSetFade 1;
	(OPTRE_mjolnirRadarTexture#0) ctrlCommit 0;

	(OPTRE_mjolnirRadarTextureView#0) ctrlSetTextColor ic51_allison_radar_color;
	(OPTRE_mjolnirRadarTextureView#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_radarTextureView.paa";
	(OPTRE_mjolnirRadarTextureView#0) ctrlSetFade 1;
	(OPTRE_mjolnirRadarTextureView#0) ctrlCommit 0;

	(OPTRE_mjolnirRadar#0) ctrlSetFade 1;
	(OPTRE_mjolnirRadar#0) ctrlCommit 0;

	(OPTRE_hudBootUpBox#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_hudBootUpBox.paa";
	(OPTRE_hudBootUpBox#0) ctrlSetPosition [0.267969 * safeZoneW + safeZoneX,0.258 * safeZoneH + safeZoneY,0.464062 * safeZoneW,0.418 * safeZoneH];
	(OPTRE_hudBootUpBox#0) ctrlSetFade 1;
	(OPTRE_hudBootUpBox#0) ctrlSetTextColor ic51_allison_bootup_color;
	(OPTRE_hudBootUpBox#0) ctrlCommit 0;

	(OPTRE_hudBootUpBar#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_hudBootUpBar.paa";
	(OPTRE_hudBootUpBar#0) ctrlSetPosition [0.267969 * safeZoneW + safeZoneX,0.258 * safeZoneH + safeZoneY,0.464062 * safeZoneW,0.418 * safeZoneH];
	(OPTRE_hudBootUpBar#0) ctrlSetFade 1;
	(OPTRE_hudBootUpBar#0) ctrlSetTextColor ic51_allison_bootup_color;
	(OPTRE_hudBootUpBar#0) ctrlCommit 0;

	(OPTRE_hudBootUpBoxTextField#0) ctrlSetStructuredText parseText "";
	(OPTRE_hudBootUpBoxTextField#0) ctrlSetPosition [0.368516 * safeZoneW + safeZoneX,0.3735 * safeZoneH + safeZoneY,0.306797 * safeZoneW,0.1925 * safeZoneH];
	(OPTRE_hudBootUpBoxTextField#0) ctrlSetFade 1;
	(OPTRE_hudBootUpBoxTextField#0) ctrlSetTextColor ic51_allison_bootup_color;
	(OPTRE_hudBootUpBoxTextField#0) ctrlCommit 0;

	(OPTRE_hudBootUpHeadline#0) ctrlSetText "P O W E R I N G   U P";
	(OPTRE_hudBootUpHeadline#0) ctrlSetPosition [0.329844 * safeZoneW + safeZoneX,0.4093 * safeZoneH + safeZoneY,0.335156 * safeZoneW,0.11 * safeZoneH];
	(OPTRE_hudBootUpHeadline#0) ctrlSetFade 1;
	(OPTRE_hudBootUpHeadline#0) ctrlSetTextColor ic51_allison_bootup_color;
	(OPTRE_hudBootUpHeadline#0) ctrlCommit 0;

	(OPTRE_mjolnirHud_energyText#0) ctrlSetText "---";
	(OPTRE_mjolnirHud_energyText#0) ctrlSetTextColor ic51_allison_energy_bar_text_color;
	(OPTRE_mjolnirHud_energyText#0) ctrlSetPosition [0.474219 * safeZoneW + safeZoneX,0.09575 * safeZoneH + safeZoneY,0.0515625 * safeZoneW,0.0275 * safeZoneH];
	(OPTRE_mjolnirHud_energyText#0) ctrlSetFade 1;
	(OPTRE_mjolnirHud_energyText#0) ctrlCommit 0;

	(OPTRE_mjolnirHud_gridText#0) ctrlSetText "---";
	(OPTRE_mjolnirHud_gridText#0) ctrlSetTextColor ic51_allison_infotext_color;
	(OPTRE_mjolnirHud_gridText#0) ctrlSetPosition [0.891875 * safeZoneW + safeZoneX,0.850625 * safeZoneH + safeZoneY,0.0309375 * safeZoneW,0.011 * safeZoneH];
	(OPTRE_mjolnirHud_gridText#0) ctrlSetFade 1;
	(OPTRE_mjolnirHud_gridText#0) ctrlCommit 0;

	(OPTRE_mjolnirHud_dirText#0) ctrlSetText "---";
	(OPTRE_mjolnirHud_dirText#0) ctrlSetTextColor ic51_allison_radar_color;
	(OPTRE_mjolnirHud_dirText#0) ctrlSetPosition [0.0153125 * safeZoneW + safeZoneX,0.951 * safeZoneH + safeZoneY,0.0257812 * safeZoneW,0.028875 * safeZoneH];
	(OPTRE_mjolnirHud_dirText#0) ctrlSetFade 1;
	(OPTRE_mjolnirHud_dirText#0) ctrlCommit 0;

	(OPTRE_mjolnirHud_rangeText#0) ctrlSetText "---";
	(OPTRE_mjolnirHud_rangeText#0) ctrlSetTextColor ic51_allison_infotext_color;
	(OPTRE_mjolnirHud_rangeText#0) ctrlSetPosition [0.891875 * safeZoneW + safeZoneX,0.8355 * safeZoneH + safeZoneY,0.0309375 * safeZoneW,0.011 * safeZoneH];
	(OPTRE_mjolnirHud_rangeText#0) ctrlSetFade 1;
	(OPTRE_mjolnirHud_rangeText#0) ctrlCommit 0;

	(OPTRE_mjolnirHud_ammoText#0) ctrlSetText "---";
	(OPTRE_mjolnirHud_ammoText#0) ctrlSetTextColor ic51_allison_infotext_color;
	(OPTRE_mjolnirHud_ammoText#0) ctrlSetPosition [0.814531 * safeZoneW + safeZoneX,0.89325 * safeZoneH + safeZoneY,0.0309375 * safeZoneW,0.033 * safeZoneH];
	(OPTRE_mjolnirHud_ammoText#0) ctrlSetFade 1;
	(OPTRE_mjolnirHud_ammoText#0) ctrlCommit 0;

	(OPTRE_mjolnirHud_magazinesText#0) ctrlSetText "---";
	(OPTRE_mjolnirHud_magazinesText#0) ctrlSetTextColor ic51_allison_infotext_color;
	(OPTRE_mjolnirHud_magazinesText#0) ctrlSetPosition [0.850625 * safeZoneW + safeZoneX,0.89325 * safeZoneH + safeZoneY,0.020625 * safeZoneW,0.033 * safeZoneH];
	(OPTRE_mjolnirHud_magazinesText#0) ctrlSetFade 1;
	(OPTRE_mjolnirHud_magazinesText#0) ctrlCommit 0;

	(OPTRE_mjolnirHud_fireModText#0) ctrlSetText "FullAuto";
	(OPTRE_mjolnirHud_fireModText#0) ctrlSetTextColor ic51_allison_infotext_color;
	(OPTRE_mjolnirHud_fireModText#0) ctrlSetFade 1;
	(OPTRE_mjolnirHud_fireModText#0) ctrlCommit 0;

	(OPTRE_mjolnirHud_grenadeNameText#0) ctrlSetText "M9 Frag Grenade";
	(OPTRE_mjolnirHud_grenadeNameText#0) ctrlSetTextColor ic51_allison_infotext_color;
	(OPTRE_mjolnirHud_grenadeNameText#0) ctrlSetFade 1;
	(OPTRE_mjolnirHud_grenadeNameText#0) ctrlCommit 0;

	(OPTRE_mjolnirHud_grenadeAmountText#0) ctrlSetText "3";
	(OPTRE_mjolnirHud_grenadeAmountText#0) ctrlSetTextColor ic51_allison_infotext_color;
	(OPTRE_mjolnirHud_grenadeAmountText#0) ctrlSetFade 1;
	(OPTRE_mjolnirHud_grenadeAmountText#0) ctrlCommit 0;

	(OPTRE_mjolnirHud_rangedToText#0) ctrlSetText "300m";
	(OPTRE_mjolnirHud_rangedToText#0) ctrlSetTextColor ic51_allison_infotext_color;
	(OPTRE_mjolnirHud_rangedToText#0) ctrlSetFade 1;
	(OPTRE_mjolnirHud_rangedToText#0) ctrlCommit 0;

	(OPTRE_PM_shieldBar#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_shieldBar.paa";
	(OPTRE_PM_shieldBar#0) ctrlSetTextColor ic51_allison_energy_bar_color;
	(OPTRE_PM_shieldBar#0) ctrlSetFade 1;
	(OPTRE_PM_shieldBar#0) ctrlCommit 0;

	call OPTRE_fnc_addHudEventhandler;
};

OPTRE_fnc_mjolnirTriangulatePos = {
	_pos = _this select 0;
	_M = _this select 1;
	_360 = _this select 2;

	_NewX = _M * (sin _360) + (_Pos select 0);  
	_NewY = _M * (cos _360) + (_Pos select 1);    

	[_NewX,_NewY,0]
};

OPTRE_fnc_mjolnirRadarCalculatePosition = {
	//Original Function Author: Jerry - Misriah Armory
	params ["_playerPos","_targetPos","_scale","_inVehicle"];

	private _xOffsetFinal = 0;
	private _yOffsetFinal = 0;
	private _xOffset = ((_playerPos select 0) - (_targetPos select 0));
	private _yOffset = ((_playerPos select 1) - (_targetPos select 1));
	_xOffsetFinal = ((_xOffset * OPTRE_MJOLNIR_hudCosDir) - (_yOffset * OPTRE_MJOLNIR_hudSineDir)) / OPTRE_MJOLNIR_radarXFactor;
	_yOffsetFinal = ((_xOffset * OPTRE_MJOLNIR_hudSineDir) + (_yOffset * OPTRE_MJOLNIR_hudCosDir)) / OPTRE_MJOLNIR_radarYFactor;

	private _blipWidth = 0.0061875 * _scale * safeZoneW;
	private _blipHight = 0.011 * _scale * safeZoneH;

	_pos = [((0.059297 - _xOffsetFinal) * safeZoneW) - (_blipWidth/2),(0.1045 + _yOffsetFinal) * safeZoneH - (_blipHight/2),_blipWidth,_blipHight]; // Final Position
	_pos
};

OPTRE_nearUnitsHandlerRadar = {
	private _filteredUnits = [];
	private _nearUnits = player nearEntities [["MAN","CAR","TANK","AIR","StaticWeapon"], 100];
   
  OPTRE_nearUnitsRadar = _nearUnits select {
    alive _x && vehicle _x != vehicle player && !(_x isKindOf "Animal");
  };
};
