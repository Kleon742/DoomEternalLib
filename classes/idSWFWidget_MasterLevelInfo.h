struct idSWFWidget_MasterLevelInfo : idSWFWidget
{
    idSWFWidget_MasterLevelRewardInfo* masterLevelRewardInfo; // Offset: 0x180

    idDeclMasterLevelInfo* declMasterLevelInfo; // Offset: 0x188

    idStr mapName; // Offset: 0x190

    idMaterial2* mapMaterial; // Offset: 0x1C0

    bool hasCompleted; // Offset: 0x1C8

    int difficultyCompleted; // Offset: 0x1CC

    bool isExtraLifeModeCompleted; // Offset: 0x1D0

    bool isLocked; // Offset: 0x1D1

    int mapType; // Offset: 0x1D4

}; // Size: 0x1D8
