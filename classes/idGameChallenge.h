struct idGameChallenge : idBloatedEntity
{
    enum challengeState_t : int
    {
        NO_STATE = -1,
        CS_NONE = 0,
        CS_WAITING_TO_START = 1,
        CS_IN_PROGRESS = 2,
        CS_END_OF_ROUND = 3,
        CS_START_NEW_ROUND = 4,
        CS_GAME_OVER = 5,
        CS_RESULTS = 6,
        MAX_STATES = 7
    };

    enum challengeTransition_t : int
    {
        NO_TRANSITION = -1,
        CT_NONE_to_WAITING_TO_START = 0,
        CT_NONE_to_IN_PROGRESS = 1,
        CT_WAITING_TO_START_to_IN_PROGRESS = 2,
        CT_START_NEW_ROUND_to_IN_PROGRESS = 3,
        CT_IN_PROGRESS_to_END_OF_ROUND = 4,
        CT_IN_PROGRESS_to_GAME_OVER = 5,
        CT_END_OF_ROUND_to_START_NEW_ROUND = 6,
        CT_END_OF_ROUND_to_GAME_OVER = 7,
        CT_GAME_OVER_to_RESULTS = 8,
        CT_RESULTS_to_NONE = 9,
        MAX_TRANSITIONS = 10
    };

    enum challengeFailed_t : int
    {
        NORMAL = 0,
        PLAYER_DISCONNECT = 1
    };

    enum chatGroupBit_t : int
    {
        CHAT_GROUP_BIT_TEAM_ONE = 0,
        CHAT_GROUP_BIT_TEAM_TWO = 1,
        CHAT_GROUP_BIT_TEAM_THREE = 2,
        CHAT_GROUP_BIT_TEAM_FOUR = 3,
        CHAT_GROUP_BIT_DEAD_TEAM_ONE = 4,
        CHAT_GROUP_BIT_DEAD_TEAM_TWO = 5,
        CHAT_GROUP_BIT_DEAD_TEAM_THREE = 6,
        CHAT_GROUP_BIT_DEAD_TEAM_FOUR = 7,
        CHAT_GROUP_BIT_COUNT = 8
    };

    enum chatGroup_t : int
    {
        CHAT_GROUP_ALL = -1,
        CHAT_GROUP_NONE = 0,
        CHAT_GROUP_TEAM_ONE = 1,
        CHAT_GROUP_TEAM_TWO = 2,
        CHAT_GROUP_TEAM_THREE = 4,
        CHAT_GROUP_TEAM_FOUR = 8,
        CHAT_GROUP_DEAD_TEAM_ONE = 16,
        CHAT_GROUP_DEAD_TEAM_TWO = 32,
        CHAT_GROUP_DEAD_TEAM_THREE = 64,
        CHAT_GROUP_DEAD_TEAM_FOUR = 128
    };

    enum pvpPreMatchPhase_t : int
    {
        PMP_ROUND_CALLOUT = 0,
        PMP_JOCKEYING = 1,
        PMP_IN_MATCH = 2
    };

    enum marginOfVictory_t : int
    {
        MOV_NORMAL = 0,
        MOV_NARROW = 1,
        MOV_LARGE = 2
    };

    struct playerData_t
    {
        // invalid if AI
        idManagedClassPtr < idPlayer > player; // Offset: 0x0

        idStr gamerTag; // Offset: 0x20

        idStr playFabId; // Offset: 0x50

        gameTeam_t team; // Offset: 0x80

        // extra time for respawn delay in MS
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > respawnDelay; // Offset: 0x88

        // extra time for respawn delay due to suicide in MS
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > suicideDelay; // Offset: 0x90

        // For querying purposes only. Player state handled by idInternalFSM on idPlayer, server-side.
        idPlayer::playerState_t state; // Offset: 0x98

        // State that end time applies to. NO_STATE when no end time is active.
        idPlayer::playerState_t endTimeState; // Offset: 0x9C

        // Holds the state end time for the player. Changes whenever a new state is started.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > stateEndTime; // Offset: 0xA0

        // Holds the state start time for the player. Changes whenever a new state is started.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > stateStartTime; // Offset: 0xA8

        // Holds the start time for this player
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0xB0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeTillNewPlayerCanTake; // Offset: 0xB8

        unsigned int spawnHandle; // Offset: 0xC0

        int score; // Offset: 0xC4

        int matchXP; // Offset: 0xC8

        int sessionRewards; // Offset: 0xCC

        int kills; // Offset: 0xD0

        int assists; // Offset: 0xD4

        // number of times the player has died
        int deaths; // Offset: 0xD8

        // number of times the player has been respawned
        int respawns; // Offset: 0xDC

        int suicides; // Offset: 0xE0

        int lives; // Offset: 0xE4

        int lastKiller; // Offset: 0xE8

        // this is the actor modifier to use (index into list of available modifiers in game challenge)
        int actorModifierDeclIndex; // Offset: 0xEC

        // which demon card deck to use from player's profile data
        int demonCardDeckIndex; // Offset: 0xF0

        // the demon card deck selected by the demon loadout page
        idDeclDemonCardDeck* demonLoadoutDeck; // Offset: 0xF8

        // custom set of cards set by the demon loadout page
        idList < const idDeclDemonCard * , TAG_IDLIST , false > customLoadoutCards; // Offset: 0x100

        // is a demon player
        bool isDemon; // Offset: 0x118

        // was player resurrected
        bool isResurrected; // Offset: 0x119

        // player is spectator
        bool spectator; // Offset: 0x11A

        bool needToSendFullSnap; // Offset: 0x11B

        bool respawnPending; // Offset: 0x11C

        // if this is the initial spawn in a campaign map. hacky, but this is so we don't overwrite the health component from savegame
        bool campaignInitialRespawn; // Offset: 0x11D

        // this player is invading another player's campaign
        bool isInvader; // Offset: 0x11E

        // this player is a bot
        bool isBot; // Offset: 0x11F

        // in PVP, player has picked upgrade and is ready to start the round
        bool readyToStartRound; // Offset: 0x120

        // in PVP, each player must indicate they are ready to start the match
        bool readyToStartGame; // Offset: 0x121

        // Hit critical health, should send recovery callout when health next restored
        bool criticalRecoveryCalloutPending; // Offset: 0x122

        // Last time critical health was called out
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > criticalHealthTime; // Offset: 0x128

        // Last time health recovery was called out
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > criticalRecoveryTime; // Offset: 0x130

        // Last time healed
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastHealTime; // Offset: 0x138

        // Last time respawned
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastRespawnTime; // Offset: 0x140

        // The pre-match phase this player is in
        idGameChallenge::pvpPreMatchPhase_t preMatchPhase; // Offset: 0x148

        // in PVP, player has loaded into match
        idNetEvent < 15 > finishedLoading; // Offset: 0x150

    }; // Size: 0x168

    struct teamData_t
    {
        idStaticList < int , 12 , false , TAG_IDLIST > playerIndexList; // Offset: 0x0

        int teamScore; // Offset: 0x48

        int roundScore; // Offset: 0x4C

        // If < 0, no limit on spawning.
        int spawnTicketsRemaining; // Offset: 0x50

        bool isActive; // Offset: 0x54

        float superMeter; // Offset: 0x58

    }; // Size: 0x60

    struct spawnPoint_t
    {
        // use idInfo/null entities to define position/orientation
        idManagedClassPtr < idEntity > entity; // Offset: 0x0

        // team number that uses this spawn point. 0 = any team; 1,2,3,etc.. = specific team #
        int teamNumber; // Offset: 0x20

    }; // Size: 0x28

    struct demonOwnerInfo_t
    {
        idManagedClassPtr < idEntity > demon; // Offset: 0x0

        idManagedClassPtr < idEntity > owner; // Offset: 0x20

    }; // Size: 0x40

    struct challengeModeFlags_t
    {
        // Can you score kills for your team
        bool canScoreKillsForTeam; // Offset: 0x0

        // can demon players drop a reward when you kill them
        bool canDemonDropReward; // Offset: 0x0

        // do you automatically become a demon when you glory kill one
        bool becomeDemonOnDemonGloryKill; // Offset: 0x0

        // Can respawning be delayed
        bool canDelayRespawning; // Offset: 0x0

        // Show the POI for demon pickup that's spawned
        bool showDemonPickupSpawnPOI; // Offset: 0x0

        // Show the POI for demon pickup that's dropped
        bool showDemonPickupDropPOI; // Offset: 0x0

        // Can players swap weapons in this game mode
        bool allowWeaponChange; // Offset: 0x0

        // Can players respawn on their own?
        bool allowRespawning; // Offset: 0x0

        // On respawn, players start with max ammo
        bool startWithMaxAmmo; // Offset: 0x0

        // Allow bullet penetration
        bool allowBulletPenetration; // Offset: 0x0

    }; // Size: 0x2

    struct demonRespawnInfo_t
    {
        // battle arena demonplayer respawns enabled or not
        bool respawnsEnabled; // Offset: 0x0

        // Limit per demon ( -1 for infinite )
        int respawnsPerDemon; // Offset: 0x4

        // Limit total ( -1 for infinite )
        int respawnsTotal; // Offset: 0x8

        // How much time does the demon need to be dead before it can respawn
        idTypesafeTime < float , secondUnique_t , 1 > respawnTime; // Offset: 0xC

    }; // Size: 0x10

    struct respawnInfo_t
    {
        idManagedClassPtr < idPlayer > player; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > respawnTime; // Offset: 0x20

    }; // Size: 0x28

    struct modeXpMultiplier
    {
        // stat to multiply
        gameStat_t stat; // Offset: 0x0

        // multiplier for stat
        float multiplier; // Offset: 0x4

    }; // Size: 0x8

    struct teamSuperSettings_t
    {
        // Turn on/off team super meter functionality
        bool available; // Offset: 0x0

        // Contribution to team super meter is damage to slayer times this (meter ranges from 0.0 to 1.0)
        float damageFactorSlayer; // Offset: 0x4

        // Contribution to team super meter is damage to demon player times this (meter ranges from 0.0 to 1.0)
        float damageFactorDemonPlayer; // Offset: 0x8

        // Contribution to team super meter is damage to AI times this (meter ranges from 0.0 to 1.0)
        float damageFactorAI; // Offset: 0xC

        // Base team super meter increase per second (meter ranges from 0.0 to 1.0)
        float tickFactor; // Offset: 0x10

    }; // Size: 0x14

    struct entityHighlightInfo_t
    {
        int handle; // Offset: 0x0

        idManagedClassPtr < idEntity > entity; // Offset: 0x8

        idHavokQueryId havokQuery[5]; // Offset: 0x28

        idDeclPOI* highlighPOI; // Offset: 0x50

        bool performLOSCheckHighlight; // Offset: 0x58

        bool performLOSCheckPOI; // Offset: 0x59

        // LOS checks occur every other frame, so we need to track if we're in an off frame to avoid prematurely
        bool inLOSLastFrame; // Offset: 0x5A

        // turning off the highlight if target entity's health is less than this (and above pulseHealthFast), pulse highlight slowly
        float pulseHealthSlow; // Offset: 0x5C

        // if target entity's health is less than this, pulse highlight quickly
        float pulseHealthFast; // Offset: 0x60

        idVec4 color; // Offset: 0x64

        idTypesafeTime < int , millisecondUnique_t , 1000 > fadeTime; // Offset: 0x74

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTimeInView; // Offset: 0x78

        // poi display time; if zero, use the default from the decl
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > poiDisplayTime; // Offset: 0x80

        // identifier for the poi that links to this highlight
        int poiUid; // Offset: 0x88

    }; // Size: 0x90

    struct difficultySettings_t
    {
        // scales the amount of damage received by the player
        idDeclGameDifficulty* playerIncomingDamageScale; // Offset: 0x0

        // scales the amount of damage received by ai
        idDeclGameDifficulty* aiIncomingDamageScale; // Offset: 0x8

        // scale applied to health PICKUPS
        idDeclGameDifficulty* healthPickupScale; // Offset: 0x10

        // scale applied to armor PICKUPS
        idDeclGameDifficulty* armorPickupScale; // Offset: 0x18

        // scale applied to ammo PICKUPS
        idDeclGameDifficulty* ammoPickupScale; // Offset: 0x20

        // scale applied to BFG ammo PICKUPS
        idDeclGameDifficulty* bfgAmmoPickupScale; // Offset: 0x28

        // scale applied to health DROPPED by AI
        idDeclGameDifficulty* healthDropScale; // Offset: 0x30

        // scale applied to armor DROPPED by AI
        idDeclGameDifficulty* armorDropScale; // Offset: 0x38

        // scale applied to ammo DROPPED by AI
        idDeclGameDifficulty* ammoDropScale; // Offset: 0x40

        // scale applied to BFG ammo DROPPED by AI
        idDeclGameDifficulty* bfgAmmoDropScale; // Offset: 0x48

        // scales how many points are given for ai kills
        idDeclGameDifficulty* playerAiKillScoring; // Offset: 0x50

    }; // Size: 0x58

    struct gcGameEventCallouts_t
    {
        struct demonSpawnedCallout_t
        {
            // Which type of demon this callouts are associated with
            demonType_t demonType; // Offset: 0x0

            // The local player became this demon
            idDeclGameEventCallout* becameDemon; // Offset: 0x8

        }; // Size: 0x10

        // Sent to the team that has taken the lead
        idDeclGameEventCallout* takenTheLead; // Offset: 0x0

        // Sent to the team that just lost the lead
        idDeclGameEventCallout* lostTheLead; // Offset: 0x8

        // Callout when a match victory occurs, should contain callout data for ally and enemy players
        idDeclGameEventCallout* victory; // Offset: 0x10

        // A player demon timed out
        idDeclGameEventCallout* demonTimeOut; // Offset: 0x18

        // Callouts to play when each type of demon is spawned
        idList < idGameChallenge::gcGameEventCallouts_t::demonSpawnedCallout_t , TAG_IDLIST , false > demonSpawnedCallouts; // Offset: 0x20

        // callout when local actor's team super has charged
        idDeclGameEventCallout* teamSuperCharged; // Offset: 0x38

        // callout when local actor's team uses a super
        idDeclGameEventCallout* superUsed; // Offset: 0x40

        // Plays when the team super is activated, the callout is sent for each demon player effected to each player in the match
        idDeclGameEventCallout* superUsedStatusTimer; // Offset: 0x48

        // The slayer fired a power weapon
        idDeclGameEventCallout* slayerPowerWeapon; // Offset: 0x50

        // Shows when a demon summons an AI
        idDeclGameEventCallout* demonSummonedCallout; // Offset: 0x58

        // Shows when a demon uses an effect
        idDeclGameEventCallout* demonEffectCallout; // Offset: 0x60

        // Shows while demon card effects are activate
        idDeclGameEventCallout* demonEffectStatusTimer; // Offset: 0x68

        // Shows when a demon activates quick use 1
        idDeclGameEventCallout* demonQuickUse1Callout; // Offset: 0x70

        // Shows when a demon activates quick use 2
        idDeclGameEventCallout* demonQuickUse2Callout; // Offset: 0x78

        // Shows when a player gains a damage boosting status effect
        idDeclGameEventCallout* damageBoostCallout; // Offset: 0x80

        // Shows while a player has a damage boosting status effect
        idDeclGameEventCallout* damageBoostStatusTimer; // Offset: 0x88

        // Shows when a player gains a speed boosting status effect
        idDeclGameEventCallout* hasteCallout; // Offset: 0x90

        // Shows while a player has a speed boosting status effect
        idDeclGameEventCallout* hasteStatusTimer; // Offset: 0x98

        // Shows when a player gains a damage mitigating status effect
        idDeclGameEventCallout* mitigationCallout; // Offset: 0xA0

        // Shows while a player has a damage mitigating status effect
        idDeclGameEventCallout* mitigationStatusTimer; // Offset: 0xA8

        // Shows when a player gains an invulnerability status effect
        idDeclGameEventCallout* invulnerableCallout; // Offset: 0xB0

        // Shows while a player has an invulnerability status effect
        idDeclGameEventCallout* invulnerableStatusTimer; // Offset: 0xB8

        // Shows when a player gains a berserk status effect
        idDeclGameEventCallout* berserkCallout; // Offset: 0xC0

        // Shows while a player has a berserk status effect
        idDeclGameEventCallout* berserkStatusTimer; // Offset: 0xC8

        // Shows when a player gains a regeneration status effect
        idDeclGameEventCallout* regenCallout; // Offset: 0xD0

        // Shows while a player has health regeneration status effect
        idDeclGameEventCallout* regenStatusTimer; // Offset: 0xD8

        // Shows when a slayer has his loot blocked
        idDeclGameEventCallout* lootBlockedCallout; // Offset: 0xE0

        // Shows while a slayer's loot is blocked
        idDeclGameEventCallout* lootBlockedStatusTimer; // Offset: 0xE8

        // Shows when a slayer consumes an extra life
        idDeclGameEventCallout* extraLifeCallout; // Offset: 0xF0

        // Shows while the slayer's extra life is protecting him
        idDeclGameEventCallout* extraLifeStatusTimer; // Offset: 0xF8

        // A demon player has critically low health
        idDeclGameEventCallout* demonCriticalHealth; // Offset: 0x100

        // How long to wait for subsequent demon critical health callouts to show
        idTypesafeTime < int , millisecondUnique_t , 1000 > demonCriticalHealthDupDelay; // Offset: 0x108

        // A demon player that had critically low health has recovered a significant amount
        idDeclGameEventCallout* demonCriticalRecovery; // Offset: 0x110

        // How long to wait for subsequent demon recovery callouts to show
        idTypesafeTime < int , millisecondUnique_t , 1000 > demonCriticalRecoveryDupDelay; // Offset: 0x118

        // A demon player respawned after dying
        idDeclGameEventCallout* demonRespawn; // Offset: 0x120

        // A slayer player has critically low health
        idDeclGameEventCallout* slayerCriticalHealth; // Offset: 0x128

        // How long to wait for subsequent slayer critical health callouts to show
        idTypesafeTime < int , millisecondUnique_t , 1000 > slayerCriticalHealthDupDelay; // Offset: 0x130

        // A slayer player that had critically low health has recovered a significant amount
        idDeclGameEventCallout* slayerCriticalRecovery; // Offset: 0x138

        // How long to wait for subsequent slayer recovery callouts to show
        idTypesafeTime < int , millisecondUnique_t , 1000 > slayerCriticalRecoveryDupDelay; // Offset: 0x140

        // All players have critical health
        idSoundEvent* everyoneCritical; // Offset: 0x148

    }; // Size: 0x150

    struct poiTeammateDeath_t
    {
        // how long to display the POI, in milliseconds
        idTypesafeTime < int , millisecondUnique_t , 1000 > lifetimeMS; // Offset: 0x0

        // POI color
        idVec4 color; // Offset: 0x4

        // icon to display
        idMaterial2* icon; // Offset: 0x18

        // POI scale
        float scale; // Offset: 0x20

    }; // Size: 0x28

    struct characterStatusEventTextInfo_t
    {
        // Text used for the status event
        idStrId textId; // Offset: 0x0

        // Color used for the status event text
        idColor color; // Offset: 0x4

    }; // Size: 0x14

    struct characterStatusEventText_t
    {
        // Status event text and color used for the invulnerable character status event
        idGameChallenge::characterStatusEventTextInfo_t invulnerableText; // Offset: 0x0

        // Status event text and color used for the toughened character status event
        idGameChallenge::characterStatusEventTextInfo_t toughenedText; // Offset: 0x14

        // Status event text and color used for the vulnerable character status event
        idGameChallenge::characterStatusEventTextInfo_t vulnerableText; // Offset: 0x28

        // Status event text and color used for the strengthened character status event
        idGameChallenge::characterStatusEventTextInfo_t strengthenedText; // Offset: 0x3C

        // Status event text and color used for the hasted character status event
        idGameChallenge::characterStatusEventTextInfo_t hastedText; // Offset: 0x50

        // Status event text and color used for the slowed character status event
        idGameChallenge::characterStatusEventTextInfo_t slowedText; // Offset: 0x64

        // Status event text and color used for the berserking character status event
        idGameChallenge::characterStatusEventTextInfo_t berserkingText; // Offset: 0x78

        // Status event text and color used for the loot blocked character status event
        idGameChallenge::characterStatusEventTextInfo_t lootBlockedText; // Offset: 0x8C

    }; // Size: 0xA0

    struct roundScoreDisplayInfo_t
    {
        struct statLabel_t
        {
            // text to format stat value into
            idStrId text; // Offset: 0x0

            // stat value to display - STAT MUST BE MIGRATED
            gameStat_t stat; // Offset: 0x4

        }; // Size: 0x8

        // stat label displayed on the bottom left
        idGameChallenge::roundScoreDisplayInfo_t::statLabel_t bottomLeftStatLabel; // Offset: 0x0

        // stat label displayed in the bottom center
        idGameChallenge::roundScoreDisplayInfo_t::statLabel_t bottomCenterStatLabel; // Offset: 0x8

        // stat label displayed on the bottom right
        idGameChallenge::roundScoreDisplayInfo_t::statLabel_t bottomRightStatLabel; // Offset: 0x10

        // how long to display round-end reason in full size
        idTypesafeTime < float , secondUnique_t , 1 > reasonDisplaySeconds; // Offset: 0x18

        // how long to display scores prior to beginning addition
        idTypesafeTime < int , millisecondUnique_t , 1000 > oldScoreDisplayMilliseconds; // Offset: 0x1C

        // how long between each point addition
        idTypesafeTime < int , millisecondUnique_t , 1000 > scoreAddMilliseconds; // Offset: 0x20

        // how long after addition completes to wait before resorting
        idTypesafeTime < int , millisecondUnique_t , 1000 > resortDelayMilliseconds; // Offset: 0x24

        // displayed across the top
        idStrId header; // Offset: 0x28

        // displayed over name column
        idStrId nameLabel; // Offset: 0x2C

        // displayed over round score column
        idStrId roundScoreLabel; // Offset: 0x30

        // displayed over total score column
        idStrId totalScoreLabel; // Offset: 0x34

        // displayed over the round stats section, if any
        idStrId roundStatsLabel; // Offset: 0x38

        // looping sound played during point addition
        idSoundEvent* scoreAddSoundLoop; // Offset: 0x40

        // sound played at resort
        idSoundEvent* resortSound; // Offset: 0x48

        // sound played at start of final rank reveal
        idSoundEvent* localRankAnimStartSound; // Offset: 0x50

        // looping sound played during final rank reveal
        idSoundEvent* localRankAnimSoundLoop; // Offset: 0x58

        // sound played at end of final rank reveal
        idStaticList < const idSoundEvent * , 12 , false , TAG_IDLIST > localRankAnimEndSounds; // Offset: 0x60

        // if true, transition straight from reason display to local rank anim
        bool displayLocalRankAnimImmediately; // Offset: 0xD8

    }; // Size: 0xE0

    struct maxAmmoInfo_t
    {
        // which ammo to override
        idDeclAmmo* ammoType; // Offset: 0x0

        // scalar for this max ammo
        float multiplier; // Offset: 0x8

    }; // Size: 0x10

    struct ammoClipSizeInfo_t
    {
        // which ammo to override
        idDeclAmmo* ammoType; // Offset: 0x0

        // overridden clip size
        int clipSize; // Offset: 0x8

    }; // Size: 0x10

    typedef idList < idGameChallenge::respawnInfo_t > respawnInfoList_t;

    typedef idList < idGameChallenge::entityHighlightInfo_t > entityHighlightList_t;

    typedef idList < const idDeclEntityDef * > idDeclEntityDefList;

    typedef idInternalFsm < idGameChallenge , idGameChallenge::challengeState_t , idGameChallenge::challengeTransition_t > idGameChallengeFSM;

    // Flags for the game challenge
    idGameChallenge::challengeModeFlags_t modeFlags; // Offset: 0xB88

    // Flags for demonplayer respawn behavior
    idGameChallenge::demonRespawnInfo_t respawnSettings; // Offset: 0xB8C

    // Master level game mutator manager
    idGameMutator_Manager gameMutatorManager; // Offset: 0xBA0

    // ------------------------ setup vars ------------------------ (in secs) game ends when this reaches 0 ( 0 == no time limit ). This makes no sense to set on game challenge .decl - it's overridden by mode setup
    idTypesafeTime < float , secondUnique_t , 1 > timeLimitSeconds; // Offset: 0xC78

    // start when object is spawned?
    bool startActive; // Offset: 0xC7C

    // max score for this game
    int scoreLimit; // Offset: 0xC80

    // max session rewards a player can accumulate
    int sessionRewardLimit; // Offset: 0xC84

    // number of lives for this game ( 0 == no limit )
    int numLives; // Offset: 0xC88

    // number of rounds to play
    int numRounds; // Offset: 0xC8C

    // length of time between action that ends round and when end of round message goes away (in milliseconds) (can include a bit of time where you run around)
    idTypesafeTime < int , millisecondUnique_t , 1000 > roundOverTimeMilliseconds; // Offset: 0xC90

    // length of time during round over for which players should have no control capability
    idTypesafeTime < int , millisecondUnique_t , 1000 > roundOverInhibitedTimeMilliseconds; // Offset: 0xC94

    // time counts up from 0 until game is finished
    bool countupTime; // Offset: 0xC98

    // player can take damage
    bool playersTakeDamage; // Offset: 0xC99

    // (in secs) time average player would take to play game
    int baseTime; // Offset: 0xC9C

    // spawn points for the challenge
    idList < idGameChallenge::spawnPoint_t , TAG_IDLIST , false > spawnPoints; // Offset: 0xCA0

    // minimum number of players (human and/or AI)
    int minimumPlayers; // Offset: 0xCB8

    // use the spectator camera for the player?
    bool useSpectatorCamera; // Offset: 0xCBC

    // require a loadout be selected before initial spawning of players in this challenge
    bool requireLoadoutSelection; // Offset: 0xCBD

    // idNull to specify position for initial spectator camera
    idManagedClassPtr < idEntity > initialSpectatorCamPos; // Offset: 0xCC0

    // idNull to specify position for initial spectator camera to look at
    idManagedClassPtr < idEntity > initialSpectatorCamLookAt; // Offset: 0xCE0

    // looping game active music
    idSoundEvent* gameMusic; // Offset: 0xD00

    // sound to be played for game over
    idSoundEvent* gameOverSound; // Offset: 0xD08

    // sound to be played for failed game over
    idSoundEvent* failedGameOverSound; // Offset: 0xD10

    // Wwise event used to fade out gameplay sounds during the end of match phase while players are still in the game.
    idSoundEvent* fadeSoundEndOfMatchEvent; // Offset: 0xD18

    // Wwise event used to restore game sounds now that the end of match phase has finished.
    idSoundEvent* restoreSoundEndOfMatchEvent; // Offset: 0xD20

    // Wwise event used to fade out gameplay sounds during the round transition phase while players are still in the game.
    idSoundEvent* fadeSoundEndOfRoundEvent; // Offset: 0xD28

    // Wwise event used to restore game sounds now that the round transition phase has finished.
    idSoundEvent* restoreSoundEndOfRoundEvent; // Offset: 0xD30

    // A generic sound stinger played when any medal is displayed
    idSoundEvent* medalStinger; // Offset: 0xD38

    // FX Decl;
    idDeclFX* fxDecl; // Offset: 0xD40

    // A number between 0 and N representing what percent a "large" margin is. e.g. 0.5 is 50%, 3.0 is 300%
    float largeMarginOfVictoryPercent; // Offset: 0xD48

    // A number between 0 and N representing what percent a "narrow" margin is. e.g. 0.25 is 25%
    float narrowMarginOfVictoryPercent; // Offset: 0xD4C

    // A neutral team color for game mode elements in the world
    idColor neutralTeamColor; // Offset: 0xD50

    // A friendly team color for game mode elements in the world
    idColor friendlyTeamColor; // Offset: 0xD60

    // A hostile team color for game mode elements in the world
    idColor hostileTeamColor; // Offset: 0xD70

    // waypoints. general places the ai can run to.
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > poi; // Offset: 0xD80

    // power up pedestals, will be hidden under certain conditions
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > powerUpPedestals; // Offset: 0xD98

    // power weapon pedestals, will be hidden under certain conditions
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > powerWeaponPedestals; // Offset: 0xDB0

    // the teams playing in this challenge
    idList < teamInfo_t , TAG_IDLIST , false > teamInfo; // Offset: 0xDC8

    // cheats listed here will be disabled for this map
    idList < idCheatCodeManager::idCheatCodesTypes_t , TAG_IDLIST , false > disabledCheats; // Offset: 0xDE0

    // the list of available actor modifiers that can be used
    idDeclActorModifierList* actorModifierListDecl; // Offset: 0xDF8

    // a whitelist of pickups that are explicitly allowed regardless of other restrictions
    idList < idDeclEntityDef * , TAG_IDLIST , false > allowedSpawnableItems; // Offset: 0xE00

    // which bot game manager should load with this game challenge entity.
    botGameManagerType_t botGameManagerType; // Offset: 0xE18

    // ------------------------ DIFFICULTY SETTINGS ------------------------ difficulty settings
    idGameChallenge::difficultySettings_t difficultySettings; // Offset: 0xE20

    // These are the callouts that will play locally for a player based on game events
    idGameChallenge::gcGameEventCallouts_t gcGameEventCallouts; // Offset: 0xE78

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextLeadChangeCalloutTime; // Offset: 0xFC8

    // hit confirm sounds the hit confirmation sounds decl to use
    idDeclHitConfirmationSoundsInfo* hitConfirmSoundsInfo; // Offset: 0xFD0

    // The available gui tooltips that this game mode will use.
    idList < const idDeclTooltip * , TAG_IDLIST , false > availableTooltips; // Offset: 0xFD8

    // The available demon cards that may be used
    idList < const idDeclDemonCard * , TAG_IDLIST , false > availableDemonCards; // Offset: 0xFF0

    // The available demon card decks that may be used
    idList < const idDeclDemonCardDeck * , TAG_IDLIST , false > availableDemonCardDecks; // Offset: 0x1008

    // The available sentinel gifts that may be used
    idList < const idDeclSentinelGift * , TAG_IDLIST , false > availableSentinelGifts; // Offset: 0x1020

    // the rules to use the sentinel gifts for this challenge
    idDeclSentinelGiftMatchRules* sentinelGiftMatchRules; // Offset: 0x1038

    // The available playable demons for campaign invasion (including demon card decks to go with them)
    idList < playableDemonOption_t , TAG_IDLIST , false > invasionDemonOptions; // Offset: 0x1040

    // Number of times a demon can use their demon cards per life. Default is -1, which means infinite.
    int demonCardUses; // Offset: 0x1058

    // status effects that will be used in this challenge (required for resource id network serialization)
    idList < const idDeclStatusEffect * , TAG_IDLIST , false > statusEffectsForChallenge; // Offset: 0x1060

    // The poi for a bot buddy
    idMaterial2* poiBotBuddy; // Offset: 0x1078

    // The poi for an ally player
    idMaterial2* poiAllyPlayer; // Offset: 0x1080

    // The poi for an ally player
    idMaterial2* poiAllyPlayerOffscreenArrow; // Offset: 0x1088

    // Delay between-round respawning relative to the total time spent on round results
    float delayedRoundRespawnMultiplier; // Offset: 0x1090

    // Status event text and color info
    idGameChallenge::characterStatusEventText_t characterStatusEventText; // Offset: 0x1094

    // Is the specialized demon player tutorial
    bool isDemonTutorial; // Offset: 0x1134

    // internal vars
    idStaticList < idGameChallenge::playerData_t , 12 , false , TAG_IDLIST > players; // Offset: 0x1138

    // Doesn't get set with every round, in the way startTime and preGameTime
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > matchStartTime; // Offset: 0x2230

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x2238

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x2240

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > originalEndTime; // Offset: 0x2248

    // time stamp for start of the pre-game
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > preGameTime; // Offset: 0x2250

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > roundEndTime; // Offset: 0x2258

    // For single-round games, just the time of the round. For multi-round, accumulates round times.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > accumulatedPlayTime; // Offset: 0x2260

    // Once elapsed, respawn players for the next round.
    idSmartTimer < GAMETIME_SCALED > delayedRoundRespawnTimer; // Offset: 0x2268

    // once elapsed, transition from the game over state to the results
    idSmartTimer < GAMETIME_SCALED > gameOverEndTimer; // Offset: 0x2270

    // After game over state, starts this is set from with a gc_gameOverDisableControlsTimeMS that when elapses, disables all player controls
    idSmartTimer < GAMETIME_SCALED > gameOverDisableControlsTimer; // Offset: 0x2278

    int roundsStarted; // Offset: 0x2280

    int roundsCompleted; // Offset: 0x2284

    challengeEndGameReason_t endGameReason; // Offset: 0x2288

    gameTeam_t forcedEndOfRoundTeamWinner; // Offset: 0x228C

    // On clients, this is the last challenge state we processed. If this is different from the current serialized state, handle the edge.
    idGameChallenge::challengeState_t lastHandledChallengeState; // Offset: 0x2290

    // set to true if the game over outcome is a failed outcome (e.g. all lives lost)
    bool bGameFailed; // Offset: 0x2294

    idDeclLootDrop* suitMod; // Offset: 0x2298

    // text to display on failed game over
    idStrId gameFailedText; // Offset: 0x22A0

    // Reason that the game failed
    idGameChallenge::challengeFailed_t failedReason; // Offset: 0x22A4

    bool bFinishGameExit; // Offset: 0x22A8

    // did either player die?
    bool incapacitated; // Offset: 0x22A9

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastReviveThresholdTick; // Offset: 0x22B0

    bool mapLoadFinished; // Offset: 0x22B8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > forceQuitGameTime; // Offset: 0x22C0

    bool isCustomizationStructureBufferDirty; // Offset: 0x22C8

    bool playersNeedSpawnAfterIntro; // Offset: 0x22C9

    int lootRestrictionTypeFlag; // Offset: 0x22CC

    bool isTeamGame; // Offset: 0x22D0

    int snapChallengeScore; // Offset: 0x22D4

    // Are kill medals collected in this game mode?
    bool collectKillMedals; // Offset: 0x22D8

    bool spawnManagerInitialized; // Offset: 0x22D9

    // set to override from idDeclGameMode
    idStrId displayName; // Offset: 0x22DC

    // set to override from idDeclGameMode
    idStrId description; // Offset: 0x22E0

    // The game challenge should go away each game, so it should be safe to use an instant event - it should only be set once.
    idInstantNetEvent < 15 > displayMPResults; // Offset: 0x22E4

    idGameChallenge::challengeState_t serializedChallengeState; // Offset: 0x22EC

    idStaticList < idGameChallenge::teamData_t , 6 , false , TAG_IDLIST > teams; // Offset: 0x22F0

    gameTeam_t previousWinningTeam; // Offset: 0x2548

    idStaticList < gameTeam_t , 20 , false , TAG_IDLIST > roundWinners; // Offset: 0x2550

    // enough space for track one demon per player
    idStaticList < idGameChallenge::demonOwnerInfo_t , 12 , false , TAG_IDLIST > aiDemonOwnership; // Offset: 0x25B8

    bool everyoneCriticalMusicPlaying; // Offset: 0x28D0

    // sometimes activate can be called more than once, we only want it to happen once. Set by subclass
    bool gcInitialized; // Offset: 0x28D1

    // clip against world when checking if spawn is free
    bool checkWorldCollisionOnSpawn; // Offset: 0x28D2

    // The following pertains to validation of our snapshot template hashes from host to clients:
    int currentSnapshotSyncBlock; // Offset: 0x28D4

    bool isTemplateSyncFinished; // Offset: 0x28D8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTemplateSyncSendTime; // Offset: 0x28E0

    // Spawning
    idDoomSpawnManager spawnManager; // Offset: 0x28E8

    // All valid spawns during the game for all teams (excluding _first_ spawn)
    idSpawnNodeGroup spawnNodeGroup; // Offset: 0x35C0

    idList < idManagedClassPtr < idTarget_Timeline > , TAG_IDLIST , false > lifceCycleTimelinesList; // Offset: 0x35E0

    // global data component decl
    idGlobalDataComponent* globalDataComponentDecl; // Offset: 0x35F8

    // base global settings for this map, this can be changed between maps and even within a map
    idDeclAIGlobalSettings* globalAIsettings; // Offset: 0x3600

    // decl holding list of spawn pool entries
    idDeclAIPoolNumbers* aiSpawnPoolDecl; // Offset: 0x3608

    // decl that describes the importance of entities.
    idDeclImportance* importanceDecl; // Offset: 0x3610

    // Should the brink of death system be enabled for this game mode
    bool enableBrinkOfDeath; // Offset: 0x3618

    // damage decl used to kill ai at end of round
    idDeclDamage* desummonKillDamage; // Offset: 0x3620

    // Power weapon to check if we want to spawn these based on mode settings.
    idList < const idDeclEntityDef * , TAG_IDLIST , false > powerWeaponDefList; // Offset: 0x3628

    // Power ups to check if we want to spawn these based on mode settings.
    idList < const idDeclEntityDef * , TAG_IDLIST , false > powerUpsDefList; // Offset: 0x3640

    // If there is a pickup that is not in this list, it will _not_ be dropped when the game mode setting has 'no pickups' checked
    idList < const idDeclEntityDef * , TAG_IDLIST , false > necessaryPickupsToSpawn; // Offset: 0x3658

    // MS before the initial pickup is spawned
    idTypesafeTime < int , millisecondUnique_t , 1000 > demonPickupTimeBeforeInitialSpawnMS; // Offset: 0x3670

    // MS before the pickup is respawned after the demon who took it dies, -1 means never respawn
    idTypesafeTime < int , millisecondUnique_t , 1000 > demonPickupTimeUntilRespawnMS; // Offset: 0x3674

    // Must have this many MS time left to drop something. (Set to 0 to always drop.)
    idTypesafeTime < int , millisecondUnique_t , 1000 > demonPickupDropCutoffTimeMS; // Offset: 0x3678

    // Min MS to give control of the demon no matter how much control time was left
    idTypesafeTime < int , millisecondUnique_t , 1000 > demonPickupDropMinControlTimeMS; // Offset: 0x367C

    // Override for max time you can be a demon for this mode, 0 means no time limit
    idTypesafeTime < int , millisecondUnique_t , 1000 > demonMaxControlTimeMS; // Offset: 0x3680

    // How many MS you gain for a kill in this mode (overrides demon settings).
    idTypesafeTime < int , millisecondUnique_t , 1000 > demonControlTimeGainOnKill; // Offset: 0x3684

    // How long after a demon spawns to they receive damage mitigation
    idTypesafeTime < int , millisecondUnique_t , 1000 > demonSpawnDamageMitigationTime; // Offset: 0x3688

    // Start value of the damage mitigation scalar applied to incoming damage that is Lerp'd over the duration of the mitigation time (damage *= scaler) [0.0 - 1.0]
    float demonSpawnDamageMitigationScalarStart; // Offset: 0x368C

    // End value of the damage mitigation scalar applied to incoming damage that id Lerp'd over the duration of the mitigation time (damage *= scaler) [0.0 - 1.0]
    float demonSpawnDamageMitigationScalarEnd; // Offset: 0x3690

    // when killed, if this is > 0, will drop a pickup with that many uses left.
    int numberOfUsesLeftForDeathPickup; // Offset: 0x3694

    bool useInitialSpawnNodes; // Offset: 0x3698

    // true until all demon players cannot see slayer
    bool slayerSeenByDemons; // Offset: 0x3699

    idList < idGameChallenge::entityHighlightInfo_t , TAG_IDLIST , false > entityHighlights; // Offset: 0x36A0

    idList < idGameChallenge::respawnInfo_t , TAG_IDLIST , false > pendingRespawns; // Offset: 0x36B8

    // Slayers see others highlighted by this decl (e.g. slayer looking at a demon player, this highlight is applied to demon player 3rd person model)
    idDeclHighlight* slayerHighlightDecl; // Offset: 0x36D0

    // Demon players see others highlighted by this decl (e.g. demon player looking at slayer, this highlight is applied to slayer 3rd person model)
    idDeclHighlight* demonHighlightDecl; // Offset: 0x36D8

    // Players see other teammates highlighted by this decl (e.g. demon player looking at another demon player, this highlight is applied to the demon player 3rd person model)
    idDeclHighlight* teammateHighlightDecl; // Offset: 0x36E0

    // LOS box decl for the slayer
    idDeclHighlightLOSBox* slayerHighlightLOSBoxDecl; // Offset: 0x36E8

    // entity for spawn target FX
    idDeclEntityDef* demonSpawnTargetEntity; // Offset: 0x36F0

    // entity for local spawn feedback FX
    idDeclEntityDef* demonSpawnTargetEntityOneHit; // Offset: 0x36F8

    // entity for demon disguise hide FX
    idDeclEntityDef* demonDisguiseHideFXEntity; // Offset: 0x3700

    // entity for demon disguise reveal FX
    idDeclEntityDef* demonDisguiseRevealFXEntity; // Offset: 0x3708

    // entity for demon becoming ghost fx
    idDeclEntityDef* demonBecomingGhostFXEntity; // Offset: 0x3710

    // entity for demon possession fx
    idDeclEntityDef* demonPosessionFXEntity; // Offset: 0x3718

    // entity for possession (placed around target to make it shootable)
    idDeclEntityDef* demonPossessionShootableEntity; // Offset: 0x3720

    // damage to apply to player on possessed item pickup
    idDeclDamage* demonPossessionTouchDamage; // Offset: 0x3728

    // Metrics stat incremented when a player captures a point
    gameStat_t capturePointStat; // Offset: 0x3730

    // stat incremented when a player earns the survivor medal while capturing a point
    gameStat_t capturePointSurvivorStat; // Offset: 0x3734

    // stat set equal to the player's personal score each frame
    gameStat_t scoreStat; // Offset: 0x3738

    // incremented when a player gets a kill in this mode
    gameStat_t killStat; // Offset: 0x373C

    // incremented when a player gets a multi-kill in this mode
    gameStat_t multiKillStat; // Offset: 0x3740

    // incremented when a player gets a critical kill in this mode
    gameStat_t criticalKillStat; // Offset: 0x3744

    // incremented when a player earns a protector medal in this mode
    gameStat_t protectorStat; // Offset: 0x3748

    // incremented when a player earns a survivor medal in this mode
    gameStat_t survivorStat; // Offset: 0x374C

    // incremented when a player earns a first blood medal in this mode
    gameStat_t firstBloodStat; // Offset: 0x3750

    idInternalFsm < idGameChallenge , idGameChallenge::challengeState_t , idGameChallenge::challengeTransition_t >* internalFSM; // Offset: 0x3758

    // used to detect client becoming server and handle internal fsm accordingly (it doesn't run on clients)
    bool wasClient; // Offset: 0x3760

    idGameChallenge::challengeState_t lastSerializedChallengeState; // Offset: 0x3764

    gameTeam_t teamThatQuit; // Offset: 0x3768

    idNetworkSyncComponent networkSyncComponent; // Offset: 0x3770

    idSmartTimer < GAMETIME_SERVER > roundOverInhibitControlTimer; // Offset: 0x37D0

    bool startedGameOver; // Offset: 0x37D8

    // Migration - hopefully this is kept to a minimum and we don't need much extra state for this This game was migrated, may need to do special logic at start of game
    bool wasMigratedGame; // Offset: 0x37D9

    // amount of time that elapsed in the migrated session
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > migratedTime; // Offset: 0x37E0

    // We use this as a list of connect events to send when the game is able to display them.
    idStaticList < int , 12 , false , TAG_IDLIST > eventConnectList; // Offset: 0x37E8

    // We use this as a list of disconnect events to send when the game is able to display them.
    idStaticList < int , 12 , false , TAG_IDLIST > eventDisconnectList; // Offset: 0x3830

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeInFinishTime; // Offset: 0x3878

    // the poi for an ally death location
    idGameChallenge::poiTeammateDeath_t poiDefaultTeammateDeath; // Offset: 0x3880

    // the poi for a player's own death location
    idGameChallenge::poiTeammateDeath_t poiDefaultSelfDeath; // Offset: 0x38A8

    // how long to wait if the player dies.
    idTypesafeTime < int , millisecondUnique_t , 1000 > spawnTimer; // Offset: 0x38D0

    // the player def to be used with this game challange mode
    idDeclEntityDef* playerSpawnDef; // Offset: 0x38D8

    // when xp is awarded to players, anything in this list will get a multiplier applied to it
    idList < idGameChallenge::modeXpMultiplier , TAG_IDLIST , false > modeXpMultipliers; // Offset: 0x38E0

    // scalar for all (non-overridden) weapons' max ammo
    float maxAmmoMultiplier; // Offset: 0x38F8

    // scalar for specific weapons' max ammo, overriding the generic maxAmmoMultiplier
    idList < idGameChallenge::maxAmmoInfo_t , TAG_IDLIST , false > overriddenMaxAmmoMultipliers; // Offset: 0x3900

    // overridden clip sizes for specified ammo decls
    idList < idGameChallenge::ammoClipSizeInfo_t , TAG_IDLIST , false > overriddenAmmoClipSizes; // Offset: 0x3918

    // values to customize the round score screen
    idGameChallenge::roundScoreDisplayInfo_t roundScoreDisplayInfo; // Offset: 0x3930

    // how long to display the round score screen, 0 to disable
    idTypesafeTime < float , secondUnique_t , 1 > roundScoreDisplaySeconds; // Offset: 0x3A10

    idSmartTimer < GAMETIME_SCALED > roundScoreDisplayTimer; // Offset: 0x3A18

    // the amount of health under which screen effects should be played to warn the player about their health status
    float screenDamageLowHealthThreshold; // Offset: 0x3A20

    // the value where the low health effect kicks in
    float lowDamageFXValue; // Offset: 0x3A24

    // the value where the really low health effect kicks in
    float reallyLowDamageFXValue; // Offset: 0x3A28

    // the value where the low armor effect kicks in
    float lowArmorFXValue; // Offset: 0x3A2C

    // the value where the low radiation effect kicks in
    float lowRadiationFXValue; // Offset: 0x3A30

    // high water mark for number of active lobby users
    int highestLobbyUserCount; // Offset: 0x3A34

    // high water mark for number of human players
    int highestHumanCount; // Offset: 0x3A38

    // Ever-increasing counter to uniquely identify POIs over the network.
    int poiCount; // Offset: 0x3A3C

    int roundCalloutNum; // Offset: 0x3A40

    // Settings for Team Super
    idGameChallenge::teamSuperSettings_t teamSuperSettings; // Offset: 0x3A44

    // if true, player will always full body gib on death in this game mode
    bool playerAlwaysFullBodyGibs; // Offset: 0x3A58

    // -1 means no limit, 0 or more means team cannot have more than this many players
    idArray < int , 6 > maxPlayersPerTeam; // Offset: 0x3A5C

}; // Size: 0x3A78
