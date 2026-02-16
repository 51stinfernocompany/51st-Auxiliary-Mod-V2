class 3AS_U_Rep_Katarn_Armor;
class ic51_katarn_uniform_base : 3AS_U_Rep_Katarn_Armor
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Katarn Uniform";
    MJOLNIR_isUndersuit = 1;
    class ItemInfo: UniformItem
    {
        uniformModel="";
        uniformClass="ic51_katarn_unit_base";
        containerClass="Supply250";
        mass=40;
    };
};
class 3AS_U_CloneGMTrooper_F;
class ic51_uniform_hazard_desert : 3AS_U_CloneGMTrooper_F
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Hazard Uniform (Desert)";
    class ItemInfo: UniformItem
    {
        uniformModel="";
        uniformClass="ic51_unit_hazard_desert";
        containerClass="Supply250";
        mass=40;
    };
};
class ic51_uniform_hazard_snow : 3AS_U_CloneGMTrooper_F
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Hazard Uniform (Snow)";
    class ItemInfo: UniformItem
    {
        uniformModel="";
        uniformClass="ic51_unit_hazard_snow";
        containerClass="Supply250";
        mass=40;
    };
};
class ic51_uniform_hazard_jungle : 3AS_U_CloneGMTrooper_F
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Hazard Uniform (Jungle)";
    class ItemInfo: UniformItem
    {
        uniformModel="";
        uniformClass="ic51_unit_hazard_jungle";
        containerClass="Supply250";
        mass=40;
    };
};