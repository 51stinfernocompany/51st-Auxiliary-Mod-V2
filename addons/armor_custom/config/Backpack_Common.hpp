class ls_droidBackpack_b1;
class ic51_backpack_b1: ls_droidBackpack_b1
{
    author = AUTHOR;
    SCOPE_HIDDEN;
    displayName="[51st] B1 Backpack";
    maximumLoad=500;
    tf_hasLRradio = 1;
    tf_range = 100000;
    tf_dialog = "ls_radios_cloneLR";
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_encryptionCode = "tf_west_radio_code";
    tf_subtype = "digital_lr";
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\backpack_common\backpack_droid_co.paa)
    };
};

class ic51_katarn_backpack_gary : ic51_katarn_backpack_base
{
    displayName = "[51st Custom] Katarn Backpack (Gary)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\backpack_common\backpack_katarn_gary_co.paa)
    };
};
class ic51_katarn_backpack_immortal : ic51_katarn_backpack_base
{
    displayName = "[51st Custom] Katarn Backpack (Immortal)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\backpack_common\backpack_katarn_immortal_co.paa)
    };
};
class ic51_katarn_backpack_doss : ic51_katarn_backpack_base
{
    displayName = "[51st Custom] Katarn Backpack (Doss)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\backpack_common\backpack_katarn_doss_co.paa)
    };
};
