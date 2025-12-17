class CfgWeapons {
    class ACE_morphine;
    class ic51_log_bactainjector : ACE_morphine
    {
        displayName = "[51st] Autoinjector Bacta";
        SCOPE_PUBLIC;
        author = AUTHOR;
        ace_medical_isMedicalItem = 1;
    };
};

class ace_medical_treatment_actions {
    class Morphine;
    class ic51_log_bactainjection : Morphine
    {
        displayName = "[51st] Inject Bacta";
        displayNameProgress = "Injecting Bacta...";
        items[] = {"ic51_log_bactainjector"};
        treatmentTime = 4;

        callbackSuccess = "ic51_fnc_bactainjection";
    };
    class CPR;
    class ic51_log_medisensor : CPR
    {
        displayName="Use RFX/K Medisensor";
        displayNameProgress="Scanning...";
        icon="";
        category="examine";
        items[]=
        {
        };
        allowSelfTreatment=1;
        allowedSelections[]=
        {
            "Body"
        };
        medicRequired=2;
        treatmentTime=4;
        condition="true";
        callbackSuccess="ic51_fnc_medisensor";
        consumeItem=0;
        animationMedic="AinvPknlMstpSlayW[wpn]Dnon_medicOther";
        animationMedicProne="AinvPpneMstpSlayW[wpn]Dnon_medicOther";
        animationMedicSelf="";
        animationMedicSelfProne="";
    };
};
