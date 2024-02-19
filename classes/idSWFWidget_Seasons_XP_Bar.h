struct idSWFWidget_Seasons_XP_Bar : idSWFWidget
{
    int level; // Offset: 0x180

    float percentProgress; // Offset: 0x184

    float lastPercentProgress; // Offset: 0x188

    float boosterProgress; // Offset: 0x18C

    bool showBoosterLeader; // Offset: 0x190

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > tweenTime; // Offset: 0x198

    float tweenBarStartPos; // Offset: 0x1A0

    float tweenBarEndPos; // Offset: 0x1A4

    bool tweenBarPosCalculated; // Offset: 0x1A8

}; // Size: 0x1B0
