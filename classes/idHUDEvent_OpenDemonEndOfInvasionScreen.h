struct idHUDEvent_OpenDemonEndOfInvasionScreen
{
    struct statInfo_t
    {
        gameStat_t statID; // Offset: 0x0

        int valueInt; // Offset: 0x4

        int valueFloat; // Offset: 0x8

    }; // Size: 0xC

    struct demonEndOfInvasionData_t
    {
        bool wonInvasion; // Offset: 0x0

        long long forceLeaveTime; // Offset: 0x8

        float invasionDuration; // Offset: 0x10

        idHUDEvent_OpenDemonEndOfInvasionScreen::statInfo_t summaryStats[5]; // Offset: 0x14

        int numSummaryStats; // Offset: 0x50

        float scoreValues[10]; // Offset: 0x54

    }; // Size: 0x80

    idHUDEvent_OpenDemonEndOfInvasionScreen::demonEndOfInvasionData_t info; // Offset: 0x0

}; // Size: 0x80
