class Extended_InitPost_EventHandlers {
    class ic51_opfor_unit_b1_standard {
        class ic51_opfor_unit_b1_standard {
            init = "_unit = _this select 0; if (local _unit) then {_unit execVM ""\x\ic51\addons\opfor\droids\config\scripts\AI_ic51_B1_BattleDroid.sqf"";};";
        };
    };
    class ic51_opfor_unit_b1_static {
        class ic51_opfor_unit_b1_static {
            init = "_unit = _this select 0; if (local _unit) then {_unit execVM ""\x\ic51\addons\opfor\droids\config\scripts\AI_ic51_B1_static_BattleDroid.sqf"";};";
        };
    };
    class ic51_opfor_unit_b2_standard {
        class ic51_opfor_unit_b2_standard {
            init = "_unit = _this select 0; if (local _unit) then {_unit execVM ""\x\ic51\addons\opfor\droids\config\scripts\AI_ic51_B2_BattleDroid.sqf"";};";
        };
    };
    class ic51_opfor_unit_b2_static {
        class ic51_opfor_unit_b2_static {
            init = "_unit = _this select 0; if (local _unit) then {_unit execVM ""\x\ic51\addons\opfor\droids\config\scripts\AI_ic51_B2_static_BattleDroid.sqf"";};";
        };
    };
};
