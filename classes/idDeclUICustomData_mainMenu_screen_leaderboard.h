struct idDeclUICustomData_mainMenu_screen_leaderboard : idGameDeclTypeInfo
{
    struct defaultInfo_t
    {
        // Default challenge name, if none specified
        idStrId challengeName; // Offset: 0x0

        // Default challenge icon, if none specified
        idMaterial2* challengeIcon; // Offset: 0x8

    }; // Size: 0x10

    struct medalInfo_t
    {
        // Material for the large Icon
        idMaterial2* largeIcon; // Offset: 0x0

        // Material for the small Icon
        idMaterial2* smallIcon; // Offset: 0x8

        // min score for easy
        float easyMin; // Offset: 0x10

        // min score for medium
        float mediumMin; // Offset: 0x14

        // min score for hard
        float hardMin; // Offset: 0x18

        // min score for nightmare
        float nightmareMin; // Offset: 0x1C

    }; // Size: 0x20

    struct leaderboardLabelInfo_t
    {
        // label for the streak column for battle mode
        idStrId battleModeStreak; // Offset: 0x0

        // label for the reward widget in battlemode
        idStrId battleModeRewardLabel; // Offset: 0x4

        // reset message for the rewards in battlemode
        idStrId battleModeRewardResetMessage; // Offset: 0x8

        // Reward description for the battlemode leaderboard
        idStrId battleModeRewardDesc; // Offset: 0xC

        // the title for the column on the reward widget for the rank in battlemode
        idStrId battleModeRewardRank; // Offset: 0x10

        // the title for the reward column in the reward widget for battlemode
        idStrId battleModeRewardTitle; // Offset: 0x14

        // label for the horde score column
        idStrId hordeScore; // Offset: 0x18

        // label for the medal rankings in horde mode
        idStrId hordeMedalRankLabel; // Offset: 0x1C

        // Reset message for the medal rankings in horde mode
        idStrId hordeMedalRankResetMessage; // Offset: 0x20

        // Medal Rank description for horde mode
        idStrId hordeMedalRankDesc; // Offset: 0x24

        // the title for the column on the reward widget for the rank in horde
        idStrId hordeRewardRank; // Offset: 0x28

        // the title for the reward column in the reward widget for horde
        idStrId hordeModeRewardTitle; // Offset: 0x2C

        // message displayed for granting the slayer medal.
        idStrId hordeSlayerMedalMessage; // Offset: 0x30

        // message displayed for granting the gold medal.
        idStrId hordeGoldMedalMessage; // Offset: 0x34

        // message displayed for granting the silver medal.
        idStrId hordeSilverMedalMessage; // Offset: 0x38

        // message displayed for granting the bronze medal.
        idStrId hordeBronzeMedalMessage; // Offset: 0x3C

    }; // Size: 0x40

    // Default info
    idDeclUICustomData_mainMenu_screen_leaderboard::defaultInfo_t defaultInfo; // Offset: 0x90

    // Bronze medal info
    idDeclUICustomData_mainMenu_screen_leaderboard::medalInfo_t bronzeMedalInfo; // Offset: 0xA0

    // Bronze medal info
    idDeclUICustomData_mainMenu_screen_leaderboard::medalInfo_t silverMedalInfo; // Offset: 0xC0

    // Bronze medal info
    idDeclUICustomData_mainMenu_screen_leaderboard::medalInfo_t goldMedalInfo; // Offset: 0xE0

    // Bronze medal info
    idDeclUICustomData_mainMenu_screen_leaderboard::medalInfo_t slayerMedalInfo; // Offset: 0x100

    // default rewards for the slayer
    idMaterial2* defaultSlayerReward_1; // Offset: 0x120

    // default rewards for the slayer
    idMaterial2* defaultSlayerReward_2; // Offset: 0x128

    // default rewards for the slayer
    idMaterial2* defaultSlayerReward_3; // Offset: 0x130

    // default rewards for the slayer
    idMaterial2* defaultSlayerReward_4; // Offset: 0x138

    // default rewards for the slayer
    idMaterial2* defaultSlayerReward_5; // Offset: 0x140

    // default rewards for the demons
    idMaterial2* defaultDemonReward_1; // Offset: 0x148

    // default rewards for the demons
    idMaterial2* defaultDemonReward_2; // Offset: 0x150

    // default rewards for the demons
    idMaterial2* defaultDemonReward_3; // Offset: 0x158

    // default rewards for the demons
    idMaterial2* defaultDemonReward_4; // Offset: 0x160

    // default rewards for the demons
    idMaterial2* defaultDemonReward_5; // Offset: 0x168

    // Various strings that need to be set for elements on the leaderboard
    idDeclUICustomData_mainMenu_screen_leaderboard::leaderboardLabelInfo_t leaderboardLabelInfo; // Offset: 0x170

}; // Size: 0x1B0
