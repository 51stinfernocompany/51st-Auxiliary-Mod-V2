class ls_droidHelmet_b1;
class ic51_helmet_b1gerald: ls_droidHelmet_b1
{
    SCOPE_HIDDEN;
    author = AUTHOR; 
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st Custom] Gerald's Head";
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\helmet_common\helmet_b1gerald_co.paa)
    };
};
class ic51_helmet_b1jeff: ic51_helmet_b1gerald
{
    displayName = "[51st Custom] Jeff's Head";
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\helmet_common\helmet_b1jeff_co.paa)
    };
};
class ic51_helmet_b1colbat: ic51_helmet_b1gerald
{
    displayName = "[51st Custom] Colbat's Head";
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\helmet_common\helmet_b1colbat_co.paa)
    };
};
class ic51_katarn_helmet_gary : ic51_katarn_helmet_base 
{
    displayName = "[51st Custom] Katarn Helmet (Gary)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_common\helmet_katarn_gary_co.paa),
        QPATHTOF(data\helmet_common\helmet_katarn_gary_co.paa)
    };
};
class ic51_katarn_helmet_immortal : ic51_katarn_helmet_base 
{
    displayName = "[51st Custom] Katarn Helmet (Immortal)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_common\helmet_katarn_immortal_co.paa),
        QPATHTOF(data\helmet_common\helmet_katarn_immortal_co.paa)
    };
};
class ic51_katarn_helmet_doss : ic51_katarn_helmet_base 
{
    displayName = "[51st Custom] Katarn Helmet (Doss)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_common\helmet_katarn_doss_co.paa),
        QPATHTOF(data\helmet_common\helmet_katarn_doss_co.paa)
    };
};
class ic51_katarn_helmet_cyclone : ic51_katarn_helmet_base 
{
    displayName = "[51st Custom] Katarn Helmet (Cyclone)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_common\helmet_katarn_cyclone_co.paa),
        QPATHTOF(data\helmet_common\helmet_katarn_cyclone_co.paa)
    };
};
class ic51_p2_helmet_custom_Blaze : ic51_p2_helmet_base 
{
    displayName = "[51st Custom] P2 Blaze's Helmet";
    hiddenSelections[] = {"Camo","visor"};
    hiddenSelectionsMaterials[] = {"\x\ic51\addons\armor\data\helmet_p2\p2_helmet.rvmat","a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_common\p2_helmet_blaze_co.paa),
        QPATHTOF(data\helmet_common\p2_helmet_blaze_visor_co.paa)
    };
};

class ic51_pilot_helmet_custom_anselm : ic51_pilot_helmet_base
{
    SCOPE_PUBLIC;
    displayName = "[51st Custom] Pilot Anselm's Helmet";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_common\pilot_helmet_anselm_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"
    };
};
class ic51_pilot_helmet_custom_snapjaw : ic51_pilot_helmet_base
{
    SCOPE_PUBLIC;
    displayName = "[51st Custom] Pilot Snapjaw's Helmet";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_common\pilot_helmet_snapjaw_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"
    };
};
class ic51_pilot_helmet_custom_noble : ic51_pilot_helmet_base
{
    SCOPE_PUBLIC;
    displayName = "[51st Custom] Pilot Noble's Helmet";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_common\pilot_helmet_custom_noble_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"
    };
};
class ic51_p1_helmet_custom_Mando : ic51_p1_helmet_base {
    SCOPE_PUBLIC;
    displayName = "[51st Custom] P1 Mando's Helmet";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_common\p1_helmet_mando_co.paa),
        QPATHTOF(data\helmet_common\p1_helmet_mando_co.paa)
    };
};
