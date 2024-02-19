struct idHUDMenu_PVPEndOfMatch_Stage_Rewards : idHUDMenu_PVPEndOfMatch_Stage
{
    idSharedPtr < seasonProgress_t > seasonProgress; // Offset: 0x1A0

    idSWFWidget* background; // Offset: 0x1A8

    idSWFWidget_Seasons_XP_Counter* xpCounter; // Offset: 0x1B0

    idSWFWidget_Seasons_LevelList* levelList; // Offset: 0x1B8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > levelListAnimStartTime; // Offset: 0x1C0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > hideTime; // Offset: 0x1C8

    int previousXP; // Offset: 0x1D0

    int currentXP; // Offset: 0x1D4

}; // Size: 0x1D8
