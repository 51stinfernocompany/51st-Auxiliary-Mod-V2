class IDA_Blasterbolt_Scatter_Blue;
class ic51_blasterbolt_dc23 : IDA_Blasterbolt_Scatter_Blue
{
    submunitionConeType[] = {"random",10};
    submunitionConeAngle = 0.45;
    timetolive = 3;
};
class ic51_blasterbolt_scatterbolt_slug : IDA_Blasterbolt_Scatter_Blue
{
    submunitionConeType[] = {"random",7};
    submunitionConeAngle = 0.1;
    timetolive = 4;
};
class ic51_blasterbolt_scatterbolt_pellet : IDA_Blasterbolt_Scatter_Blue
{
    caliber = 1.7;
    hit = 6;
    submunitionConeType[] = {"random",10};
    submunitionConeAngle = 0.45;
    timetolive = 2;
};
