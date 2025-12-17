["InitDummy",["lsb_terrain_scarif",[4282.03,2308.59,1.10795],163.189,0.75,[0.912344,0],0,0,840.021,0.3,0,1,0,1]] call BIS_fnc_camera;
setViewDistance 200;

setAccTime 0.8;

"colorCorrections" ppEffectAdjust [1,1,0,[0,0,0,0],[0,0,0,0.24],[1,1,1,0],[0.7,0.7,0,0,-0.1,0.4,0.8]]; 
"colorCorrections" ppEffectEnable TRUE; 
"colorCorrections" ppEffectCommit 0;

sleep 1;

setAperture -1;

// Play Music
0 fadeMusic 1;
playMusic "icmainmenu"; // Play main menu theme
addMusicEventHandler ["MusicStop", {0 fadeMusic 1; playMusic "icmainmenu"}]; // Repeat the music
