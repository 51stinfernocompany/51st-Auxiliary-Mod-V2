class 3AS_B_Katarn_Backpack;
class ic51_katarn_backpack_base : 3AS_B_Katarn_Backpack
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Katarn Backpack";
    maximumLoad=500;
    tf_hasLRradio = 1;
    tf_range = 100000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_dialog = "ls_radios_cloneLR";
    tf_encryptionCode = "tf_west_radio_code";
    tf_subtype = "digital_lr";
    ace_logistics_wirecutter_hasWirecutter = 1;

    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\backpack_common\backpack_katarn_co.paa)
    };
};
class ic51_backpack_navalofficer : ic51_clone_rucksack_base
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Long-Range Transmitter (Zeus)";
    maximumload=10;
    tf_hasLRradio = 1;
    tf_range = 100000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_dialog = "ls_radios_cloneLR";
    tf_encryptionCode = "tf_west_radio_code";
    tf_subtype = "digital_lr";
    hiddenSelectionsTextures[] =
    {
        "",
        "",
        ""
    };
};
class ls_gar_radio_backpack;
class ic51_backpack_radio_ls : ls_gar_radio_backpack
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Radio Backpack (Long-Range)";
    maximumload=500;
    tf_hasLRradio = 1;
    tf_range=100000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_dialog = "ls_radios_cloneLR";
    tf_encryptionCode = "tf_west_radio_code";
    tf_subtype = "digital_lr";
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\backpack_common\backpack_body_rto_co),
        QPATHTOF(data\backpack_common\backpack_radio_rto_co),
        QPATHTOF(data\backpack_common\backpack_screen_rto_co)
    };
};
class 3AS_B_Imperial_Stormtrooper_Backpack_Base_F;
class ic51_backpack_respirator : 3AS_B_Imperial_Stormtrooper_Backpack_Base_F
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Respirator Backpack";
    maximumload=500;
    tf_hasLRradio = 1;
    tf_range = 100000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_dialog = "ls_radios_cloneLR";
    tf_encryptionCode = "tf_west_radio_code";
    tf_subtype = "digital_lr";
    model = "3AS\3AS_Characters_Imperial\Backpacks\model\3AS_Stormtrooper_Respirator.p3d";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = 
    {
        "3as\3as_characters_imperial\backpacks\data\stormtrooper_backpack_respirator\Stormtrooper_Respirator_CO.paa"
    };
};

// Jumppack
class JLTS_Clone_jumppack_JT12;
class ic51_jumppack_base : JLTS_Clone_jumppack_JT12 
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Jump pack";
    maximumload=450;
    tf_hasLRradio = 1;
    tf_range=100000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_dialog = "ls_radios_cloneLR";
    tf_encryptionCode = "tf_west_radio_code";
    tf_subtype = "digital_lr";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\Jumppack\ic51_jumppack_base.paa),
    };
};
