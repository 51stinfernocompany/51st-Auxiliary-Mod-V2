class 3AS_Rep_Commando_base_F;
class ic51_katarn_unit_base : 3AS_Rep_Commando_base_F
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "[51st] Republic Commando";
    uniformclass="ic51_katarn_uniform_base";
    faction="ic51_faction_inferno";
    editorSubCategory="ic51_soldiers_sf";
    hiddenSelections[] = {"Camo","Camo1"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniform_common\uniform_katarn_co.paa),
        QPATHTOF(data\uniform_common\uniform_katarn_undersuit_co.paa)
    };
    UNIT_ITEMS("ic51_katarn_backpack_base","ic51_katarn_helmet_base","ic51_DC17M","ic51_dc17m_standard_mag");
};
