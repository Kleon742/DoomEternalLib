struct idGameChallenge_Horde : idGameChallenge
{
    enum waveState_t : int
    {
        NO_STATE = -1,
        WS_INIT = 0,
        WS_IDLE = 1,
        WS_PRE_WAVE = 2,
        WS_START = 3,
        WS_IN_PROGRESS = 4,
        WS_END = 5,
        WS_EXIT = 6,
        WS_ERROR = 7,
        MAX_STATES = 8
    };

    enum waveTransition_t : int
    {
        NO_TRANSITION = -1,
        WT_INIT_to_IDLE = 0,
        WT_IDLE_to_PRE_WAVE = 1,
        WT_IDLE_to_EXIT = 2,
        WT_PRE_WAVE_to_ERROR = 3,
        WT_PRE_WAVE_to_START = 4,
        WT_START_to_IN_PROGRESS = 5,
        WT_IN_PROGRESS_to_END = 6,
        WT_IN_PROGRESS_to_EXIT = 7,
        WT_END_to_PRE_WAVE = 8,
        WT_END_to_EXIT = 9,
        WT_EXIT_to_IDLE = 10,
        WT_ERROR_to_IDLE = 11,
        MAX_TRANSITIONS = 12
    };

    enum hordeLDCommand_t : int
    {
        HC_INVALID = -1,
        HC_BEGIN_GAME = 0,
        HC_END_GAME = 1,
        HC_START_PRE_ROUND = 2,
        HC_START_ROUND = 3,
        HC_END_ROUND = 4,
        HC_START_WAVE = 5,
        HC_END_WAVE = 6,
        HC_MAX = 7
    };

    enum hordeLDSubCommand_t : int
    {
        HSC_INVALID = -1,
        HSC_START_BOUNTY_PERIOD = 0,
        HSC_START_COIN_CHALLENGE = 1,
        HSC_START_TRAVERSAL_CHALLENGE = 2,
        HSC_START_BLITZ_CHALLENGE = 3,
        HSC_FORCE_END_STAGED_TIMER = 4,
        HSC_MAX = 5
    };

    enum hordeEvent_t : int
    {
        HORDE_EVENT_INVALID = -1,
        HORDE_EVENT_WAVE_STARTED = 0,
        HORDE_EVENT_WAVE_COMPLETED = 1,
        HORDE_EVENT_WAVE_CHALLENGE_COMPLETED = 2,
        HORDE_EVENT_PLAYER_DEATH = 3,
        HORDE_EVENT_BOUNTY_STARTED = 4,
        HORDE_EVENT_BOUNTY_COMPLETED = 5,
        HORDE_EVENT_BOUNTY_FAILED = 6,
        HORDE_EVENT_BOUNTY_REWARD_PICKED_UP = 7,
        HORDE_EVENT_START_COIN_TIMER = 8,
        HORDE_EVENT_START_TRAVERSAL_TIMER = 9,
        HORDE_EVENT_START_BLITZ_TIMER = 10,
        HORDE_EVENT_TIMER_TIMED_OUT = 11,
        HORDE_EVENT_FORCE_TIMER_END = 12,
        HORDE_EVENT_COIN_PICKED_UP = 13,
        HORDE_EVENT_SET_COIN_TOTAL = 14,
        HORDE_EVENT_MAX = 15
    };

    struct invasionGameEventCallouts_t
    {
        // Shown when a demon in disguise is revealed (via being damaged or touched)
        idDeclGameEventCallout* demonDisguiseRevealed; // Offset: 0x0

        // Shown when the the first invader spawns (ghost mode) and invasion has begun
        idDeclGameEventCallout* slayerInvasionStart; // Offset: 0x8

        // Shown when the the first invader spawns (ghost mode) in a party because we show a different notification
        idDeclGameEventCallout* slayerInvasionPartyStart; // Offset: 0x10

        // Shown when the slayer wins the invasion
        idDeclGameEventCallout* slayerVictory; // Offset: 0x18

        // Shown when the demon team wins the invasion
        idDeclGameEventCallout* demonVictory; // Offset: 0x20

        // Shown when neither team wins the invasion (i.e. is forced to end for some reason).
        idDeclGameEventCallout* noWinnerEnd; // Offset: 0x28

        // Shown when neither team interacted with the other team through damage
        idDeclGameEventCallout* noInteractionEnd; // Offset: 0x30

        // 3 demon lives remaining
        idDeclGameEventCallout* threeDemonLivesRemaining; // Offset: 0x38

        // 2 demon lives remaining
        idDeclGameEventCallout* twoDemonLivesRemaining; // Offset: 0x40

        // last demon life
        idDeclGameEventCallout* oneDemonLifeRemaining; // Offset: 0x48

        // 3 slayer lives remaining
        idDeclGameEventCallout* threeSlayerLivesRemaining; // Offset: 0x50

        // 2 slayer lives remaining
        idDeclGameEventCallout* twoSlayerLivesRemaining; // Offset: 0x58

        // last slayer life
        idDeclGameEventCallout* oneSlayerLifeRemaining; // Offset: 0x60

        // slayer with critical health kills demon invader
        idDeclGameEventCallout* slayerCloseCall; // Offset: 0x68

        // slayer player killed
        idDeclGameEventCallout* slayerKilled; // Offset: 0x70

        // demon player killed
        idDeclGameEventCallout* demonKilled; // Offset: 0x78

        // Demon Killed callout starts at this time after a demon dies
        idTypesafeTime < int , millisecondUnique_t , 1000 > demonKilledCalloutDelay; // Offset: 0x80

        // invasion end target hit, invasion will end soon
        idDeclGameEventCallout* invasionEndingSoon; // Offset: 0x88

    }; // Size: 0x90

    typedef idInternalFsm < idGameChallenge_Horde , idGameChallenge_Horde::waveState_t , idGameChallenge_Horde::waveTransition_t > idWaveFSM;

    // The invasion mode specific game event callouts
    idGameChallenge_Horde::invasionGameEventCallouts_t invasionCallouts; // Offset: 0x3A78

    idInternalFsm < idGameChallenge_Horde , idGameChallenge_Horde::waveState_t , idGameChallenge_Horde::waveTransition_t >* waveFSM; // Offset: 0x3B08

    idDeclNotification* hordeNotification; // Offset: 0x3B10

    idStrId hordeIntervalName; // Offset: 0x3B18

    int currentHordeRoundIndex; // Offset: 0x3B1C

    int blitzKillCountRequirement; // Offset: 0x3B20

    eEncounterSpawnType_t blitzAIType; // Offset: 0x3B28

    // settings for invasion manager
    idDeclInvasionSettings* invasionSettings; // Offset: 0x3B30

    idInvasionManager invasionManager; // Offset: 0x3B38

    // player entity num of player that owns this campaign
    int campaignOwner; // Offset: 0x3EA0

    // The decl that defines the sentinel armor effect
    idDeclSentinelArmor* sentinelArmorDecl; // Offset: 0x3EA8

    // The decl that defines the extra life effect
    idDeclExtraLife* extraLifeDecl; // Offset: 0x3EB0

    // Single player cheat code related decls The decl associated with the Cheat Code for power up infinite onslaught
    idDeclStatusEffect* OnslaughtInfiniteCheat; // Offset: 0x3EB8

    // The decl associated with the Cheat Code for power up infinite overdrive
    idDeclStatusEffect* OverdriveInfiniteCheat; // Offset: 0x3EC0

    // The decl associated with the Cheat Code for power up infinite Berserk
    idDeclStatusEffect* BerserkInfiniteCheat; // Offset: 0x3EC8

    // The decl associated with the Cheat Code for Give Mastered All Weapons And Equipment
    idDeclWeapon* flameBelchEquipmentDecl; // Offset: 0x3ED0

    // The decl associated with the Cheat Code for Give Mastered All Weapons And Equipment
    idDeclThrowable* throwableIceEquipmentDecl; // Offset: 0x3ED8

    // The decl associated with the Cheat Code for Give Mastered All Weapons And Equipment
    idDeclThrowable* throwableFragEquipmentDecl; // Offset: 0x3EE0

    // The decl associated with the Cheat Code for Give Mastered All Weapons And Equipment
    idDeclEquipmentLauncher* equipmentLauncherDecl; // Offset: 0x3EE8

    // The decl associated with the Cheat Code for QuakeCon mode
    idDeclQuakeConModeSettings* quakeConModeSettings; // Offset: 0x3EF0

    // The decl associated with general cheat code settings
    idDeclCheatSettings* cheatSettings; // Offset: 0x3EF8

    // Layer for when extra lives are disabled
    idDeclLayer* extraLifeLayerName_None; // Offset: 0x3F00

    // Layer for when we want "some" extra lives
    idDeclLayer* extraLifeLayerName_Some; // Offset: 0x3F08

    // Layer for when we want "many" extra lives
    idDeclLayer* extraLifeLayerName_Many; // Offset: 0x3F10

    // the loadout to give the player if they cheat in ultranightmare
    idDeclDevInvLoadout* nightmareLoadoutCheating; // Offset: 0x3F18

    // per-level customizations for demonic corruption bar
    idDeclDemonicCorruption* demonicCorruptionDecl; // Offset: 0x3F20

    // list of all possible inventory items the player can pick up
    idList < const idDeclInventory * , TAG_IDLIST , false > playerInventoryItems; // Offset: 0x3F28

    // list of all possible Perks the player can pick up
    idList < const idDeclPerk * , TAG_IDLIST , false > playerPerks; // Offset: 0x3F40

    // list of entities to create to create pooling for at map start
    idList < const idDeclEntityDef * , TAG_IDLIST , false > poolEntityInit; // Offset: 0x3F58

    // the time to delay the very first save of the mission by this ammount, will be overriden if checkpoint is manually triggered by design
    idTypesafeTime < int , millisecondUnique_t , 1000 > delayFirstSave; // Offset: 0x3F70

    // outline color for the demon team
    idColor demonOutlineColor; // Offset: 0x3F74

    // outline color for demon allys
    idColor demonAllyOutlineColor; // Offset: 0x3F84

    // outline color for the slayer team
    idColor slayerOutlineColor; // Offset: 0x3F94

    // demons see this fill color (on everything - it's global)
    idColor fillColorDemonSees; // Offset: 0x3FA4

    // hit color flash all players see (on everything - it's global)
    idColor fillColorHitFlash; // Offset: 0x3FB4

    // who is highlighted from a demon player's perspective
    actorHighlightOptions_t demonHighlightOptions; // Offset: 0x3FC4

    // is this the final challenge/level of the mode
    bool isFinalChallenge; // Offset: 0x3FDC

    // DFS NOTE: any members below this comment are new. Separating to make it easier to scrap out invasion stuff later. Horde broadcast ID
    uint16 broadcastSystemId; // Offset: 0x3FDE

    // Using a list but accessing it in a FIFO Queue style. This list just holds commands, it is not used to determine actions.
    idList < idGameChallenge_Horde::hordeLDCommand_t , TAG_IDLIST , false > commandQueue; // Offset: 0x3FE0

    // The current command lives here. It will be valid during the action and be reset to HC_INVALID when the action is done.
    idGameChallenge_Horde::hordeLDCommand_t activeCommand; // Offset: 0x3FF8

    // Same idea, but for the non-game-state-driving commands. The sub commands are acted upon immediately, as we want to trigger these ASAP.
    idList < idGameChallenge_Horde::hordeLDSubCommand_t , TAG_IDLIST , false > subCommandQueue; // Offset: 0x4000

    // The Wave FSM may need to finish processing through a state before it can attempt to read and act on a command.
    bool canProcessCommands; // Offset: 0x4018

    // While the wave FSM does not act on all commands, it is necessary to prevent the GC's internal FSM from changing state during the wave FSM's period of processing, so this will block commands like HC_START_ROUND as well. Object that manages a debug window for the Horde game challenge's various states.
    idHordeStateDebug* hordeStateDebug; // Offset: 0x4020

    // Decl for the timed bounty manager
    idDeclTimedBountyManager* timedBountyManagerDecl; // Offset: 0x4028

    idTimedBountyManager timedBountyManager; // Offset: 0x4030

    idStagedTimer stagedTimer; // Offset: 0x40D8

    // bitflag exclusion for AI types that shouldn't have blitz highlighting
    aiMonsterType_t blitzHighlightExclusion; // Offset: 0x4160

    // highlight decl for blitz demons
    idDeclHighlight* blitzDemonsHighlightDecl; // Offset: 0x4168

    // highlight decl for point coins
    idDeclHighlight* pointCoinsHighlightDecl; // Offset: 0x4170

    // Decl that defines what the horde timeline widget looks like in the current level
    idDeclUICustomData_Widget_HordeProgress* timelineDecl; // Offset: 0x4178

    // List of tutorial codexes to give to the player from previous runs
    idList < idDeclCodexEntry * , TAG_IDLIST , false > seenHordeTutorials; // Offset: 0x4180

    // Sound to play when the hud ticker adds an AI death
    idSoundEvent* hudTickerSoundEvent; // Offset: 0x4198

    // Time in seconds between AI death ticker notifications
    float tickerStaggerTimeSec; // Offset: 0x41A0

    // decl for stadia state share
    idDeclHordeStateShare* stateShareDecl; // Offset: 0x41A8

    // data for stadia state share, updated each new round
    hordeStateShareData_t stateShareData; // Offset: 0x41B0

    // was this game loaded from state share?
    bool loadedFromStateShare; // Offset: 0x41DC

    // have we applied the state share info yet
    bool handledStateShare; // Offset: 0x41DD

    // have we moved the player to the right round yet
    bool movedToStateShareRound; // Offset: 0x41DE

    // temporarily cache the round start score so we can find the score for just the current round
    float cachedRoundStartScore; // Offset: 0x41E0

    // cache for logic query
    int cachedStateShareRound; // Offset: 0x41E4

    // cache for logic query
    int cachedStateShareMap; // Offset: 0x41E8

    // time in MS from round end until we kick the player back to main menu
    idTypesafeTime < int , millisecondUnique_t , 1000 > exitTimeMS; // Offset: 0x41EC

    // gets set when round is done and marks time to move the player back to main menu
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > exitTime; // Offset: 0x41F0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startEndRoundTime; // Offset: 0x41F8

    // hack: we are marking specific horde tutorials as something to save to the profile. We want to be able to turn this off via tunable.
    bool disableTutorialsThatAreMarkedAsPersistent; // Offset: 0x4200

    // hack for GHOST-165021
    bool forceWallClimbDeactivateOnRoundEnd; // Offset: 0x4201

}; // Size: 0x4208
