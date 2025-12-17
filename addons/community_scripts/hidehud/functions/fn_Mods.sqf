if isNil "tHUD_mods" then {

    private _prefix = "tHUD_fnc_handle";
    tHUD_hidden = false;
    tHUD_mods = [];

    if (isClass(configFile >> "CfgPatches" >> "ace_common")) then {
        //ACE enabled
        tHUD_mods pushBack (_prefix + "ACE");
            private _settings = [] call ace_common_fnc_showHud;
            tHUD_hudACESettings = +_settings;

        if ace_advanced_fatigue_enableStaminaBar then {
            //Ace stamina bar on by default, need to toggle it on/off.
            tHUD_mods pushBack (_prefix + "ACEStam");
        };
    };


    if (isClass(configFile >> "CfgPatches" >> "stui_core")) then {
        tHUD_mods pushBack (_prefix + "STUI");
        tHUD_STUI_HUD = STHud_UIMode;
		tHUD_STGI = STGI_Enabled;
    };

    if (isClass(configFile >> "CfgPatches" >> "tfar_core")) then {
        tHUD_mods pushBack (_prefix + "TFAR");
        private _settings = [TFAR_VolumeHudTransparency,TFAR_showTransmittingHint,TFAR_showChannelChangedHint];
        tHUD_TFAR_settings = +_settings;
    };
    
    if (isClass(configFile >> "CfgPatches" >> "diwako_dui_main")) then {
        tHUD_mods pushBack (_prefix + "DUI");
    };
/*
//If I ever find a way to hide ACRE consistently.
    if (isClass(configFile >> "CfgPatches" >> "acre_main")) then {
        tHUD_mods pushBack (_prefix + "ACRE");
    };
*/

};
