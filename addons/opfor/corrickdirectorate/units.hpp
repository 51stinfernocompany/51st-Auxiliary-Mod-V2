// corrick
class ls_opfor_unit_base;
class ic51_opfor_corrick_base : ls_opfor_unit_base {
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "Corrick Light Trooper";
    faction="ic51_opfor_corrick";
    editorSubCategory="ic51_opfor_corrick_troops";

    uniformClass = "SFA_NavyHeavyTrooper_Uniform";
    model = "SFA_Main\SFA_Equipment_R\Uniform\Navy\Navy_Trooper_uniform.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};

    speaker = "Male01CHI";
    facewearList[] = {""};

    weapons[] = {"IDA_E5", "Throw", "Put"};
    respawnweapons[] = {"IDA_E5", "Throw", "Put"};

    magazines[] = {"IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red"};
    respawnmagazines[] = {"IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red"};

    backpack = "";
    linkedItems[] = {"ItemMap","G_JMSLLTE_Facecover_dark","ItemRadio","ItemCompass","ItemWatch","ls_nvg_goggles_orange"};
    respawnlinkedItems[] = {"ItemMap","G_JMSLLTE_Facecover_dark","ItemRadio","ItemCompass","ItemWatch","ls_nvg_goggles_orange"};
};

class ic51_opfor_corrick_rifleman : ic51_opfor_corrick_base {
    displayName = "Corrick Trooper";

    uniformClass = "SFA_NavyHeavyTrooper_Uniform";
    model = "SFA_Main\SFA_Equipment_R\Uniform\Navy\Navy_Trooper_uniform.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};

    speaker = "Male01CHI";
    facewearList[] = {""};

    weapons[] = {"IDA_E5", "Throw", "Put"};
    respawnweapons[] = {"IDA_E5", "Throw", "Put"};

    magazines[] = {"IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red"};
    respawnmagazines[] = {"IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red"};

    backpack = "";
    linkedItems[] = {"SFA_KOTR_TrooperHeavy_Helmet","ItemMap","G_JMSLLTE_Facecover_dark","ItemRadio","ItemCompass","ItemWatch","ls_nvg_goggles_orange"};
    respawnlinkedItems[] = {"SFA_KOTR_TrooperHeavy_Helmet","ItemMap","G_JMSLLTE_Facecover_dark","ItemRadio","ItemCompass","ItemWatch","ls_nvg_goggles_orange"};
};

class ic51_opfor_corrick_marksmen : ic51_opfor_corrick_base {
    displayName = "Corrick Marksmen";

    uniformClass = "SFA_NavyHeavyTrooper_Uniform";
    model = "SFA_Main\SFA_Equipment_R\Uniform\Navy\Navy_Trooper_uniform.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};

    speaker = "Male01CHI";
    facewearList[] = {""};

    weapons[] = {"IDA_E5S", "Throw", "Put"};
    respawnweapons[] = {"IDA_E5S", "Throw", "Put"};

    magazines[] = {"IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red"};
    respawnmagazines[] = {"IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red"};

    backpack = "";
    linkedItems[] = {"SFA_KOTR_TrooperHeavy_Helmet","ItemMap","G_JMSLLTE_Facecover_dark","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"SFA_KOTR_TrooperHeavy_Helmet","ItemMap","G_JMSLLTE_Facecover_dark","ItemRadio","ItemCompass","ItemWatch"};
};


class ic51_opfor_corrick_leader : ic51_opfor_corrick_base {
    displayName = "Corrick Squad Leader";

    uniformClass = "SFA_NavyHeavyTrooper_Uniform";
    model = "SFA_Main\SFA_Equipment_R\Uniform\Navy\Navy_Trooper_uniform.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};

    speaker = "Male01CHI";
    facewearList[] = {""};

    weapons[] = {"IDA_E5", "Throw", "Put"};
    respawnweapons[] = {"IDA_E5", "Throw", "Put"};

    magazines[] = {"IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red"};
    respawnmagazines[] = {"IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red"};

    backpack = "ls_jabiimBackpack_nimbusCommando";
    linkedItems[] = {"SFA_KOTR_TrooperHeavy_Helmet","ItemMap","G_JMSLLTE_SnowGlasses","ItemRadio","ItemCompass","ItemWatch","ls_nvg_goggles_orange"};
    respawnlinkedItems[] = {"SFA_KOTR_TrooperHeavy_Helmet","ItemMap","G_JMSLLTE_SnowGlasses","ItemRadio","ItemCompass","ItemWatch","ls_nvg_goggles_orange"};
};
