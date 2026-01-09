// Carlac
class I_soldier_A_F;
class ic51_indfor_carlac_base : I_soldier_A_F {
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "Carlac Light Trooper";
    faction="ic51_indfor_carlac";
    editorSubCategory="ic51_indfor_carlac_troops";

    uniformClass = "JMSLLTE_ScumTermo_w_F_CombatUniform";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

    speaker = "Male01CHI";
    facewearList[] = {""};

    weapons[] = {"ic51_a280", "Throw", "Put"};
    respawnweapons[] = {"ic51_a280", "Throw", "Put"};

    magazines[] = {"ShdwCmpny_A280_45Rnd_Mag", "ShdwCmpny_A280_45Rnd_Mag", "ShdwCmpny_A280_45Rnd_Mag", "ShdwCmpny_A280_45Rnd_Mag", "ShdwCmpny_A280_45Rnd_Mag", "ShdwCmpny_A280_45Rnd_Mag"};
    respawnmagazines[] = {"ShdwCmpny_A280_45Rnd_Mag", "ShdwCmpny_A280_45Rnd_Mag", "ShdwCmpny_A280_45Rnd_Mag", "ShdwCmpny_A280_45Rnd_Mag", "ShdwCmpny_A280_45Rnd_Mag", "ShdwCmpny_A280_45Rnd_Mag"};

    backpack = "";
    Items[] = { "ACE_bloodIV_500","ACE_CableTie","ACE_CableTie","JLTS_credits_10","JLTS_credits_10","ACE_tourniquet","ACE_tourniquet","JLTS_drugs_protein","JLTS_drugs_protein"};
    linkedItems[] = {"JMSLLTE_PlastHv_wh_helmet","JMSLLTE_TermoFullVest_armor","G_JMSLLTE_Facecover","ItemMap","","ItemRadio","ItemCompass","ItemWatch","k_nvg_ti"};
    respawnlinkedItems[] = {"JMSLLTE_PlastHv_wh_helmet","JMSLLTE_TermoFullVest_armor","G_JMSLLTE_Facecover","ItemMap","","ItemRadio","ItemCompass","ItemWatch","k_nvg_ti"};
};

class ic51_indfor_carlac_rifleman : ic51_indfor_carlac_base {
    displayName = "Carlac Trooper";

    uniformClass = "JMSLLTE_ScumTermo_w_F_CombatUniform";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

    speaker = "Male01CHI";
    facewearList[] = {""};

    weapons[] = {"IDA_E5", "Throw", "Put"};
    respawnweapons[] = {"IDA_E5", "Throw", "Put"};

    magazines[] = {"IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red"};
    respawnmagazines[] = {"IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red"};

    backpack = "";
    linkedItems[] = {"JMSLLTE_PlastH_wh_helmet","JMSLLTE_OfficerChestForced_white_armor","G_JMSLLTE_Facecover","ItemMap","","ItemRadio","ItemCompass","ItemWatch","k_nvg_ti"};
    respawnlinkedItems[] = {"JMSLLTE_PlastH_wh_helmet","JMSLLTE_OfficerChestForced_white_armor","G_JMSLLTE_Facecover","ItemMap","","ItemRadio","ItemCompass","ItemWatch","k_nvg_ti"};
};

class ic51_indfor_carlac_marksmen : ic51_indfor_carlac_base {
    displayName = "Carlac Marksmen";

    uniformClass = "JMSLLTE_ScumTermo_w_F_CombatUniform";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

    speaker = "Male01CHI";
    facewearList[] = {""};

    weapons[] = {"ic51_iqa11", "Throw", "Put"};
    respawnweapons[] = {"ic51_iqa11", "Throw", "Put"};

    magazines[] = {"IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green","IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green","IDA_Blaster_Cell_Power5_5Rnd_Green","IDA_Blaster_Cell_Power5_5Rnd_Green"};
    respawnmagazines[] = {"IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green","IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green", "IDA_Blaster_Cell_Power5_5Rnd_Green","IDA_Blaster_Cell_Power5_5Rnd_Green","IDA_Blaster_Cell_Power5_5Rnd_Green"};
    
    linkedItems[] = {"JMSLLTE_PlastH_wh_helmet","JMSLLTE_TermoFullVest_armor","G_JMSLLTE_Facecover","ItemMap","","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_1"};
    respawnlinkedItems[] = {"JMSLLTE_PlastH_wh_helmet","JMSLLTE_TermoFullVest_armor","G_JMSLLTE_Facecover","ItemMap","","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_1"};
};


class ic51_indfor_carlac_leader : ic51_indfor_carlac_base {
    displayName = "Carlac Squad Leader";

    uniformClass = "JMSLLTE_ScumTermo_w_F_CombatUniform";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

    speaker = "Male01CHI";
    facewearList[] = {""};

    weapons[] = {"ic51_cinnagaran", "Throw", "Put"};
    respawnweapons[] = {"ic51_cinnagaran", "Throw", "Put"};

    magazines[] = {"3AS_50Rnd_EG40_Mag", "3AS_50Rnd_EG40_Mag", "3AS_50Rnd_EG40_Mag", "3AS_50Rnd_EG40_Mag"};
    respawnmagazines[] = {"3AS_50Rnd_EG40_Mag", "3AS_50Rnd_EG40_Mag", "3AS_50Rnd_EG40_Mag", "3AS_50Rnd_EG40_Mag"};

    backpack = "";
    Items[] = { "ACE_bloodIV_500","ACE_CableTie","ACE_CableTie","JLTS_credits_10","JLTS_credits_10","ACE_tourniquet","ACE_tourniquet","JLTS_drugs_protein","JLTS_drugs_protein"};
    linkedItems[] = {"JMSLLTE_OfheadPh_helmet","JMSLLTE_TermoLightVest_armor","G_JMSLLTE_Facecover","ItemMap","","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_1"};
    respawnlinkedItems[] = {"JMSLLTE_OfheadPh_helmet","JMSLLTE_TermoLightVest_armor","G_JMSLLTE_Facecover","ItemMap","","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_1"};
};
