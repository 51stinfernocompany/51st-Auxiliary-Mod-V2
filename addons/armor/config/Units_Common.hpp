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
class 3AS_Rep_CloneGMTrooper_F;
class ic51_unit_hazard_desert : 3AS_Rep_CloneGMTrooper_F
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "[51st] Hazard Trooper (Desert)";
    uniformclass="ic51_uniform_hazard_desert";
    faction="ic51_faction_inferno";
    editorSubCategory="ic51_soldiers";
    hiddenSelections[] = {"Undersuit","Uppersuit","Lowersuit","insignia"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniform_common\uniform_hazard_undersuit_desert_co.paa),
        QPATHTOF(data\uniform_common\uniform_hazard_upper_desert_co.paa),
        QPATHTOF(data\uniform_common\uniform_hazard_lower_desert_co.paa)
    };
    UNIT_ITEMS("ic51_backpack_hazard_desert","ic51_hazard_helmet_desert","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_unit_hazard_snow : 3AS_Rep_CloneGMTrooper_F
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "[51st] Hazard Trooper (Snow)";
    uniformclass="ic51_uniform_hazard_snow";
    faction="ic51_faction_inferno";
    editorSubCategory="ic51_soldiers";
    hiddenSelections[] = {"Undersuit","Uppersuit","Lowersuit","insignia"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniform_common\uniform_hazard_undersuit_snow_co.paa),
        QPATHTOF(data\uniform_common\uniform_hazard_upper_snow_co.paa),
        QPATHTOF(data\uniform_common\uniform_hazard_lower_snow_co.paa)
    };
    UNIT_ITEMS("ic51_backpack_hazard_snow","ic51_hazard_helmet_snow","ic51_dc15s","ic51_dc15s_mag");
};
class ic51_unit_hazard_jungle : 3AS_Rep_CloneGMTrooper_F
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "[51st] Hazard Trooper (Jungle)";
    uniformclass="ic51_uniform_hazard_jungle";
    faction="ic51_faction_inferno";
    editorSubCategory="ic51_soldiers";
    hiddenSelections[] = {"Undersuit","Uppersuit","Lowersuit","insignia"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniform_common\uniform_hazard_undersuit_jungle_co.paa),
        QPATHTOF(data\uniform_common\uniform_hazard_upper_jungle_co.paa),
        QPATHTOF(data\uniform_common\uniform_hazard_lower_jungle_co.paa)
    };
    UNIT_ITEMS("ic51_backpack_hazard_jungle","ic51_hazard_helmet_jungle","ic51_dc15s","ic51_dc15s_mag");
};