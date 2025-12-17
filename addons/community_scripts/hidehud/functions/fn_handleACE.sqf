//Settings are captured at postinit in fn_Mods
private _hide = param [0, false, [false]];

if _hide then {
    ["hideHud", [false, false, false, false, false, false, false, false]] call ace_common_fnc_showHud;
} else {
	["hideHud", tHUD_hudACESettings] call ace_common_fnc_showHud;
};



