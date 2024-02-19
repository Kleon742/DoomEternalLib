struct idHUDMenu_PVPEndOfMatch_Stage : idSWFWidget
{
    idHUDMenu_PVPEndOfMatch_Stage* nextStage; // Offset: 0x180

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startStageTime; // Offset: 0x188

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > endStageTime; // Offset: 0x190

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > displayTime; // Offset: 0x198

}; // Size: 0x1A0
