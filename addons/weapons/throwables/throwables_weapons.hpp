// Grenades and Smokes
class GrenadeLauncher;
class Throw : GrenadeLauncher {
    muzzles[] += {
        "ic51_ThermalDetonator",
        "ic51_SonicDetonator",
        "ic51_SmokeBlue",
        "ic51_SmokeGreen",
        "ic51_SmokeOrange",
        "ic51_SmokePurple",
        "ic51_SmokeRed",
        "ic51_SmokeWhite",
        "ic51_SmokeYellow",
        "ic51_ThermalImploder",
        "ic51_weaponshield",
        "ic51_emp_grenade",
        "ic51_penetrator_grenade",

    };
    class ThrowMuzzle;
    class ic51_ThermalDetonator : ThrowMuzzle{
        magazines[]={"ic51_ThermalDetonator"};
    };
    class ic51_ThermalImploder : ThrowMuzzle{
        magazines[]={"ic51_ThermalImploder"};
    };
    class ic51_SonicDetonator : ThrowMuzzle{
        magazines[]={"ic51_SonicDetonator"};
    };
    class ic51_SmokeBlue : ThrowMuzzle{
        magazines[]={"ic51_SmokeBlue"};
    };
    class ic51_SmokeGreen : ThrowMuzzle{
        magazines[]={"ic51_SmokeGreen"};
    };
    class ic51_SmokeOrange : ThrowMuzzle{
        magazines[]={"ic51_SmokeOrange"};
    };
    class ic51_SmokePurple : ThrowMuzzle{
        magazines[]={"ic51_SmokePurple"};
    };
    class ic51_SmokeRed : ThrowMuzzle{
        magazines[]={"ic51_SmokeRed"};
    };
    class ic51_SmokeWhite : ThrowMuzzle{
        magazines[]={"ic51_SmokeWhite"};
    };
    class ic51_SmokeYellow : ThrowMuzzle{
        magazines[]={"ic51_SmokeYellow"};
    };
    /*
    class ic51_weaponshield : ThrowMuzzle{
        magazines[]={"ic51_weaponshield"};
    };
    */
    class ic51_emp_grenade : ThrowMuzzle{
        magazines[]={"ic51_emp_grenade"};
    };
    class ic51_penetrator_grenade : ThrowMuzzle{
        magazines[]={"ic51_penetrator_grenade"};
    };
};  
