class IDA_Clone_NVG;
class ic51_clone_nvg : IDA_Clone_NVG
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Macrobinoculars";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\nvg\clone_macrobinocular_co.paa)
    };
    NVG_CUSTOM;
};
class IDA_Clone_NVG_flipped;
class ic51_clone_nvg_marksmen : IDA_Clone_NVG_flipped
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Marksmen Visor";
    visionMode[] = {"Normal","NVG","TI"};
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\nvg\clone_macrobinocular_co.paa)
    };
    NVG_CUSTOM;
};
class IDA_Clone_Rangefinder;
class ic51_clone_rangefinder : IDA_Clone_Rangefinder
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Rangefinder";
    hiddenSelections[] = {"camo"};
    visionMode[] = {"Normal","NVG"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\nvg\clone_rangefinder_co.paa)
    };
    NVG_CUSTOM;
};
class ic51_nvg_chip : IDA_Clone_NVG
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone NVG Chip";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] =
    {
        ""
    };
    NVG_CUSTOM;
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
    NVG_CUSTOM;
};

class lsd_gar_heavy_nvg;
class ic51_nvg_sunvisor : lsd_gar_heavy_nvg 
{
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Clone Sunvisor (Heavy)";
    NVG_CUSTOM;
};
