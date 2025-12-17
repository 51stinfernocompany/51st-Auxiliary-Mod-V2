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
