//if (isClass(configFile >> "CfgPatches" >> "OPTRE_Suit_Scripts_DEV")) exitWith {};
optre_suit_fnc_jump =
{
	if ((missionNamespace getVariable "ic51_allison_enable_jump") && (vehicle player isEqualTo player) && (player getVariable ["OPTRE_hasUniform",false]) && ((getPos player select 2)<0.1) && ((getPos player select 2)<-0.5) && (stance player == "PRONE")) exitWith {
		
		_jumpingsound = selectRandom[
		"A3\Sounds_F\characters\footsteps\concrete\concrete_run_lpf_1.wss",
		"A3\Sounds_F\characters\footsteps\concrete\concrete_run_lpf_2.wss",
		"A3\Sounds_F\characters\footsteps\concrete\concrete_run_lpf_3.wss",
		"A3\Sounds_F\characters\footsteps\concrete\concrete_run_lpf_4.wss",
		"A3\Sounds_F\characters\footsteps\concrete\concrete_run_lpf_5.wss",
		"A3\Sounds_F\characters\footsteps\concrete\concrete_run_lpf_6.wss",
		"A3\Sounds_F\characters\footsteps\concrete\concrete_run_lpf_7.wss",
		"A3\Sounds_F\characters\footsteps\concrete\concrete_run_lpf_8.wss"
		];
		
		_vel = velocity player;
		_dir = direction player;
		_isMovingBack = (inputAction "MoveBack");
		_jumpForceForward = if (_isMovingBack == 0) then {ic51_allison_jump_forward} else {((ic51_allison_jump_forward) * -1)};
		_cameraview = if (_isMovingBack == 0) then {(getCameraViewDirection player) select 2} else {((getCameraViewDirection player) select 2) * -1};;

		_vel1 = 0;
		_vel2 = 0;
		_vel3 = 0;

		if (_cameraview > 0) then {
			_jumpFactor = if (_cameraview > 0) then {2.1} else {-2.1};
			_vel1 = (_vel select 0) + (sin _dir * _jumpForceForward);
			_vel2 = (_vel select 1) + (cos _dir * _jumpForceForward);
			_vel3 = (_vel select 2) + (ic51_allison_jump_up_high * (_jumpFactor + _cameraview));
		} else {
			_vel1 = (_vel select 0) + ((sin _dir * _jumpForceForward) / 2);
			_vel2 = (_vel select 1) + ((cos _dir * _jumpForceForward) / 2);
			_vel3 = (_vel select 2) + ic51_allison_jump_up_low;
		};

		player setVelocity [
			_vel1, 
			_vel2, 
			_vel3
		];

		if (missionNamespace getVariable "ic51_allison_camshake") then {
			addCamShake [20, 1, 5];
		};
		playSound3D [_jumpingsound, player, false, getPosASL player, 1, 1, 20];
	};
};
