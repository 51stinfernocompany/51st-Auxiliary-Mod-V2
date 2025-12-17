//if (isClass(configFile >> "CfgPatches" >> "OPTRE_Suit_Scripts_DEV")) exitWith {};
//CBA SETTINGS FOR POWERED MJOLNIR

[
    "ic51_allison_start_on_init",
    "CHECKBOX",
    ["Start System on Mission Start","Turns on the system when a player loads in or Respawns."],
    ["OPTRE Powered MJOLNIR","1. General Settings"],
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_show_activate",
    "CHECKBOX",
    ["Show Activate Suit Option","Only necessary if the system doesn't start on mission init."],
    ["OPTRE Powered MJOLNIR","1. General Settings"],
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_show_deactivate",
    "CHECKBOX",
    "Show Deactivate Suit Option",
    ["OPTRE Powered MJOLNIR","1. General Settings"],
    False,
    False,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_allow_lowlight_setting",
    "CHECKBOX",
    ["Allow Low Light Mode","Default control to change sensitivity is Shift + Arrow Key Up/Down."],
    ["OPTRE Powered MJOLNIR","1. General Settings"],
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_allow_targeting_setting",
    "CHECKBOX",
    ["Allow ifF Markers","Allow the hud to identifiy friendlies and hostiles with markers in 3D space."],
    ["OPTRE Powered MJOLNIR","1. General Settings"],
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_targeting_interval_range_setting",
    "SLIDER",
    ["ifF Range Adjust Interval","Default control to change range is Shift + Arrow Key Left/Right."],
    ["OPTRE Powered MJOLNIR","1. General Settings"],
    [1,1000,100,0],
    True,
    {ic51_allison_targeting_interval_range = round(ic51_allison_targeting_interval_range_setting)}
] call CBA_fnc_addSetting;

[
    "ic51_allison_targeting_max_range_setting",
    "SLIDER",
    "ifF Maximum Range",
    ["OPTRE Powered MJOLNIR","1. General Settings"],
    [10,1000,1000,0],
    True,
    {ic51_allison_targeting_max_range = round(ic51_allison_targeting_max_range_setting)}
] call CBA_fnc_addSetting;

[
    "ic51_allison_targeting_min_range_setting",
    "SLIDER",
    "ifF Minimum Range",
    ["OPTRE Powered MJOLNIR","1. General Settings"],
    [10,1000,100,0],
    True,
    {ic51_allison_targeting_min_range = round(ic51_allison_targeting_min_range_setting)}
] call CBA_fnc_addSetting;

[
    "ic51_allison_increased_speed",
    "CHECKBOX",
    "Increased Speed",
    ["OPTRE Powered MJOLNIR","1. General Settings"],
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_speed_modifier",
    "SLIDER",
    "Speed Modifier",
    ["OPTRE Powered MJOLNIR","1. General Settings"],
    [1,5,1.3,1],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_suppress_recoil",
    "CHECKBOX",
    "Suppress Recoil",
    ["OPTRE Powered MJOLNIR","1. General Settings"],
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_recoil_modifier",
    "SLIDER",
    "Recoil Modifier",
    ["OPTRE Powered MJOLNIR","1. General Settings"],
    [0,1,0.3,1],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_suits_setting",
    "EDITBOX",
    "Vests With Activate Option",
    ["OPTRE Powered MJOLNIR","1. General Settings"],
    "OPTRE_Grunt_Shield,OPTRE_MJOLNIR_Mk4Armor,OPTRE_MJOLNIR_Mk4Armor_Blue,OPTRE_MJOLNIR_Mk4Armor_Red,OPTRE_FC_MJOLNIR_MKV_Armor,OPTRE_FC_MJOLNIR_MKV_Armor_Black,OPTRE_FC_MJOLNIR_MKV_Armor_117,OPTRE_FC_MJOLNIR_MKV_Armor_Caboose,OPTRE_FC_MJOLNIR_MKV_Armor_Freeman,OPTRE_FC_MJOLNIR_MKV_Armor_Church,OPTRE_FC_MJOLNIR_MKV_Armor_Donut,OPTRE_FC_MJOLNIR_MKV_Armor_Simmons,OPTRE_FC_MJOLNIR_MKV_Armor_Night,OPTRE_FC_MJOLNIR_MKV_Armor_Olive,OPTRE_FC_MJOLNIR_MKV_Armor_Grif,OPTRE_FC_MJOLNIR_MKV_Armor_Sarge,OPTRE_FC_MJOLNIR_MKV_Armor_Tucker,OPTRE_MJOLNIR_MkVBArmor,OPTRE_FC_MJOLNIR_Mark_VI_Armor,OPTRE_FC_MJOLNIR_Mark_VI_Armor_White,OPTRE_FC_MJOLNIR_Mark_VI_Armor_Olive,OPTRE_FC_MJOLNIR_Mark_VI_Armor_Tan,OPTRE_FC_MJOLNIR_Mark_VI_Armor_Tex,OPTRE_FC_MJOLNIR_Mark_VI_Armor_Caboose,OPTRE_FC_MJOLNIR_Mark_VI_Armor_Church,OPTRE_FC_MJOLNIR_Mark_VI_Armor_Tucker,OPTRE_FC_MJOLNIR_Mark_VI_Armor_Donut,OPTRE_FC_MJOLNIR_Mark_VI_Armor_Grif,OPTRE_FC_MJOLNIR_Mark_VI_Armor_Simmons,OPTRE_FC_MJOLNIR_Mark_VI_Armor_Sarge,OPTRE_FC_MJOLNIR_Mark_VI_Armor_Kaikaina,OPTRE_FC_MJOLNIR_Mark_VI_Armor_Lopez,OPTRE_FC_MJOLNIR_Mark_VI_Armor_Doc,OPTRE_FC_MJOLNIR_Mark_VI_Armor_North,OPTRE_FC_MJOLNIR_Mark_VI_Armor_South,OPTRE_FC_MJOLNIR_Mark_VI_Armor_York,OPTRE_FC_MJOLNIR_Mark_VI_Armor_Washington,OPTRE_FC_Elite_Armor_FieldMarshal,OPTRE_FC_Elite_Armor_HonorGuard_Ultra,OPTRE_FC_Elite_Armor_HonorGuard,OPTRE_FC_Elite_Armor_Major,OPTRE_FC_Elite_Armor_Officer,OPTRE_FC_Elite_Armor_Minor,OPTRE_FC_Elite_Armor_SpecOps,OPTRE_FC_Elite_Armor_Ultra,OPTRE_FC_Elite_Armor_Zealot,OPTRE_MJOLNIR_MkVBArmor2,OPTRE_MJOLNIR_MkVBArmor3,OPTRE_MJOLNIR_MkVBArmor4,OPTRE_MJOLNIR_MkVBArmor5,OPTRE_MJOLNIR_MkVBArmor6,OPTRE_MJOLNIR_MkVBArmor7,OPTRE_MJOLNIR_MkVBArmor8,OPTRE_MJOLNIR_MkVBArmor_FJPARA1,OPTRE_MJOLNIR_MkVBArmor_FJPARA2,OPTRE_MJOLNIR_MkVBArmor_FJPARA3,OPTRE_MJOLNIR_MkVBArmor_FJPARA4,OPTRE_MJOLNIR_MkVBArmor_FJPARA5,OPTRE_MJOLNIR_MkVBArmor_FJPARA6,OPTRE_MJOLNIR_MkVBArmor_FJPARA7,OPTRE_MJOLNIR_MkVBArmor_FJPARA8,OPTRE_MJOLNIR_MkVBArmor_FJPARA9,OPTRE_MJOLNIR_MkVBArmor_Commando,OPTRE_MJOLNIR_MkVBArmor_Commando2,OPTRE_MJOLNIR_MkVBArmor_Commando3,OPTRE_MJOLNIR_MkVBArmor_Commando4,OPTRE_MJOLNIR_MkVBArmor_Commando5,OPTRE_MJOLNIR_MkVBArmor_Commando6,OPTRE_MJOLNIR_MkVBArmor_Commando7,OPTRE_MJOLNIR_MkVBArmor_Commando8,OPTRE_MJOLNIR_MkVBArmor_MkV,OPTRE_MJOLNIR_MkVBArmor_MkV2,OPTRE_MJOLNIR_MkVBArmor_MkV3,OPTRE_MJOLNIR_MkVBArmor_MkV4,OPTRE_MJOLNIR_MkVBArmor_MkV5,OPTRE_MJOLNIR_MkVBArmor_MkV6,OPTRE_MJOLNIR_MkVBArmor_MkV7,OPTRE_MJOLNIR_MkVBArmor_MkV8,OPTRE_MJOLNIR_MkVBArmor_Red,OPTRE_MJOLNIR_MkVBArmor_Blue,OPTRE_MJOLNIR_MkVBArmor_Black,OPTRE_MJOLNIR_MkVBArmor_Default,OPTRE_MJOLNIR_MkVBArmor_Default2,OPTRE_MJOLNIR_MkVBArmor_Default3,OPTRE_MJOLNIR_MkVBArmor_Default4,OPTRE_MJOLNIR_MkVBArmor_Default5,OPTRE_MJOLNIR_MkVBArmor_Default6,OPTRE_MJOLNIR_MkVBArmor_Default7,OPTRE_MJOLNIR_MkVBArmor_Default8,OPTRE_MJOLNIR_MkVBArmor_Default9,OPTRE_MJOLNIR_MkVBArmor_Default10,OPTRE_MJOLNIR_MkVBArmor_Default11,OPTRE_MJOLNIR_MkVBArmor_Default_Black,OPTRE_MJOLNIR_MkVBArmor_Default_Red,OPTRE_MJOLNIR_MkVBArmor_Default_Blue,OPTRE_MJOLNIR_MkVBArmor_Grenadier,OPTRE_MJOLNIR_MkVBArmor_Grenadier2,OPTRE_MJOLNIR_MkVBArmor_Grenadier3,OPTRE_MJOLNIR_MkVBArmor_Grenadier4,OPTRE_MJOLNIR_MkVBArmor_Grenadier5,OPTRE_MJOLNIR_MkVBArmor_Grenadier6,OPTRE_MJOLNIR_MkVBArmor_Grenadier7,OPTRE_MJOLNIR_MkVBArmor_Grenadier8,OPTRE_MJOLNIR_MkVBArmor_Grenadier9,OPTRE_MJOLNIR_MkVBArmor_CQC,OPTRE_MJOLNIR_MkVBArmor_CQC2,OPTRE_MJOLNIR_MkVBArmor_CQC3,OPTRE_MJOLNIR_MkVBArmor_CQC4,OPTRE_MJOLNIR_MkVBArmor_CQC5,OPTRE_MJOLNIR_MkVBArmor_CQC6,OPTRE_MJOLNIR_MkVBArmor_CQC7,OPTRE_MJOLNIR_MkVBArmor_CQC8,OPTRE_MJOLNIR_MkVBArmor_CQC9,OPTRE_MJOLNIR_MkVBArmor_CQC10,OPTRE_MJOLNIR_MkVBArmor_CQC11,OPTRE_MJOLNIR_MkVBArmor_CQC12,OPTRE_MJOLNIR_MkVBArmor_CQC13,OPTRE_MJOLNIR_MkVBArmor_CQC14,OPTRE_MJOLNIR_MkVBArmor_FJPARA_Knees,OPTRE_MJOLNIR_MkVBArmor_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_FJPARA_Knees3,OPTRE_MJOLNIR_MkVBArmor_FJPARA_Knees4,OPTRE_MJOLNIR_MkVBArmor_FJPARA_Knees5,OPTRE_MJOLNIR_MkVBArmor_FJPARA_Knees6,OPTRE_MJOLNIR_MkVBArmor_Collar_Gren_UA,OPTRE_MJOLNIR_MkVBArmor_Collar_Gren_UA2,OPTRE_MJOLNIR_MkVBArmor_Collar_Gren_UA3,OPTRE_MJOLNIR_MkVBArmor_Collar_Gren_UA4,OPTRE_MJOLNIR_MkVBArmor_Collar_Gren_UA5,OPTRE_MJOLNIR_MkVBArmor_Collar_Gren_UA6OPTRE_MJOLNIR_MkVBArmor_ParaCQC_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_ParaCommando_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_ParaGrenadier_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_ParaMarkV_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_ParaSecurity_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_ParaCQC_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_ParaCommando_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_ParaGrenadier_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_ParaMarkV_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_ParaSecurity_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_CQCPara_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_CQCCommando_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_CQCGrenadier_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_CQCMarkV_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_CQCSecurity_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_CQCPara_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_CQCCommando_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_CQCGrenadier_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_CQCMarkV_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_CQCSecurity_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_CommandoPara_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_CommandoCQC_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_CommandoGrenadier_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_CommandoMarkV_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_CommandoSecurity_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_CommandoPara_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_CommandoCQC_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_CommandoGrenadier_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_CommandoMarkV_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_CommandoSecurity_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_GrenadierPara_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_GrenadierCQC_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_GrenadierCommando_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_GrenadierMarkV_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_GrenadierSecurity_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_GrenadierPara_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_GrenadierCQC_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_GrenadierCommando_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_GrenadierMarkV_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_GrenadierSecurity_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_MarkVPara_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_MarkVCQC_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_MarkVCommando_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_MarkVGrenadier_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_MarkVSecurity_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_MarkVPara_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_MarkVCQC_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_MarkVCommando_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_MarkVGrenadier_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_MarkVSecurity_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_SecurityPara_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_SecurityCQC_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_SecurityCommando_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_SecurityGrenadier_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_SecurityMarkV_FJPARA_Knees1,OPTRE_MJOLNIR_MkVBArmor_SecurityPara_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_SecurityCQC_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_SecurityCommando_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_SecurityGrenadier_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_SecurityMarkV_FJPARA_Knees2,OPTRE_MJOLNIR_MkVBArmor_ParaCQC_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_ParaCommando_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_ParaGrenadier_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_ParaMarkV_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_ParaSecurity_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_ParaCQC_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_ParaCommando_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_ParaGrenadier_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_ParaMarkV_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_ParaSecurity_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_CQCPara_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_CQCCommando_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_CQCGrenadier_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_CQCMarkV_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_CQCSecurity_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_CQCPara_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_CQCCommando_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_CQCGrenadier_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_CQCMarkV_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_CQCSecurity_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_CommandoPara_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_CommandoCQC_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_CommandoGrenadier_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_CommandoMarkV_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_CommandoSecurity_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_CommandoPara_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_CommandoCQC_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_CommandoGrenadier_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_CommandoMarkV_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_CommandoSecurity_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_GrenadierPara_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_GrenadierCQC_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_GrenadierCommando_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_GrenadierMarkV_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_GrenadierSecurity_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_GrenadierPara_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_GrenadierCQC_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_GrenadierCommando_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_GrenadierMarkV_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_GrenadierSecurity_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_MarkVPara_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_MarkVCQC_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_MarkVCommando_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_MarkVGrenadier_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_MarkVSecurity_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_MarkVPara_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_MarkVCQC_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_MarkVCommando_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_MarkVGrenadier_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_MarkVSecurity_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_SecurityPara_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_SecurityCQC_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_SecurityCommando_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_SecurityGrenadier_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_SecurityMarkV_FJPARA_Knees_Collar1,OPTRE_MJOLNIR_MkVBArmor_SecurityPara_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_SecurityCQC_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_SecurityCommando_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_SecurityGrenadier_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_SecurityMarkV_FJPARA_Knees_Collar2,OPTRE_MJOLNIR_MkVBArmor_FJPARA_Collar,OPTRE_MJOLNIR_MkVBArmor_Commando_Collar,OPTRE_MJOLNIR_MkVBArmor_MkV_Collar,OPTRE_MJOLNIR_MkVBArmor_Grenadier_Collar,OPTRE_MJOLNIR_MkVBArmor_CQC_Collar,OPTRE_MJOLNIR_MkVBArmor2_Collar,OPTRE_MJOLNIR_MkVBArmor_FJPARA_Knees_CollarBase,OPTRE_MJOLNIR_MkVBArmor_Commando_Knees_CollarBase,OPTRE_MJOLNIR_MkVBArmor_MkV_Knees_CollarBase,OPTRE_MJOLNIR_MkVBArmor_Grenadier_Knees_CollarBase,OPTRE_MJOLNIR_MkVBArmor_CQC_Knees_CollarBase,OPTRE_MJOLNIR_MkVBArmor2_Knees_CollarBase,OPTRE_MJOLNIR_MkVBArmor_ParaCQC_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_ParaCommando_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_ParaGrenadier_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_ParaMarkV_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_ParaSecurity_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_ParaCQC_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_ParaCommando_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_ParaGrenadier_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_ParaMarkV_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_ParaSecurity_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_CQCPara_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_CQCCommando_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_CQCGrenadier_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_CQCMarkV_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_CQCSecurity_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_CQCPara_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_CQCCommando_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_CQCGrenadier_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_CQCMarkV_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_CQCSecurity_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_CommandoPara_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_CommandoCQC_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_CommandoGrenadier_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_CommandoMarkV_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_CommandoSecurity_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_CommandoPara_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_CommandoCQC_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_CommandoGrenadier_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_CommandoMarkV_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_CommandoSecurity_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_GrenadierPara_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_GrenadierCQC_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_GrenadierCommando_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_GrenadierMarkV_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_GrenadierSecurity_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_GrenadierPara_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_GrenadierCQC_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_GrenadierCommando_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_GrenadierMarkV_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_GrenadierSecurity_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_MarkVPara_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_MarkVCQC_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_MarkVCommando_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_MarkVGrenadier_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_MarkVSecurity_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_MarkVPara_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_MarkVCQC_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_MarkVCommando_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_MarkVGrenadier_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_MarkVSecurity_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_SecurityPara_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_SecurityCQC_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_SecurityCommando_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_SecurityGrenadier_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_SecurityMarkV_FJPARA_Collar1,OPTRE_MJOLNIR_MkVBArmor_SecurityPara_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_SecurityCQC_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_SecurityCommando_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_SecurityGrenadier_FJPARA_Collar2,OPTRE_MJOLNIR_MkVBArmor_SecurityMarkV_FJPARA_Collar2",
    True,
    {
		optre_powered_suits = ic51_allison_suits_setting splitString ",";
	}
] call CBA_fnc_addSetting;

[
    "ic51_allison_jump_suits_setting",
    "EDITBOX",
    "Uniforms That Allow Jumping",
    ["OPTRE Powered MJOLNIR","1. General Settings"],
    "OPTRE_MJOLNIR_Undersuit,OPTRE_MJOLNIR_Dress_Uniform,OPTRE_FC_MJOLNIR_MKVI_Undersuit,OPTRE_FC_Elite_CombatSkin",
    True,
    {
		optre_jump_enabled_suits = ic51_allison_jump_suits_setting splitString ",";
	}
] call CBA_fnc_addSetting;

[
    "ic51_allison_powered_helmets",
    "EDITBOX",
    "Helmets With MarkIV Hud",
    ["OPTRE Powered MJOLNIR","1. General Settings"],
    "OPTRE_MJOLNIR_Mk4Helmet,OPTRE_MJOLNIR_Mk4Helmet_Blue,OPTRE_MJOLNIR_Mk4Helmet_Red,OPTRE_FC_MJOLNIR_MKV_Helmet,OPTRE_FC_MJOLNIR_MKV_Helmet_Black,OPTRE_FC_MJOLNIR_MKV_Helmet_117,OPTRE_FC_MJOLNIR_MKV_Helmet_Caboose,OPTRE_FC_MJOLNIR_MKV_Helmet_Freeman,OPTRE_FC_MJOLNIR_MKV_Helmet_Church,OPTRE_FC_MJOLNIR_MKV_Helmet_Donut,OPTRE_FC_MJOLNIR_MKV_Helmet_Simmons,OPTRE_FC_MJOLNIR_MKV_Helmet_Night,OPTRE_FC_MJOLNIR_MKV_Helmet_Olive,OPTRE_FC_MJOLNIR_MKV_Helmet_Grif,OPTRE_FC_MJOLNIR_MKV_Helmet_Sarge,OPTRE_FC_MJOLNIR_MKV_Helmet_Tucker,OPTRE_MJOLNIR_MkVBHelmet,OPTRE_MJOLNIR_MkVBHelmet_UA,OPTRE_MJOLNIR_MkVBHelmet_UA_HUL,OPTRE_MJOLNIR_MkVBHelmet_Red,OPTRE_MJOLNIR_MkVBHelmet_Blue,OPTRE_MJOLNIR_MkVBHelmet_Black,OPTRE_MJOLNIR_Commando,OPTRE_MJOLNIR_Commando_HUL3,OPTRE_MJOLNIR_Commando_DefaultV_HUL3,OPTRE_MJOLNIR_Commando_SilverV_HUL3,OPTRE_MJOLNIR_Commando_BlueV_HUL3,OPTRE_MJOLNIR_Commando_BlackV_HUL3,OPTRE_MJOLNIR_Commando_Black_HUL3,OPTRE_MJOLNIR_Commando_Black_DefaultV_HUL3,OPTRE_MJOLNIR_Commando_Black_SilverV_HUL3,OPTRE_MJOLNIR_Commando_Black_BlueV_HUL3,OPTRE_MJOLNIR_Commando_Black_BlackV_HUL3,OPTRE_MJOLNIR_Commando_Blue_HUL3,OPTRE_MJOLNIR_Commando_Blue_DefaultV_HUL3,OPTRE_MJOLNIR_Commando_Blue_SilverV_HUL3,OPTRE_MJOLNIR_Commando_Blue_BlueV_HUL3,OPTRE_MJOLNIR_Commando_Blue_BlackV_HUL3,OPTRE_MJOLNIR_Commando_Red_HUL3,OPTRE_MJOLNIR_Commando_Red_DefaultV_HUL3,OPTRE_MJOLNIR_Commando_Red_SilverV_HUL3,OPTRE_MJOLNIR_Commando_Red_BlueV_HUL3,OPTRE_MJOLNIR_Commando_Red_BlackV_HUL3,OPTRE_MJOLNIR_MkVBHelmet_BLKV,OPTRE_MJOLNIR_MkVBHelmet_BLUV,OPTRE_MJOLNIR_MkVBHelmet_SLVV,OPTRE_MJOLNIR_MkVBHelmet_Black_SLVV,OPTRE_MJOLNIR_Commando_DefaultV,OPTRE_MJOLNIR_Commando_SilverV,OPTRE_MJOLNIR_Commando_BlueV,OPTRE_MJOLNIR_Commando_BlackV,OPTRE_MJOLNIR_Commando_Black,OPTRE_MJOLNIR_Commando_Black_DefaultV,OPTRE_MJOLNIR_Commando_Black_SilverV,OPTRE_MJOLNIR_Commando_Black_BlueV,OPTRE_MJOLNIR_Commando_Black_BlackV,OPTRE_MJOLNIR_Commando_Blue,OPTRE_MJOLNIR_Commando_Blue_DefaultV,OPTRE_MJOLNIR_Commando_Blue_SilverV,OPTRE_MJOLNIR_Commando_Blue_BlueV,OPTRE_MJOLNIR_Commando_Blue_BlackV,OPTRE_MJOLNIR_Commando_Red,OPTRE_MJOLNIR_Commando_Red_DefaultV,OPTRE_MJOLNIR_Commando_Red_SilverV,OPTRE_MJOLNIR_Commando_Red_BlueV,OPTRE_MJOLNIR_Commando_Red_BlackV,OPTRE_MJOLNIR_CQB,OPTRE_MJOLNIR_CQC,OPTRE_MJOLNIR_Pilot,OPTRE_MJOLNIR_Operator,OPTRE_MJOLNIR_EOD,OPTRE_MJOLNIR_ODST,OPTRE_FC_MJOLNIR_Mark_VI_Helmet,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_White,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_Olive,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_Tan,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_Tex,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_Caboose,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_Church,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_Donut,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_Grif,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_Simmons,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_Sarge,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_Kaikaina,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_Lopez,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_Doc,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_North,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_South,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_York,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_Washington,OPTRE_FC_MJOLNIR_Mark_VI_Helmet_Tucker,OPTRE_MJOLNIR_EVAHelmet,OPTRE_MJOLNIR_EVAHelmet_Emily,OPTRE_MJOLNIR_MPHelmet,OPTRE_MJOLNIR_ReconHelmet,OPTRE_FC_Elite_Helmet_FieldMarshal,OPTRE_FC_Elite_Helmet_HonorGuard_Ultra,OPTRE_FC_Elite_Helmet_HonorGuard,OPTRE_FC_Elite_Helmet_Major,OPTRE_FC_Elite_Helmet_Officer,OPTRE_FC_Elite_Helmet_Minor,OPTRE_FC_Elite_Helmet_SpecOps,OPTRE_FC_Elite_Helmet_Ultra,OPTRE_FC_Elite_Helmet_Zealot",
    True,
    {
		optre_powered_suits_helmets = ic51_allison_powered_helmets splitString ",";
	}
] call CBA_fnc_addSetting;

[
    "ic51_allison_overwrite_config_shield",
    "CHECKBOX",
    ["Overwrite Config Shield Values","Overwrite shield values defined in the config of a suit with the ones from the settings menu. Suits that have the 'MJOLNIR_isArmor' variable will still have the system running on them even if they are not in the armor array!"],
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    False,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_enable_sparks_hit",
    "CHECKBOX",
    "Sparks On Hit",
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_enable_sparks_shield",
    "CHECKBOX",
    "Sparks When Shield Depleted",
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_shield_energy",
    "SLIDER",
    "player Shield Value",
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    [50,1000,100,0],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_shield_regen",
    "SLIDER",
    ["player Shield Regen Value","How much shield energy gets recharged every interval."],
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    [0.5,100,1,1],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_shield_delay",
    "SLIDER",
    ["player Shield Regen Delay","Only affects players. Best to leave this at 0.1 as this also affects how quick the shield depletes after energy hits 0."],
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    [0.01,10,0.1,2],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_activate_ai",
    "CHECKBOX",
    "Shields On AI",
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_shield_energy_AI",
    "SLIDER",
    "AI Shield Value",
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    [50,1000,100,0],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_shield_regen_AI",
    "SLIDER",
    ["AI Shield Regen Value","How much shield energy gets recharged every interval."],
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    [0.5,10,1,1],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_shield_modifier_1",
    "SLIDER",
    "Shield Strength Modifier 1",
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    [0.1,10,1,1],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_shield_modifier_suits_1",
    "EDITBOX",
    "Vests with Shield Modifier 1",
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    "OPTRE_FC_Elite_Armor_Minor,OPTRE_Grunt_Shield",
    True,
    {
		ic51_allison_shield_modifier_suits_1 = ic51_allison_shield_modifier_suits_1 splitString ",";
	}
] call CBA_fnc_addSetting;

[
    "ic51_allison_shield_modifier_2",
    "SLIDER",
    "Shield Strength Modifier 2",
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    [0.1,10,1.5,1],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_shield_modifier_suits_2",
    "EDITBOX",
    "Vests with Shield Modifier 2",
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    "OPTRE_FC_Elite_Armor_Major,OPTRE_FC_Elite_Armor_SpecOps,OPTRE_FC_Elite_Armor_Officer",
    True,
    {
		ic51_allison_shield_modifier_suits_2 = ic51_allison_shield_modifier_suits_2 splitString ",";
	}
] call CBA_fnc_addSetting;

[
    "ic51_allison_shield_modifier_3",
    "SLIDER",
    "Shield Strength Modifier 3",
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    [0.1,10,2,1],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_shield_modifier_suits_3",
    "EDITBOX",
    "Vests with Shield Modifier 3",
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    "OPTRE_FC_Elite_Armor_Ultra",
    True,
    {
		ic51_allison_shield_modifier_suits_3 = ic51_allison_shield_modifier_suits_3 splitString ",";
	}
] call CBA_fnc_addSetting;

[
    "ic51_allison_shield_modifier_4",
    "SLIDER",
    "Shield Strength Modifier 4",
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    [0.1,10,2.5,1],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_shield_modifier_suits_4",
    "EDITBOX",
    "Vests with Shield Modifier 4",
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    "OPTRE_FC_Elite_Armor_Zealot,OPTRE_FC_Elite_Armor_FieldMarshal",
    True,
    {
		ic51_allison_shield_modifier_suits_4 = ic51_allison_shield_modifier_suits_4 splitString ",";
	}
] call CBA_fnc_addSetting;

[
    "ic51_allison_shield_modifier_4",
    "SLIDER",
    "Shield Strength Modifier 5",
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    [0.1,10,3,1],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_shield_modifier_suits_5",
    "EDITBOX",
    "Vests with Shield Modifier 5",
    ["OPTRE Powered MJOLNIR","2. Shield Settings"],
    "OPTRE_FC_Elite_Armor_HonorGuard,OPTRE_FC_Elite_Armor_HonorGuard_Ultra",
    True,
    {
		ic51_allison_shield_modifier_suits_5 = ic51_allison_shield_modifier_suits_5 splitString ",";
	}
] call CBA_fnc_addSetting;

[
    "ic51_allison_enable_jump",
    "CHECKBOX",
    "Enable Jumping",
    ["OPTRE Powered MJOLNIR","3. Jump Settings"],
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_prevent_falldamage",
    "CHECKBOX",
    "Prevent Falldamage",
    ["OPTRE Powered MJOLNIR","3. Jump Settings"],
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_camshake",
    "CHECKBOX",
    "Enable Landing Camshake",
    ["OPTRE Powered MJOLNIR","3. Jump Settings"],
    True,
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_jump_forward",
    "SLIDER",
    "Jump Forward Force Factor",
    ["OPTRE Powered MJOLNIR","3. Jump Settings"],
    [0.1,10,3,1],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_jump_up_high",
    "SLIDER",
    "High Jump Up Force Factor",
    ["OPTRE Powered MJOLNIR","3. Jump Settings"],
    [0.1,10,3,1],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_jump_up_low",
    "SLIDER",
    "Low Jump Up Force Factor",
    ["OPTRE Powered MJOLNIR","3. Jump Settings"],
    [0.1,10,5,1],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_hud_active_intro",
    "CHECKBOX",
    ["Show Hud Boot Up Sequence","You will break my heart if you uncheck this, I spent days on that animation."],
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    True,
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_show_overlay",
    "CHECKBOX",
    ["Show Helmet Overlay","Show the holographic lines that represent the helmet when its active."],
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    True,
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_show_outline",
    "CHECKBOX",
    ["Show Helmet Outline","Show the edges of the inside of the helmet when its inactive."],
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    True,
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_energy_bar_active",
    "CHECKBOX",
    "Show Shield Energy Bar",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    True,
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_overlay_color",
    "COLOR",
    "Overlay Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [0.7,1.0,1.0,0.4],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_energy_bar_color",
    "COLOR",
    "Shield Bar Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [0.7,1.0,1.0,0.8],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_energy_bar_text_color",
    "COLOR",
    "Shield Bar Text Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [0.7,1.0,1.0,0.8],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_weapon_icon_color",
    "COLOR",
    "Weapon Icon Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [0.7,1.0,1.0,0.8],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_infodisplay_color",
    "COLOR",
    "Info Display Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [0.7,1.0,1.0,0.8],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_infotext_color",
    "COLOR",
    "Info Text Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [0.7,1.0,1.0,0.8],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_radar_color",
    "COLOR",
    "Radar Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [0.7,1.0,1.0,0.8],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_bootup_color",
    "COLOR",
    "Boot Up Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [0.694,0.933,0.345,1],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_depleted_effect_color",
    "COLOR",
    "Shield Depleted Effect Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [1,0.2,0.2,1],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_depleted_alert_color",
    "COLOR",
    "Shield Depleted Alert Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [1,0.2,0.2,0.8],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_depleted_charge_texture_color",
    "COLOR",
    "Shield Charge Overlay Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [0.8,1,1,1],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_depleted_charge_effect_color",
    "COLOR",
    "Shield Charge Effect Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [0.8,1,1,0.2],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_hiteffect_color",
    "COLOR",
    "Hit Full Shield Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [1,1,0.2,1],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_allison_hiteffect_depleted_color",
    "COLOR",
    "Hit Empty Shield Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [1,0.2,0.2,1],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_hud_human_icon",
    "EDITBOX",
    "Targeting Human Icon",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_hudTargetInfantry.paa",
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_hud_human_size",
    "SLIDER",
    "HUD Human Icon Size",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [0.01,10.00,0.30,3],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_hud_vehicle_icon",
    "EDITBOX",
    "Targeting Human Icon",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_hudTargetVehicle.paa",
    nil,
    {}
] call CBA_fnc_addSetting;


[
    "ic51_hud_vehicle_size",
    "SLIDER",
    "HUD Vehicle Icon Size",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [0.01,10.00,0.6,3],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_hud_static_icon",
    "EDITBOX",
    "Targeting Human Icon",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_hudTargetEmplacement.paa",
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_hud_static_size",
    "SLIDER",
    "HUD Emplacement Icon Size",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [0.01,10.00,0.40,3],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "OPTRE_HUD_FRIENDLY_COLOR",
    "COLOR",
    "HUD Friendly Icon Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [0.700, 1.000, 1.000, 1.000],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_hud_group_color",
    "COLOR",
    "HUD Group Icon Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [1.000, 1.000, 1.000, 1.000],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_hud_enemy_color",
    "COLOR",
    "HUD Enemy Icon Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [1.000, 0.200, 0.200, 1.000],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "ic51_hud_neutral_color",
    "COLOR",
    "HUD Neutral Icon Color",
    ["OPTRE Powered MJOLNIR","4. HUD Settings"],
    [1.000, 1.000, 0.000, 1.000],
    nil,
    {}
] call CBA_fnc_addSetting;
