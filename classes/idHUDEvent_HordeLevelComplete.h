struct idHUDEvent_HordeLevelComplete
{
    struct hordeLevelCompleteData_t
    {
        int score; // Offset: 0x0

        int bountiesCleared; // Offset: 0x4

        int powerupKills; // Offset: 0x8

        int coinsCollected; // Offset: 0xC

        int blitzKills; // Offset: 0x10

    }; // Size: 0x14

    idHUDEvent_HordeLevelComplete::hordeLevelCompleteData_t info; // Offset: 0x0

}; // Size: 0x14
