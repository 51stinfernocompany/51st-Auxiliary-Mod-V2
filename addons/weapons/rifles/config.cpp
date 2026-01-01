#include "..\BaseControls.hpp"
#include "script_component.hpp"
class CfgPatches
{
    class SUBADDON
    {
        author = AUTHOR;
        name = QUOTE(SUBCOMPONENT);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "JLTS_weapons_Core",
            "IDA_Ammo",
            "IDA_Republic",
            "ShadowLegion_Aux_Weapons",
        };
        units[]={};
        ammo[] =
        {
            "ic51_blasterbolt_overcharged_dc17m",
            "ic51_blasterbolt_dc17m",
            "ic51_at_shell_dc17M",
            "ic51_he_launchergrenade"
        };
        magazines[] =
        {
            "ic51_dc17m_SNR_mag",
            "ic51_dc17m_standard_mag",
            "ic51_dc17m_AT_mag",
            "ic51_dc15s_mag",
            "ic51_dc15s_mag_red",
            "ic51_dc15a_mag",
            "ic51_dc15a_mag_red",
            "ic51_stun_mag_short",
            "ic51_stun_mag_long",
            "ic51_HE_LauncherGrenade",
            "ic51_Smoke_LauncherGrenade",
            "ic51_SmokeRed_LauncherGrenade",
            "ic51_SmokeGreen_LauncherGrenade",
            "ic51_SmokeBlue_LauncherGrenade",
            "ic51_SmokePurple_LauncherGrenade",
            "ic51_Ultra_Premium_HE_LauncherGrenade",
            "ic51_dc15c_mag",
            "ic51_subsonic_45rnd",
            "ic51_tracerless_30rnd",
            "ic51_westar_mag",
        };
        weapons[] =
        {
            "ic51_DC17M",
            "ic51_dc15s",
            "ic51_dc15a",
            "ic51_dc15a_ugl",
            "ic51_stun_muzzle",
            "ic51_dc15c",
            "ic51_dc15c_mk2",
            "ic51_dc15c_mk3",
            "ic51_dc19",
            "ic51_westar",
        };
    };
};
class CfgAmmo {
    #include "rifles_ammo.hpp"
};
class CfgMagazines {
    #include "rifles_magazines.hpp"
};
class CfgWeapons {
    #include "rifles_weapons.hpp"
};
/*
class cfgRecoils{
class Default;
class ic51_recoil_default: Default
{
        kickBack[]={0.029999999,0.059999999};
        muzzleInner[]={0,0,0.1,0.1};
        muzzleOuter[]={0.30000001,1,0.30000001,0.2};
        permanent=0.1;
        temporary=0.0099999998;
};
class ic51_recoil_15c: ic51_recoil_default
	{
		muzzleOuter[]={0.1,0.35,0.30000001,0.200000005};
		kickBack[]={0.039999999,0.050000001};
		temporary=0.0099999998;
	};
};
*/
