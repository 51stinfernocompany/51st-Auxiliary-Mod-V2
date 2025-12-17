["InitDummy",["Altis",[23698.1,18610.1,1.41452],47.4653,0.48,[-2.82424,0],0,0,720,0.3,0,1,0,1]] call BIS_fnc_camera;
setViewDistance 200;

setAccTime 0.80;

"colorCorrections" ppEffectAdjust [1,1,0,[0,0,0,0],[0,0,0,0.24],[1,1,1,0],[0.7,0.7,0,0,-0.1,0.4,0.8]]; 
"colorCorrections" ppEffectEnable TRUE; 
"colorCorrections" ppEffectCommit 0;

sleep 1;

setAperture -1;

// Play Music
0 fadeMusic 1;
playMusic "icmainmenu"; // Play main menu theme
addMusicEventHandler ["MusicStop", {0 fadeMusic 1; playMusic "icmainmenu"}]; // Repeat the music
