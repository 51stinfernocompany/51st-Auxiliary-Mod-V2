class IDA_BARC_Helmet;
class ic51_barc_helmet_base : IDA_BARC_Helmet {
    SCOPE_PUBLIC;
    author = AUTHOR;
    picture = QPATHTOF(data\51st_logo.paa);
    displayName = "[51st] BARC Helmet";
    subItems[] = {};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmet_barc\barc_helmet_base_co.paa),
        QPATHTOF(data\helmet_barc\barc_helmet_base_co.paa)
    };
    class ItemInfo : ItemInfo {
        PROTECTION_HELMET;
    };
};
