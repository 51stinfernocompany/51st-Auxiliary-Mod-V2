class ls_cis_b1Droid_uniform;
class ic51_uniform_b1gerald: ls_cis_b1Droid_uniform
{
    SCOPE_HIDDEN;
    picture = QPATHTOF(data\51st_logo.paa);
    author = AUTHOR;
    displayName = "[51st Custom] Gerald";
    class ItemInfo: UniformItem
    {
        uniformClass = "ic51_unit_b1gerald";
        containerClass = "Supply150";
        mass = 40;
        scope = 0;
        type = 801;
        uniformModel = "-";
    };
};
class ic51_uniform_b1jeff: ic51_uniform_b1gerald
{
    displayName = "[51st Custom] Jeff";
    class ItemInfo: ItemInfo
    {
        uniformClass = "ic51_unit_b1jeff";
    };
};
class ic51_uniform_b1colbat: ic51_uniform_b1gerald
{
    displayName = "[51st Custom] Colbat";
    class ItemInfo: ItemInfo
    {
        uniformClass = "ic51_unit_b1colbat";
    };
};

class ic51_katarn_uniform_gary : ic51_katarn_uniform_base
{
    displayName = "[51st Custom] Katarn Uniform (Gary)";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_katarn_unit_gary";
    };
};
class ic51_katarn_uniform_immortal : ic51_katarn_uniform_base
{
    displayName = "[51st Custom] Katarn Uniform (Immortal)";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_katarn_unit_immortal";
    };
};
class ic51_katarn_uniform_doss : ic51_katarn_uniform_base
{
    displayName = "[51st Custom] Katarn Uniform (Doss)";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_katarn_unit_doss";
    };
};
class ic51_katarn_uniform_cyclone : ic51_katarn_uniform_base
{
    displayName = "[51st Custom] Katarn Uniform (Cyclone)";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_katarn_unit_cyclone";
    };
};
