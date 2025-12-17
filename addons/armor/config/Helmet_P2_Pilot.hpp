class ls_gar_phase2Pilot_helmet;
class ic51_pilot_helmet_base : ls_gar_phase2Pilot_helmet
{
    scope = 1;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Pilot Trooper Helmet";
    hiddenSelections[] = {"camo1","visor"};
    subItems[] = {};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2_pilot\p2_pilot_helmet_trooper_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"
    };
    class Iteminfo: HeadgearItem 
    {
        allowedSlots[] = {801,901,701,605};
        hiddenselections[] = {"camo1","visor"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
        PROTECTION_HELMET;
    };
};
class ic51_pilot_helmet_combat : ic51_pilot_helmet_base
{
    SCOPE_PUBLIC;
    displayName = "[51st] Pilot Helmet (Combat)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2_pilot\p2_pilot_helmet_combat_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"
    };
};
class ic51_pilot_helmet_logistics : ic51_pilot_helmet_base
{
    SCOPE_PUBLIC;
    displayName = "[51st] Pilot Helmet (Logistics)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_p2_pilot\p2_pilot_helmet_logistics_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"
    };
};
