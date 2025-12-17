#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\z\ace\addons\main\script_macros.hpp"

#define SCOPE_PUBLIC scope = 2; \
scopeArsenal = 2; \
scopeCurator = 2
#define SCOPE_HIDDEN scope = 1; \
scopeArsenal = 1; \
scopeCurator = 0
#define SCOPE_PRIVATE scope = 0; \
scopeArsenal = 0; \
scopeCurator = 0

// Factions
#define OPFOR 0
#define BLUFOR 1
#define GREENFOR 2
#define CIVILIAN 3

// QQL
#define CLASS(var1) DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(CLASS(var1))
#define QQCLASS(var1) QUOTE(QCLASS(var1))

#define DNAME(var1) displayName = QUOTE([51st] ##var1##)


// Inventory
#define ITEM_2(a) a, a
#define ITEM_3(a) a, a, a
#define ITEM_4(a) a, a, a, a
#define ITEM_5(a) a, a, a, a, a
#define ITEM_6(a) a, a, a, a, a, a
#define ITEM_7(a) a, a, a, a, a, a, a
#define ITEM_8(a) a, a, a, a, a, a, a, a
#define ITEM_9(a) a, a, a, a, a, a, a, a, a
#define ITEM_10(a) a, a, a, a, a, a, a, a, a, a
#define ITEM_11(a) ITEM_10(a), a
#define ITEM_15(a) ITEM_10(a), ITEM_5(a)
#define ITEM_16(a) ITEM_10(a), ITEM_6(a)
#define ITEM_20(a) ITEM_10(a), ITEM_10(a)

/*
#undef PREP
#ifdef DISABLE_COMPILE_CACHE
    #define LINKFUNC(x) {call FUNC(x)}
    #define PREP(fncName) FUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
    #define PREP_RECOMPILE_START    if (isNil "TAG_fnc_recompile") then {TAG_recompiles = []; TAG_fnc_recompile = {{call _x} forEach TAG_recompiles;}}; private _recomp = {
    #define PREP_RECOMPILE_END      }; call _recomp; TAG_recompiles pushBack _recomp;
#else
    #define LINKFUNC(x) FUNC(x)
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
    #define PREP_RECOMPILE_START ; /* disabled */
//    #define PREP_RECOMPILE_END ; //* disabled */
// #endif
