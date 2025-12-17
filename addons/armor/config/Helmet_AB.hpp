class IDA_AB_Helmet;
class ic51_airborne_helmet_base : IDA_AB_Helmet {
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] Airborne Helmet";
    subItems[] = {};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_ab\airborne_helmet_base_co.paa),
        QPATHTOF(data\helmet_ab\airborne_helmet_base_co.paa)
    };
    class ItemInfo : ItemInfo {
        PROTECTION_HELMET;
    };
};
