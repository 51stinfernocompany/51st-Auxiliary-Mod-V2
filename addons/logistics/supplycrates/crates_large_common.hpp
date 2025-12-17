class ic51_crate_large : ic51_crate_large_base
{
    SCOPE_PUBLIC;
    displayName = "[51st] Large Resupply Crate (Standard)";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Black\Supply_Large_Black_co.paa"};
    maximumLoad = 100000;
    class TransportMagazines 
    {
        CRATE_MAG(ic51_dc15a_mag,100);
        CRATE_MAG(ic51_dc15s_mag,100);
        CRATE_MAG(ic51_dc15sa_mag,50);
        CRATE_MAG(ic51_dc17_mag,50);
        CRATE_MAG(ic51_dc23_mag,20);
        CRATE_MAG(ic51_dp23_mag,20);
        CRATE_MAG(ic51_dc15c_mag,20);
        CRATE_MAG(ic51_dc15x_magazine,30);
        CRATE_MAG(ic51_773FP_magazine,30);
        CRATE_MAG(ic51_valken38x_mag,55);
        CRATE_MAG(ic51_z6_mag,35);
        CRATE_MAG(ic51_z6_mag_explosive,15);
        CRATE_MAG(ic51_dc15le_mag,35);
        CRATE_MAG(ic51_plx_aa,20);
        CRATE_MAG(ic51_plx_at,20);
        CRATE_MAG(ic51_plx_he,20);
        CRATE_MAG(ic51_rps6_rocket,30);
        CRATE_MAG(ic51_stun_mag_short,20);
        CRATE_MAG(ic51_ThermalDetonator,50);
        CRATE_MAG(ic51_SmokeWhite,50);
        CRATE_MAG(ic51_SmokeBlue,50);
        CRATE_MAG(ic51_SmokeGreen,50);
        CRATE_MAG(ic51_dc17m_AT_mag,30);
        CRATE_MAG(ic51_dc17m_standard_mag,50);
        CRATE_MAG(ic51_dc17m_SNR_mag,20);
        CRATE_MAG(ic51_hh12_at,20);
        CRATE_MAG(ic51_hh12_ion,20);
        CRATE_MAG(Laserbatteries,5);
        CRATE_MAG(ic51_HE_LauncherGrenade,8);
        CRATE_MAG(ic51_Smoke_LauncherGrenade,8);
        CRATE_MAG(ic51_SmokeRed_LauncherGrenade,8);
        CRATE_MAG(ic51_SmokeGreen_LauncherGrenade,8);
        CRATE_MAG(ic51_SmokeBlue_LauncherGrenade,8);
        CRATE_MAG(ic51_SmokePurple_LauncherGrenade,8);
        CRATE_MAG(ACE_40mm_Flare_white,8);
        CRATE_MAG(ACE_HuntIR_M203,4);
        CRATE_MAG(ACE_40mm_Flare_green,8);
        CRATE_MAG(ACE_40mm_Pike,8);
    };
    class TransportWeapons
    {
        CRATE_WEAPON(ic51_dc15a,15);
        CRATE_WEAPON(ic51_dc15s,15);
        CRATE_WEAPON(ic51_dc17,15);
        CRATE_WEAPON(ic51_dc15c,5);
        CRATE_WEAPON(ic51_rps6,5);
        CRATE_WEAPON(ic51_z6,3);
        CRATE_WEAPON(ic51_plx_launcher,3);
        CRATE_WEAPON(ic51_hh12,3);
    };
    class TransportItems
    {
        CRATE_ITEM(ACE_elasticBandage,200);
        CRATE_ITEM(ACE_packingBandage,200);
        CRATE_ITEM(ACE_quikclot,200);
        CRATE_ITEM(ACE_plasmaIV,10);
        CRATE_ITEM(ACE_plasmaIV_500,20);
        CRATE_ITEM(ACE_splint,50);
        CRATE_ITEM(ACE_surgicalKit,10);
        CRATE_ITEM(ACE_tourniquet,40);
        CRATE_ITEM(IDA_BactaBandage,30);
        CRATE_ITEM(kat_IV_16,20);
        CRATE_ITEM(kat_larynx,20);
        CRATE_ITEM(kat_chestSeal,30);
        CRATE_ITEM(kat_EACA,30);
        CRATE_ITEM(kat_naloxone,30);
        CRATE_ITEM(ACE_morphine,50);
        CRATE_ITEM(ACE_epinephrine,50);
        CRATE_ITEM(ACE_adenosine,50);
        CRATE_ITEM(kat_CaffeineItem,50);
        CRATE_ITEM(kat_Painkiller,35);
        CRATE_ITEM(kat_IO_FAST,20);
        CRATE_ITEM(kat_Carbonate,20);
    };
};
