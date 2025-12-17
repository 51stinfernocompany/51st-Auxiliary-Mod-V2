// DC-23
class IDA_Blaster_Cell_Scatter_6Rnd_Blue;
class ic51_dc23_mag : IDA_Blaster_Cell_Scatter_6Rnd_Blue 
{
    author = AUTHOR;
    BaseWeapon = "ic51_dc23_mag";
    displayName = "[51st] DC-23 Magazine";
    ammo = "ic51_blasterbolt_dc23";
    SCOPE_PUBLIC;
};

class 3AS_8Rnd_ESlugY_Mag;
class ic51_scattergun_slug : 3AS_8Rnd_ESlugY_Mag
{
    author = AUTHOR;
    BaseWeapon = "ic51_scattergun_slug";
    displayName = "[51st] DP-23 Shotgun Slugs";
    count = 6;
    ammo = "ic51_blasterbolt_scatterbolt_slug";
    SCOPE_PUBLIC;
};

class 3AS_8Rnd_EY30_Pellets;
class ic51_scattergun_pellet : 3AS_8Rnd_EY30_Pellets
{
    author = AUTHOR;
    BaseWeapon = "ic51_scattergun_pellet";
    displayName = "[51st] DP-23 Shotgun Pellets";
    count = 6;
    ammo = "ic51_blasterbolt_scatterbolt_pellet";
    SCOPE_PUBLIC;
};

class 3AS_1Rnd_EC80_Flechette;
class ic51_scattergun_flechette : 3AS_1Rnd_EC80_Flechette
{
    author = AUTHOR;
    SCOPE_PUBLIC;
    BaseWeapon = "ic51_scattergun_flechette";
    displayName = "[51st] DP-23 Flechette Round";
    count = 1;
    mass = 25;
};
