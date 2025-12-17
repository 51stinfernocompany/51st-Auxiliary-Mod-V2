// Grenades
class IDA_grenade_Detonator_ammo;
class ic51_detonator_ammo : IDA_grenade_Detonator_ammo{
    BaseWeapon = "ic51_detonator_ammo";
    displayName = "[51st] Detonator Ammo";
    SCOPE_PUBLIC;
};
class IDA_grenade_Imploder_ammo;
class ic51_imploder_ammo : IDA_grenade_Imploder_ammo{
    BaseWeapon = "ic51_imploder_ammo";
    displayName = "[51st] Imploder Ammo";
    SCOPE_PUBLIC;
    hit = 220;
    indirectHit = 140;
    dangerRadiusHit = 90;
    explosionEffectsRadius = 60;
    explosionTime = 5.5;
    timeToLive = 6.5;
    soundFly[] = {"\Indecisive_Armoury_Sounds\Detonator_Timer.ogg",6,1,90};
};
class IDA_grenade_Sonic_ammo;
class ic51_sonic_ammo : IDA_grenade_Sonic_ammo{
    BaseWeapon = "ic51_sonic_ammo";
    displayName = "[51st] Sonic Ammo";
    SCOPE_PUBLIC;
};
// Smokes
class IDA_smoke_Green;
class ic51_SmokeShellGreen : IDA_smoke_Green{
    BaseWeapon = "ic51_SmokeShellGreen";
    displayName = "[51st] Smoke Green";
    SCOPE_PUBLIC;
};
class IDA_smoke_blue;
class ic51_SmokeShellBlue : IDA_smoke_blue{
    BaseWeapon = "ic51_SmokeShellBlue";
    displayName = "[51st] Smoke Blue";
    SCOPE_PUBLIC;        
};
class IDA_smoke_purple;
class ic51_SmokeShellPurple : IDA_smoke_purple{
    BaseWeapon = "ic51_SmokeShellPurple";
    displayName = "[51st] Smoke Purple";
    SCOPE_PUBLIC;
};
class 3AS_SmokeShellYellow;
class ic51_SmokeShellYellow : 3AS_SmokeShellYellow{
    BaseWeapon = "ic51_SmokeShellYellow";
    displayName = "[51st] Smoke Yellow";
    SCOPE_PUBLIC;
};
class IDA_smoke_Red;
class ic51_SmokeShellRed : IDA_smoke_Red{
    BaseWeapon = "ic51_SmokeShellRed";
    displayName = "[51st] Smoke Red";
    SCOPE_PUBLIC;
};
class 3AS_SmokeShellOrange;
class ic51_SmokeShellOrange : 3AS_SmokeShellOrange{
    BaseWeapon = "ic51_SmokeShellOrange";
    displayName = "[51st] Smoke Orange";
    SCOPE_PUBLIC;
};
class IDA_smoke;
class ic51_SmokeShellWhite : IDA_smoke{
    BaseWeapon = "ic51_SmokeShellWhite";
    displayName = "[51st] Smoke White";
    SCOPE_PUBLIC;
};
class ShieldGrenade_Ammo;
class ic51_weaponshield_ammo : ShieldGrenade_Ammo {
    BaseWeapon = "ic51_weaponshield_ammo";
    displayName = "[51st] Weapon Shield";
    SCOPE_PUBLIC;
};
