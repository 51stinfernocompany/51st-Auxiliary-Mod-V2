private _hide = param [0, false, [false]];

if _hide then {
	STHud_UIMode = 0;
	STGI_Enabled = false;
	STUI_NT_MaxDrawRangeName = 0.2;
	STUI_NT_MaxDrawRangeGroup = 0.2;
	STUI_NT_MaxDrawRangeNameDead = 0.2;
	"STUI_Stamina" call STUI_Canvas_Remove;
} else {
	STHud_UIMode = tHUD_STUI_HUD;
	STGI_Enabled = tHUD_STGI;
	STUI_NT_MaxDrawRangeName = 40;
	STUI_NT_MaxDrawRangeGroup = 20;
	STUI_NT_MaxDrawRangeNameDead = 3.5;
	"STUI_Stamina" call STUI_Canvas_Add;
};
