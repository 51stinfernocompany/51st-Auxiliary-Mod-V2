// ITT
class 3AS_ITT;
class ic51_itt: 3AS_ITT
{
    displayName="[51st] ITT";
    VEHICLES_GROUND(ic51_ground_transport);
    hiddenSelections[]=
	{
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7"
	};
    hiddenselectionstextures[]=
    {
        QPATHTOF(ground\data\itt\51st_ITT_CO),
        "3as\3as_itt\data\glass_co.paa",
        QPATHTOF(ground\data\itt\51st_ITT_int_back_CO),
        QPATHTOF(ground\data\itt\51st_ITT_door_CO),
        QPATHTOF(ground\data\itt\51st_ITT_int_front_CO),
        "3as\3as_itt\data\itt_emiss_co.paa",
        QPATHTOF(ground\data\itt\51st_ITT_turret_CO)
    };
};

// AT-RT
class 3AS_ATRT;
class ic51_atrt: 3AS_ATRT
{
    displayName="[51st] AT-RT";
    VEHICLES_GROUND(ic51_ground_transport);
    hiddenSelections[] = {"camo"};
    hiddenselectionstextures[]=
    {
        QPATHTOF(ground\data\atrt\atrt_co.paa)
    };
    class VehicleTransport
    {
        class Cargo
        {
            parachuteClass            = "B_Parachute_02_F";
            parachuteHeightLimit    = 40;                
            canBeTransported        = 1;                
            dimensions[]            = { "ftr_muzzle", "btl_muzzle" };
        };
    };
};

// BARC
class 3AS_BARC;
class ic51_barc: 3AS_BARC
{
    displayName="[51st] Barc Speeder";
    VEHICLES_GROUND(ic51_ground_transport);
    hiddenSelections[] = {"camo"};
    hiddenselectionstextures[]=
    {
        QPATHTOF(ground\data\barc\51st_barc_rep_co)
    };
};

// Juggernaut
class 3as_Jug;
class ic51_juggernaut: 3as_Jug
{
    displayName="[51st] Juggernaut";
    VEHICLES_GROUND(ic51_ground_transport);
    textureList[] = {"Republic",0,"Imperial",0,"51st",1};
    class TextureSources
    {
        class 51st
        {
            author = AUTHOR;
            displayName = "[51st] Juggernaut";
            faction = "ic51_faction_inferno";
            textures[]=
            {
                QPATHTOF(ground\data\juggernaut\juggernaut_base_co.paa),
                QPATHTOF(ground\data\juggernaut\Juggernaut_Guns_CO.paa),
                QPATHTOF(ground\data\juggernaut\juggernaut_props_co.paa),
                QPATHTOF(ground\data\juggernaut\juggernaut_wheels_co.paa)
            };
        };
    };
    class VehicleTransport
    {
        class Cargo
        {
            parachuteClass            = "B_Parachute_02_F";
            parachuteHeightLimit    = 40;                
            canBeTransported        = 1;                
            dimensions[]            = { "ftr_muzzle", "btl_muzzle" };
        };
    };
};
