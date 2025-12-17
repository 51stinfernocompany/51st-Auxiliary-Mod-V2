//if (isClass(configFile >> "CfgPatches" >> "OPTRE_Suit_Scripts_DEV")) exitWith {};
optre_suit_fnc_armor =
{
	_landingsound = selectRandom[
		"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_1.wss",
		"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_2.wss",
		"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_3.wss",
		"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_4.wss",
		"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_5.wss",
		"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_6.wss",
		"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_7.wss",
		"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_8.wss"
	];
	if ( (player getVariable ["OPTRE_hasArmor",false]) && (player getVariable "optre_suit_energy" != 0) && (player getVariable "OPTRE_suit_mode" == "armor")) then
	{
		
		
		while {player getVariable "optre_suit_energy" >= 0 && (player getVariable ["OPTRE_hasArmor",false]) && (player getVariable "OPTRE_suit_mode" == "armor")} do {
		
			if (((getPos player select 2)>0.6) && (vehicle player isEqualTo player) && (player getVariable "OPTRE_suit_mode" == "armor") && !(player getVariable "optre_preventfalldamage") && !(animationState player in OPTRE_MJOLNIR_ladderAnimations)) then {
				player setVariable ["optre_preventfalldamage",true];
				//hint format ["armor preventfalldamage %1" , player getVariable "optre_preventfalldamage"];
			};

			if ((isTouchingGround player OR (surfaceIsWater getPos player && ((getPos player select 2) < 0))) && (player getVariable "OPTRE_suit_mode" == "armor") && (player getVariable "optre_preventfalldamage") && !(animationState player in OPTRE_MJOLNIR_ladderAnimations)) then {
				player setVariable ["optre_preventfalldamage",false];
				//hint format ["armor preventfalldamage %1" , player getVariable "optre_preventfalldamage"];
				if (missionNamespace getVariable ["OPTRE_MJOLNIR_jumpSoundTimer",0] <= 0) then {
					[] spawn {
						while {missionNamespace getVariable ["OPTRE_MJOLNIR_jumpSoundTimer",0] != 0} do {
							missionNamespace setVariable ["OPTRE_MJOLNIR_jumpSoundTimer", ((missionNamespace getVariable ["OPTRE_MJOLNIR_jumpSoundTimer",0]) - 0.1) max 0];
							sleep 0.1;
						};
					};

					if (missionNamespace getVariable "ic51_allison_camshake") then {
						addCamShake [20, 1, 5];
					};
					playSound3D [_landingsound, player, false, getPosASL player, 3, 1, 20];
				};
				missionNamespace setVariable ["OPTRE_MJOLNIR_jumpSoundTimer",0.5];
			};
			
			player allowDamage false;
			sleep 0.01;
		
		};
		player allowDamage true;
	
	};
	
};
