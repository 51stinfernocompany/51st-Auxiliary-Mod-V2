// Z-6
class IDA_Z6;
class ic51_z6 : IDA_Z6 {
    author = AUTHOR;
    BaseWeapon = "ic51_z6";
    displayName = "[51st] Z-6 Rotary Cannon";
    magazines[] = {"ic51_z6_mag","ic51_z6_mag_explosive"};
    modes[] = {"Auto","Single"};
    SCOPE_PUBLIC;
};

class IDA_DC15LE;
class ic51_dc15le : IDA_DC15LE
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc15le";
    displayName = "[51st] DC-15LE";
    magazines[] = {"ic51_dc15le_mag"};
    modes[] = {"FullAuto"};
    muzzles[] = {"this"};
    SCOPE_PUBLIC;
    class FullAuto : FullAuto 
    {
        autoFire = 1;
        dispersion = 0.00145;
        reloadTime = 0.085; // This is rounds per minute
    };
    class Single {};
    class EGLM {};
};


class 3AS_DC15L_F;
class ic51_dc42h : 3AS_DC15L_F {
    author = AUTHOR;
    baseWeapon = "ic51_dc42h";
    displayName = "[51st] DC-42H";
    magazines[] = {"ic51_dc42h_mag"};
    magazineWell[] = {};
    SCOPE_PUBLIC;
};

// DLT-15
/*
class IDA_DLT15;
class ic51_dlt15 : IDA_DLT15
{
    author = AUTHOR;
    BaseWeapon = "ic51_dlt15";
    displayName = "[51st] DLT-15";
    magazines[] = {"ic51_dlt15_mag"};
    modes[] = {"FullAuto", "Single"};
    SCOPE_PUBLIC;
    class FullAuto : FullAuto 
    {
        textureType = "fastAuto"; // This defines what is visually shown for firemode.
    };
    class Single : Single // It aint single buddy, it's not burst either but kek
    {
        autoFire = 1;
        dispersion = 0.00145;
        reloadTime = 0.12; // This is rounds per minute
        displayName = "Burst";
        textureType = "fullAuto"; // This defines what is visually shown for firemode.
    };
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
        class UnderBarrelSlot: UnderBarrelSlot
        {
            class CompatibleItems
            {
                ic51_Bipod_dlt15 = 1;
            };
        };
    };
};
*/
