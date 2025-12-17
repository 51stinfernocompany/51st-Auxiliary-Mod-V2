// ARC-170
class 3AS_ARC_170_Orange;
class ic51_arc170: 3AS_ARC_170_Orange
{
    displayName="[51st] ARC-170";
    VEHICLES_AIR(ic51_air_assault);
    textureList[] = {"Republic",0,"Blue",0,"Green",0,"Orange",0,"Yellow",0,"51st",1};
    class TextureSources : TextureSources
    {
        class 51st
        {
            author = AUTHOR;
            displayName = "[51st] ARC-170";
            faction = "ic51_faction_inferno";
            textures[]=
            {
                QPATHTOF(air\data\arc170\arc170_mainframe_co.paa),
                QPATHTOF(air\data\arc170\arc170_wingsengines_co.paa),
                QPATHTOF(air\data\arc170\arc170_guns_co.paa)
            };
        };
    };
};

// Delta 7
class 3AS_Delta7_F;
class ic51_delta_7: 3AS_Delta7_F
{
    displayName="[51st] Delta-7";
    VEHICLES_AIR(ic51_air_assault);
    hiddenselections[] = {"camo","camo1","camo2","camo3"};
    hiddenselectionstextures[]=
    {
        QPATHTOF(air\data\delta7\Delta7_Hull_co.paa),
        QPATHTOF(air\data\delta7\Delta7_Landing_Gear_co.paa),
        QPATHTOF(air\data\delta7\Delta7_Cockpit_co.paa),
        QPATHTOF(air\data\delta7\Delta7_Interfaces_ca.paa)
    };
};

// V-19
class 3AS_V19_base;
class ic51_v19: 3AS_V19_base
{
    displayName="[51st] V-19 Torrent";
    VEHICLES_AIR(ic51_air_assault);
    hiddenselectionstextures[]=
    {
        QPATHTOF(air\data\v19\v19_wings_co.paa),
        QPATHTOF(air\data\v19\v19_wingplates_co.paa),
        QPATHTOF(air\data\v19\v19_hull_co.paa),
        QPATHTOF(air\data\v19\v19_gungear_co.paa),
        "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
        QPATHTOF(air\data\v19\v19_pizzlepit_co.paa)
    };
};

// Y-Wing
class 3AS_BTLB_Bomber;
class ic51_ywing: 3AS_BTLB_Bomber
{
    displayName="[51st] BTL-Y Wing";
    VEHICLES_AIR(ic51_air_assault);
    hiddenselectionstextures[]=
    {
        QPATHTOF(air\data\ywing\ywing_chasis_co.paa),
        QPATHTOF(air\data\ywing\ywing_detail_co.paa),
        QPATHTOF(air\data\ywing\ywing_interior_co.paa)
    };
    weapons[] = {"ic51_ywing_cannon","CMFlareLauncher","Laserdesignator_pilotCamera"};
};

// V-Wing
class 3as_Vwing_base;
class ic51_vwing: 3as_Vwing_base
{
    displayName="[51st] V-Wing (3AS)";
    VEHICLES_AIR(ic51_air_assault);
    fuelCapacity=3700;
    fuelConsumptionRate=0.1;
    texturelist[] = {"Imperial",1,"Republic",0,"51st",0};
    hiddenselectionstextures[] = {"3AS\3AS_Vwing\data\vwing_main_Imp_co.paa","3AS\3AS_Vwing\data\vwing_astromechdroid_Imp_co.paa","3AS\3AS_Vwing\data\vwing_wings_Imp_co.paa"};
    class TextureSources : TextureSources
    {
        class 51st
        {
            author = AUTHOR;
            displayName = "[51st] V-Wing (3AS)";
            faction = "ic51_air_assault";
            textures[]=
            {
                QPATHTOF(air\data\vwing\51st_vwing_co),
                QPATHTOF(air\data\vwing\51st_vwing_int_co)
            };
        };
    };
    weapons[] = {"ic51_vwing_medium_cannon","3AS_ARC_Missile_AA","weapon_AMRAAMLauncher","CMFlareLauncher"};
};


// Z-95
class 3AS_Z95_Republic;
class ic51_z95: 3AS_Z95_Republic
{
    displayName="[51st] Z-95";
    VEHICLES_AIR(ic51_air_assault);
    hiddenselectionstextures[]=
    {
        QPATHTOF(air\data\z95\z95_body_co.paa),
        QPATHTOF(air\data\z95\z95_cockpit_co.paa),
        QPATHTOF(air\data\z95\z95_glass_co.paa)
    };
};
