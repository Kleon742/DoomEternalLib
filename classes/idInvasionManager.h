struct idInvasionManager
{
    enum invasionResult_t : int
    {
        IR_NONE = 0,
        IR_SLAYER_VICTORY = 1,
        IR_INVADER_VICTORY = 2,
        IR_NO_INTERACTION = 3,
        IR_NO_WINNER = 4
    };

    // server side slayer that touched the spawn volume
    idPlayer* slayer; // Offset: 0x0

    // spawn volume that the slayer touched on the server
    idVolume* spawnVolume; // Offset: 0x8

    // previous spawn volume that the slayer touched on the server
    idVolume* previousSpawnVolume; // Offset: 0x10

    // previous spawn volume that the slayer touched to deactivate the demon containment volumes
    idVolume* previousSpawnVolumeToDeactivate; // Offset: 0x18

    // the game challenge this invasion manager lives on
    idGameChallenge* gameChallenge; // Offset: 0x20

    // these are ALL the spawn points on the map, but only some will be active (determined by area)
    idList < idManagedClassPtr < idCampaignInvaderStart > , TAG_IDLIST , false > spawnPoints; // Offset: 0x28

    // active point for each player tracked separately
    idStaticList < int , 12 , false , TAG_IDLIST > activeSpawnPoint; // Offset: 0x40

    // slayer touched a new spawn volume on the server
    bool startedTouchingSpawnVolume; // Offset: 0x88

    // slayer touched a new spawn volume and teleport the demon
    bool shouldTeleport; // Offset: 0x89

    // slayer triggered once on the idTrigger_TakeDamage on the server
    bool takeDamageTriggered; // Offset: 0x8A

    // slayer triggered multiple times on the idTrigger_TakeDamage on the server
    bool takeDamageTriggeredMulti; // Offset: 0x8B

    // demon player killed and tracked on the server
    bool demonPlayerKilled; // Offset: 0x8C

    // an invasion is going on right now
    bool invasionOccurring; // Offset: 0x8D

    // we are hosting for invasion, but may or may not be being invaded right now
    bool invasionBeingHosted; // Offset: 0x8E

    // campaign owner is able to be invaded right now, based on time
    bool playerTimeValid; // Offset: 0x8F

    // campaign owner cannot be invaded for the remainder of the level session
    bool levelInstanceInvalidated; // Offset: 0x90

    // if true then the player has damaged an invading demon or a demon has damaged the player
    bool playerDemonInteractionOccured; // Offset: 0x91

    // Is debug bar showing
    bool debugBarShowing; // Offset: 0x92

    // if true, demon spawned inside the containment volume
    bool isDemonSpawnedInVolume; // Offset: 0x93

    // keep demon contained in volume
    bool keepDemonContained; // Offset: 0x94

    // cant host when game is paused
    bool gamePaused; // Offset: 0x95

    // force ghost mode when teleporting
    bool forceGhost; // Offset: 0x96

    // settings for invasion, e.g. time limit
    idDeclInvasionSettings* invasionSettings; // Offset: 0x98

    idList < idStr , TAG_IDLIST , false > universalLayerStrings; // Offset: 0xA0

    // Layers available to all players
    idList < const idDeclLayer * , TAG_IDLIST , false > universalLayers; // Offset: 0xB8

    // Layers only available to Slayers
    idList < const idDeclLayer * , TAG_IDLIST , false > slayerLayers; // Offset: 0xD0

    // Layers only available to DemonPlayers
    idList < idStr , TAG_IDLIST , false > demonOnlyLayerStrings; // Offset: 0xE8

    // each map will have an area manager for each invasion area
    idList < idInvasionAreaManager * , TAG_IDLIST , false > areaManagers; // Offset: 0x100

    // current invasion area that is ready (might be NULL)
    idInvasionAreaManager* currentArea; // Offset: 0x118

    // most recently touched spawn volumes
    idList < idManagedClassPtr < idVolume_InvasionSpawnZone > , TAG_IDLIST , false > recentSpawnVolumes; // Offset: 0x120

    // list of the recently entered demon containment volumes that the demon entered.
    idList < idManagedClassPtr < idVolume_DemonContainment > , TAG_IDLIST , false > recentDemonContainmentVolumes; // Offset: 0x138

    // time the invasion began, used to calculate total invasion duration at match end
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > invasionStartTime; // Offset: 0x150

    // time the local player's invasion spawn menu will next show (zero means not pending)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > invasionMenuTime; // Offset: 0x158

    // time the summary UI will show
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > showSummaryTime; // Offset: 0x160

    // the time the post invasion summary will end, removing players from game
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > endSummaryTime; // Offset: 0x168

    // the time to tell the users to show their end of match UI
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > showInvasionEndOfMatchUITime; // Offset: 0x170

    // for debug prints at summary
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastPrintTime; // Offset: 0x178

    // invasions blocked at start until this time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > initialInhibitTime; // Offset: 0x180

    // invasions blocked for a short time after having just stopped hosting
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > ditherInhibitTime; // Offset: 0x188

    // next time we need to decrement the profile's next invasion time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextProfileDecrementTime; // Offset: 0x190

    // if set, invasion session will end at this time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > forceEndTime; // Offset: 0x198

    // if set, invader clients will disconnect at this time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > clientDisconnectTime; // Offset: 0x1A0

    // the duration, in seconds, the last invasion took
    idTypesafeTime < float , secondUnique_t , 1 > invasionDuration; // Offset: 0x1A8

    // result of invasion
    idInvasionManager::invasionResult_t result; // Offset: 0x1AC

    // the manager that keeps track of match scoring
    idPvpProgressManager invasionProgressManager; // Offset: 0x1B0

    // entity numbers of inhibit volumes player is currently touching
    idList < int , TAG_IDLIST , false > inhibitVolumesTouched; // Offset: 0x338

    // index of player being invaded (campaign owner)
    int invadedPlayerIndex; // Offset: 0x350

    // set on server, serialized to client so they can query it
    int numInvaders; // Offset: 0x354

    // pool of lives for invaders to draw from
    int invaderLifePool; // Offset: 0x358

    // cache slayer's lives before Invasion starts
    int originalSlayerLifeCount; // Offset: 0x35C

    // cache num lobby users to detect changes
    int lobbyUserCount; // Offset: 0x360

}; // Size: 0x368
