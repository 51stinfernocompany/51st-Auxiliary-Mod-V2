class JLTS_stun_muzzle;
class ic51_stun_muzzle: JLTS_stun_muzzle {
    magazines[] = {"ic51_stun_mag_short","ic51_stun_mag_long"};
};
class EGLM;
// DC-15S UGL
class IDA_DC15S_UGL;
class ic51_dc15s_ugl : IDA_DC15S_UGL 
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc15s_ugl";
    displayName = "[51st] DC-15S (UGL)";
    magazines[] = {"ic51_dc15s_mag"};
    muzzles[] = {"this","EGLM"};
    
    SCOPE_PUBLIC;
    class FullAuto : FullAuto {
        reloadTime = 0.1999995;
    };
    class Single : Single {
        reloadTime = 0.102;
    };
    class EGLM : EGLM {
        displayName="[51st] UGL";
        descriptionShort="Grenade Launcher";
        magazines[] =
        {
            "ic51_HE_LauncherGrenade",
            "ic51_Smoke_LauncherGrenade",
            "ic51_SmokeRed_LauncherGrenade",
            "ic51_SmokeGreen_LauncherGrenade",
            "ic51_SmokeBlue_LauncherGrenade",
            "ic51_SmokePurple_LauncherGrenade",
            "ACE_40mm_Flare_Red",
            "ACE_40mm_Flare_White",
            "ACE_HuntIR_M203",
            "ic51_Ultra_Premium_HE_LauncherGrenade"
        };
        magazineWell[] = {};
    };
};

// DC15A
class IDA_DC15A;
class ic51_dc15a : IDA_DC15A 
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc15a";
    displayName = "[51st] DC-15A";
    magazines[] = {"ic51_dc15a_mag"};
    muzzles[] = {"this","Stun"};
    SCOPE_PUBLIC;
    class FullAuto : FullAuto {
        reloadTime = 0.1999995;
    };
    class Single : Single {
        reloadTime = 0.102;
    };
    class Stun : ic51_stun_muzzle{
        displayName="[51st] Stun";
    };
};

// DC15A UGL
class IDA_DC15A_UGL;
class ic51_dc15a_ugl : IDA_DC15A_UGL
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc15a_ugl";
    displayName = "[51st] DC-15A (UGL)";
    magazines[] = {"ic51_dc15a_mag"};
    muzzles[] = {"this","EGLM"};
    SCOPE_PUBLIC;
    class FullAuto : FullAuto {
        reloadTime = 0.1999995;
    };
    class Single : Single {
        reloadTime = 0.102;
    };
    class Stun : ic51_stun_muzzle{
        displayName="[51st] Stun";
    };
    class EGLM : EGLM {
        displayName="[51st] UGL";
        descriptionShort="Grenade Launcher";
        magazines[] =
        {
            "ic51_HE_LauncherGrenade",
            "ic51_Smoke_LauncherGrenade",
            "ic51_SmokeRed_LauncherGrenade",
            "ic51_SmokeGreen_LauncherGrenade",
            "ic51_SmokeBlue_LauncherGrenade",
            "ic51_SmokePurple_LauncherGrenade",
            "ACE_40mm_Flare_Red",
            "ACE_40mm_Flare_White",
            "ACE_HuntIR_M203",
            "ic51_Ultra_Premium_HE_LauncherGrenade"
        };
        magazineWell[] = {};
    };
};

// DC15S
class IDA_DC15S;
class ic51_dc15s : IDA_DC15S
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc15s";
    displayName = "[51st] DC-15S";
    magazines[] = {"ic51_dc15s_mag"};
    muzzles[] = {"this","Stun"};
    SCOPE_PUBLIC;
    class Stun : ic51_stun_muzzle{
        displayName="[51st] Stun";
    };
};

// DC-15C
class 3AS_DC15C_F;
class ic51_dc15c : 3AS_DC15C_F
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc15c";
    displayName = "[51st] DC-15C";
    magazines[] = {"ic51_dc15c_mag"};
    magazineWell[] = {};
    recoil = "ic51_recoil_15c";
    class FullAuto : FullAuto {
        reloadTime = 0.1;
    };
    class Single : Single {
        reloadTime = 0.1;
    };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class CowsSlot : CowsSlot{
            class compatibleItems {};
        };
    };
};

// DC17M
class IDA_DC17M;
class ic51_DC17M : IDA_DC17M {
    author = AUTHOR;
    BaseWeapon = "ic51_DC17M";
    displayName = "[51st] DC-17M";
    magazines[] = {"ic51_dc17m_standard_mag","ic51_dc17m_AT_mag","ic51_dc17m_SNR_mag"};
    modes[] = {"FullAuto","Burst","Single"};
    SCOPE_PUBLIC;
    class FullAuto : FullAuto // Automatic Fire (For standard mag, CQB)
    {
        textureType = "fastAuto";
        dispersion = 0.003;
    };
    class Burst : Single // Single fire, autofire. (For standard mag)
    {
        autoFire = 1;
        reloadTime = 0.25;
        dispersion = 0.001;
        displayName = "Burst";
        textureType = "fullAuto";
    };
    class Single : Single
    {
        dispersion = 0;
    };
};
