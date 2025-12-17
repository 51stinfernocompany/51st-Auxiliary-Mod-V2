#include "script_component.hpp"
class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Data_F_Decade_Loadorder"
        };
        units[] = {};
        magazines[] = {};
        weapons[] = {};
    };
};

class Extended_Preinit_EventHandlers
{
	class ic51_powered_allison_settings_init
	{
		init="execVM '\x\ic51\addons\community_scripts\shieldsystem\scripts\settings.sqf';";
	};
};
class Extended_PostInit_EventHandlers
{
	class ic51_powered_allison_init_DEV
	{
		init="execVM '\x\ic51\addons\community_scripts\shieldsystem\scripts\init.sqf';";
	};
	class ic51_powered_allison_AI_system_init_DEV
	{
		init="execVM '\x\ic51\addons\community_scripts\shieldsystem\scripts\system_AI.sqf';";
	};
};

class RscTitles
{
	class RscProgress
	{
		type=8;
		style=0;
		shadow=2;
		colorFrame[]={0,0,0,1};
		colorBar[]=
		{
			"(profilenamespace getVariable ['GUI_BCG_RGB_R',0.69])",
			"(profilenamespace getVariable ['GUI_BCG_RGB_G',0.75])",
			"(profilenamespace getVariable ['GUI_BCG_RGB_B',0.5])",
			"(profilenamespace getVariable ['GUI_BCG_RGB_A',0.8])"
		};
		texture="\A3\ui_f\data\GUI\RscCommon\RscProgress\progressbar_ca.paa";
		w=0.25;
		h=0.029999999;
	};

	class RscStructuredText
	{
		deletable = 0;
		fade = 0;
		access = 0;
		type = 13;
		idc = -1;
		style = 0;
		colorText[] = 
		{
			1,
			1,
			1,
			1
		};
		class Attributes
		{
			font = "RobotoCondensed";
			color = "#ffffff";
			colorLink = "#D09B43";
			align = "left";
			shadow = 1;
		};
		x = 0;
		y = 0;
		h = 0.035;
		w = 0.1;
		text = "";
		size = "(((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) * 1)";
		shadow = 1;
	};
	
	class RscPicture
	{
		access = 0;
		idc = -1;
		type = 0;
		style = 48;
		colorBackground[] = {0,0,0,0};
		colorText[] = {1,1,1,1};
		font = "PuristaLight";
		sizeEx = 1;
		lineSpacing = 0;
		text = "";
		fixedWidth = 0;
		shadow = 0;
	};
	
	class Default 
	{
           idd = -1;
           fadein = 0;
           fadeout = 0;
           duration = 0;
	};
	
	class RscControlsGroup
	{
		deletable = 0;
		fade = 0;
		class VScrollbar
		{
			color[] = 
			{
				0,
				0,
				0,
				0
			};
			width = 0.021;
			autoScrollEnabled = 0;
		};
		class HScrollbar
		{
			color[] = 
			{
				0,
				0,
				0,
				0
			};
			height = 0.028;
		};
		class Controls
		{
		};
		type = 15;
		idc = -1;
		x = 0;
		y = 0;
		w = 1;
		h = 1;
		shadow = 0;
		style = 16;
	};

	class RscText
	{
		deletable=0;
		fade=0;
		access=0;
		type=0;
		idc=-1;
		colorBackground[]={0,0,0,0};
		colorText[]={1,1,1,1};
		text="";
		fixedWidth=0;
		x=0;
		y=0;
		h=0.037;
		w=0.30000001;
		style=0x02;
		shadow=0;
		colorShadow[]={0,0,0,0.0};
		font="RobotoCondensed";
		SizeEx="(((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) * 1)";
		linespacing=1;
		tooltipColorText[]={1,1,1,1};
		tooltipColorBox[]={1,1,1,1};
		tooltipColorShade[]={0,0,0,0.64999998};
	};
	
	class OPTRE_SHIELD_BAR_BASE
	{
		idd=10003;
		onload="uiNamespace setVariable [""OPTRE_TAG_SHIELD"", _this select 0];";
		duration=9.9999998e+010;
		fadein = 0;
		fadeout = 0;
		class Controls
		{
			class Progress: RscProgress
			{
				color[]={0.5,0.09999998,0.09999998,0.80000001};
				colorFrame[]={0,0,0,0};
				colorBar[]={0.5,0.89999998,0.89999998,0.80000001};
				colorBackground[]={0,1,0,1};
				idc=-1;
				shadow = 1;
				texture = "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_shieldBar.paa";
				x="0.396875 * safeZoneW + safeZoneX";
				y="0.055897 * safeZoneH + safeZoneY";
				w="0.20625 * safeZoneW";
				h="0.057079 * safeZoneH";
			};
		};
	};

	class OPTRE_HUD_SYSTEMMESSAGES
	{
		idd=-1;
		name="OPTRE_gui";
		onLoad="uiNamespace setVariable ['OPTRE_HUD_SYSTEMMESSAGES', _this select 0];";
		unload="uiNamespace setVariable ['OPTRE_HUD_SYSTEMMESSAGES', nil];";
		movingEnable=1;
		fadein=0;
		fadeout=0;
		duration=9.9999998e+010;
		class Controls
		{
			class OPTRE_SYSTEMMESSAGES_CONTROLGROUP: RscControlsGroup
			{
				idc = 110863;
				x = "0.0101562 * safeZoneW + safeZoneX";
				y = "0.049 * safeZoneH + safeZoneY";
				w = "0.599062 * safeZoneW";
				h = "1.374 * safeZoneH";
				class Controls
				{
					class OPTRE_SYSTEMMESSAGES_TEXTFIELD: RscStructuredText
					{
						idc = 10863;
						text = "";
						
						x = "-5.40912e-007 * safeZoneW";
						y = "0 * safeZoneH";
						w = "1 * safeZoneW";
						h = "3 * safeZoneH";
						colorText[] = {0,0,0,1};
						style=0x02;
						colorBackground[] = {0,0,0,0};
						shadow=0;
						class Attributes
						{
							font = "RobotoCondensed";
							SizeEx="0.158 * safeZoneH";
							color = "#000000";
							colorLink = "#D09B43";
							align = "left";
							valign = "bottom";
							shadow = "false";
							shadowColor = "#ffffff";
						};
					};
				};
			};
		};
	};

	class OPTRE_MJOLNIR_OVERLAY_BASE {
		idd = -1;
		movingEnable = 0;
		onload="uiNamespace setVariable [""OPTRE_MJOLNIR_OVERLAY_BASE"", _this select 0];";
		duration=9.9999998e+010;
		fadein = 0;
		fadeout = 0;	
		name = "OPTRE_MJOLNIR_OVERLAY_BASE";
	};


	class OPTRE_HUD_INFO
	{
		idd=-1;
		name="OPTRE_HUD_INFO_GUI";
		onLoad="uiNamespace setVariable ['OPTRE_HUD_INFO_TEXT', _this select 0];";
		unload="uiNamespace setVariable ['OPTRE_HUD_INFO_TEXT', nil];";
		movingEnable=1;
		fadein=0;
		fadeout=0;
		duration=100000;
		class Controls
		{
			class OPTRE_HUD_energy_text: RscText
			{
				idc = 10860;
				text = "";
				x = "0.915078 * safeZoneW + safeZoneX";
				y = "0.89325 * safeZoneH + safeZoneY";
				w = "0.0232031 * safeZoneW";
				h = "0.02475 * safeZoneH";
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				colorShadow[]={0,0,0,0.2};
				SizeEx="0.018 * safeZoneH";
				style=0x02;
				shadow=1;
			};
			class OPTRE_HUD_grid_text: RscText
			{
				idc = 10861;
				text = "";
				x = "0.876406 * safeZoneW + safeZoneX";
				y = "0.85575 * safeZoneH + safeZoneY";
				w = "0.0489844 * safeZoneW";
				h = "0.033 * safeZoneH";
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				colorShadow[]={0,0,0,0.2};
				SizeEx="0.020 * safeZoneH";
				style=0x02;
				shadow=1;
			};
			class OPTRE_HUD_direction_text: RscText
			{
				idc = 10862;
				text = "";
				x = "0.929258 * safeZoneW + safeZoneX";
				y = "0.82625 * safeZoneH + safeZoneY";
				w = "0.0283594 * safeZoneW";
				h = "0.033 * safeZoneH";
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				colorShadow[]={0,0,0,0.2};
				SizeEx="0.032 * safeZoneH";
				style=0x01;
				shadow=1;
			};
			class OPTRE_HUD_range_text: RscText
			{
				idc = 10863;
				text = "";
				x = "0.929258 * safeZoneW + safeZoneX";
				y = "0.85575 * safeZoneH + safeZoneY";
				w = "0.0283594 * safeZoneW";
				h = "0.033 * safeZoneH";
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				colorShadow[]={0,0,0,0.2};
				SizeEx="0.020 * safeZoneH";
				style=0x02;
				shadow=1;
			};
			class OPTRE_HUD_ammo_text: RscText
			{
				idc = 10864;
				text = "";
				x = "0.881828 * safeZoneW + safeZoneX";
				y = "0.82625 * safeZoneH + safeZoneY";
				w = "0.0283594 * safeZoneW";
				h = "0.033 * safeZoneH";
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				colorShadow[]={0,0,0,0.2};
				SizeEx="0.05 * safeZoneH";
				style=0x01;
				shadow=1;
			};
			class OPTRE_HUD_magazines_text: RscText
			{
				idc = 10865;
				text = "";
				x = "0.905028 * safeZoneW + safeZoneX";
				y = "0.82925 * safeZoneH + safeZoneY";
				w = "0.020625 * safeZoneW";
				h = "0.022 * safeZoneH";
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				colorShadow[]={0,0,0,0.2};
				SizeEx="0.038 * safeZoneH";
				style=0x00;
				shadow=1;
			};

			class OPTRE_fireMode_text: RscText
			{
				idc = 10866;
				text = ""; //--- ToDo: Localize;
				x = "0.905028 * safeZoneW + safeZoneX";
				y = "0.82925 * safeZoneH + safeZoneY";
				w = "0.020625 * safeZoneW";
				h = "0.022 * safeZoneH";
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				colorShadow[]={0,0,0,0.2};
				SizeEx="0.015 * safeZoneH";
				style=0x01;
				shadow=1;
			};
			class OPTRE_grenadeName_text: RscText
			{
				idc = 10867;
				text = ""; //--- ToDo: Localize;
				x = "0.905028 * safeZoneW + safeZoneX";
				y = "0.82925 * safeZoneH + safeZoneY";
				w = "0.020625 * safeZoneW";
				h = "0.022 * safeZoneH";
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				colorShadow[]={0,0,0,0.2};
				SizeEx="0.010 * safeZoneH";
				style=0x00;
				shadow=1;
			};
			class OPTRE_GrenadeAmount_text: RscText
			{
				idc = 10868;
				text = ""; //--- ToDo: Localize;
				x = "0.905028 * safeZoneW + safeZoneX";
				y = "0.82925 * safeZoneH + safeZoneY";
				w = "0.020625 * safeZoneW";
				h = "0.022 * safeZoneH";
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				colorShadow[]={0,0,0,0.2};
				SizeEx="0.028 * safeZoneH";
				style=0x02;
				shadow=1;
			};
			class OPTRE_rangedTo_text: RscText
			{
				idc = 10869;
				text = ""; //--- ToDo: Localize;
				x = "0.905028 * safeZoneW + safeZoneX";
				y = "0.82925 * safeZoneH + safeZoneY";
				w = "0.020625 * safeZoneW";
				h = "0.022 * safeZoneH";
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				colorShadow[]={0,0,0,0.2};
				SizeEx="0.015 * safeZoneH";
				style=0x01;
				shadow=1;
			};
		};
	};

	class OPTRE_HUD_BOOTUP
	{
		idd=-1;
		name="OPTRE_gui";
		onLoad="uiNamespace setVariable ['OPTRE_HUD_BOOTUP', _this select 0];";
		unload="uiNamespace setVariable ['OPTRE_HUD_BOOTUP', nil];";
		movingEnable=1;
		fadein=0;
		fadeout=0;
		duration=9.9999998e+010;
		class Controls
		{
			class OPTRE_BOOTUP_TEXTFIELD: RscStructuredText
			{
				idc = 10263;
				text = "";
				
				x = "0.368516 * safeZoneW + safeZoneX";
				y = "0.3735 * safeZoneH + safeZoneY";
				w = "0.306797 * safeZoneW";
				h = "0.1925 * safeZoneH";
				colorText[] = {1,1,1,1};
				style=0x02;
				colorBackground[] = {0,0,0,0};
				shadow=0;
				class Attributes
				{
					font = "RobotoCondensed";
					SizeEx = "0.03 * safeZoneH";
					color = "#000000";
					colorLink = "#D09B43";
					align = "left";
					valign = "bottom";
					shadow = "false";
					shadowColor = "#000000";
				};
			};
			class OPTRE_BOOTUP_HEADLINE: RscText
			{
				idc = 10264;
				text = ""; //--- ToDo: Localize;
				x = "0.905028 * safeZoneW + safeZoneX";
				y = "0.82925 * safeZoneH + safeZoneY";
				w = "0.020625 * safeZoneW";
				h = "0.022 * safeZoneH";
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				colorShadow[]={0,0,0,0};
				SizeEx="0.055 * safeZoneH";
				style=0x02;
				shadow=0;
			};
		};
	};
	class OPTRE_MJOLNIR_RADAR {
	
		idd = -1; 
		duration=9.9999998e+010;
		onLoad = "uiNamespace setVariable [""OPTRE_MJOLNIR_RADAR"", _this select 0];";
		class controls {
			class OPTRE_MJOLNIR_radarControl: RscControlsGroup
			{
				idc = 500;
				x = "0.0153125 * safeZoneW + safeZoneX";
				y = "0.7695 * safeZoneH + safeZoneY";
				w = "0.118594 * safeZoneW";
				h = "0.209 * safeZoneH";
			};	
		};
	};
};

class CfgSounds
{
	class OPTRE_typing_1
	{
		sound[]=
		{
			"\x\ic51\addons\community_scripts\shieldsystem\sounds\typing_1.ogg",
			0.3,
			1
		};
		titles[]={};
	};
	class OPTRE_MjolnirShieldBootUp
	{
		name="OPTRE_MjolnirShieldBootUp";
		sound[]=
		{
			"\x\ic51\addons\community_scripts\shieldsystem\sounds\shield_start.ogg",
			1,
			1
		};
		titles[]={};
	};
	class OPTRE_MjolnirShieldBroken
	{
		name="OPTRE_MjolnirShieldBroken";
		sound[]=
		{
			"\x\ic51\addons\community_scripts\shieldsystem\sounds\shield_broken.ogg",
			1,
			1
		};
		titles[]={};
	};
	class OPTRE_MjolnirShieldRecharge
	{
		name="OPTRE_MjolnirShieldRecharge";
		sound[]=
		{
			"\x\ic51\addons\community_scripts\shieldsystem\sounds\shield.ogg",
			1,
			1
		};
		titles[]={};
	};
	class OPTRE_MjolnirShieldLow
	{
		name="OPTRE_MjolnirShieldLow";
		sound[]=
		{
			"\x\ic51\addons\community_scripts\shieldsystem\sounds\OPTRE_MJOLNIR_shieldLow.ogg",
			20,
			1
		};
		titles[]={};
	};
	class OPTRE_MjolnirHitSound
	{
		name="OPTRE_MjolnirHitSound";
		sound[]=
		{
			"\x\ic51\addons\community_scripts\shieldsystem\sounds\OPTRE_MJOLNIR_hitSound.wss",
			20,
			1
		};
		titles[]={};
	};
};

#include "selfinteraction.hpp"
