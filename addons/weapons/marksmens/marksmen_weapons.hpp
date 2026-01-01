/*
// DC-15x
class IDA_dc15x;
class ic51_dc15x : IDA_dc15x 
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc15x";
    displayName = "[51st] DC-15X";
    minRange = 100;
    midRange = 500;
    maxRange = 1500;
    magazines[] = {"ic51_dc15x_magazine"};
    SCOPE_PUBLIC;
    class OpticsModes : OpticsModes {
        class IDA_DC15X_Scope;
        class ic51_DC15X_Scope : IDA_DC15X_Scope {
            visionMode[] = {"Normal","NVG","Ti"};
            thermalMode[] = {0,1};
        };
    };
    class Single : Single {
        recoil = "recoil_single_ebr";
        dispersion = 0;
        recoilProne = "recoil_single_prone_ebr";
    };
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
        class CowsSlot: CowsSlot
        {
            class UnderBarrelSlot: UnderBarrelSlot
            {
                class CompatibleItems
                {
                    ic51_marksmen_bipod = 1;
                };
            };
        };
    };
};


// Firepuncher 773fp
class IDA_773Firepuncher;
class ic51_773Firepuncher : IDA_773Firepuncher {
    author = AUTHOR;
    BaseWeapon = "ic51_773Firepuncher";
    displayName = "[51st] 773 Firepuncher";
    maxRecoilSway = 0.03;
    dispersion = 0.05;
    minRange = 100;
    midRange = 800;
    maxRange = 2500;
    class OpticsModes : OpticsModes {
        class IDA_773Firepuncher_Scope;
        class ic51_773Firepuncher_Scope : IDA_773Firepuncher_Scope {
            visionMode[] = {"Normal","NVG","Ti"};
            thermalMode[] = {0,1};
        };
    };
    magazines[] = {"ic51_773FP_magazine"};
    
    SCOPE_PUBLIC;
    class Single: Single {
        dispersion = 0;
        reloadTime = 0.80;
    };

    class WeaponSlotsInfo : WeaponSlotsInfo {
        class CowsSlot : CowsSlot {
            compatibleItems[] = {""};
        };
    };
};



// Valken-38x

class 3AS_optic_VK38X_F;
class ic51_optic_vk38x : 3AS_optic_VK38X_F {
    displayName = "[51st] VK38 Scope";
    author = AUTHOR;
    class ItemInfo : ItemInfo {
        class OpticsModes : OpticsModes {
            class Snip : Snip {
                visionMode[] = {"Normal","NVG","Ti"};
                thermalMode[] = {0,1};
            };
        };
    };
};

class 3AS_Valken38X_F;
class ic51_Valken38X : 3AS_Valken38X_F {
    author = AUTHOR;
    BaseWeapon = "ic51_Valken38X";
    displayName = "[51st] Valken-38X";
    minRange = 100;
    midRange = 800;
    maxRange = 2500;
    magazines[] = {"ic51_valken38x_mag"};
    magazineWell[] = {};
    
    SCOPE_PUBLIC;
    class Single: Single {
        dispersion = 0;
        reloadTime = 0.1999995;
    };
    class LinkedItems : LinkedItems {
        class LinkedItemsOptic : LinkedItemsOptic {
            item = "ic51_optic_vk38x";
        };
    };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class CowsSlot : CowsSlot {
            class compatibleItems {
                ic51_optic_vk38x = 1;
            };
        };
    };
};
*/

// DC-15x
class ShdwCmpny_DC15X_F;
class ic51_dc15x : ShdwCmpny_DC15X_F 
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc15x";
    displayName = "[51st] DC-15X";
    minRange = 100;
    midRange = 500;
    maxRange = 1500;
    magazines[] = {"ic51_dc15x_magazine"};
    SCOPE_PUBLIC;
    class OpticsModes : OpticsModes {
        class IDA_DC15X_Scope;
        class ic51_DC15X_Scope : IDA_DC15X_Scope {
            visionMode[] = {"Normal","NVG","Ti"};
            thermalMode[] = {0,1};
        };
    };
    class Single : Single {
        recoil = "recoil_single_ebr";
        dispersion = 0;
        recoilProne = "recoil_single_prone_ebr";
    };
    class WeaponSlotsInfo: WeaponSlotsInfo{
        class MuzzleSlot: MuzzleSlot
        {
            compatibleItems[] = {
                "ic51_dc15_supp",
                "ic51_dc19_supp",
            };
        };
        class CowsSlot: CowsSlot 
        {
            compatibleItems[] = {
                "ic51_dc15le_optic",
                "ic51_dc15x_optic", 
                "ic51_e30b_optic",
                "ic51_e30c_optic",
                "ic51_valken_optic",
                "ic51_westar_optic",
            };
        };
        class PointerSlot: PointerSlot 
        {
            compatibleItems[] = {
                
            };
        };
        class UnderBarrelSlot: UnderBarrelSlot 
        {
            compatibleItems[] = {
                "ic51_bipod"
            };
        };
    };
};


// Firepuncher 773fp
class ShdwCmpny_773;
class ic51_773Firepuncher : ShdwCmpny_773{
    author = AUTHOR;
    BaseWeapon = "ic51_773Firepuncher";
    displayName = "[51st] 773 Firepuncher";
    maxRecoilSway = 0.03;
    dispersion = 0.05;
    minRange = 100;
    midRange = 800;
    maxRange = 2500;
    class OpticsModes : OpticsModes {
        class IDA_773Firepuncher_Scope;
        class ic51_773Firepuncher_Scope : IDA_773Firepuncher_Scope {
            visionMode[] = {"Normal","NVG","Ti"};
            thermalMode[] = {0,1};
        };
    };
    magazines[] = {"ic51_773FP_magazine"};
    
    SCOPE_PUBLIC;
    class Single: Single {
        dispersion = 0;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo{
        class MuzzleSlot: MuzzleSlot
        {
            compatibleItems[] = {
                "ic51_dc15_supp",
                "ic51_dc19_supp",
            };
        };
        class CowsSlot: CowsSlot 
        {
            compatibleItems[] = {
                "ic51_dc15le_optic",
                "ic51_dc15x_optic", 
                "ic51_e30b_optic",
                "ic51_e30c_optic",
                "ic51_valken_optic",
                "ic51_westar_optic",
            };
        };
        class PointerSlot: PointerSlot 
        {
            compatibleItems[] = {
                
            };
        };
        class UnderBarrelSlot: UnderBarrelSlot 
        {
            compatibleItems[] = {
                "ic51_bipod"
            };
        };
    };
};



// Valken-38x
class ShdwCmpny_Valken38X_F;
class ic51_Valken38X : ShdwCmpny_Valken38X_F {
    author = AUTHOR;
    BaseWeapon = "ic51_Valken38X";
    displayName = "[51st] Valken-38X";
    minRange = 100;
    midRange = 800;
    maxRange = 2500;
    magazines[] = {"ic51_valken38x_mag"};
    magazineWell[] = {};
    
    SCOPE_PUBLIC;
    class Single: Single {
        dispersion = 0;
        reloadTime = 0.1999995;
    };
    class WeaponSlotsInfo: WeaponSlotsInfo{
        class MuzzleSlot: MuzzleSlot
        {
            compatibleItems[] = {
                "ic51_dc15_supp",
                "ic51_dc19_supp",
            };
        };
        class CowsSlot: CowsSlot 
        {
            compatibleItems[] = {
                "ic51_dc15le_optic",
                "ic51_dc15x_optic", 
                "ic51_e30b_optic",
                "ic51_e30c_optic",
                "ic51_valken_optic",
                "ic51_westar_optic",
            };
        };
        class PointerSlot: PointerSlot 
        {
            compatibleItems[] = {
                
            };
        };
        class UnderBarrelSlot: UnderBarrelSlot 
        {
            compatibleItems[] = {
                "ic51_bipod"
            };
        };
    };
};
