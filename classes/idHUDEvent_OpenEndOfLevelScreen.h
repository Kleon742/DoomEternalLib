struct idHUDEvent_OpenEndOfLevelScreen
{
    struct openEOLData_t
    {
        struct playerInfo_t
        {
            int weaponPoints; // Offset: 0x0

            int praetorPoints; // Offset: 0x4

            int masteryPoints; // Offset: 0x8

            int runeUpgradePoints; // Offset: 0xC

            int sentinelBatteryPoints; // Offset: 0x10

            int availableWeaponMods; // Offset: 0x14

            int availableWeaponModUpgrades; // Offset: 0x18

            int availableSuitPerks; // Offset: 0x1C

        }; // Size: 0x20

        struct combatInfo_t
        {
            int combatRatingMax; // Offset: 0x0

            int combatRatingPercent; // Offset: 0x4

            int secretCombatRatingMax; // Offset: 0x8

            int secretCombatRatingPercent; // Offset: 0xC

            int slayerGateRatingMax; // Offset: 0x10

            int slayerGateRatingPercent; // Offset: 0x14

            int bossRatingMax; // Offset: 0x18

            int bossRatingPercent; // Offset: 0x1C

        }; // Size: 0x20

        struct itemInfo_t
        {
            int categoryIndex; // Offset: 0x0

            bool found; // Offset: 0x4

            bool completed; // Offset: 0x5

        }; // Size: 0x8

        idEntity* levelTransitionEntity; // Offset: 0x0

        int seasonXpEarned; // Offset: 0x8

        int doomLevelXpEarned; // Offset: 0xC

        bool doomLevelIncreased; // Offset: 0x10

        bool transitionActivated; // Offset: 0x11

        idHUDEvent_OpenEndOfLevelScreen::openEOLData_t::playerInfo_t playerInfo; // Offset: 0x14

        idHUDEvent_OpenEndOfLevelScreen::openEOLData_t::combatInfo_t combatInfo; // Offset: 0x34

        idHUDEvent_OpenEndOfLevelScreen::openEOLData_t::itemInfo_t itemInfo[64]; // Offset: 0x54

        int numItems; // Offset: 0x254

        challengeInfo_t challengeInfo[3]; // Offset: 0x258

        int numChallenges; // Offset: 0x768

        idStrId mapDisplayName; // Offset: 0x76C

        gameType_t gameType; // Offset: 0x770

        campaignSubType_t campaignSubType; // Offset: 0x774

        idDeclMapLoad* mapLoadInfo; // Offset: 0x778

        idDeclCredits* credits; // Offset: 0x780

        bool returnToMainMenu; // Offset: 0x788

        int difficulty; // Offset: 0x78C

    }; // Size: 0x790

    idHUDEvent_OpenEndOfLevelScreen::openEOLData_t info; // Offset: 0x0

}; // Size: 0x790
