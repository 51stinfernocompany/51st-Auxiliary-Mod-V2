class IDA_Clone_Uniform;
class ic51_clone_uniform_base : IDA_Clone_Uniform
{
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] P2 Trooper Uniform";
    class ItemInfo: UniformItem
    {
        uniformModel="";
        uniformClass="ic51_clone_unit_base";
        uniformType="Neopren";
        containerClass="Supply50";
        mass=15;
    };
};

//Ranks
class ic51_clone_uniform_corporal : ic51_clone_uniform_base
{
    displayName = "[51st] P2 Corporal Uniform";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_corporal";
    };
};
class ic51_clone_uniform_sergeant : ic51_clone_uniform_base
{
    displayName = "[51st] P2 Sergeant Uniform";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_sergeant";
    };
};
class ic51_clone_uniform_command : ic51_clone_uniform_base
{
    displayName = "[51st] P2 Command Uniform";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_command";
    };
};

//Medic
class ic51_clone_uniform_medic_t2 : ic51_clone_uniform_base
{
    displayName = "[51st] P2 Medic (Tier 2) Uniform";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_medic_t2";
    };
};
class ic51_clone_uniform_medic_t3 : ic51_clone_uniform_base
{
    displayName = "[51st] P2 Medic (Tier 3) Uniform";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_medic_t3";
    };
};

//Pilots
class ic51_clone_uniform_pilot_combat : ic51_clone_uniform_base
{
    displayName = "[51st] P2 Pilot Combat Uniform";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_pilot_combat";
    };
};
class ic51_clone_uniform_pilot_logi : ic51_clone_uniform_base
{
    displayName = "[51st] P2 Pilot Logistics Uniform";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_pilot_logi";
    };
};

//Saber
class ic51_clone_uniform_sabre1: ic51_clone_uniform_base
{
    displayName = "[51st] P2 Sabre One Uniform";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_sabre1";
    };
};
class ic51_clone_uniform_sabre2: ic51_clone_uniform_base
{
    displayName = "[51st] P2 Sabre Two Uniform";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_sabre2";
    };
};
class ic51_clone_uniform_sabre3: ic51_clone_uniform_base
{
    displayName = "[51st] P2 Sabre Three Uniform";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_sabre3";
    };
};
class ic51_clone_uniform_sabre4: ic51_clone_uniform_base
{
    displayName = "[51st] P2 Sabre Four Uniform";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_sabre4";
    };
};
class ic51_clone_uniform_medic_sabre1: ic51_clone_uniform_base
{
    displayName = "[51st] P2 Sabre One Uniform (Medic)";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_medic_sabre1";
    };
};
class ic51_clone_uniform_medic_sabre2: ic51_clone_uniform_base
{
    displayName = "[51st] P2 Sabre Two Uniform (Medic)";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_medic_sabre2";
    };
};
class ic51_clone_uniform_medic_sabre3: ic51_clone_uniform_base
{
    displayName = "[51st] P2 Sabre Three Uniform (Medic)";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_medic_sabre3";
    };
};
class ic51_clone_uniform_medic_sabre4: ic51_clone_uniform_base
{
    displayName = "[51st] P2 Sabre Four Uniform (Medic)";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_medic_sabre4";
    };
};

//ARF
class ic51_clone_uniform_arf: ic51_clone_uniform_base
{
    displayName = "[51st] P2 ARF Uniform";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_arf";
    };
};
class ic51_clone_uniform_arf_winter: ic51_clone_uniform_base
{
    displayName = "[51st] P2 ARF Uniform Winter";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_arf_winter";
    };
};
class ic51_clone_uniform_arf_jungle: ic51_clone_uniform_base
{
    displayName = "[51st] P2 ARF Uniform Jungle";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_arf_jungle";
    };
};
class ic51_clone_uniform_arf_desert: ic51_clone_uniform_base
{
    displayName = "[51st] P2 ARF Uniform Desert";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_arf_desert";
    };
};
class ic51_clone_uniform_barc: ic51_clone_uniform_base
{
    displayName = "[51st] P2 BARC Uniform";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_barc";
    };
};

//Havoc
class ic51_clone_uniform_havoc1: ic51_clone_uniform_base
{
    displayName = "[51st] P2 Havoc One Uniform";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_havoc1";
    };
};
class ic51_clone_uniform_havoc2: ic51_clone_uniform_base
{
    displayName = "[51st] P2 Havoc Two Uniform";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_havoc2";
    };
};
class ic51_clone_uniform_medic_havoc1: ic51_clone_uniform_base
{
    displayName = "[51st] P2 Havoc One Uniform (Medic)";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_medic_havoc1";
    };
};
class ic51_clone_uniform_medic_havoc2: ic51_clone_uniform_base
{
    displayName = "[51st] P2 Havoc Two Uniform (Medic)";
    class ItemInfo: ItemInfo
    {
        uniformClass="ic51_clone_unit_medic_havoc2";
    };
};
