// ARF
class ls_gar_phase1Arf_helmet;
class ic51_arf_helmet_base : ls_gar_phase1Arf_helmet
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] ARF Helmet";
    hiddenSelections[] = {"camo1","camo2","camo3"};
    subItems[] = {"Integrated_NVG_TI_0_F"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_arf\arf_helmet_trooper_co.paa),
        "",
        QPATHTOF(data\helmet_arf\arf_helmet_trooper_co.paa)
    };
    class Iteminfo: HeadgearItem 
    {
        allowedSlots[] = {801,901,701,605};
        hiddenSelections[] = {"camo1","camo2","camo3"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\arf\ls_gar_arf_helmet.p3d";
        PROTECTION_HELMET;
    };
};
