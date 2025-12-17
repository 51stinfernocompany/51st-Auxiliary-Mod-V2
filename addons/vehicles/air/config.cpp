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
            // Air Assault
            "3AS_ARC_170", // ARC-170
            "3AS_Delta7", // Delta-7
            "3as_V19_Torrent", // V-19
            "3AS_BTLB_Bomber", // Y-Wing / BTL-Y Wing
            "3AS_Vwing", // V-Wing
            "3AS_Z95_base", // Z-95
            // Air Transport
            "3AS_LAAT", // 3AS LAAT
            "ls_vehicles_laati", // LS LAAT
            "3AS_Republic_Heli_Rho", // Rho Ho Transport
            "3AS_LAAT_LE", // LAAT-LE
            // Air Logistics
            "3AS_Republic_Heli_Nu", // Nullclass Transport
            "3AS_Imperial_Air_Gozanti", // Gozanti Crusier
            "ls_vehicles_laatc", // LAAT-C
            "3as_Starships" // Republic Transport

        };
        units[]=
        {
            // Air Assault
            QCLASS(arc170),
            QCLASS(delta_7),
            QCLASS(v19),
            QCLASS(ywing),
            QCLASS(vwing),
            QCLASS(z95),
            // Air Transport
            QCLASS(laat_mk1_base),
            QCLASS(laat_ls),
            QCLASS(rho_ho),
            QCLASS(LAAT_LE),
            // Air Logistics
            QCLASS(nullclass),
            QCLASS(gozanti),
            QCLASS(laat_c_basic),
            QCLASS(republic_transport)
        };
        magazines[] = {};
        weapons[] = {};
    };
};
class CfgVehicles {
    class TextureSources;
    #include "config\assault.hpp"
    #include "config\transport.hpp"
    #include "config\logistics.hpp"
};
class lowROF;
class CfgWeapons {
    #include "config\Weapons.hpp"
};
