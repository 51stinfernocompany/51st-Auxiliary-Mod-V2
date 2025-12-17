class CfgMovesBasic {
    class ManActions {
        ic51_reload_rpg_10 = "ic51_reload_rpg_10";
    };
};

class CfgMovesMaleSdr {
    class States {
        class ReloadRPG;
        class ic51_reload_rpg_10 : ReloadRPG {
            file = "\a3\anims_f\data\anim\sdr\gst\reloadfullrpg.rtm";
            speed = 0.45; // ~10s
        };
    };
};
