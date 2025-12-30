// DP-23
class 3AS_DP23_F;
class ic51_dp23 : 3AS_DP23_F 
{
    author = AUTHOR;
    BaseWeapon = "ic51_dp23";
    displayName = "[51st] DP-23";
    magazines[] = {"ic51_scattergun_slug","ic51_scattergun_pellet"};
    reloadTime = 0.22;
    magazineWell[] = {};
    SCOPE_PUBLIC;
};

// DP-23 GL
class 3AS_DP23_GL;
class 3AS_FL_F;
class ic51_dp23_gl : 3AS_DP23_GL
{
    author = AUTHOR;
    BaseWeapon = "ic51_dp23_gl";
    displayName = "[51st] DP-23 Grenade Launcher";
    magazines[] = {"ic51_scattergun_slug","ic51_scattergun_pellet"};
    magazineWell[] = {};
    class 3AS_FL_F : 3AS_FL_F
    {
        magazines[] = {"ic51_scattergun_flechette"};
        magazineWell[] = {};
    };
};

// DC-23
class IDA_DC23;
class ic51_dc23 : IDA_DC23 
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc23";
    displayName = "[51st] DC-23 Scatterblaster";
    magazines[] = {"ic51_dc23_mag"};
    reloadTime = 0.125;
    SCOPE_PUBLIC;
};

// Scattergun
class 3AS_ScatterGun_F;
class ic51_scattergun : 3AS_ScatterGun_F {
    author = AUTHOR;
    BaseWeapon = "ic51_scattergun";
    displayName = "[51st] Scattergun";
    magazines[] = {"ic51_scattergun_slug","ic51_scattergun_pellet"};
    magazineWell[] = {};
};
