class IDA_P1_Helmet;
class ic51_p1_helmet_base : IDA_P1_Helmet
{
    SCOPE_PRIVATE;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] P1 Base";
    class Iteminfo : Iteminfo 
    {
        PROTECTION_HELMET;
    };
};
class ls_gar_engineer_helmet;
class ic51_engineer_helmet_base : ls_gar_engineer_helmet
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "[51st] Engineer Helmet";
    picture = QPATHTOF(data\51st_logo.paa);
    hiddenSelections[] = {"camo1","illum","visor"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_common\helmet_engineer_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\engineer\data\light_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\engineer\data\visor_co.paa"
    };
    class Iteminfo: HeadgearItem 
    {
        allowedSlots[] = {801,901,701,605};
        hiddenSelections[] = {"camo1","illum","visor"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\engineer\ls_cloneHelmet_engineer.p3d";
        PROTECTION_HELMET;
    };
};
class 3AS_H_Katarn_Helmet;
class ic51_katarn_helmet_base : 3AS_H_Katarn_Helmet 
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Katarn Helmet";
    hiddenSelections[] = {"camo","camo1"};
    ace_hearing_hasEHP = 1;
    ace_hearing_lowerVolume = 0;
    ace_hearing_protection = 1;
    subItems[] = {};
    MJOLNIR_isHelmet = 1;
    MJOLNIR_helmetOverlay = "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_hudBackground.paa";
    MJOLNIR_helmetOutline = "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_hudHelmetOutline.paa";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_common\helmet_katarn_co.paa),
        QPATHTOF(data\helmet_common\helmet_katarn_co.paa)
    };
    class Iteminfo: HeadgearItem
    {
        allowedSlots[] = {901,605};
        hiddenSelections[] = {"camo","camo1"};
        modelSides[] = {3,1};
        uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_Helmet.p3d";
        class HitpointsProtectionInfo
        {
            class Face
            {
                armor = 10;
                hitpointName = "HitFace";
                PassThrough = 0.08975;
                visual = "injury_Head";
            };
            class Head : Face
            {
                hitpointName = "HitHead";
            };
        };
    };
};
