class ic51_katarn_vest_tech_gary : ic51_katarn_vest_base
{
    SCOPE_PUBLIC;
    displayName = "[51st Custom] Katarn Vest (Gary)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\vests_common\vest_katarn_tech_gary_co.paa)};
    model = "\3AS\3AS_Characters\Commando\3AS_Katarn_TechPack.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_common\vest_katarn_tech_gary_co.paa)};
        uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_TechPack.p3d";
    };
};
class ic51_katarn_vest_demo_immortal : ic51_katarn_vest_base
{
    SCOPE_PUBLIC;
    displayName = "[51st Custom] Katarn Vest (Immortal)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\vests_common\vest_katarn_tech_immortal_co.paa)};
    model = "\3AS\3AS_Characters\Commando\3AS_Katarn_DemolitionPack.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_common\vest_katarn_tech_immortal_co.paa)};
        uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_DemolitionPack.p3d";
    };
};

class lsd_gar_alphaArc_vest_red;
class ic51_vest_alpha : lsd_gar_alphaArc_vest_red
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st Custom] Alpha ARC Vest";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests_common\vest_arc_alpha_co.paa),
        "\ls\core\addons\characters_clone_legacy\vests\alphaArc\data\Alpha_kama_Red_co.paa"
    };
    class ItemInfo : ItemInfo
    {
        containerclass = "Supply350";
        class HitpointsProtectionInfo
        {
            class Chest
            {
                HitpointName = "HitChest";
                armor = 12;
                PassThrough = 0.08975;
            };
            class Diaphragm : Chest
            {
                HitpointName = "HitDiaphragm";
            };
            class Abdomen : Diaphragm
            {
                HitpointName = "HitAbdomen";
            };
            class Body : Abdomen
            {
                HitpointName = "HitBody";
            };
            class Arms : Body
            {
                HitpointName = "HitArms";
            };
            class Legs : Arms
            {
                HitpointName = "Hitlegs";
            };
        };
    };
};
