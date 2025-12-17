/*
You can add other equipment to the system by adding the classnames to the appropriate list in the addon settings 
or by adding the config variables that you can find in the example below to the items class.

if you have any issues don't hesitate to contact me, Akaviri13.

To add weapon icons for the system to use add pictureMjolnirHud = "YourFilePath"; to the weapons config.
Default icons are at filepath "\x\ic51\addons\community_scripts\shieldsystem\textures\weaponIcons\*WeaponType*\*WeaponIcon*.paa".
*/

class cfgWeapons {
	class OPTRE_MJOLNIR_Undersuit;
	class OPTRE_MJOLNIR_Mk4Armor;
	class OPTRE_MJOLNIR_Mk4Helmet;

   	class YourNewSpartanUndersuit_Classname: OPTRE_MJOLNIR_Undersuit {
   		displayName = "YourNewSpartanUndersuit";
   		MJOLNIR_isUndersuit = 1;	//Add this to a uniform to make it use the system
 	 };

	class YourNewSpartanArmor_Classname: OPTRE_MJOLNIR_Mk4Armor {
		displayName = "YourNewSpartanArmor";
		MJOLNIR_isArmor = 1;				//Add this to a vest to make it use the system
		MJOLNIR_shieldStrength = 100;			//Shield energy capacity
		MJOLNIR_shieldChargeValue = 1;   		//How much shield energy gets regenerated
		MJOLNIR_shieldChargeDelay = 0.1; 		//Recharge delay in seconds
	};

	class YourNewSpartanHelmet_Classname: OPTRE_MJOLNIR_Mk4Helmet
	{
		displayName = "YourNewSpartanHelmet";
		MJOLNIR_isHelmet = 1;										//Add this to a uniform to make it use the system
		MJOLNIR_helmetOverlay = "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_hudBackground.paa";		//Filepath for the hud overlay texture
		MJOLNIR_helmetOutline = "\x\ic51\addons\community_scripts\shieldsystem\textures\OPTRE_MJOLNIR_hudHelmetOutline.paa";    	//Filepath for the hud outline texture
	};
};

class cfgVehicles {
	class OPTRE_Spartan2_Soldier_Base;
	class YourNewSpartanSoldier_Base: OPTRE_Spartan2_Soldier_Base {
		uniformClass = "YourNewSpartanUndersuit_Classname";
		model = "\OPTRE_MJOLNIR_Units\undersuit.p3d";
	};
};
