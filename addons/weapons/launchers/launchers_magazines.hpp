// PLX
class 3AS_JLTS_MK39_AA;
class ic51_plx_aa : 3AS_JLTS_MK39_AA {
    author = AUTHOR;
    BaseWeapon = "ic51_plx_aa";
    displayName = "[51st] PLX AA Missile Pack";
    mass = 110;
    count = "4";
    SCOPE_PUBLIC;
    
};
class 3AS_JLTS_MK44_HE;
class ic51_plx_he : 3AS_JLTS_MK44_HE {
    author = AUTHOR;
    BaseWeapon = "ic51_plx_he";
    displayName = "[51st] PLX HE Missile Pack";
    mass = 130;
    count = "2";
    SCOPE_PUBLIC;
    
};
class 3AS_JLTS_MK43_AT;
class ic51_plx_at : 3AS_JLTS_MK43_AT {
    author = AUTHOR;
    BaseWeapon = "ic51_plx_at";
    displayName = "[51st] PLX AT Missile Pack";
    mass = 130;
    count = "2";
    SCOPE_PUBLIC;
    
};

// RPS-6
class IDA_RPS6_rocket;
class ic51_rps6_rocket : IDA_RPS6_rocket {
    author = AUTHOR;
    BaseWeapon = "ic51_rps6_rocket";
    displayName = "[51st] RPS-6 Rocket";
    ammo = "IDA_rocket";
    mass = 60;
    SCOPE_PUBLIC;
    
};

class ic51_rps6_rocket_disposable : ic51_rps6_rocket
{
    mass = LAUNCHER_MAGAZINE_MASS;
};

class 3AS_MK41_AT;
class ic51_hh12_at : 3AS_MK41_AT {
    author = AUTHOR;
    BaseWeapon = "ic51_hh12_at";
    displayName = "[51st] HH12 AT Missile";
    mass = 100;
    count = "1";
    SCOPE_PUBLIC;
    
};
class ic51_hh12_ion : ic51_hh12_at {
    author = AUTHOR;
    BaseWeapon = "ic51_hh12_ion";
    displaynameshort = "Ion Rocket";
    ammo = "ic51_hh12_ion_ammo";
    displayName = "[51st] HH12 Ion Missile";
    mass = 100;
    count = "1";
    SCOPE_PUBLIC;
    
};
