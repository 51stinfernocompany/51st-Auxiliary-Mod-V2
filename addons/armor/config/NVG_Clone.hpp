class IDA_Clone_NVG;
class ic51_clone_nvg : IDA_Clone_NVG
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Macrobinoculars (WP)";
    modelOptics = "\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\nvg\clone_macrobinocular_co.paa)
    };
    NVG_CUSTOM_WHITE;
};
class IDA_Clone_NVG_flipped;
class ic51_clone_nvg_marksmen : IDA_Clone_NVG_flipped
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Marksmen Visor (WP)";
    modelOptics = "\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
    visionMode[] = {"Normal","NVG","TI"};
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\nvg\clone_macrobinocular_co.paa)
    };
    NVG_CUSTOM_WHITE;
};
class IDA_Clone_Rangefinder;
class ic51_clone_rangefinder : IDA_Clone_Rangefinder
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Rangefinder (WP)";
    hiddenSelections[] = {"camo"};
    visionMode[] = {"Normal","NVG","TI"};
    modelOptics = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_optic.p3d";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\nvg\clone_rangefinder_co.paa)
    };
    NVG_CUSTOM_WHITE;
};
class ic51_nvg_chip : IDA_Clone_NVG
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone NVG Chip (WP)";
    visionMode[] = {"Normal","NVG","TI"};
    modelOptics = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_optic.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] =
    {
        ""
    };
    NVG_CUSTOM_WHITE;
};
class lsd_gar_medicalScannerSPC_nvg;
class ic51_clone_medicalscanner : lsd_gar_medicalScannerSPC_nvg
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Medical Scanner";
    hiddenSelections[] = {"Camo1","glow"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\nvg\clone_medscanner_co.paa),
        "#(argb,8,8,3)color(0.941,0.263,0.263,1.0,co)"
    };
    NVG_CUSTOM_WHITE;
};

class lsd_gar_heavy_nvg;
class ic51_nvg_sunvisor : lsd_gar_heavy_nvg 
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Sunvisor (Heavy)";
    NVG_CUSTOM_WHITE;
};
//Green Phos
class ic51_clone_nvg_gp : IDA_Clone_NVG
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Macrobinoculars (GP)";
    modelOptics = "\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\nvg\clone_macrobinocular_co.paa)
    };
    NVG_CUSTOM_GREEN;
};
class ic51_clone_nvg_marksmen_gp : IDA_Clone_NVG_flipped
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Marksmen Visor (GP)";
    modelOptics = "\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
    visionMode[] = {"Normal","NVG","TI"};
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\nvg\clone_macrobinocular_co.paa)
    };
    NVG_CUSTOM_GREEN;
};
class ic51_clone_rangefinder_gp : IDA_Clone_Rangefinder
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Rangefinder (GP)";
    hiddenSelections[] = {"camo"};
    visionMode[] = {"Normal","NVG","TI"};
    modelOptics = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_optic.p3d";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\nvg\clone_rangefinder_co.paa)
    };
    NVG_CUSTOM_GREEN;
};
class ic51_nvg_chip_gp : IDA_Clone_NVG
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone NVG Chip (GP)";
    visionMode[] = {"Normal","NVG","TI"};
    modelOptics = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_optic.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] =
    {
        ""
    };
    NVG_CUSTOM_GREEN;
};
class ic51_clone_medicalscanner_gp : lsd_gar_medicalScannerSPC_nvg
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Medical Scanner";
    hiddenSelections[] = {"Camo1","glow"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\nvg\clone_medscanner_co.paa),
        "#(argb,8,8,3)color(0.941,0.263,0.263,1.0,co)"
    };
    NVG_CUSTOM_GREEN;
};
class ic51_nvg_sunvisor_gp : lsd_gar_heavy_nvg 
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Sunvisor (Heavy)";
    NVG_CUSTOM_GREEN;
};
