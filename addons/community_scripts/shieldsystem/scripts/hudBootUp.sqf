//if (isClass(configFile >> "CfgPatches" >> "OPTRE_Suit_Scripts_DEV")) exitWith {};
OPTRE_fnc_clearHud = {
	private _hudElements = [
		(OPTRE_hudHelmetOutline#0),
		(OPTRE_hudOverlay#0),
		(OPTRE_hudInfoDisplayTexture#0),
		(OPTRE_hudCurrentWeapon#0),
		(OPTRE_hudSecondaryWeapon#0),
		(OPTRE_hudLauncher#0),
		(OPTRE_hudGrenade#0),
		(OPTRE_hudHitEffect#0),
		(OPTRE_hudShieldDownEffect#0),
		(OPTRE_hudShieldDownAlert#0),
		(OPTRE_hudShieldChargeTexture#0),
		(OPTRE_hudShieldChargeEffect#0),
		(OPTRE_mjolnirRadar#0),
		(OPTRE_mjolnirRadarTexture#0),
		(OPTRE_mjolnirRadarTextureView#0),
		(OPTRE_mjolnirHud_energyText#0),
		(OPTRE_mjolnirHud_gridText#0),
		(OPTRE_mjolnirHud_dirText#0),
		(OPTRE_mjolnirHud_rangeText#0),
		(OPTRE_mjolnirHud_ammoText#0),
		(OPTRE_mjolnirHud_magazinesText#0),
		(OPTRE_mjolnirHud_fireModText#0),
		(OPTRE_mjolnirHud_grenadeNameText#0),
		(OPTRE_mjolnirHud_grenadeAmountText#0),
		(OPTRE_mjolnirHud_rangedToText#0),
		(OPTRE_hudBootUpBox#0),
		(OPTRE_hudBootUpBar#0),
		(OPTRE_hudBootUpBoxTextField#0),
		(OPTRE_hudBootUpHeadline#0),
		(OPTRE_PM_shieldBar#0)
	];
	
	[_hudElements] spawn {
		private _hudElements = _this select 0;
		{_x ctrlSetFade 1; _x ctrlCommit 0} forEach _hudElements;
	};
	player setVariable ["OPTRE_MJOLNIR_HUD_ACTIVE", false];
	player setVariable ["OPTRE_MJOLNIR_HUD_ALLOWED", false];
	player setVariable ["OPTRE_MJOLNIR_hudInitiated",false];
	player setVariable ["OPTRE_indicatorsActive",false];
	player setVariable ["OPTRE_TARGETING_ALLOWED", false];
	player setVariable ["OPTRE_MJOLNIR_outlineHidden",false];
	OPTRE_systemMessageAllowed = false;
	(OPTRE_hudBootUpBoxTextField#0) ctrlSetStructuredText parseText "";
	OPTRE_lowLight = false;
	OPTRE_threatRange = 200;
	OPTRE_nearUnits = [];
	call OPTRE_fnc_removeTargetingEventhandler;
	setAperture -1;
};

OPTRE_fnc_hudBootUp = {
	//if (!(player getVariable ["OPTRE_hasHelmet",false] && OPTRE_firstPersonCheck)) exitWith {};
	player setVariable ["OPTRE_MJOLNIR_HUD_ACTIVE", false];
	player setVariable ["OPTRE_MJOLNIR_HUD_ALLOWED", false];
	player setVariable ["OPTRE_MJOLNIR_hudInitiated", true];
	player setVariable ["OPTRE_MJOLNIR_outlineHidden", true];
	player setVariable ["OPTRE_TARGETING_ALLOWED", false];
	
	OPTRE_systemMessageAllowed = false;

	call OPTRE_fnc_removeTargetingEventhandler;

	private _hudElementsBoot = [
		(OPTRE_hudOverlay#0),
		(OPTRE_hudInfoDisplayTexture#0),
		(OPTRE_hudCurrentWeapon#0),
		(OPTRE_hudSecondaryWeapon#0),
		(OPTRE_hudLauncher#0),
		(OPTRE_hudGrenade#0),
		(OPTRE_hudHitEffect#0),
		(OPTRE_hudShieldDownEffect#0),
		(OPTRE_hudShieldDownAlert#0),
		(OPTRE_hudShieldChargeTexture#0),
		(OPTRE_hudShieldChargeEffect#0),
		(OPTRE_mjolnirRadar#0),
		(OPTRE_mjolnirRadarTexture#0),
		(OPTRE_mjolnirRadarTextureView#0),
		(OPTRE_mjolnirHud_energyText#0),
		(OPTRE_mjolnirHud_gridText#0),
		(OPTRE_mjolnirHud_dirText#0),
		(OPTRE_mjolnirHud_rangeText#0),
		(OPTRE_mjolnirHud_ammoText#0),
		(OPTRE_mjolnirHud_magazinesText#0),
		(OPTRE_mjolnirHud_fireModText#0),
		(OPTRE_mjolnirHud_grenadeNameText#0),
		(OPTRE_mjolnirHud_grenadeAmountText#0),
		(OPTRE_mjolnirHud_rangedToText#0),
		(OPTRE_hudBootUpBox#0),
		(OPTRE_hudBootUpBar#0),
		(OPTRE_hudBootUpBoxTextField#0),
		(OPTRE_hudBootUpHeadline#0),
		(OPTRE_PM_shieldBar#0)
	];
	{_x ctrlSetFade 1; _x ctrlCommit 0} forEach _hudElementsBoot;
	(OPTRE_hudHelmetOutline#0) ctrlSetFade 0;
	(OPTRE_hudHelmetOutline#0) ctrlCommit 0;
	///////////////////////////////////
	/*
		To input an empty line, put "&#160;" in the string.
		< 	&lt;
		> 	&gt;
	*/
	///////////////////////////////////
	//OPTRE_MJOLNIR_SKIPBOOT = true;
	if (ic51_allison_hud_active_intro) then {
		_iteration = 0;
		private _input = "";
		private _bootupText = [];
		
		_bootupText = [
			["S Y S B O O T \ &gt; :      R U N",0.1],
			["&#160;",0.05],
			[".  :  :  .  :  :  :    .  :  :  .  :  .  .  .    .  .  :  .  .  .  .  .    .  :  :  .  :  .  .  .    .  :  :  .  .  :  .  :    .  :  :  :  :  .  .  :    .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .",0.05],
			["&#160;",0.05],
			["0 0 0 1        B o o t i n g   u p  .  .  .    /",0.05],
			["0 0 0 2	       E x i t i n g   I n a c t i v e   M o d e   :  :  :  :  :	&lt;  &gt;   [	P o w e r   R e s t o r e d	]	&lt;  &gt;",0.02],
			["&#160;",0.05],
			["+  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  +",0.05],
			["&#160;",0.05],
			["0 0 0 3        K A T A R N  O S   / /   A L L I S O N   / /   V E R _ 1 2 . 2 2 . 1 2   /   I D _ D E T E C T E D",0.07],
			["&#160;",0.05],
			["                    L A S T   M O D I F I E D   B Y   A K A V I R I 1 3,   1 7 . 0 2 . 2 5 2 4",0.05],
			["&#160;",0.05],
			["0 0 0 4        G A R   P o w e r e d   A L L I S O N   A r m o r   S y s t e m   / /   G e n e r a t i o n   I I I",0.03],
			["0 0 0 5        L O A D \  &gt; :",0.05],
			["0 0 0 6        A D J U S T I N G   I P D      .  .  .  .      [ 5 8 . 4 ,   5 8 . 2]",0.05],
			["&#160;",0.05],
			["|  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :   |",0.05],
			["|  :   A U T H - K E Y   / /   &gt;   5 0 : 0 0 : 1 5 : 5 5 : D A : C 7 : E 4 : A P 4 0 9 6 N   :  |",0.05],
			["|  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :   |",0.05],
			["&#160;",0.05],
			["                               +  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  +",0.05],
			["0 0 3 0 0                   P R O G R A M - I D .   K A T A R N .",0.05],
			["0 0 3 0 0                *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *",0.05],
			["0 0 3 0 0                *        M O D U L E   N A M E   =   K A T A R N                                                                                                                                                     *",0.05],
			["0 0 6 0 0                *                                                                                                                                                                                                                        *",0.03],
			["0 0 7 0 0                *        D E S C R I P T I V E   N A M E   -   V I S U A L   I N T E L L I G E N C E   S Y S T E M ,   R E C O N N A I S S A N C E          *",0.05],
			["0 0 9 0 0                *                                              C O M M A N D O   P R O G R A M                                                                                                                    *",0.03],
			["0 1 0 0 0                *                                              G R A N D  A R M Y  O F  T H E  R E P U B L I C                                                                                                                                                         *",0.05],
			["                               *                                                                                                                                                                                                                        *",0.05],
			["                               *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *",0.05],
			["&#160;",0.05],
			["|   -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -   |",0.05],
			["+  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  +   P R E P A R I N G   A . I .   I N T R U S I O N   C O U N T E R M E A S U R E S +  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  +",0.05],
			["|  :  :  :  :  :  :  :  :  :  :  :  :  :  :     .  :  :  .  :  :  :  :  .  :  :  .  :  .  .  .  .  .  :  .  .  .  .  .  .  :  :  .  :  .  .  .  .  :  :  .  .  :  .  :  .  :  :  :  :  .  .  :     .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  |",0.05],
			["&#160;",0.05],
			["0 0 0 0 0      L O A D \ &gt;    K A T A R N . H U D . S Y S . S P D R   .  .  .  /",0.05],
			["0 4 0 0 0      L O A D I N G    .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  . [ S y s t e m   P e r i l   D i s t r i b u t e d   R e f l e x   ,   S . P . D . R . ]",0.05],
			["0 5 0 0 0      .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .     [ A C T I V E ]",0.05],
			["&#160;",0.05],
			["-  -           -  -  -  -  -  -  -  -             +           :           +          :           +           :           +           :           +          :           +           :           +           :",0.05],
			["[  ]             S P D R _ 0 0               |   6 2   |   6 5   |   6 c   |   6 9   |   6 5   |   7 6   |   6 7   |   6 5   |   6 5   |   6 c   |   6 9   |   6 5   |   7 6   |",0.1],
			["[  ]             S P D R _ 0 1               |   1 1   |   1 9   |   6 c   |   6 2   |   0 7   |   3 6   |   6 5   |   1 7   |   6 5   |   6 c   |   6 9   |   6 5   |   7 6   |",0.05],
			["[  ]             S P D R _ 0 2               |   5 6   |   8 4   |   1 d   |   8 3   |   1 3   |   3 7   |   5 6   |   6 5   |   0 9   |   6 c   |   6 9   |   6 5   |   7 6   |",0.05],
			["-  -           -  -  -  -  -  -  -  -             |  - - - - | - - - - | - - - -  | - - - - |  - - - - | - - - - | - - - - | - -  - - | - - - -  | - - - - |  - - - - | - - - -  | - - - - |",0.05],
			["[  ]             S P D R _ 0 3               |   3 7   |   6 5   |   6 c   |   6 9   |   6 5   |   7 6   |   6 5   |   4 2   |   6 5   |   6 c   |   6 9   |   6 5   |   7 6   |",0.1],
			["[  ]             S P D R _ 0 4               |   9 8   |   6 5   |   6 c   |   6 9   |   6 5   |   7 6   |   6 5   |   4 2   |   6 5   |   6 c   |   6 9   |   6 5   |   7 6   |",0.05],
			["[  ]             S P D R _ 0 5               |   1 8   |   6 5   |   6 c   |   6 9   |   6 5   |   7 6   |   6 5   |   4 2   |   6 5   |   6 c   |   6 9   |   6 5   |   7 6   |",0.09],
			["-  -           -  -  -  -  -  -  -  -             +           :           +          :           +           :           +           :           +          :           +           :           +           :",0.05],
			["&#160;",0.05],
			["\ &gt;   R u n n i n g   S y s t e m   D i a g n o s t i c   .  .  .",0.05],
			["&#160;",0.05],
			["|  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  |",0.05],
			["+  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -           -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  +",0.05],
			["|  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  :  |",0.05],
			["&#160;",0.05],
			["-  -             -  -  -  -  -  -  -          -  -  -  -  -  -  -  -  -          -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -       -  -  -  -  -  -  -  -       -  -  -     -  -  -  -  -  -",0.05],
			["0 1            S Y S _ C H K          S Y S - I D - J C             I D   e f a 9 d 6 f d 3 b 3 5 5 0 1 0 7 f f f              M O D - 0 2 1         [ + ]     [ P A S S ]",0.05],
			["0 1           P W R _ C H K          S Y S - I D - M C            I D   5 0 4 F 5 7 4 2 3 2 1 0 4 3 4 8 3 2 4 3          M O D - 3 1 1         [ + ]     [ P A S S ]",0.05],
			["0 1                L S _ C H K          S Y S - I D - J S             I D   4 2 5 2 4 1 5 9 2 0 4 3 4 8 4 5 4 3 4 B          M O D - 1 7 1         [ + ]     [ P A S S ]",0.08],
			["0 1            V S R _ C H K          S Y S - I D - D S             I D   e f a 9 d 6 f d 3 b 3 5 5 0 1 0 7 f f f              M O D - 0 1 9         [ + ]     [ P A S S ]",0.05],
			["-  -             -  -  -  -  -  -  -          -  -  -  -  -  -  -  -  -          -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -       -  -  -  -  -  -  -  -       -  -  -     -  -  -  -  -  -",0.05],
			["0 1           W P N _ C H K          S Y S - I D - P H             I D   b f a 9 d 6 f d 3 b 3 5 5 0 1 0 7 e e f           S U B - 7 7 8         [ + ]     [ P A S S ]",0.03],
			["0 1            A B L _ C H K          S Y S - I D - W U             I D   a e a 9 d 6 f d 3 b 3 5 5 1 2 3 5 e f f           S U B - 2 9 3         [ + ]     [ P A S S ]",0.05],
			["-  -             -  -  -  -  -  -  -          -  -  -  -  -  -  -  -  -          -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -       -  -  -  -  -  -  -  -       -  -  -     -  -  -  -  -  -",0.05],
			["&#160;",0.05],
			["K A T A R N _ s y s . m o d u l e s . c o m m o n . b i o s _ m k _ i i .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .   [ 6   P A S S E D ]",0.05],
			["&#160;",0.05],
			["-  -             -  -  -  -  -  -  -          -  -  -  -  -  -  -  -  -          -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -       -  -  -  -  -  -  -  -       -  -  -     -  -  -  -  -  -",0.05],
			["0 1            S R V _ C H K          S Y S - I D - X S             I D   e f a 9 d 6 f d 3 b 3 5 5 0 1 0 7 f f f            M O D - 9 1 9         [ + ]     [ F A I L ]",0.05],
			["0 1           W P N _ C H K         S Y S - I D - M L             I D   e f a 9 d 6 f d 3 b 3 5 5 0 1 0 7 f f f            M O D - 9 0 9         [ + ]     [ F A I L ]",0.05],
			["0 1                A I _ C H K          S Y S - I D - W U             I D   e f a 9 d 6 f d 3 b 3 5 5 0 1 0 7 f f f            M O D - 7 2 0         [ + ]     [ N U L L ]",0.02],
			["-  -             -  -  -  -  -  -  -          -  -  -  -  -  -  -  -  -          -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -       -  -  -  -  -  -  -  -       -  -  -     -  -  -  -  -  -",0.05],
			["&#160;",0.05],
			["K A T A R N _ s y s . m o d u l e s . c o m m o n . s u b s y s t e m s   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .   [ 2   F A I L E D ]",0.05],
			["K A T A R N _ s y s . m o d u l e s . c o m m o n . s u b s y s t e m s   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .   [ 1   B Y P A S S E D ]",0.05],
			["&#160;",0.05],
			["\ &gt;   G e n e r a t i n g   s y s t e m   r e p o r t .  .  .  ",0.05],
			["&#160;",0.05],
			["[ K A T A R N _ s e c ]   T i m e   E l a p s e d   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  0 1 2",0.05],
			["[ K A T A R N _ s e c ]   T o t a l   S y s t e m s   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  4 3 2",0.05],
			["[ K A T A R N _ s e c ]   M o d u l e s   F A I L E D   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  0 0 1",0.05],
			["[ K A T A R N _ s e c ]   M o d u l e s   p a s s e d   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  0 0 6",0.05],
			["&#160;",0.05],
			["S Y S   .  .  .   Ok   -   ( 3 )   W a r n i n g s",0.05],
			["&#160;",0.05],
			["\ &gt;   M e m   C h e c k   .  .  .",0.09],
			["|   .  x  .  .  .  .  :  .  .  .  .  |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |",0.03],
			["|   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   .  x  .  .  .  .  :  .  .  .  .  |   0 x F F F F : 0 0 0 0   |",0.02],
			["|   0 x F F F F : 0 0 0 0   |   .  x  .  .  .  .  :  .  .  .  .  |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |",0.01],
			["|   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   .  x  .  .  .  .  :  .  .  .  .  |",0.03],
			["|   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |",0.03],
			["|   .  x  .  .  .  .  :  .  .  .  .  |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |",0.03],
			["|   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   .  x  .  .  .  .  :  .  .  .  .  |   0 x F F F F : 0 0 0 0   |",0.05],
			["|   0 x F F F F : 0 0 0 0   |   .  x  .  .  .  .  :  .  .  .  .  |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |",0.02],
			["|   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   .  x  .  .  .  .  :  .  .  .  .  |",0.03],
			["|   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |",0.03],
			["|   .  x  .  .  .  .  :  .  .  .  .  |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |",0.03],
			["|   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   .  x  .  .  .  .  :  .  .  .  .  |   0 x F F F F : 0 0 0 0   |",0.05],
			["|   0 x F F F F : 0 0 0 0   |   .  x  .  .  .  .  :  .  .  .  .  |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |",0.05],
			["|   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   .  x  .  .  .  .  :  .  .  .  .  |",0.03],
			["|   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |   0 x F F F F : 0 0 0 0   |",0.03],
			["&#160;",0.05],
			["&gt;   M e m   C h e c k   .  .  .  O K !",0.05],
			["&#160;",0.05],
			["&#160;",0.04],
			["&#160;",0.03],
			["&#160;",0.02],
			["&#160;",0.02],
			["&#160;",0.02],
			["&#160;",0.01],
			["&#160;",0.01],
			["&#160;",0.01],
			["&#160;",0.01],
			["&#160;",0.01],
			["&#160;",0.01],
			["&#160;",0.01],
			["&#160;",0.01],
			["&#160;",0.01]
		];

		[] spawn {
			[] spawn {
				playSound "Simulation_Restart";
				(OPTRE_hudOverlay#0) ctrlSetFade 0;
				(OPTRE_hudOverlay#0) ctrlCommit 2;
				sleep 0.2;
				(OPTRE_hudShieldDownEffect#0) ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_shieldDownEffect.paa";
				(OPTRE_hudShieldDownEffect#0) ctrlSetTextColor [1,0.2,0.2,1];
				(OPTRE_hudShieldDownEffect#0) ctrlSetFade 0.5;
				(OPTRE_hudShieldDownEffect#0) ctrlCommit 0.2;
				(OPTRE_hudShieldDownEffect#0) ctrlSetPosition [0.190625 * safeZoneW + safeZoneX,0.423 * safeZoneH + safeZoneY,0.61875 * safeZoneW,0.264 * safeZoneH]; 
				(OPTRE_hudShieldDownEffect#0) ctrlCommit 1;
				sleep 0.5;

				(OPTRE_hudShieldDownEffect#0) ctrlSetFade 1;
				(OPTRE_hudShieldDownEffect#0) ctrlCommit 0.5;
				sleep 0.5;

				(OPTRE_hudShieldDownEffect#0) ctrlSetPosition [0.422657 * safeZoneW + safeZoneX,0.115 * safeZoneH + safeZoneY,0.154687 * safeZoneW,0.088 * safeZoneH]; 
				(OPTRE_hudShieldDownEffect#0) ctrlCommit 0;
			};
			sleep 5;
			private _hudElements = [
				(OPTRE_hudInfoDisplayTexture#0),
				(OPTRE_hudCurrentWeapon#0),
				(OPTRE_hudSecondaryWeapon#0),
				(OPTRE_hudLauncher#0),
				(OPTRE_hudGrenade#0),
				(OPTRE_mjolnirRadar#0),
				(OPTRE_mjolnirRadarTexture#0),
				(OPTRE_mjolnirRadarTextureView#0),
				(OPTRE_mjolnirHud_energyText#0),
				(OPTRE_mjolnirHud_gridText#0),
				(OPTRE_mjolnirHud_dirText#0),
				(OPTRE_mjolnirHud_rangeText#0),
				(OPTRE_mjolnirHud_ammoText#0),
				(OPTRE_mjolnirHud_magazinesText#0),
				(OPTRE_mjolnirHud_fireModText#0),
				(OPTRE_mjolnirHud_grenadeNameText#0),
				(OPTRE_mjolnirHud_grenadeAmountText#0),
				(OPTRE_mjolnirHud_rangedToText#0),
				(OPTRE_PM_shieldBar#0)
			];
			{_x ctrlSetFade 0; _x ctrlCommit 1;} forEach _hudElements;
			call OPTRE_shieldChargeAnimation;

			player setVariable ["OPTRE_TARGETING_ALLOWED", true];
			call OPTRE_fnc_addTargetingEventhandler;
			//sleep 1;
			(OPTRE_hudHelmetOutline#0) ctrlSetFade 1;
			(OPTRE_hudHelmetOutline#0) ctrlCommit 1;
			[] spawn {sleep 1; player setVariable ["OPTRE_MJOLNIR_outlineHidden",true]};
			[] spawn {
				for "_i" from 1 to 100 do {
					scopeName "OPTRE_MJOLNIR_hudCharging";
					if (player getVariable ["optre_stopcharging", false]) exitWith {
						player setVariable ["OPTRE_MJOLNIR_HUD_ALLOWED", true];
						breakOut "textLoop";
					};
					(OPTRE_PM_shieldBar#0) progressSetPosition (_i/100);
					sleep 0.025;
				};
				player setVariable ["OPTRE_MJOLNIR_HUD_ALLOWED", true];
				player setVariable ["OPTRE_MJOLNIR_HUD_ACTIVE", true];
			};
		};
		sleep 0.65;
		private _textField = (OPTRE_hudBootUpBoxTextField#0);
		private _textHeadline = (OPTRE_hudBootUpHeadline#0);
		private _bootBox = (OPTRE_hudBootUpBox#0);
		private _bootBar = (OPTRE_hudBootUpBar#0);
		_bootBox ctrlSetTextColor ic51_allison_bootup_color;
		_bootBar ctrlSetTextColor ic51_allison_bootup_color;
		_textField ctrlSetTextColor ic51_allison_bootup_color;

		//Box Animation
		[_bootBox] spawn {
			params ["_element"];
			//_element ctrlSetFade 1;
			_element ctrlSetPosition OPTRE_MJOLNIR_bootBoxStart;
			_element ctrlCommit 0;

			_element ctrlSetPosition OPTRE_MJOLNIR_bootBoxEndPos;
			_element ctrlSetFade 0;
			_element ctrlCommit 0.5;
		};

		//Bar Animation
		[_bootBar] spawn {
			params ["_element"];
			_element ctrlSetPosition OPTRE_MJOLNIR_bootBoxStart;
			_element ctrlSetFade 0;
			_element ctrlCommit 0;

			_element ctrlSetPosition [OPTRE_MJOLNIR_bootBoxStart select 0,OPTRE_MJOLNIR_bootBoxEndPos select 1,OPTRE_MJOLNIR_bootBoxStart select 2,OPTRE_MJOLNIR_bootBoxEndPos select 3];
			_element ctrlCommit 0.5;
			playSound "Topic_Done";
			sleep 0.8;
			_element ctrlSetPosition OPTRE_MJOLNIR_bootBoxEndPos;
			playSound "OPTRE_typing_1";
			_element ctrlCommit 0.2;
			sleep 0.2;
			for "_i" from 1 to 4 do {
				_element ctrlSetFade 0.5;
				_element ctrlCommit 0.05;
				sleep 0.05;
				_element ctrlSetFade 0;
				_element ctrlCommit 0.05;
				sleep 0.05;
			};
			sleep 0.4;
			_element ctrlSetPosition [OPTRE_MJOLNIR_bootBoxStart select 0,OPTRE_MJOLNIR_bootBoxEndPos select 1,OPTRE_MJOLNIR_bootBoxStart select 2,OPTRE_MJOLNIR_bootBoxEndPos select 3];
			playSound "OPTRE_typing_1";
			_element ctrlCommit 0.3;
		};

		//Headline Animation
		[_textHeadline] spawn {
			params ["_element"];
			_element ctrlSetText "P O W E R I N G   U P";
			_element ctrlSetFade 1;
			_element ctrlCommit 0;
			sleep 1;
			for "_i" from 1 to 4 do {
				_element ctrlSetFade 0.5;
				_element ctrlCommit 0.05;
				sleep 0.05;
				_element ctrlSetFade 0;
				_element ctrlCommit 0.05;
				sleep 0.05;
			};
			sleep 0.4;
			_element ctrlSetFade 1;
			_element ctrlCommit 0.2;

		};
		//wait for the animation to finish
		sleep 2.4;

		_textField ctrlSetFade 0;
		_textField ctrlCommit 0;
		private _textToShow = "";
		OPTRE_BOOT_OFFSET = 0.022;
		private _textScale = safeZoneH / 3.5;
		private _structuredTextProperties = "<t align='left'" + format [" size='%1'>",_textScale] + "%1</t>";
		OPTRE_bootUpLines = [];
		_iterations = 0;
		
		{
			scopeName "textLoop";
			if (!(player getVariable ["OPTRE_hasHelmet",false]) OR !(player getVariable ["OPTRE_MJOLNIR_hudInitiated",false])) exitWith {
				breakOut "textLoop";
			};

			_line = _x select 0;

			[_line] call OPTRE_fnc_addBootUpLine;
			
			if (_line != "&#160;") then {
				playSound "OPTRE_typing_1";
			};
			
			sleep 0.2;

				
			_iterations = _iterations + 1;
		} forEach _bootupText;

		_textToShow = "";
		_textField ctrlSetStructuredText parseText "";
		
		//Box Animation
		[_bootBox] spawn {
			params ["_element"];
			sleep 1.4;
			playSound "Topic_Selection";
			sleep 0.3;
			_element ctrlSetPosition OPTRE_MJOLNIR_bootBoxStart;
			_element ctrlSetFade 1;
			_element ctrlCommit 0.5;
		};

		//Bar Animation
		[_bootBar] spawn {
			params ["_element"];
			_element ctrlSetPosition OPTRE_MJOLNIR_bootBoxStart;
			_element ctrlSetFade 0;
			_element ctrlCommit 0;

			_element ctrlSetPosition [OPTRE_MJOLNIR_bootBoxStart select 0,OPTRE_MJOLNIR_bootBoxEndPos select 1,OPTRE_MJOLNIR_bootBoxStart select 2,OPTRE_MJOLNIR_bootBoxEndPos select 3];
			_element ctrlCommit 0.5;
			sleep 0.3;
			_element ctrlSetPosition OPTRE_MJOLNIR_bootBoxEndPos;
			playSound "OPTRE_typing_1";
			_element ctrlCommit 0.2;
			sleep 0.2;
			for "_i" from 1 to 4 do {
				_element ctrlSetFade 0.5;
				_element ctrlCommit 0.05;
				sleep 0.05;
				_element ctrlSetFade 0;
				_element ctrlCommit 0.05;
				sleep 0.05;
			};
			sleep 0.2;
			_element ctrlSetPosition [OPTRE_MJOLNIR_bootBoxStart select 0,OPTRE_MJOLNIR_bootBoxEndPos select 1,OPTRE_MJOLNIR_bootBoxStart select 2,OPTRE_MJOLNIR_bootBoxEndPos select 3];
			playSound "OPTRE_typing_1";
			_element ctrlCommit 0.3;
		};

		//Headline Animation
		[_textHeadline] spawn {
			params ["_element"];
			_element ctrlSetText "B O O T   C O M P L E T E";
			_element ctrlSetFade 1;
			_element ctrlCommit 0;
			sleep 0.5;
			for "_i" from 1 to 4 do {
				_element ctrlSetFade 0.5;
				_element ctrlCommit 0.05;
				sleep 0.05;
				_element ctrlSetFade 0;
				_element ctrlCommit 0.05;
				sleep 0.05;
			};
			sleep 0.2;
			_element ctrlSetFade 1;
			_element ctrlCommit 0.2;

		};

		if (!(player getVariable ["OPTRE_hasHelmet",false]) OR !(player getVariable ["OPTRE_MJOLNIR_hudInitiated",false])) exitWith {
			call OPTRE_fnc_clearHud;
		};
	} else {
		playSound "Simulation_Restart";
		playSound "Topic_Done";
		[] spawn {
			(OPTRE_hudShieldChargeTexture#0) ctrlSetFade 0;
			(OPTRE_hudShieldChargeTexture#0) ctrlCommit 0.5;
			
			sleep 1;
			(OPTRE_hudShieldChargeTexture#0) ctrlSetFade 1;
			(OPTRE_hudShieldChargeTexture#0) ctrlCommit 0.5;
		};

		[] spawn {
			(OPTRE_hudShieldChargeEffect#0) ctrlSetPosition [-0.000156274 * safeZoneW + safeZoneX,0.885 * safeZoneH + safeZoneY,safeZoneW,0.484 * safeZoneH];
			(OPTRE_hudShieldChargeEffect#0) ctrlSetFade 0;
			(OPTRE_hudShieldChargeEffect#0) ctrlCommit 0;

			(OPTRE_hudShieldChargeEffect#0) ctrlSetPosition [0.0101562 * safeZoneW + safeZoneX,-0.391 * safeZoneH + safeZoneY,safeZoneW,0.484 * safeZoneH];
			(OPTRE_hudShieldChargeEffect#0) ctrlCommit 1;
			sleep 1;
			(OPTRE_hudShieldChargeEffect#0) ctrlSetFade 1;
			(OPTRE_hudShieldChargeEffect#0) ctrlCommit 0;
		};
		private _hudElementsBoot = [
			(OPTRE_hudOverlay#0),
			(OPTRE_hudInfoDisplayTexture#0),
			(OPTRE_hudCurrentWeapon#0),
			(OPTRE_hudSecondaryWeapon#0),
			(OPTRE_hudLauncher#0),
			(OPTRE_hudGrenade#0),
			(OPTRE_mjolnirRadar#0),
			(OPTRE_mjolnirRadarTexture#0),
			(OPTRE_mjolnirRadarTextureView#0),
			(OPTRE_mjolnirHud_energyText#0),
			(OPTRE_mjolnirHud_gridText#0),
			(OPTRE_mjolnirHud_dirText#0),
			(OPTRE_mjolnirHud_rangeText#0),
			(OPTRE_mjolnirHud_ammoText#0),
			(OPTRE_mjolnirHud_magazinesText#0),
			(OPTRE_mjolnirHud_fireModText#0),
			(OPTRE_mjolnirHud_grenadeNameText#0),
			(OPTRE_mjolnirHud_grenadeAmountText#0),
			(OPTRE_mjolnirHud_rangedToText#0),
			(OPTRE_PM_shieldBar#0)
		];
		{_x ctrlSetFade 0; _x ctrlCommit 0.5} forEach _hudElementsBoot;
		(OPTRE_hudHelmetOutline#0) ctrlSetFade 1;
		(OPTRE_hudHelmetOutline#0) ctrlCommit 0.5;

		player setVariable ["OPTRE_MJOLNIR_HUD_ALLOWED", true];
		player setVariable ["OPTRE_MJOLNIR_HUD_ACTIVE", true];
		player setVariable ["OPTRE_MJOLNIR_outlineHidden",true];
		player setVariable ["OPTRE_TARGETING_ALLOWED", true];
		call OPTRE_fnc_addTargetingEventhandler;
	};

	//Radar ping animation
	[] spawn {
		disableSerialization;
		_startPos = [0.059297 * safeZoneW,0.1045 * safeZoneH,0,0];
		_endPos = [0 * safeZoneW,0 * safeZoneH,0.118594 * safeZoneW,0.209 * safeZoneH];
		_dialog = uiNamespace getVariable "OPTRE_MJOLNIR_RADAR";
		_ctrlGroupRadar = (OPTRE_mjolnirRadar#0);
		_index = 14000;
		
		while {!isNil{(OPTRE_mjolnirRadar#0)}} do {
			_radarPing = _dialog ctrlCreate ["RscPicture", _index, _ctrlGroupRadar];
			_radarPing ctrlSetTextColor [ic51_allison_radar_color select 0,ic51_allison_radar_color select 1,ic51_allison_radar_color select 2,1];
			_radarPing ctrlSetText "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_radarPing.paa";
			_radarPing ctrlSetPosition _startPos;
			_radarPing ctrlCommit 0;

			_radarPing ctrlSetPosition _endPos;
			_radarPing ctrlCommit 1.5;
			sleep 1.3;
			_radarPing ctrlSetFade 1;
			_radarPing ctrlCommit 0.2;
			sleep 0.2;

			ctrlDelete _radarPing;
			sleep 1;
		};
	};

	OPTRE_systemMessageAllowed = true;
	[] spawn OPTRE_fnc_SystemMessageLoop;
};

OPTRE_fnc_parseBootUpText = {
	private _textScale = safeZoneH / 3.5;
	private _structuredText = "<t align='left'" + format [" size='%1'>",_textScale] + "%1</t>";
	private _textToShow = "";
	if (OPTRE_bootUpLines isEqualTo []) exitWith {
		(OPTRE_hudBootUpBoxTextField#0) ctrlSetStructuredText parseText format [_structuredText, _textToShow];
		(OPTRE_hudBootUpBoxTextField#0) ctrlSetTextColor ic51_allison_bootup_color;
	};
    {
        _textToShow = _textToShow + (_x select 0) + "<br/>";
    } forEach OPTRE_bootUpLines;

    (OPTRE_hudBootUpBoxTextField#0) ctrlSetStructuredText parseText format [_structuredText, _textToShow];
	(OPTRE_hudBootUpBoxTextField#0) ctrlSetTextColor ic51_allison_bootup_color;
};

OPTRE_fnc_addBootUpLine = {
	params ["_text"];
	if (count OPTRE_bootUpLines > 14) then {
		OPTRE_bootUpLines deleteAt 0;
	};

	OPTRE_bootUpLines pushBack [_text];

	call OPTRE_fnc_parseBootUpText;
};
