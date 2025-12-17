This readme will explain how to configure the Splashscreen.

This document is intended to make it easy to change shown pictures and if needed modify anything within the mod.

Direct any questions to Cassius.

----
ic51_splashscreen
 > data // Data contains all images used in the splashscreen mod.
    > backgrounds // Contains all static background images.
    > Buttons // Contains button images.
    > Scenes // Contain background scenarios. 
    51st_logo_co // logo displayed between loadings.
    51st_logo3_co
    spotlight
 > ui // Contains all ui code. All the code is divided into seperate hpps to make it easier to navigate.
    > BaseControls.hpp // Defines baseclasses.
    > CfgMainMenuSpotlight.hpp // Defines spotlight classes, i.e join mainserver / training server.
    > CfgMusic.hpp // Defines a music class for the scenes.
    > RscDisplayClient.hpp // Defines backgrounds.
    > RscDisplayClientWait.hpp // Defines backgrounds, should have the same as RscDisplayClient.
    > RscDisplayLoading.hpp // Defines backgrounds.
    > RscDisplayLoadMission.hpp // Defines backgrounds.
    > RscDisplayNotFreeze.hpp // Defines backgrounds.
    > RscDisplayMain.hpp // Defines main menu backgrounds, mainmenu logo (Which includes teamspeak joining.) 
                            > Also includes code to hide/remove unwanted content on the main menu.
    > RscDisplayNotFreeze.hpp // Defines backgrounds.
    > RscDisplayStart.hpp // Defines backgrounds.
    > Worldscene.hpp // Defines scenes config, randomisation and which mission is loaded.
 config.cpp // Defines baseconfig, and includes to all .hpp(s).
 readme.txt

Thanks to:
- Clips. (Creating a couple of really cool scenes.)


 KNOWN BUGS