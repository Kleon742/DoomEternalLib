struct idMainMenu_Screen_Leaderboard : idMenuElement
{
    enum idLeaderboardType_t : int
    {
        INVALID_LEADERBOARD = -1,
        HORDE_EASY = 0,
        HORDE_MEDIUM = 1,
        HORDE_HARD = 2,
        HORDE_NIGHTMARE = 3,
        BATTLEMODE_SLAYER = 4,
        BATTLEMODE_DEMON = 5
    };

    struct fetchLeaderboardData_t
    {
        bool isValid; // Offset: 0x0

        int startingLocation; // Offset: 0x4

        int version; // Offset: 0x8

        int maxResultsCount; // Offset: 0xC

        leaderboadType leaderboardType; // Offset: 0x10

        leaderboardPage_t* destination; // Offset: 0x18

    }; // Size: 0x20

    gameDifficulty_t difficultyCategory; // Offset: 0x100

    idMainMenu_Screen_Leaderboard::idLeaderboardType_t leaderboardType; // Offset: 0x104

    idMainMenu_Screen_Leaderboard::fetchLeaderboardData_t queuedLeaderboardFetch; // Offset: 0x108

    idMainMenu_Screen_Leaderboard::fetchLeaderboardData_t previousQueuedLeaderBoardFetch; // Offset: 0x128

    leaderboardEntry_t queuedPlayerInfo; // Offset: 0x148

    idProxyPtr < idMainMenu_Screen_Leaderboard > proxyPtr; // Offset: 0x1C0

    asyncio::idTaskResultPtr < leaderboardPage_t , bool > leaderboardFetchTask; // Offset: 0x1C8

    asyncio::idTaskResultPtr < leaderboardPage_t , bool > playerInfoFetchTask; // Offset: 0x1D0

    idSWFWidget_List* subTabList; // Offset: 0x1D8

    idSWFWidget_List* playerList; // Offset: 0x1E0

    idSWFWidget_List* rewardList; // Offset: 0x1E8

    int subListCategory; // Offset: 0x1F0

    swfPlatform_t swfPlatform; // Offset: 0x1F4

    idSWFWidget_TabList* categories; // Offset: 0x1F8

    idSWFWidget_TabButton* globalList; // Offset: 0x200

    idSWFWidget_TabButton* favoritesList; // Offset: 0x208

    idSWFWidget_TabButton* nearMeList; // Offset: 0x210

    bool updatePlayerList; // Offset: 0x218

    leaderboardPage_t previousPage; // Offset: 0x220

    leaderboardPage_t currentPage; // Offset: 0x240

    leaderboardPage_t nextPage; // Offset: 0x260

    leaderboadType currentLeaderboardType; // Offset: 0x280

    bool repositionToBottom; // Offset: 0x288

    bool repositionTop; // Offset: 0x289

    asyncio::idTaskResultPtr < leaderboardIndexes_t , bool > rewardFetchTask; // Offset: 0x290

    bool updateRewardList; // Offset: 0x298

    leaderboardIndexes_t leaderboardIndex; // Offset: 0x2A0

    idArray < idSWFWidget_Seasons_RewardListItem * , 5 > leaderboardRewardItems; // Offset: 0x570

    bool isPrevious; // Offset: 0x598

    bool leaderboardIndexesFetched; // Offset: 0x599

    bool invalidLedearboardFetch; // Offset: 0x59A

    idDeclUICustomData_mainMenu_screen_leaderboard* uiData; // Offset: 0x5A0

    idSWFCachedSpriteInstance playerInfoSprite; // Offset: 0x5A8

    bool updateTimeRemaining; // Offset: 0x5D8

}; // Size: 0x5E0
