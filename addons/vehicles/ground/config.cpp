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
            // Ground Assault
            "3AS_ATTE", // AT-TE
            "3AS_SaberTank", // Saber TX-130
            "3AS_UTAT", // UT-AT
            // Ground Transport
            "3AS_ITT", // ITT
            "3AS_ATRT", // ATRT
            "3AS_LightVics_Barc", // BARC
            "3AS_APC_Jug", // Juggernaut
            // Ground Logistics
            "3AS_ATAP", // ATAP
            "3AS_AV7", // AV-7
            "3AS_Republic_Heli_Rho", // Rho-Crates
            "3AS_RX200" // RX-200
        };
        units[]=
        {
            // Ground Assault
            QCLASS(atte),
            QCLASS(saber_tx),
            QCLASS(utat),
            // Ground Transport
            QCLASS(itt),
            QCLASS(atrt),
            QCLASS(barc),
            QCLASS(juggernaut),
            // Ground Logistics
            QCLASS(atap),
            QCLASS(av7),
            QCLASS(rho_crate),
            QCLASS(rho_crate_barracks),
            QCLASS(rx),
            QCLASS(itt_logi)
        };
        magazines[] = {};
        weapons[] = {};
    };
};
class CfgVehicles {
    #include "config\assault.hpp"
    #include "config\transport.hpp"
    #include "config\logistics.hpp"
};
