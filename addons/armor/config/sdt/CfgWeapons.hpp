class UniformItem;

class SEA_Uniform_GM_Plastic_21;
class ic51_uniform_hazard : SEA_Uniform_GM_Plastic_21
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName="[51st] Hazard Uniform";
    class ItemInfo: UniformItem
    {
        uniformClass="ic51_unit_hazmat";
        containerClass="Supply250";
    };
};    
class ic51_uniform_hazard_officer  : ic51_uniform_hazard
{
    displayName="[51st] Hazard Uniform Officer";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_unit_hazmatofficer";
    };
};

// Helmets
class SEA_HELMET_GM_Base;
class ic51_helmet_hazmat: SEA_HELMET_GM_Base
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName="[51st] Hazard Helmet";
    hiddenSelections[]=
    {
        "camo1",
        "visor"
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\helmet_common\helmet_hazard_co.paa),
        QPATHTOF(data\helmet_common\helmet_hazard_co.paa)
    };
};
class SEA_Helmet_GM_21_RTO;
class ic51_helmet_hazmat_officer: SEA_Helmet_GM_21_RTO
{   
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName="[51st] Hazard Helmet Officer";
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\helmet_common\helmet_hazard_officer_co.paa),
        QPATHTOF(data\helmet_common\helmet_hazard_officer_co.paa)
    };
};

// Vests

class VestItem;

class SEA_Vest_GM_21;
class ic51_vest_hazard: SEA_Vest_GM_21
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayname="[51st] Hazard Vest";
    hiddenSelections[]=
    {
        "camo1"
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\vests_common\vest_hazard_co.paa)
    };
    class ItemInfo: VestItem 
    {
        uniformModel = "JLTS_AE_GM\SEA_Vest_GM_Base.p3d";
        containerclass="Supply400";
        hiddenSelections[]=
        {
            "camo1"
        };
        mass=80;
    };
};
class ic51_vest_hazard_officer: ic51_vest_hazard
{
    displayName="[51st] Hazard Vest Officer";
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\vests_common\vest_hazard_officer_co.paa)
    };
};
