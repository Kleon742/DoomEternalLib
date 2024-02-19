struct idGameSpawnInfo
{
    enum enum_1D01 : int
    {
        GAMEFLAG_MAINMENU = 1,
        GAMEFLAG_TOOL = 2,
        GAMEFLAG_SCRIPT = 4,
        GAMEFLAG_PRELOAD = 8,
        GAMEFLAG_NOENTITIES = 16,
        GAMEFLAG_ALLLAYERS = 32,
        GAMEFLAG_MAIN = 64,
        GAMEFLAG_BUILD_PROBES = 128,
        GAMEFLAG_MDNT_PREVIEW = 256,
        GAMEFLAG_LEAN_RENDERWORLD = 512,
        GAMEFLAG_HEATMAP_CREATE = 1024
    };

    // may be NULL for an empty world
    idMapFileLocal* mapFile; // Offset: 0x0

    // must be allocated on the map heap
    int gameFlags; // Offset: 0x8

    idStrStatic < 1024 > mapName; // Offset: 0x10

    idStrStatic < 1024 > nextMapName; // Offset: 0x440

    idStrStatic < 1024 > spawnSpot; // Offset: 0x870

    idStrStatic < 1024 > spawnSpotOverride; // Offset: 0xCA0

    idStrStatic < 1024 > checkpointName; // Offset: 0x10D0

    idStrStatic < 1024 > telemetryMapName; // Offset: 0x1500

    int checkpointMapGroup; // Offset: 0x1930

    mapTipCheckpoint_t mapTipCheckpoint; // Offset: 0x1934

    idStrId readableChckptName; // Offset: 0x1938

    idMaterial2* checkpointImage; // Offset: 0x1940

    idList < const idDeclLayer * , TAG_IDLIST , false > activeLayers; // Offset: 0x1948

    bool bIsOnline; // Offset: 0x0

    bool bStatsEnabled; // Offset: 0x0

    bool bJoinInProgress; // Offset: 0x0

    bool bRanked; // Offset: 0x0

    bool isMainMenuMap; // Offset: 0x0

    bool isFromInit; // Offset: 0x0

    // First map to load in the session
    bool initialMapLoad; // Offset: 0x0

    // For development, a checkpoint has been selected to skip to
    bool skipToCheckpoint; // Offset: 0x0

    // Is this map being loaded from a 'next map' command
    bool requestLayersFromWorldSpawn; // Offset: 0x0

    // Load Last Checkpoint
    bool isCheckpointReload; // Offset: 0x0

    // Is the campaign's "continue" option. This is a quick patch for a GMC ship issue.
    bool isCampaignContinue; // Offset: 0x0

    // First load for a new campaign -- does not need to be serialized
    bool newCampaignLoad; // Offset: 0x0

    devMode_t devMode; // Offset: 0x1964

    mapType_t mapType; // Offset: 0x1968

    int gameDifficulty; // Offset: 0x196C

    idList < idStr , TAG_IDLIST , false > entitiesToLoad; // Offset: 0x1970

    idList < idStr , TAG_IDLIST , false > postMapLoadCommands; // Offset: 0x1988

    idList < idStr , TAG_IDLIST , false > userStrings; // Offset: 0x19A0

    int numBots; // Offset: 0x19B8

    int botSkill; // Offset: 0x19BC

    campaignSubType_t campaignSubType; // Offset: 0x19C0

    gameType_t gameType; // Offset: 0x19C4

    bool isDevMenuLaunch; // Offset: 0x19C8

    // The campaign decl associated with this map
    idDeclCampaign* campaignInfo; // Offset: 0x19D0

    // The mapLoadDecl that was used to launch this map (this is how we identify master levels).
    idDeclMapLoad* mapLoadInfo; // Offset: 0x19D8

    // This will override the pool data specified in the game challenge entity
    idDeclAIPoolNumbers* aiPoolNumbersOverride; // Offset: 0x19E0

}; // Size: 0x19E8
