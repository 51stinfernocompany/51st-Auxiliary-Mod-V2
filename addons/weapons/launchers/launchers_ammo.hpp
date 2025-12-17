class 3AS_R_MK41_AT;
class ic51_hh12_ion_ammo : 3AS_R_MK41_AT
{
    JLTS_isEMPAmmo = 1; //indicates that the ammo is EMP
    hit = 0.1; //recommended to set these values to very low but it must not be 0
    indirectHit = 0.1; 
    indirectHitRange = 20; //use this property to set the effect radius of explosive type EMPs
};
