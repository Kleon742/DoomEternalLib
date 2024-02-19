struct idSWFWidget_PlayerStreak : idSWFWidget
{
    struct streakLevel_t
    {
        idStr streakName; // Offset: 0x0

        int maxWins; // Offset: 0x30

        int maxLosses; // Offset: 0x34

        idMaterial2* activeTabIcon; // Offset: 0x38

        idMaterial2* inactiveTabIcon; // Offset: 0x40

    }; // Size: 0x48

    idSWFWidget_PlayerStreak::anon_15 sprites; // Offset: 0x180

    idSWFWidget_Pips* tabs; // Offset: 0x240

    idSWFWidget_Pips* wins; // Offset: 0x248

    idSWFWidget_Pips* losses; // Offset: 0x250

    idStr rankingPeriodId; // Offset: 0x258

    idList < idSWFWidget_PlayerStreak::streakLevel_t , TAG_IDLIST , false > streakLevels; // Offset: 0x288

    int streakIndex; // Offset: 0x2A0

    int streakWins; // Offset: 0x2A4

    int streakLosses; // Offset: 0x2A8

}; // Size: 0x2B0
