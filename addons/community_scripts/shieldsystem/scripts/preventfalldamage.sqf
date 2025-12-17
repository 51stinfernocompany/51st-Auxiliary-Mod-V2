//if (isClass(configFile >> "CfgPatches" >> "OPTRE_Suit_Scripts_DEV")) exitWith {};
optre_suit_fnc_preventfalldamage =
{
	if (player getVariable ["OPTRE_hasUniform",false]) then {
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
		_forbiddenAnimation = [
			"LadderCivilDownLoop",
			"LadderCivilDownOff",
			"LadderCivilOn_Bottom",
			"LadderCivilOn_Top",
			"LadderCivilStatic",
			"LadderCivilTopOff",
			"LadderCivilUpLoop",
			"LadderRifleDownLoop",
			"LadderRifleDownOff",
			"LadderRifleOn",
			"LadderRifleStatic",
			"LadderRifleTopOff",
			"LadderRifleUpLoop"
		];
		while {alive player && player getVariable ["OPTRE_hasUniform",false]} do {
			if (((getPos player select 2)>0.6) && (vehicle player isEqualTo player) && (player getVariable "OPTRE_suit_mode" != "armor") && !(player getVariable "optre_preventfalldamage") && missionNamespace getVariable "ic51_allison_prevent_falldamage" && !(animationState player in OPTRE_MJOLNIR_ladderAnimations)) then {
				player setVariable ["optre_preventfalldamage",true];
			};
					
			if (((getPos player select 2)<0.6) && (vehicle player isEqualTo player) && (player getVariable "OPTRE_suit_mode" != "armor") && (player getVariable "optre_preventfalldamage")) then {
				player allowDamage false;
			};

			if (animationState player in OPTRE_MJOLNIR_ladderAnimations) then {
				player setVariable ["optre_preventfalldamage",false];
			};
			
			if ((isTouchingGround player OR (surfaceIsWater getPos player && ((getPos player select 2) < 0))) && (player getVariable "OPTRE_suit_mode" != "armor") && (player getVariable "optre_preventfalldamage") && !(animationState player in OPTRE_MJOLNIR_ladderAnimations)) then {
				player allowDamage true;
				player setVariable ["optre_preventfalldamage",false];
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
			sleep 0.01;
		};
	};
};
