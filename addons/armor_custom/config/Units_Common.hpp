class ls_droid_b1;
class ic51_unit_b1gerald: ls_droid_b1
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    faction="ic51_faction_inferno";
    editorSubCategory="ic51_soldiers_custom";
    displayname="[51st Custom] Gerald";
    side = BLUFOR;
    uniformclass="ic51_uniform_b1gerald";
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\helmet_common\helmet_b1gerald_co.paa),
        QPATHTOF(data\uniform_common\uniform_b1_gerald_co.paa)
    };
    UNIT_ITEMS("ic51_backpack_b1","ic51_helmet_b1gerald","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_unit_b1jeff: ic51_unit_b1gerald
{
    displayname="[51st Custom] Jeff";
    uniformclass="ic51_uniform_b1jeff";
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\helmet_common\helmet_b1jeff_co.paa),
        QPATHTOF(data\uniform_common\uniform_b1_jeff_co.paa)
    };
    UNIT_ITEMS("ic51_backpack_b1","ic51_helmet_b1jeff","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_unit_b1colbat: ic51_unit_b1gerald
{
    displayname="[51st Custom] Colbat";
    uniformclass="ic51_uniform_b1colbat";
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\helmet_common\helmet_b1colbat_co.paa),
        QPATHTOF(data\uniform_common\uniform_b1_colbat_co.paa)
    };
    UNIT_ITEMS("ic51_backpack_b1","ic51_helmet_b1colbat","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_katarn_unit_gary : ic51_katarn_unit_base
{
    displayName = "[51st Custom] Republic Commando (Gary)";
    uniformclass="ic51_katarn_uniform_gary";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniform_common\uniform_katarn_gary_co.paa),
        "x\ic51\addons\armor\data\uniform_common\uniform_katarn_undersuit_co.paa"
    };
    UNIT_ITEMS("ic51_katarn_backpack_gary","ic51_katarn_helmet_gary","ic51_DC17M","ic51_dc17m_standard_mag");
};
class ic51_katarn_unit_immortal : ic51_katarn_unit_base
{
    displayName = "[51st Custom] Republic Commando (Immortal)";
    uniformclass="ic51_katarn_uniform_immortal";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniform_common\uniform_katarn_immortal_co.paa),
        "x\ic51\addons\armor\data\uniform_common\uniform_katarn_undersuit_co.paa"
    };
    UNIT_ITEMS("ic51_katarn_backpack_immortal","ic51_katarn_helmet_immortal","ic51_DC17M","ic51_dc17m_standard_mag");
};
class ic51_katarn_unit_doss : ic51_katarn_unit_base
{
    displayName = "[51st Custom] Republic Commando (Doss)";
    uniformclass="ic51_katarn_uniform_doss";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniform_common\uniform_katarn_doss_co.paa),
        "x\ic51\addons\armor\data\uniform_common\uniform_katarn_undersuit_co.paa"
    };
    UNIT_ITEMS("ic51_katarn_backpack_doss","ic51_katarn_helmet_doss","ic51_DC17M","ic51_dc17m_standard_mag");
};
class ic51_katarn_unit_cyclone : ic51_katarn_unit_base
{
    displayName = "[51st Custom] Republic Commando (Cyclone)";
    uniformclass="ic51_katarn_uniform_cyclone";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniform_common\uniform_katarn_cyclone_co.paa),
        "x\ic51\addons\armor\data\uniform_common\uniform_katarn_undersuit_co.paa"
    };
    UNIT_ITEMS("ic51_katarn_backpack_doss","ic51_katarn_helmet_doss","ic51_DC17M","ic51_dc17m_standard_mag");
};
