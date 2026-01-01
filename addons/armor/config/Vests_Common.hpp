class 3AS_Katarn_Vest_Team_Leader;
class ic51_katarn_vest_base : 3AS_Katarn_Vest_Team_Leader
{
    SCOPE_PRIVATE;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Katarn Vest (Hidden)";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Vest_Team_Leader_co.paa"};
    model = "\3AS\3AS_Characters\Commando\3AS_Katarn_Vest_Team_Leader.p3d";
    MJOLNIR_isArmor = 1;
    MJOLNIR_shieldStrength = 100;
    MJOLNIR_shieldChargeValue = 1; 
    MJOLNIR_shieldChargeDelay = 0.1;

    class ItemInfo: VestItem
    {
        containerclass = "Supply350";
        vesttype = "Rebreather";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Vest_Team_Leader_co.paa"};
        uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_Vest_Team_Leader.p3d";
        mass = 80;
        overlaySelectionsInfo[] = {"Ghillie_hide"};
        class HitpointsProtectionInfo
        {
            class Diaphragm
            {
                hitpointName="HitDiaphragm";
                armor=20;
                passThrough=0.2;
            };
            class Chest : Diaphragm
            {
                hitpointName="HitChest";
            };
            class Abdomen : Chest
            {
                hitpointName="HitAbdomen";
            };
            class Pelvis : Abdomen
            {
                hitpointName="HitPelvis";
                armor=15;
            };
            class Neck : Pelvis
            {
                hitpointName="HitNeck";
            };
            class Arms : Neck
            {
                hitpointName="HitArms";
            };
            class Legs : Arms
            {
                hitpointName="HitLegs";
            };
            class Body : Legs
            {
                hitpointName="HitBody";
            };
        };
    };
};

class ic51_katarn_vest_teamleader : ic51_katarn_vest_base
{
    SCOPE_PUBLIC;
    displayName = "[51st] Katarn Vest (Team Leader)";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\vests_common\vest_katarn_teamleader_co.paa)};
    model = "\3AS\3AS_Characters\Commando\3AS_Katarn_Vest_Team_Leader.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_common\vest_katarn_teamleader_co.paa)};
        uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_Vest_Team_Leader.p3d";
    };
};
class ic51_katarn_vest_sniper : ic51_katarn_vest_base
{
    SCOPE_PUBLIC;
    displayName = "[51st] Katarn Vest (Sniper)";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\vests_common\vest_katarn_sniper_co.paa)};
    model = "\3AS\3AS_Characters\Commando\3AS_Katarn_Vest_Sniper.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_common\vest_katarn_sniper_co.paa)};
        uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_Vest_Sniper.p3d";
    };
};
class ic51_katarn_vest_demo : ic51_katarn_vest_base
{
    SCOPE_PUBLIC;
    displayName = "[51st] Katarn Vest (Demolitions)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\vests_common\vest_katarn_demo_co.paa)};
    model = "\3AS\3AS_Characters\Commando\3AS_Katarn_DemolitionPack.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_common\vest_katarn_demo_co.paa)};
        uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_DemolitionPack.p3d";
    };
};
class ic51_katarn_vest_tech : ic51_katarn_vest_base
{
    SCOPE_PUBLIC;
    displayName = "[51st] Katarn Vest (Technician)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\vests_common\vest_katarn_tech_co.paa)};
    model = "\3AS\3AS_Characters\Commando\3AS_Katarn_TechPack.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_common\vest_katarn_tech_co.paa)};
        uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_TechPack.p3d";
    };
};
