if !(hasInterface) exitWith {};

//Current Issues
//ACRE

private _hide = param [0, false, [false]];

showChat !_hide;
showHUD _hide;

if _hide then {hintSilent "";};

{
    private _code = format ["[%1] call %2",_hide,_x];
    call compile _code;
} forEach tHUD_mods;

tHUD_hidden = _hide;
