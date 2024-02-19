struct idHUDEvent_HordeSummary
{
    struct hordeSummaryData_t
    {
        int finalScore; // Offset: 0x0

        int ammoScore; // Offset: 0x4

        int ammoCount; // Offset: 0x8

        int extraLivesScore; // Offset: 0xC

        int extraLivesCount; // Offset: 0x10

        int bountiesCleared; // Offset: 0x14

        int powerupKills; // Offset: 0x18

        bool isPlayerDead; // Offset: 0x1C

        int coinsCollected; // Offset: 0x20

        int blitzKills; // Offset: 0x24

    }; // Size: 0x28

    idHUDEvent_HordeSummary::hordeSummaryData_t info; // Offset: 0x0

}; // Size: 0x28
