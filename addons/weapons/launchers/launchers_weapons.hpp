// PLX
class 3AS_PLX1_F;
class ic51_plx_launcher : 3AS_PLX1_F {
    author = AUTHOR;
    BaseWeapon = "ic51_plx_launcher";
    displayName = "[51st] PLX-1 Guided Missile Launcher";
    magazines[] = {"ic51_plx_aa","ic51_plx_he","ic51_plx_at"};
    reloadTime = 2;
    ace_overpressure_damage = 0;
    SCOPE_PUBLIC;
};

// RPS-6
class IDA_RPS6HP;
class ic51_rps6 : IDA_RPS6HP {
    author = AUTHOR;
    BaseWeapon = "ic51_rps6";
    displayName = "[51st] RPS-6";
    magazines[] = {"ic51_rps6_rocket"};
    SCOPE_PUBLIC;
};

// RPS-6 Disposable

class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };

class IDA_RPS6_Disposable;
class ic51_rps6_disposable : IDA_RPS6_Disposable
{
    author = AUTHOR;
    SCOPE_HIDDEN;
    baseWeapon = "ic51_rps6_disposable_loaded";
    displayName = "[51st] Disposable Launcher";
    magazines[] = {"ic51_rps6_rocket_disposable"};
    magazineReloadTime = 0.1;
    reloadMagazineSound[] = {"",1,1};
    class EventHandlers 
    {
        fired = "_this call CBA_fnc_firedDisposable";
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = LAUNCHER_MASS;
    };
};
class ic51_rps6_disposable_loaded : ic51_rps6_disposable
{
    SCOPE_PUBLIC;
    magazines[] = {"CBA_FakeLauncherMagazine"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = LAUNCHER_MASS + LAUNCHER_MAGAZINE_MASS;
    };
};
class ic51_rps6_disposable_used : ic51_rps6_disposable
{
    SCOPE_HIDDEN;
    magazines[] = {"CBA_FakeLauncherMagazine"};
    displayName = "[51st] Disposable Launcher (Used)";
    baseWeapon = "ic51_rps6_disposable_used";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = LAUNCHER_MASS + LAUNCHER_MAGAZINE_MASS;
    };
};

// HH12
class 3AS_HH12_F;
class ic51_hh12 : 3AS_HH12_F
{
    author = AUTHOR;
    SCOPE_PUBLIC;
    baseWeapon = "ic51_hh12";
    displayName = "[51st] HH12 Rocket Launcher";
    magazines[] = {"ic51_hh12_at","ic51_hh12_ion"};
};
