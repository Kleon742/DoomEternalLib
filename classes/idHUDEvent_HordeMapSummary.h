struct idHUDEvent_HordeMapSummary
{
    struct hordeMapSummaryData_t
    {
        int finalScore; // Offset: 0x0

        int mapIndex; // Offset: 0x4

        int ammoScore; // Offset: 0x8

        int ammoCount; // Offset: 0xC

        int extraLivesScore; // Offset: 0x10

        int extraLivesCount; // Offset: 0x14

        int bountiesCleared; // Offset: 0x18

        int bountiesScore; // Offset: 0x1C

        int powerupKills; // Offset: 0x20

        int powerupScore; // Offset: 0x24

        int coinsCollected; // Offset: 0x28

        int coinsScore; // Offset: 0x2C

        int blitzKills; // Offset: 0x30

        int blitzScore; // Offset: 0x34

        int prevAmmoScore; // Offset: 0x38

        int prevAmmoCount; // Offset: 0x3C

        int prevExtraLivesScore; // Offset: 0x40

        int prevExtraLivesCount; // Offset: 0x44

        int prevBountiesCleared; // Offset: 0x48

        int prevBountiesScore; // Offset: 0x4C

        int prevPowerupKills; // Offset: 0x50

        int prevPowerupScore; // Offset: 0x54

        int prevCoinsCollected; // Offset: 0x58

        int prevCoinsScore; // Offset: 0x5C

        int prevBlitzKills; // Offset: 0x60

        int prevBlitzScore; // Offset: 0x64

    }; // Size: 0x68

    idHUDEvent_HordeMapSummary::hordeMapSummaryData_t info; // Offset: 0x0

}; // Size: 0x68
