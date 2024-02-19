struct idSaveGameRequestParms
{
    idStr folderName; // Offset: 0x0

    idStr overrideMapName; // Offset: 0x30

    bool saveRequested; // Offset: 0x60

    bool persistToStorage; // Offset: 0x61

    bool isStartOfLevel; // Offset: 0x62

    bool isEndOfLevel; // Offset: 0x63

    bool isCheckpoint; // Offset: 0x64

    bool isInitialMapLoad; // Offset: 0x65

    bool requestDataClear; // Offset: 0x66

    bool isSaveAndExit; // Offset: 0x67

    bool allowFastTravel; // Offset: 0x68

    bool appendGameDetails; // Offset: 0x69

    bool onlySaveSlotGameDetails; // Offset: 0x6A

    bool createCheckpointBackup; // Offset: 0x6B

    bool createOSBackup; // Offset: 0x6C

}; // Size: 0x70
