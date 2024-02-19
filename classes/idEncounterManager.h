struct idEncounterManager : idBloatedEntity
{
    struct spawnTestConditionFlags_t
    {
        bool runCooldownTest; // Offset: 0x0

        bool runFOVTest; // Offset: 0x1

        bool runLOSTest; // Offset: 0x2

        bool runDistanceTest; // Offset: 0x3

    }; // Size: 0x4

    struct aiTypeDefAssignment_t
    {
        // Parent entity def. Any child of this def is a legitimate decl to spawn with
        idDeclEntityDef* entityDef; // Offset: 0x0

        // The AI type this def is associated with
        eEncounterSpawnType_t aiType; // Offset: 0x8

        // Point value for this AI when spawning from a budget
        int pointValue; // Offset: 0x10

        // Weighted chance of the AI being spawned (normalized against other weights in this template)
        float spawnWeight; // Offset: 0x14

        // Faction name for this ai entry. This should match an entry in the relationship graph
        idStr factionName; // Offset: 0x18

        // Sound shader used for the ambient sounds that represent this AI type
        idSoundEvent* ambientSoundShader; // Offset: 0x48

    }; // Size: 0x50

    struct userFlag_t
    {
        idStr flag; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeLastRaised; // Offset: 0x30

    }; // Size: 0x38

    struct groupFactionRelation_t
    {
        // AI that has the affected relation
        eEncounterSpawnType_t instigatorSpawnType; // Offset: 0x0

        // Target of this relation
        eEncounterSpawnType_t targetSpawnType; // Offset: 0x8

        // Faction name for the target
        idStr targetFactionName; // Offset: 0x10

        // Group name for the instigator
        idStr instigatorGroupName; // Offset: 0x40

        // Duration of the override (the relation should continue naturally after this period)
        float duration; // Offset: 0x70

        // Override relation of the instigator toward the target
        socialEmotion_t relation; // Offset: 0x74

    }; // Size: 0x78

    struct groupRoleOverrides_t
    {
        // Type of AI this affects
        eEncounterSpawnType_t aiType; // Offset: 0x0

        // Label this affects
        idStr groupLabel; // Offset: 0x8

        // The role to apply
        encounterGroupRole_t groupRole; // Offset: 0x38

    }; // Size: 0x40

    struct fleeCommandData_t
    {
        eEncounterSpawnType_t spawnType; // Offset: 0x0

        char* group_label; // Offset: 0x8

        // {{ units = m }}
        float radius; // Offset: 0x10

    }; // Size: 0x18

    struct despawnCommandData_t
    {
        eEncounterSpawnType_t spawnType; // Offset: 0x0

    }; // Size: 0x8

    struct validCoverVolumeInfo_t
    {
        idManagedClassPtr < idEncounterVolume_ValidCover > volume; // Offset: 0x0

        idStr label; // Offset: 0x20

    }; // Size: 0x50

    struct spawnerValidationCacheData_t
    {
        idManagedClassPtr < idTarget_Spawn > targetSpawner; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastValidationTime; // Offset: 0x20

        bool hasPendingQuerie; // Offset: 0x28

        bool previous_LOS_TestPassed; // Offset: 0x29

    }; // Size: 0x30

    struct idAITypeFormattedStrings_t
    {
        // AI Type
        eEncounterSpawnType_t aiType; // Offset: 0x0

        // String ID for a single AI
        idStrId singularStringId; // Offset: 0x8

        // String ID for plural AI
        idStrId pluralStringId; // Offset: 0xC

    }; // Size: 0x10

    idList < idAtomicString , TAG_IDLIST , false > stickyWarnings; // Offset: 0xB88

    // Flag to prevent the system from activating
    bool isEnabled; // Offset: 0xBA0

    // If the exit trigger is hit before a script is complete, allow the system to just pause
    bool isPaused; // Offset: 0xBA1

    // Has the system been paused by the global manager due to hitting the spawn limit?
    bool isPausedForAvailableSpawn; // Offset: 0xBA2

    // At the end of the current script, immediately start the next script
    bool proceedToNextIndex; // Offset: 0xBA3

    // When forced to the next script, should the stored user flags be carried over
    bool maintainUserFlagsAcrossIndices; // Offset: 0xBA4

    // When proceeding to the next script, raise the ENCOUNTER_EVENT_FLAG_COMMIT to bypass potential WaitForEventFlag commands
    bool bypassCommitFlagWaits; // Offset: 0xBA5

    // group names for spawning AI with awareness
    idList < idStr , TAG_IDLIST , false > spawnWithPlayerAwarenessLabels; // Offset: 0xBA8

    // OBSOLETE!! Determines if the encounter reports spawns and kills to the scoring system. This should be false for any ambient AI.
    bool contributesToScore; // Offset: 0xBC0

    // Standardized combat rating scale for slayer rating.
    eCombatRatingScale_t combatRatingScale; // Offset: 0xBC4

    // Stat Driven Event to fire after the combat encounter
    statDrivenEvent_t postCombatStatEvent; // Offset: 0xBC8

    // Pause the encounter manager if the AI limit is reached. The encounter will not process any scripts until the current spawn commands are able to complete.
    bool pauseWhenAILimitIsReached; // Offset: 0xBCC

    // To enable/disable AI Highlight on encounter finish
    bool enableAIHighlightOnFinish; // Offset: 0xBCD

    // AI types disabled for highlighting
    aiMonsterType_t disabledAITypeForHighlight; // Offset: 0xBD0

    // enables the debug out when the encounterScript_debug is turned on
    bool enableDebugPrint; // Offset: 0xBD8

    // If combatRatingScale is an extra life encounter, this number specifies how many lives to award to the player. TEMP until we decide how we want to handle this. May change with the new corruption meter work.
    int extraLifeReward; // Offset: 0xBDC

    // Determines whether or not this encounter restricts fast travel, and if not whether or not it exits on fast travel
    eEncounterFastTravelBehavior_t fastTravelBehavior; // Offset: 0xBE0

    // With this flag you will force showing POI's during encounters.
    bool showPOIDuringEncounters; // Offset: 0xBE4

    idList < idEncounterManager::fleeCommandData_t , TAG_IDLIST , false > activeFleeCommands; // Offset: 0xBE8

    idList < idEncounterManager::despawnCommandData_t , TAG_IDLIST , false > activeDespawnCommands; // Offset: 0xC00

    idList < idEncounterManager::groupFactionRelation_t , TAG_IDLIST , false > activeFactionRelations; // Offset: 0xC18

    idList < idEncounterManager::groupRoleOverrides_t , TAG_IDLIST , false > activeRoleOverrides; // Offset: 0xC30

    // Pre-commit data Ordered list of pre-commit indices.
    idList < int , TAG_IDLIST , false > preCommitIndices; // Offset: 0xC48

    // Queued pre-commit index to run if we need another pre-commit
    int queuedPreCommitIndex; // Offset: 0xC60

    // User flags that have been raised in the current script. These reset when a script is completed.
    idList < idEncounterManager::userFlag_t , TAG_IDLIST , false > userFlagList; // Offset: 0xC68

    // List of actors that have been spawned from the manager
    idList < idEncounterSpawn_t , TAG_IDLIST , false > managedEncounterSpawns; // Offset: 0xC80

    // this should only wrap access to the managed spawn list
    idSysMutex managedSpawnsMutex; // Offset: 0xC98

    // Active commands that will need to be evaluated each frame (waits and flood spawners)
    idList < idEncounterEvent * , TAG_IDLIST , false > activeScriptCommands; // Offset: 0xCC0

    // Any combat groupings that are active with this script
    idList < idCombatGrouping * , TAG_IDLIST , false > activeCombatGroupings; // Offset: 0xCD8

    // List of active spirits respawned in the encounter
    idList < idEncounterSpawn_t , TAG_IDLIST , false > managedSpiritRespawns; // Offset: 0xCF0

    // List of active spirits newly spawned in the encounter
    idList < idEncounterSpawn_t , TAG_IDLIST , false > managedNewSpiritSpawns; // Offset: 0xD08

    // These are for the typeDef routine
    idList < int , TAG_IDLIST , false > candidateIndexList; // Offset: 0xD20

    idList < idEncounterManager::aiTypeDefAssignment_t , TAG_IDLIST , false > candidateTypeDefAssignments; // Offset: 0xD38

    // If the group is being force to
    idManagedClassPtr < idCombatGrouping > forcedChargeCombatGroup; // Offset: 0xD50

    // Any combat groupings that are active with this script
    idList < idEncounterManager::validCoverVolumeInfo_t , TAG_IDLIST , false > activeValidCoverVolumeData; // Offset: 0xD70

    // Stack of multi-conditional wait events that are currently being filled with events. The 0 index is always the active event.
    idList < idEncounterEvent_WaitMultipleConditions * , TAG_IDLIST , false > multiConditionStack; // Offset: 0xD88

    // Index to the active script
    int activeScriptIndex; // Offset: 0xDA0

    // Designers can specify to next index once this script is complete
    int queuedScriptIndex; // Offset: 0xDA4

    // Set if the active script is set manually in this pass
    bool disableNextAutoIndex; // Offset: 0xDA8

    // The script has ended and is waiting for the exit trigger to be hit before any other activation calls will reactivate the script
    bool waitingForExitTrigger; // Offset: 0xDA9

    // Enable ambient audion triggers
    bool ambientAudioEnabled; // Offset: 0xDAA

    // Forces the watching global manager to taulate the current score
    bool forceResetScoring; // Offset: 0xDAB

    // This will puase the encounter so it can wait for a free spawn slot defined by the global manager
    bool waitForFreeSpawn; // Offset: 0xDAC

    // Pause spawning from maintain commands
    bool maintainSpawnPaused; // Offset: 0xDAD

    bool aiAreFleeing; // Offset: 0xDAE

    bool aiAreMovingToHide; // Offset: 0xDAF

    bool aiAreDespawning; // Offset: 0xDB0

    bool aiAreStillHidden; // Offset: 0xDB1

    bool encounterHasBeenActivated; // Offset: 0xDB2

    bool encounterHasAwardedCombatPoints; // Offset: 0xDB3

    bool encounterHasHighlighted; // Offset: 0xDB4

    // ignore the telemetry for this encounter manager
    bool ignoreTelemetry; // Offset: 0xDB5

    // AI Type for the current horde mode blitz demon (to pass to the UI)
    eEncounterSpawnType_t currentBlitzDemon; // Offset: 0xDB8

    idGameModeEncounterModifier_t currentGameModeModifier; // Offset: 0xDC0

    // All new spawn commands will be sent to a summoner
    bool sendSpawnsToSummoner; // Offset: 0xDC4

    // The summoner that will receive potential spawn commands
    idManagedClassPtr < idEntity > summonerSpawnRecipient; // Offset: 0xDC8

    idManagedClassPtr < idEntity > listeningAI; // Offset: 0xDE8

    idList < idLogicNodeEncounterListener * , TAG_IDLIST , false > logicListeners; // Offset: 0xE08

    // Component for adding encounter scripts
    idComponentEncounterManager encounterComponent; // Offset: 0xE20

    // List of triggers to activate the pre-combat setup
    idList < idManagedClassPtr < idEncounterTrigger_PreCombat > , TAG_IDLIST , false > preCombatTriggers; // Offset: 0xEA0

    // List of triggers to activate the commit state
    idList < idManagedClassPtr < idEncounterTrigger_Commit > , TAG_IDLIST , false > commitTriggers; // Offset: 0xEB8

    // List of triggers to activate the exit state
    idList < idManagedClassPtr < idEncounterTrigger_Exit > , TAG_IDLIST , false > exitTriggers; // Offset: 0xED0

    // List of triggers to activate the exit state
    idList < idManagedClassPtr < idEncounterTrigger_RaiseUserFlag > , TAG_IDLIST , false > userFlagTriggers; // Offset: 0xEE8

    // List of triggers to override combat groupings
    idList < idManagedClassPtr < idEncounterTrigger_OverrideCombatGrouping > , TAG_IDLIST , false > combatGroupingTriggers; // Offset: 0xF00

    // List of triggers to activate ambient audio
    idList < idManagedClassPtr < idEncounterTrigger_AmbientAIAudio > , TAG_IDLIST , false > ambientAudioTriggers; // Offset: 0xF18

    // List of path points AI will move to when told to flee
    idList < idManagedClassPtr < idInfoPath > , TAG_IDLIST , false > fleePathPoints; // Offset: 0xF30

    // If an event does not specify a spawn group, use this default
    idManagedClassPtr < idTargetSpawnGroup > defaultSpawnGroup; // Offset: 0xF48

    // TargetSpawnGroups that serve as the defaultSpawnGroup if the player is touching the volume
    idList < idManagedClassPtr < idTargetSpawnGroup > , TAG_IDLIST , false > spawnGroupTouchOverride; // Offset: 0xF68

    // If true, this manager will include any spawn groups that are marked to be included in the global spawn group override list.
    bool useGlobalOverrideSpawnGroups; // Offset: 0xF80

    // Allow the bounty system to spawn from this encounter
    bool enableBountySpawns; // Offset: 0xF81

    // Allow the slayer unknown text on the dossier map
    bool allowSlayerUnknownUI; // Offset: 0xF82

    // For entities that are controlled by the encounter system and spawned indirectly rather than at their spawn location.
    idList < idManagedClassPtr < idTarget_Spawn > , TAG_IDLIST , false > systemSpawnTargets; // Offset: 0xF88

    // Entity used to track player stats
    idDeclEntityDef* playerMetricDef; // Offset: 0xFA0

    // Entity used to track player stats
    idDeclEntityDef* chargeCombatGrouping; // Offset: 0xFA8

    // List of stand alone AI that will be adopted into the encounter if they are shown or still alive once the encounter starts
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > adoptedStandAloneAI; // Offset: 0xFB0

    // Allow the timed bounty system to use AI from this encounter
    bool enableTimedBountySpawns; // Offset: 0xFC8

    // Designer specified list of AI types available for summoning
    idBitFlag64 allowedSummoningAIFlags; // Offset: 0xFD0

    // Stored list of all AI types that will spawn from this encounter (may skip some spawn events due to precived early outs or non specific spawning)
    idBitFlag64 bountySpawnTypes; // Offset: 0xFD8

    // If spawn groups are registered as sticky, they will record the last one touched and treat it as the default
    idManagedClassPtr < idTargetSpawnGroup > lastTouchedStickySpawnGroup; // Offset: 0xFE0

    // Previously stored default spawn group
    idManagedClassPtr < idTargetSpawnGroup > previousDefaultSpawnGroup; // Offset: 0x1000

    // TargetSpawnGroups that have been used in the encounter during one of the script commands
    idList < idManagedClassPtr < idTargetSpawnGroup > , TAG_IDLIST , false > spawnGroupsUsedInEncounter; // Offset: 0x1020

    // Target Spawners that have been directly called in the encounter during one of the script commands
    idList < idManagedClassPtr < idTarget_Spawn > , TAG_IDLIST , false > spawnersTargetedInEncounter; // Offset: 0x1038

    // The last music entity that was called. Keep track of this if it needs to be managed after an encounter is complete or failed.
    idManagedClassPtr < idMusicEntity > lastActiveMusicEntity; // Offset: 0x1050

    bool cachingInited; // Offset: 0x1070

    // List of all unique spawners associated with spawn groups in this encounter
    idList < idEncounterManager::spawnerValidationCacheData_t , TAG_IDLIST , false > spawnerCachedData; // Offset: 0x1078

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > previousValidationTime; // Offset: 0x1090

    int previousStartingValidationIndex; // Offset: 0x1098

    int previousEndingValidationIndex; // Offset: 0x109C

    bool poiWasHiddenFromSlayerGateZeroWeaponPoints; // Offset: 0x10A0

    // GUI for debug
    idRenderModelGui* debugGuiModel; // Offset: 0x10A8

    // this encounter is the currently printed encounter manager in the debug window
    bool isDebugTarget; // Offset: 0x10B0

    // Keep tabs on the spacing so we can render multiple GUIs
    int debugPrintYEnd; // Offset: 0x10B4

    int debugPrintYStart; // Offset: 0x10B8

    // encounter mutex
    idSysMutex encMutex; // Offset: 0x10C0

    // List of ai def assignments per ai type
    idDeclActorPopulation* aiTypeDefAssignments; // Offset: 0x10E8

    // List of formatted strings for AI types
    idList < idEncounterManager::idAITypeFormattedStrings_t , TAG_IDLIST , false > aiTypePrintStrings; // Offset: 0x10F0

}; // Size: 0x1108
