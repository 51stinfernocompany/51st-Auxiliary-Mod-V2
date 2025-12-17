class CfgSettings {
    class CBA {
        class Versioning {
            class PREFIX {
                main_addon = "ic51_core";
                
                handler = QFUNC(handleVersionMismatch);
                
                class Dependencies {
                    CBA[] = {"cba_main", REQUIRED_CBA_VERSION, "true"};
                    ACE[] = {"ace_main", REQUIRED_ACE_VERSION, "true"};
                };
            };
        };
    };
};
