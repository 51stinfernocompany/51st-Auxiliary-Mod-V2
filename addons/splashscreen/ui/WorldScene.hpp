class CfgMissions
{
	class Cutscenes
	{
		class ic51_endor // Class referenced in 'cutscenes' property in CfgWorlds
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\campfire_scene.lsb_terrain_endor"; // Path to scenario with the scene
		};
		class ic51_altis
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\holotable_scene.Altis";
		};
		class ic51_vr
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\holotable_scene.Altis";
		};
		class ic51_kamino
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\kamino_scene.Kamino";
		};
		class ic51_scarif
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\51_scarif_scene.lsb_terrain_scarif";
		};
		class ic51_geo1
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\holotable_scene.Altis";
		};
		class ic51_geo2
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\holotable_scene.Altis";
		};
		class ic51_grassland
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\kamino_scene.Kamino";
		};
		class ic51_harvet
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\kamino_scene.Kamino";
		};
		class ic51_iberus
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\kamino_scene.Kamino";
		};
		class ic51_jabim
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\campfire_scene.lsb_terrain_endor";
		};
		class ic51_kholo
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\campfire_scene.lsb_terrain_endor";
		};
		class ic51_madigral
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\campfire_scene.lsb_terrain_endor";
		};
		class ic51_malden
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\51_scarif_scene.lsb_terrain_scarif";
		};
		class ic51_mimban
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\campfire_scene.lsb_terrain_endor";
		};
		class ic51_orto
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\51_scarif_scene.lsb_terrain_scarif";
		};
		class ic51_sandstorm
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\51_scarif_scene.lsb_terrain_scarif";
		};
		class ic51_space
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\51_scarif_scene.lsb_terrain_scarif";
		};
		class ic51_stratis
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\51_scarif_scene.lsb_terrain_scarif";
		};
		class ic51_tatooine
		{
			directory = "x\ic51\addons\splashscreen\data\scenes\51_scarif_scene.lsb_terrain_scarif";
		};
	};
};

// The path doesn't have to be the same world as the class above, so loading VR can always lead to ALTIS for example. This needs some macros with randomization and then we are set, we can have everything on one world with multiple cutscenes that way it's really easy to make it random.

#define INIT_WORLD_OPTIONS ["lsb_terrain_endor", "lsb_terrain_scarif"]
#define RANDOM_INIT_WORLD __EVAL(INIT_WORLD_OPTIONS select floor(random count INIT_WORLD_OPTIONS))

class CfgWorlds
{
	initWorld = RANDOM_INIT_WORLD;
	demoWorld = RANDOM_INIT_WORLD;
	class CAWorld;
	class lsb_terrain_endor : CAWorld
	{
		cutscenes[] = { "ic51_endor" };
	};
	class Altis: CAWorld
	{
		cutscenes[] = { "ic51_endor" };
	};
	class Malden: CAWorld
	{
		cutscenes[] = { "ic51_endor" };
	};
	class VR: CAWorld
	{
		cutscenes[] = {"ic51_scarif"};
	};
	class Kamino: CAWorld
	{
		cutscenes[] = {"ic51_scarif"};
	};
	class lsb_terrain_scarif: CAWorld
	{
		cutscenes[] = {"ic51_scarif"};
	};
};
