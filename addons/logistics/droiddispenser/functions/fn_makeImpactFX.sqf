/*
    Function: ic51_fnc_makeImpactFX
    Creates a dust cloud and tries to place a scorch/crater decal under the crate.
*/
params ["_dispenser"];
private _pos = getPosATL _dispenser;

[[_pos], {
    params ["_p"];
    private _ps = "#particlesource" createVehicleLocal _p;
    _ps setParticleCircle [0, [0,0,0]];
    _ps setParticleRandom [0.5, [1.5, 1.5, 0.2], [0.2, 0.2, 0.3], 0, 0.2, [0,0,0,0], 0, 0];
    _ps setParticleParams [
        ["\A3\data_f\ParticleEffects\Universal\universal.p3d", 16, 12, 8, 0],
        "", "Billboard", 1, 6,
        [0,0,0], [0,0,1],
        1, 10, 7.9, 0.1,
        [3,6,8],
        [[0.7,0.7,0.7,0.8],[0.7,0.7,0.7,0.4],[0.7,0.7,0.7,0]],
        [0.2], 1, 0, "", "", _ps
    ];
    _ps setDropInterval 0.015;
    [_ps] spawn { params["_s"]; sleep 7; deleteVehicle _s; };
}] remoteExec ["BIS_fnc_call", 0, true];

private _candidates = [
    "Crater",
    "Land_ClutterCutter_small_F"
];
private _class = "";
{
    if (isClass (configFile >> "CfgVehicles" >> _x)) exitWith { _class = _x };
} forEach _candidates;

if (_class != "") then {
    private _dec = createVehicle [_class, _pos, [], 0, "CAN_COLLIDE"];
    _dec setDir random 360;
    _dec enableSimulationGlobal false;
};

playSound3D ["a3\sounds_f\arsenal\explosives\rockets\rocketheavy_midexp_02.wss", _dispenser, false, _pos, 5, 1, 300];
true;
