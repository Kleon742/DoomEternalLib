struct idGameChallenge_PVP : idGameChallenge
{
    struct pvpCalloutRoundVolatile_t
    {
        // Did the slayer have any armor in the previous damage event
        bool slayerHadarmorPreviousDamage; // Offset: 0x0

    }; // Size: 0x1

    struct pvpGameEventCallouts_t
    {
        // Shown for everyone at the start of round 1
        idDeclGameEventCallout* roundOne; // Offset: 0x0

        // Shown for everyone at the start of round 2
        idDeclGameEventCallout* roundTwo; // Offset: 0x8

        // Shown for everyone at the start of round 3
        idDeclGameEventCallout* roundThree; // Offset: 0x10

        // Shown for everyone at the start of round 4
        idDeclGameEventCallout* roundFour; // Offset: 0x18

        // Shown for everyone at the start of round 5 (final)
        idDeclGameEventCallout* roundFinal; // Offset: 0x20

        // Shown for everyone at the start of a tiebreaker round
        idDeclGameEventCallout* roundTiebreaker; // Offset: 0x28

        // five seconds remaining until round start
        idDeclGameEventCallout* preMatchFiveSecondsRemaining; // Offset: 0x30

        // four seconds remaining until round start
        idDeclGameEventCallout* preMatchFourSecondsRemaining; // Offset: 0x38

        // three seconds remaining until round start
        idDeclGameEventCallout* preMatchThreeSecondsRemaining; // Offset: 0x40

        // two seconds remaining until round start
        idDeclGameEventCallout* preMatchTwoSecondsRemaining; // Offset: 0x48

        // one second remaining until round start
        idDeclGameEventCallout* preMatchOneSecondRemaining; // Offset: 0x50

        // Shown for everyone when a round starts
        idDeclGameEventCallout* roundStart; // Offset: 0x58

        // Shown for everyone when a match point round starts
        idDeclGameEventCallout* matchPoint; // Offset: 0x60

        // Shown for everyone when the final round starts
        idDeclGameEventCallout* finalRound; // Offset: 0x68

        // Shown for everyone when Slayer wins the round (win for winners, loss for losers)
        idDeclGameEventCallout* demonsRoundLost; // Offset: 0x70

        // Shown for everyone when Demons win the round (win for winners, loss for losers)
        idDeclGameEventCallout* slayerRoundLost; // Offset: 0x78

        // Shown for everyone when a round is tied
        idDeclGameEventCallout* roundTied; // Offset: 0x80

        // Shown for everyone when a slayer player was killed
        idDeclGameEventCallout* slayerKilled; // Offset: 0x88

        // Shown for everyone when a demon player was killed
        idDeclGameEventCallout* demonKilled; // Offset: 0x90

        // Shown for everyone when both demon players are dead
        idDeclGameEventCallout* demonsKilled; // Offset: 0x98

        // A slayer has lost all of their armor
        idDeclGameEventCallout* slayerArmorDepleted; // Offset: 0xA0

        // Plays when a player has drops blocked, added to the status timer list for every player
        idDeclGameEventCallout* dropsBlockedStatusTimer; // Offset: 0xA8

        // Plays when a demon uses the drops blocked ability
        idDeclGameEventCallout* demonDropsBlocked; // Offset: 0xB0

        // Slayer team victory
        idDeclGameEventCallout* slayerVictory; // Offset: 0xB8

        // Demon team victory
        idDeclGameEventCallout* demonVictory; // Offset: 0xC0

        // Demon Killed callout starts at this time after a demon dies
        idTypesafeTime < float , secondUnique_t , 1 > demonKilledCalloutDelay; // Offset: 0xC8

        // Demon respawning soon callout starts at this time before resurrection
        idTypesafeTime < float , secondUnique_t , 1 > demonRespawnCalloutDelay; // Offset: 0xCC

        // Countdown to demon respawn starts at this time before resurrection
        idTypesafeTime < float , secondUnique_t , 1 > demonRespawnCountdownTime; // Offset: 0xD0

        // Plays while a demon is waiting to respawn
        idDeclGameEventCallout* demonRespawningSoon; // Offset: 0xD8

        // five seconds remaining until demon respawn
        idDeclGameEventCallout* respawnFiveSecondsRemaining; // Offset: 0xE0

        // four seconds remaining until demon respawn
        idDeclGameEventCallout* respawnFourSecondsRemaining; // Offset: 0xE8

        // three seconds remaining until demon respawn
        idDeclGameEventCallout* respawnThreeSecondsRemaining; // Offset: 0xF0

        // two seconds remaining until demon respawn
        idDeclGameEventCallout* respawnTwoSecondsRemaining; // Offset: 0xF8

        // one second remaining until demon respawn
        idDeclGameEventCallout* respawnOneSecondRemaining; // Offset: 0x100

        // Plays when a player demon has successfully resurrected
        idDeclGameEventCallout* demonRespawned; // Offset: 0x108

        // Callouts to delay during a sync (e.g. chainsaw kill)
        idList < const idDeclGameEventCallout * , TAG_IDLIST , false > delayDuringSync; // Offset: 0x110

    }; // Size: 0x128

    struct peerGaugeData_t
    {
        idVector < gaugeSendData_t > gaugeData; // Offset: 0x0

        idStr peerPlayfabId; // Offset: 0x18

    }; // Size: 0x48

    typedef idManagedClassPtr < idPlayerStart > spawnPtr_t;

    // Data related to the PVP game event callouts that's valid only per-round
    idGameChallenge_PVP::pvpCalloutRoundVolatile_t pvpCalloutRoundData; // Offset: 0x3A78

    // outline color for the demon team
    idColor demonOutlineColor; // Offset: 0x3A7C

    // outline color for demon allys
    idColor demonAllyOutlineColor; // Offset: 0x3A8C

    // outline color for the slayer team
    idColor slayerOutlineColor; // Offset: 0x3A9C

    // demons see this fill color (on everything - it's global)
    idColor fillColorDemonSees; // Offset: 0x3AAC

    // slayer sees this fill color (on everything - it's global)
    idColor fillColorSlayerSees; // Offset: 0x3ABC

    // hit color flash all players see (on everything - it's global)
    idColor fillColorHitFlash; // Offset: 0x3ACC

    // who is highlighted from a slayer's perspective
    actorHighlightOptions_t slayerHighlightOptions; // Offset: 0x3ADC

    // who is highlighted from a demon player's perspective
    actorHighlightOptions_t demonHighlightOptions; // Offset: 0x3AF4

    // set scoreLimit to indicate how many rounds a side must win to take the match
    bool raceToStyle; // Offset: 0x3B0C

    // These are the callouts that will play locally for a player based on game events
    idGameChallenge_PVP::pvpGameEventCallouts_t pvpGameEventCallouts; // Offset: 0x3B10

    // seconds at start of round where players can jockey for position (but not fight)
    idTypesafeTime < float , secondUnique_t , 1 > jockeyTimeDuration; // Offset: 0x3C38

    // seconds at the start of a round for a round callout to occur
    idTypesafeTime < float , secondUnique_t , 1 > roundCalloutTimeDuration; // Offset: 0x3C3C

    // The current phase of the ongoing round
    pvpPreMatchPhase_t preMatchPhase; // Offset: 0x3C40

    // the time at which the current pre-match phase will end
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > preMatchPhaseTimeEnd; // Offset: 0x3C48

    // server fallback that will force next round, in case client round upgrade selections somehow fail
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > serverForceNextRoundTime; // Offset: 0x3C50

    bool registeredForLobbyBroadcasts; // Offset: 0x3C58

    idVector < gaugeSendData_t > gaugeData; // Offset: 0x3C60

    idVector < idGameChallenge_PVP::peerGaugeData_t > gaugeDataPeers; // Offset: 0x3C78

    idVector < gaugeSendData_t > gaugeDataServerPerformance; // Offset: 0x3C90

    idTypesafeTime < int , millisecondUnique_t , 1000 > serverPerformanceMapLoadMS; // Offset: 0x3CA8

    int countOfGaugeAggregatePeriods; // Offset: 0x3CAC

    idTypesafeTime < int , millisecondUnique_t , 1000 > timeOfLastTelemetryAggregate; // Offset: 0x3CB0

    // time delay in seconds before round start callout shows during round callout time
    idTypesafeTime < float , secondUnique_t , 1 > roundStartCalloutDelaySec; // Offset: 0x3CB4

    // time delay in seconds before round end callout shows at end of round
    idTypesafeTime < float , secondUnique_t , 1 > roundEndCalloutDelaySec; // Offset: 0x3CB8

    // time delay in seconds (after round end callout) before upgrade ui shows at end of round
    idTypesafeTime < float , secondUnique_t , 1 > upgradeUIDelaySec; // Offset: 0x3CBC

    // time delay in seconds before match end callout (i.e. victory/defeat) shows at end of match
    idTypesafeTime < float , secondUnique_t , 1 > matchEndCalloutDelaySec; // Offset: 0x3CC0

    // time delay in seconds before match end results display (i.e. rounds won per team) shows at end of match
    idTypesafeTime < float , secondUnique_t , 1 > matchEndResultsDelaySec; // Offset: 0x3CC4

    // time at which the upgrade ui will show
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > showUpgradeUITime; // Offset: 0x3CC8

    // time at which the round ends ( and doesn't update it every frame during the post round screen )
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > originalRoundEndTime; // Offset: 0x3CD0

    // the duration to show the upgrade ui before forcing an upgrade selection and starting the next round
    idTypesafeTime < float , secondUnique_t , 1 > upgradeUIDuration; // Offset: 0x3CD8

    // if this gets set to non-zero, game will start at this time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameStartTime; // Offset: 0x3CE0

    // debug variable used to fake end of round with only one player
    bool debugRoundLivesReached; // Offset: 0x3CE8

    // decl to use to score
    idDeclPvpProgressionScoring* pvpProgressionScoringDecl; // Offset: 0x3CF0

    // the manager that keeps track of match scoring
    idPvpProgressManager pvpProgressManager; // Offset: 0x3CF8

    // manages the pre-match intro and outro
    idPVPLifecycleManager pvpLifecycleManager; // Offset: 0x3E80

    // need to know if midnight is driving the intro sequence, otherwise start via timer
    bool usingMidnightIntro; // Offset: 0x4258

    // locally keep track of whether we've hidden the pre-match ui when the countdown starts, to avoid spamming hud broadcasts
    bool preMatchUIHidden; // Offset: 0x4259

    bool localPlayerReadyToStartMsgSent; // Offset: 0x425A

    // tracks when ANY demon player is killed during PvP game
    bool demonPlayerDied; // Offset: 0x425B

    // used to prevent duplicate loadout telemetry events on match initialization
    bool initialLoadoutTelemetrySent; // Offset: 0x425C

    // if > 0, game can only start when this many players are in the match and have readied-up
    int requiredPlayerCount; // Offset: 0x4260

    // if any index is TRUE, the playerData at that slot needs their start cooldowns locked
    idArray < bool , 12 > pendingRoundStartCooldownLockList; // Offset: 0x4264

    // if respawns are enabled, this number is incremented every successful respawn
    int numRespawnsThisRound; // Offset: 0x4270

    // number of times demon players have died this round
    int numDemonDeathsThisRound; // Offset: 0x4274

    // Was the game suspended? There are some actions we want to prevent if so.
    bool gameWasSuspended; // Offset: 0x4278

    // Sent a player count change notification
    bool handlePlayerCountChange; // Offset: 0x4279

    // Some platforms require us to send a specific notification to the system that the multiplayer session is down to one player.
    bool onlyRemainingPlayerNotifSent; // Offset: 0x427A

    // idAI2::Event_Kill drop loot when AI isn't killed through damage and is force killed
    bool dropLootOnAIEvent_Kill; // Offset: 0x427B

    // idAI2::Event_Kill register death when AI isn't killed through damage and is force killed
    bool forceRegisterDeathOnAIEvent_Kill; // Offset: 0x427C

    // absolute time match podium outro will show (not duration)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > outroTime; // Offset: 0x4280

    // if team quits, set this to time match will force-end
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > teamQuitEndTime; // Offset: 0x4288

    // when team quits (or slayer drops), how long (in seconds) before match force-ends
    idTypesafeTime < float , secondUnique_t , 1 > teamQuitEndDelaySec; // Offset: 0x4290

    // track this so that we can award win to other team if round scores are tied
    gameTeam_t teamThatWillQuit; // Offset: 0x4294

    // pvp loadout decl for slayer
    idDeclPVPLoadout* slayerPVPLoadoutDecl; // Offset: 0x4298

    // pvp loadout decl for demons
    idDeclPVPDemonLoadout* demonPVPLoadoutDecl; // Offset: 0x42A0

    // while true, any respawns are mid-match
    bool respawnsWillBeMidMatch; // Offset: 0x42A8

    // enable respawning demon players
    bool respawnsEnabled; // Offset: 0x42A9

    // seconds between demon player respawns
    idBranchedOptionValue < declInputBranch_t , idTypesafeTime < float , secondUnique_t , 1 > > respawnTimeSec; // Offset: 0x42B0

    // seconds to add every time a demon respawns
    idBranchedOptionValue < declInputBranch_t , idTypesafeTime < float , secondUnique_t , 1 > > respawnTimeIncrementSec; // Offset: 0x42D8

    // maximum respawn timer value
    idBranchedOptionValue < declInputBranch_t , idTypesafeTime < float , secondUnique_t , 1 > > respawnTimeCapSec; // Offset: 0x4300

    // how much to scale health when respawning players
    float respawnHealthScalar; // Offset: 0x4328

    // how many times can demonPlayers respawn per round (-1 means infinite)
    int respawnsPerRound; // Offset: 0x432C

    // give the respawned demon player this status effect
    idList < const idDeclStatusEffect * , TAG_IDLIST , false > respawnStatusEffects; // Offset: 0x4330

    gameTeam_t matchWinner; // Offset: 0x4348

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > roundStartTimeGT; // Offset: 0x4350

    bool ammoRegenIsAllowed; // Offset: 0x4358

    // spawn points used exclusively for mid-match respawns (NOT start of round spawning)
    idList < idManagedClassPtr < idPlayerStart > , TAG_IDLIST , false > midMatchSpawnPoints; // Offset: 0x4360

    // when mid-match respawn occurs, find spawn point that is as close to this distance from slayer as possible
    float idealRespawnDistanceFromSlayer; // Offset: 0x4378

    // The round to let the user choose a power upgrade instead of normal upgrade (e.g. value of 2 will let the user choose a power upgrade end of round 2)
    int powerUpgradeRound; // Offset: 0x437C

    // cache pointers to round entities
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > preRoundStartEnts; // Offset: 0x4380

    // cache pointers to round entities
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > roundStartEnts; // Offset: 0x4398

    // cache pointers to round entities
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > roundEndEnts; // Offset: 0x43B0

    // Stores important information per user that persists for a given round. Data is reset each round
    idList < roundUserHistory_t , TAG_IDLIST , false > roundUserHistory; // Offset: 0x43C8

    // names of layers that will turn on when match starts for slayer
    idList < idStr , TAG_IDLIST , false > slayerLayersToActivate; // Offset: 0x43E0

    // names of layers that will turn on when match starts for demons
    idList < idStr , TAG_IDLIST , false > demonLayersToActivate; // Offset: 0x43F8

    // names of layers that will be turned off for everyone
    idList < idStr , TAG_IDLIST , false > layersToDeactivate; // Offset: 0x4410

    // sound state for music when first loaded into map
    idSoundState* musicFirstLoadedState; // Offset: 0x4428

    // sound state for intro music
    idSoundState* musicIntroState; // Offset: 0x4430

    // sound state for match music
    idSoundState* musicMatchState; // Offset: 0x4438

    // sound state for win music
    idSoundState* musicWinState; // Offset: 0x4440

    // sound state for lose music
    idSoundState* musicLoseState; // Offset: 0x4448

    // sound state for health critical music
    idSoundState* musicHealthCriticalState; // Offset: 0x4450

    // sound state for music on round win
    idSoundState* musicRoundWinState; // Offset: 0x4458

    // sound state for music on round lose
    idSoundState* musicRoundLoseState; // Offset: 0x4460

    // sound state for silence
    idSoundSwitch* musicSwitch; // Offset: 0x4468

    // demon player health threshold to be awarded the close call milestone
    float closeCallHealthThreshold; // Offset: 0x4470

    // player health threshold to be awarded the clutch milestone
    float clutchThreshold; // Offset: 0x4474

    // demon player death count threshold to be awarded the comeback milestone
    int comebackThreshold; // Offset: 0x4478

    // time (in s) after spawning that a demon player can achieve the surprise milestone
    idTypesafeTime < float , secondUnique_t , 1 > surpriseTimeLimit; // Offset: 0x447C

    // number of times a teammate must respawn during a round to achieve the survive milestone
    int surviveThreshold; // Offset: 0x4480

    // game difficulty setting
    gameDifficulty_t gameDifficulty; // Offset: 0x4484

    int respawnZCounter; // Offset: 0x4488

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > respawnZCheckTime; // Offset: 0x4490

    uint16 lobbyUsersBroadcastId; // Offset: 0x4498

    idStr playerLeftEarly; // Offset: 0x44A0

}; // Size: 0x44D0
