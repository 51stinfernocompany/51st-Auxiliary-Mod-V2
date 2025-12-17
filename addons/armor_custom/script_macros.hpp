#include "\x\ic51\addons\armor\script_macros.hpp"
#define CUSTOM_P2_HELMET(var1) class ic51_p2_helmet_custom_##var1 : ic51_p2_helmet_base \
{ \
    displayName = QUOTE([51st Custom] P2 ##var1##'s Helmet); \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmet_p2\p2_helmet_##var1##_co.paa), \
        QPATHTOF(data\helmet_p2\p2_helmet_##var1##_co.paa) \
    }; \
}

#define CUSTOM_CLONE_UNIFORM(var1) class ic51_clone_uniform_custom_##var1 : ic51_clone_uniform_base \
{ \
    SCOPE_PUBLIC; \
    displayName = QUOTE([51st Custom] P2 ##var1##'s Uniform); \
    class ItemInfo: ItemInfo \
    { \
        uniformClass = QUOTE(ic51_clone_unit_custom_##var1); \
    }; \
}

#define CUSTOM_CLONE_UNIT(var1) class ic51_clone_unit_custom_##var1 : ic51_clone_unit_base \
{ \
    SCOPE_PUBLIC; \
    faction="ic51_faction_inferno"; \
    editorSubCategory="ic51_soldiers_custom"; \
    displayName = QUOTE([51st Custom] ##var1); \
    uniformclass = QUOTE(ic51_clone_uniform_custom_##var1);  \
    hiddenSelectionsTextures[]= \
    { \
        QPATHTOF(data\uniform_clone\upper\uniform_clone_upper_##var1##_co.paa), \
        QPATHTOF(data\uniform_clone\lower\uniform_clone_lower_##var1##_co.paa) \
    }; \
        linkedItems[]= \
    { \
        QUOTE(ic51_p2_helmet_base), \
        UNIT_LINKEDITEMS_STANDARD \
    }; \
    respawnLinkedItems[]= \
    { \
        QUOTE(ic51_p2_helmet_base), \
        UNIT_LINKEDITEMS_STANDARD \
    }; \
}
// ARF
#define CUSTOM_ARF_HELMET(var1) class ic51_arf_helmet_custom_##var1 : ic51_arf_helmet_base \
{ \
    displayName = QUOTE([51st Custom] ARF ##var1##'s Helmet); \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmet_arf\arf_helmet_##var1##_co.paa), \
        "", \
        QPATHTOF(data\helmet_arf\arf_helmet_##var1##_co.paa) \
    }; \
}
#define CUSTOM_PILOT_HELMET(var1) class ic51_pilot_helmet_##var1 : ic51_pilot_helmet_base \
{ \
    displayName = QUOTE([51st Custom] Pilot ##var1##'s Helmet); \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmet_p2_pilot\p2_pilot_helmet_##var1##_co.paa), \
        "ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa" \
    }; \
}

// Custom Airborne Helmet
#define CUSTOM_AIRBORNE_HELMET(var1) class ic51_airborne_helmet_custom_##var1 : ic51_airborne_helmet_base \
{ \
    displayName = QUOTE([51st Custom] Airborne ##var1##'s Helmet); \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmet_ab\airborne_helmet_##var1##_co.paa), \
        QPATHTOF(data\helmet_ab\airborne_helmet_##var1##_co.paa) \
    }; \
}

#define CUSTOM_BARC_HELMET(var1) class ic51_barc_helmet_custom_##var1 : ic51_barc_helmet_base \
{ \
    displayName = QUOTE([51st Custom] BARC ##var1##'s Helmet); \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmet_barc\barc_helmet_##var1##_co.paa), \
        QPATHTOF(data\helmet_barc\barc_helmet_##var1##_co.paa) \
    }; \
}
