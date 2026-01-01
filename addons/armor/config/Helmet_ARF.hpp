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

class ic51_arf_helmet_winter : ic51_arf_helmet_base{
    displayName = "[51st] ARF Helmet Winter";
    hiddenSelections[] = {"camo1","camo2","camo3"};
    subItems[] = {"Integrated_NVG_TI_0_F"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_arf\arf_helmet_trooper_winter_co.paa),
        "",
        QPATHTOF(data\helmet_arf\arf_helmet_trooper_winter_co.paa)
    };
    class Iteminfo: HeadgearItem 
    {
        allowedSlots[] = {801,901,701,605};
        hiddenSelections[] = {"camo1","camo2","camo3"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\arf\ls_gar_arf_helmet.p3d";
        PROTECTION_HELMET;
    };
};
class ic51_arf_helmet_jungle : ic51_arf_helmet_base{
    displayName = "[51st] ARF Helmet Jungle";
    hiddenSelections[] = {"camo1","camo2","camo3"};
    subItems[] = {"Integrated_NVG_TI_0_F"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_arf\arf_helmet_trooper_jungle_co.paa),
        "",
        QPATHTOF(data\helmet_arf\arf_helmet_trooper_jungle_co.paa)
    };
    class Iteminfo: HeadgearItem 
    {
        allowedSlots[] = {801,901,701,605};
        hiddenSelections[] = {"camo1","camo2","camo3"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\arf\ls_gar_arf_helmet.p3d";
        PROTECTION_HELMET;
    };
};
class ic51_arf_helmet_desert : ic51_arf_helmet_base{
    displayName = "[51st] ARF Helmet Desert";
    hiddenSelections[] = {"camo1","camo2","camo3"};
    subItems[] = {"Integrated_NVG_TI_0_F"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_arf\arf_helmet_trooper_desert_co.paa),
        "",
        QPATHTOF(data\helmet_arf\arf_helmet_trooper_desert_co.paa)
    };
    class Iteminfo: HeadgearItem 
    {
        allowedSlots[] = {801,901,701,605};
        hiddenSelections[] = {"camo1","camo2","camo3"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\arf\ls_gar_arf_helmet.p3d";
        PROTECTION_HELMET;
    };
};
