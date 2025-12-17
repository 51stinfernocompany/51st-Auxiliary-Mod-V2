class IDA_vest_base;
class ic51_vest_plate_base: IDA_vest_base
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName="[51st] Plating Trooper";
    class ItemInfo : VestItem
    {  
        uniformmodel = "\Indecisive_Armoury_units\REPUBLIC\Vests\IDA_Vests.p3d";
        containerclass = "Supply300";
        hiddenSelections[] = {"Recon_Harness","GrenadeBag","KamaCW","KamaEp3","PauldronCW_L","PauldronCW_R","PauldronEp3_L","PauldronEp3_R","PauldronAccessory","ArmPouches_L","ArmPouches_R","SuspenderL","SuspenderR","ChestPadR","ShoulderPadR","PauldronARC"};
        mass = 15;
        vesttype = "Rebreather";
        class HitpointsProtectionInfo
        {
            class Chest
            {
                HitpointName = "HitChest";
                armor = 6;
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
class ic51_vest_plate_medic : ic51_vest_plate_base
{
    displayName="[51st] Plating Medic";
    class ItemInfo : ItemInfo
    {
        containerclass = "Supply350";
    };
};
class ic51_vest_plate_heavy: ic51_vest_plate_base
{
    displayName="[51st] Plating Heavy";
    class ItemInfo : ItemInfo
    {
        containerclass = "Supply350";
        class HitpointsProtectionInfo
        {
            class Chest
            {
                HitpointName = "HitChest";
                armor = 10;
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
class ic51_vest_plate_engineer: IDA_vest_base
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName="[51st] Plating Engineer";
    class ItemInfo : VestItem
    {  
        uniformmodel = "\Indecisive_Armoury_units\REPUBLIC\Vests\IDA_Vests.p3d";
        containerclass = "Supply350";
        hiddenSelections[] = {"Recon_Harness","GrenadeBag","KamaCW","KamaEp3","PauldronCW_L","PauldronCW_R","PauldronEp3_L","PauldronEp3_R","PauldronAccessory","ArmPouches_L","ArmPouches_R","SuspenderL","SuspenderR","ChestPadR","ShoulderPadR","PauldronARC"};
        mass = 15;
        vesttype = "Rebreather";
        class HitpointsProtectionInfo
        {
            class Chest
            {
                HitpointName = "HitChest";
                armor = 6;
                PassThrough = 0.08975;
            };
            class Diaphragm : Chest
            {
                HitpointName = "HitDiaphragm";
                armor = 22;
                PassThrough = 0.6;
            };
            class Abdomen : Diaphragm
            {
                HitpointName = "HitAbdomen";
                armor = 6;
                PassThrough = 0.08975;
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
class ic51_vest_plate_at: IDA_vest_base
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName="[51st] Plating AT";
    class ItemInfo : VestItem
    {  
        uniformmodel = "\Indecisive_Armoury_units\REPUBLIC\Vests\IDA_Vests.p3d";
        containerclass = "Supply350";
        hiddenSelections[] = {"Recon_Harness","GrenadeBag","KamaCW","KamaEp3","PauldronCW_L","PauldronCW_R","PauldronEp3_L","PauldronEp3_R","PauldronAccessory","ArmPouches_L","ArmPouches_R","SuspenderL","SuspenderR","ChestPadR","ShoulderPadR","PauldronARC"};
        mass = 15;
        vesttype = "Rebreather";
        class HitpointsProtectionInfo
        {
            class Chest
            {
                HitpointName = "HitChest";
                armor = 6;
                PassThrough = 0.08975;
            };
            class Diaphragm : Chest
            {
                HitpointName = "HitDiaphragm";
                armor = 14;
                PassThrough = 0.6;
            };
            class Abdomen : Diaphragm
            {
                HitpointName = "HitAbdomen";
                armor = 6;
                PassThrough = 0.08975;
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
class ic51_vest_plate_arc: ic51_vest_plate_base
{
    displayName="[51st] Plating ARC";
    model = "\Indecisive_Armoury_units\REPUBLIC\Vests\IDA_ARC_Armour.p3d";
    hiddenSelections[] = {"ChestPlate","Gauntlets","LegPlates","ARC_Belt"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\vests_clone\vest_arc_plates_co.paa),
        QPATHTOF(data\vests_clone\vest_arc_plates_co.paa),
        QPATHTOF(data\vests_clone\vest_arc_plates_co.paa),
        "\Indecisive_Armoury_Units\REPUBLIC\Vests\IDA_ARC_Belt\IDA_ARC_Belt_co.paa"
    };
    class ItemInfo : ItemInfo
    {
        containerclass = "Supply350";
        hiddenSelections[] = {"ChestPlate","Gauntlets","LegPlates","ARC_Belt"};
        uniformmodel = "\Indecisive_Armoury_units\REPUBLIC\Vests\IDA_ARC_Armour.p3d";
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

class IDA_Holster_1;
class ic51_holster_1_base : IDA_Holster_1
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName="[51st] Holster (DC-17)";
    class ItemInfo : VestItem
    {
        uniformmodel = "\Indecisive_Armoury_units\REPUBLIC\Vests\IDA_Holster_1.p3d";
        containerclass = "Supply300";
        hiddenSelections[] = {"camo"};
        vesttype = "Rebreather";
        mass = 15;
        class HitpointsProtectionInfo
        {
            class Chest
            {
                HitpointName = "HitChest";
                armor = 6;
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
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\vests_clone\vest_clone_co.paa)
    };
};
class IDA_Holster_2;
class ic51_holster_2_base : IDA_Holster_2
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName="[51st] Holster (Dual DC-17)";
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\vests_clone\vest_clone_co.paa)
    };
    class ItemInfo : VestItem
    {
        uniformmodel = "\Indecisive_Armoury_units\REPUBLIC\Vests\IDA_Holster_2.p3d";
        containerclass = "Supply300";
        hiddenSelections[] = {"camo"};
        vesttype = "Rebreather";
        mass = 15;
        class HitpointsProtectionInfo
        {
            class Chest
            {
                HitpointName = "HitChest";
                armor = 6;
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
class IDA_KnifeHolster;
class ic51_knifeholster_base : IDA_KnifeHolster 
{
    SCOPE_PRIVATE;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName="[51st] Holster (DC-17 + Knife)";
    class ItemInfo : VestItem
    {
        uniformmodel = "\Indecisive_Armoury_units\REPUBLIC\Vests\IDA_KnifeHolster.p3d";
        containerclass = "Supply300";
        hiddenSelections[] = {"holster","knife"};
        vesttype = "Rebreather";
        mass = 15;
        class HitpointsProtectionInfo
        {
            class Chest
            {
                HitpointName = "HitChest";
                armor = 6;
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
    hiddenSelections[]=
    {
        "holster",
        "knife"
    };
    hiddenSelectionsTextures[]=
    {
        "\Indecisive_Armoury_Units\REPUBLIC\Vests\IDA_Holster\IDA_KnifeHolster_co.paa",
        "\Indecisive_Armoury_Melee\Data\Clone_Knife\Textures\Clone_Hunting_Knife_co.paa"
    };
};

class ls_vest_poncho;
class ic51_vest_poncho : ls_vest_poncho 
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Poncho";
    class ItemInfo : ItemInfo
    {
        containerclass = "Supply300";
        vesttype = "Rebreather";
        class HitpointsProtectionInfo
        {
            class Chest
            {
                HitpointName = "HitChest";
                armor = 6;
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
