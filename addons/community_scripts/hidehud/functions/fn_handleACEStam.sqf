private _hide = param [0, false, [false]];

if _hide then {
    ace_advanced_fatigue_enableStaminaBar = false;
    private _staminaBarContainer = uiNamespace getVariable ["ace_advanced_fatigue_staminaBarContainer", controlNull];
    _staminaBarContainer ctrlSetFade 1;
    _staminaBarContainer ctrlCommit 0;
} else {
    ace_advanced_fatigue_enableStaminaBar = true;
    private _staminaBarContainer = uiNamespace getVariable ["ace_advanced_fatigue_staminaBarContainer", controlNull];
    _staminaBarContainer ctrlSetFade 0;
    _staminaBarContainer ctrlCommit 0;
    //2300 is AN_MAXRESERVE from ace advanced fatigue/script_component.hpp
    //[ace_advanced_fatigue_anReserve / 2300] call ace_advanced_fatigue_fnc_handleStaminaBar;
};


