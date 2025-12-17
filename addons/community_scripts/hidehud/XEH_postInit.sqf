["\x\ic51\addons\community_scripts\hidehud\functions\fn_HUDkeybind.sqf", "tHUD_fnc_HUDkeybind"] call CBA_fnc_compileFunction;
["\x\ic51\addons\community_scripts\hidehud\functions\fn_Mods.sqf", "tHUD_fnc_Mods"] call CBA_fnc_compileFunction;
["\x\ic51\addons\community_scripts\hidehud\functions\fn_handleACE.sqf", "tHUD_fnc_handleACE"] call CBA_fnc_compileFunction;
["\x\ic51\addons\community_scripts\hidehud\functions\fn_handleACEStam.sqf", "tHUD_fnc_handleACEStam"] call CBA_fnc_compileFunction;
["\x\ic51\addons\community_scripts\hidehud\functions\fn_handleSTUI.sqf", "tHUD_fnc_handleSTUI"] call CBA_fnc_compileFunction;
["\x\ic51\addons\community_scripts\hidehud\functions\fn_handleTFAR.sqf", "tHUD_fnc_handleTFAR"] call CBA_fnc_compileFunction;
["\x\ic51\addons\community_scripts\hidehud\functions\fn_handleDUI.sqf", "tHUD_fnc_handleDUI"] call CBA_fnc_compileFunction;

if (!hasInterface) exitWith {};

[
	"Tom Misc",
	"Hide HUD",
	"Hide HUD",
	{
		[!tHUD_hidden] call tHUD_fnc_HUDkeybind;
	},
	{},
	[0x44,[false, false, false]],
	false,
	0, 
	false
] call CBA_fnc_addKeybind;


[] call tHUD_fnc_mods;
