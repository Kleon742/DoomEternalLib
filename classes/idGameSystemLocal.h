struct idGameSystemLocal : idGameSystem
{
    enum state_t : int
    {
        GAME_STATE_MAIN_MENU = 0,
        GAME_STATE_LOADING = 1,
        GAME_STATE_INGAME = 2,
        GAME_STATE_NUM = 3
    };

    struct battleArenaSettings_t
    {
        idStr matchmakingQueueName; // Offset: 0x0

        idStr matchmakingFunctionName; // Offset: 0x30

        idTypestrictTimeSpan < int , idCompileTimeRatio < 1 > > matchmakingTimeout; // Offset: 0x60

        idTypestrictTimeSpan < int , idCompileTimeRatio < 1 > > transitionPeerTimeout; // Offset: 0x64

        idTypestrictTimeSpan < int , idCompileTimeRatio < 1 > > readyToTransitionDelay; // Offset: 0x68

        idTypestrictTimeSpan < int , idCompileTimeRatio < 1 > > readyToTransitionTimeout; // Offset: 0x6C

        idVector < idPair < platformIdentity_type , idStr > > platformPools; // Offset: 0x70

        idVector < idStr > regions; // Offset: 0x88

        idVector < idPair < idStr , int > > playableMapsAndWeights; // Offset: 0xA0

        idVector < idTypesafeTime < int , millisecondUnique_t , 1000 > > summoningAttemptDelays; // Offset: 0xB8

        idVector < idTypesafeTime < int , millisecondUnique_t , 1000 > > transitioningAttemptDelays; // Offset: 0xD0

        unsigned int summoningMaxAttempts; // Offset: 0xE8

        unsigned int transitioningMaxAttempts; // Offset: 0xEC

        unsigned int indicator_highLatency_threshold; // Offset: 0xF0

        unsigned int indicator_latencyVariation_threshold; // Offset: 0xF4

        float indicator_packetLoss_threshold; // Offset: 0xF8

        bool indicator_highLatency_enabled; // Offset: 0xFC

        bool indicator_latencyVariation_enabled; // Offset: 0xFD

        bool indicator_packetLoss_enabled; // Offset: 0xFE

        idTypestrictTimePoint < typestrictMonotonicTimestampUnique > lastUpdate; // Offset: 0x100

        idStr declInputBranch; // Offset: 0x108

    }; // Size: 0x138

    struct runFrameParms_t
    {
        idGameSystemLocal* self; // Offset: 0x0

        idMapInstanceLocal* mapInst; // Offset: 0x8

        gameFrameParms_t* frameParms; // Offset: 0x10

        gameFrameReturn_t* gameReturn; // Offset: 0x18

        bool isMainInstance; // Offset: 0x20

    }; // Size: 0x28

    struct mapChangeRequest_t
    {
        bool requested; // Offset: 0x0

        idGameSpawnInfo gameSpawnInfo; // Offset: 0x8

        idStaticList < idFile_SaveGame * , 1 , false , TAG_IDLIST > gameSaveFiles; // Offset: 0x19F0

    }; // Size: 0x1A10

    struct offlineMessaging_t
    {
        idTypestrictTimePoint < typestrictWallClockTimestampUnique > start; // Offset: 0x0

        idTypestrictTimePoint < typestrictWallClockTimestampUnique > end; // Offset: 0x8

        idVector < idPair < idStr , idStr > > localizedMessages; // Offset: 0x10

    }; // Size: 0x28

    bool initialized; // Offset: 0x40

    uint16 broadcastId; // Offset: 0x42

    idGameSystemLocal::state_t state; // Offset: 0x44

    idTypesafeTime < int , millisecondUnique_t , 1000 > stateStartTime; // Offset: 0x48

    // could be the server game or a client game, menu game, etc.
    idMapInstance_Interface* mapInstance; // Offset: 0x50

    idMapInstance_Interface* playbackInstance; // Offset: 0x58

    // Exists on the persist heap, matches lifetime of persist heap
    idMapFileLocal* persistMapFile; // Offset: 0x60

    // create a holistic sound world for the entire game
    idSoundWorld2ID soundWorld2ID; // Offset: 0x68

    idList < bool , TAG_IDLIST , false > wasActiveList; // Offset: 0x70

    // memory that is retained across games
    idStaticList < idFile_SaveGame * , 1 , false , TAG_IDLIST > retainedFiles; // Offset: 0x88

    idMapInstanceLocal* prevGameLocal; // Offset: 0xA8

    // TODO: bosley -> this is still in engine (gamelib) code
    idSaveGameSerializer* saveGameSerializer; // Offset: 0xB0

    idGameSystemLocal::mapChangeRequest_t mapChangeRequest; // Offset: 0xB8

    idStr errorString; // Offset: 0x1AC8

    idDemoController* demoController; // Offset: 0x1AF8

    bool offlineMode; // Offset: 0x1B00

    idStaticList < idRenderLight * , 4096 , false , TAG_IDLIST > serializedLights; // Offset: 0x1B08

    idPermissionsSystem* permissionsSystem; // Offset: 0x9B20

    idMilestoneSystem* milestoneSystem; // Offset: 0x9B28

    idOnlineServiceProgressTracker* onlineProgressTracker; // Offset: 0x9B30

    idGhostProfileManager* ghostProfileManager; // Offset: 0x9B38

    idSeasonsManager* seasonsManager; // Offset: 0x9B40

    idOnlineChallengesManager* onlineChallengesManager; // Offset: 0x9B48

    idBattlemodeStreakManager* battlemodeStreakManager; // Offset: 0x9B50

    idGhostLeaderboardManager* ghostLeaderboardManager; // Offset: 0x9B58

    idOnlineViolenceEventsManager* onlineViolenceEventsManager; // Offset: 0x9B60

    idBattleArenaChallengesManager* battleArenaChallengesManager; // Offset: 0x9B68

    idSocialPlayerInfoMapper* socialPlayerInfoMapper; // Offset: 0x9B70

    idChatCommunications* chatCommunications; // Offset: 0x9B78

    idSessionsManager* sessionsManager; // Offset: 0x9B80

    idSocialPartySessionManager* socialPartySessionManager; // Offset: 0x9B88

    idDemonBountyManager* demonBountyManager; // Offset: 0x9B90

    idSocialFriendsManager* socialFriendsManager; // Offset: 0x9B98

    idPresenceManager* presenceManager; // Offset: 0x9BA0

    idCustomerRelationsManager* customerRelationsManager; // Offset: 0x9BA8

    idSocialRecentPlayersManager* socialRecentPlayersManager; // Offset: 0x9BB0

    idSocialViewManager* socialViewManager; // Offset: 0x9BB8

    idTitleDataManager* titleDataManager; // Offset: 0x9BC0

    idLiveTileManager* liveTileManager; // Offset: 0x9BC8

    idCampaignManager* campaignManager; // Offset: 0x9BD0

    idShellDataManager* shellDataManager; // Offset: 0x9BD8

    idGameSessionsManager* gameSessionsManager; // Offset: 0x9BE0

    idDeveloperMatchmaking* developerMatchmaking; // Offset: 0x9BE8

    idProhibitionsManager* prohibitionsManager; // Offset: 0x9BF0

    idServiceOutageManager* serviceOutageManager; // Offset: 0x9BF8

    idGameActivities* gameActivities; // Offset: 0x9C00

    doomEternalSku_t pendingCampaignActivitySKU; // Offset: 0x9C08

    idOption < idGameSystemLocal::offlineMessaging_t > battleArenaDowntime; // Offset: 0x9C10

    idOption < idGameSystemLocal::offlineMessaging_t > forcedOfflineMode; // Offset: 0x9C40

    bool isProfiling; // Offset: 0x9C70

    asyncio::idTaskResultWeakPtr < idNoResult , idNoResult > lobbyPermissionsCheckTask; // Offset: 0x9C78

    asyncio::idTaskWeakPtr reconnectToOnlineServicesTask; // Offset: 0x9C80

    idProxyPtr < idGameSystemLocal > proxyPtr; // Offset: 0x9C88

    // loading tip helpers
    mapTipGameMode_t mapTipGameMode; // Offset: 0x9C90

    mapTipCheckpoint_t mapTipCheckpoint; // Offset: 0x9C94

    mapTipDeath_t mapTipDeath; // Offset: 0x9C98

    idGrowableList < idSaveGameRequestParms , 2 , TAG_IDLIST > pendingSaveGameRequests; // Offset: 0x9CA0

    time_t pendingSaveGameRequestTime; // Offset: 0x9D98

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastGameSaveTime; // Offset: 0x9DA0

    asyncio::idTaskResultPtr < idNoResult , idNoResult > battleArenaSettingsUpdate; // Offset: 0x9DA8

    idGameSystemLocal::battleArenaSettings_t battleArenaSettings; // Offset: 0x9DB0

}; // Size: 0x9EE8
