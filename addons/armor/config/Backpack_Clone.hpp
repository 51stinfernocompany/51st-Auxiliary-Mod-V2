// Rucksacks
class IDA_Clone_Rucksack;
class ic51_clone_rucksack_base : IDA_Clone_Rucksack
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Rucksack";
    maximumload=250;
    hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\backpack_clone\rucksack_base_co.paa),
        QPATHTOF(data\backpack_clone\rucksack_base_grenade_co.paa),
        QPATHTOF(data\backpack_clone\rucksack_base_cloth_co.paa)
    };
};
class ic51_clone_rucksack_heavy : ic51_clone_rucksack_base
{
    displayName = "[51st] Clone Rucksack (Heavy)";
    maximumload=500;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\backpack_clone\rucksack_heavy_co.paa),
        QPATHTOF(data\backpack_clone\rucksack_heavy_grenade_co.paa),
        QPATHTOF(data\backpack_clone\rucksack_heavy_cloth_co.paa)
    };
};
class ic51_clone_rucksack_at : ic51_clone_rucksack_base
{
    displayName = "[51st] Clone Rucksack (Anti-Tank)";
    maximumload=500;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\backpack_clone\rucksack_at_co.paa),
        QPATHTOF(data\backpack_clone\rucksack_at_grenade_co.paa),
        QPATHTOF(data\backpack_clone\rucksack_at_cloth_co.paa)
    };
};
class ic51_clone_rucksack_medic : ic51_clone_rucksack_base
{
    displayName = "[51st] Clone Rucksack (Medic)";
    maximumload=450;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\backpack_clone\rucksack_medic_co.paa),
        QPATHTOF(data\backpack_clone\rucksack_medic_grenade_co.paa),
        QPATHTOF(data\backpack_clone\rucksack_medic_cloth_co.paa)
    };
    tf_hasLRradio = 1;
    tf_range=25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_dialog = "ls_radios_cloneLR";
    tf_encryptionCode = "tf_west_radio_code";
    tf_subtype = "digital_lr";
};
class ic51_clone_rucksack_engineer : ic51_clone_rucksack_base
{
    displayName = "[51st] Clone Rucksack (Engineer)";
    maximumload=500;
    ace_fortify_fortifyTool = 1;
    ace_trenches_entrenchingTool = 1;
    ace_logistics_wirecutter_hasWirecutter = 1;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\backpack_clone\rucksack_engineer_co.paa),
        QPATHTOF(data\backpack_clone\rucksack_engineer_grenade_co.paa),
        QPATHTOF(data\backpack_clone\rucksack_engineer_cloth_co.paa)
    };
};

// Backpacks
class IDA_Backpack_Base;
class ic51_clone_backpack_base : IDA_Backpack_Base
{
    SCOPE_PRIVATE;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Backpack (Hidden)";
    maximumload=250;
    hiddenSelections[] =
    {
    /*1*/    "BackBoxes",
    /*2*/    "GrenadeBottom",
    /*3*/    "GrenadeTop",
    /*4*/    "RadioAntenna",
    /*5*/    "RadioPack",
    /*6*/    "ScoutPack"
    };
    hiddenSelectionsTextures[] =
    {
    /*1*/    "\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_BackBling\IDA_Clone_BackBling_co.paa",
    /*2*/    "\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_BackBling\IDA_Clone_BackBling_co.paa",
    /*3*/    "\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_BackBling\IDA_Clone_BackBling_co.paa",
    /*4*/    "\Indecisive_Armoury_units\REPUBLIC\Backpacks\IDA_Clone_RadioAntenna\IDA_Clone_RadioAntenna_co.paa",
    /*5*/    QPATHTOF(data\backpack_clone\backpack_radiopack_co.paa),
    /*6*/    QPATHTOF(data\backpack_clone\backpack_scoutpack_co.paa)
    };
};

class ic51_clone_backpack_marksmen_t2 : ic51_clone_backpack_base
{
    SCOPE_PUBLIC;
    displayName = "[51st] Marksmen Scoutpack";
    maximumload=200;
    hiddenSelectionsTextures[] =
    {
    /*1*/    "",
    /*2*/    "",
    /*3*/    "",
    /*4*/    "",
    /*5*/    "",
    /*6*/    QPATHTOF(data\backpack_clone\backpack_scoutpack_co.paa)
    };
};
class ic51_clone_backpack_radio : ic51_clone_backpack_base
{
    SCOPE_PUBLIC;
    displayName = "[51st] Radio Pack";
    maximumload=200;
    tf_hasLRradio = 1;
    tf_range=25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_dialog = "ls_radios_cloneLR";
    tf_encryptionCode = "tf_west_radio_code";
    tf_subtype = "digital_lr";
    hiddenSelectionsTextures[] =
    {
    /*1*/    "",
    /*2*/    "",
    /*3*/    "",
    /*4*/    "\Indecisive_Armoury_units\REPUBLIC\Backpacks\IDA_Clone_RadioAntenna\IDA_Clone_RadioAntenna_co.paa",
    /*5*/    QPATHTOF(data\backpack_clone\backpack_radiopack_co.paa),
    /*6*/    ""
    };
};

class ic51_clone_backpack_pilot : ic51_clone_backpack_radio
{
    displayName = "[51st] Pilot Attachment";
    maximumLoad = 300;
};
class ic51_clone_backpack_arf : ic51_clone_backpack_radio
{
    displayName = "[51st] ARF Attachment";
    maximumLoad = 450;
};

class ls_cloneBackpack_arc;
class ic51_backpack_arc_base : ls_cloneBackpack_arc
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] ARC Backpack";
    tf_hasLRradio = 1;
    tf_range=25000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_dialog = "ls_radios_cloneLR";
    tf_encryptionCode = "tf_west_radio_code";
    tf_subtype = "digital_lr";
    maximumload = 500;
};
