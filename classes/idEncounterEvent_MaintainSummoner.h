struct idEncounterEvent_MaintainSummoner : idEncounterEvent
{
    struct queuedWaveAIEntry_t
    {
        eEncounterSpawnType_t aiType; // Offset: 0x0

        riftState_t tier; // Offset: 0x8

    }; // Size: 0x10

    // The AI that is the summoning entity
    idManagedClassPtr < idEntity > summonerAI; // Offset: 0x90

    // The summoning template to determine summoning order and conditions
    idManagedClassPtr < idSummoningTemplate > summonerTemplate; // Offset: 0xB0

    // A queued summoning template to replace the current template. This only happens when the current summon action is complete.
    idManagedClassPtr < idSummoningTemplate > queuedTemplate; // Offset: 0xD0

    // Current index into the fixed portion of the summoning template
    int currentFixedSummonIndex; // Offset: 0xF0

    // Current index into the random pool of the summoning template
    int currentRandomSummonIndex; // Offset: 0xF4

    // Which actor in the group list is up next
    int currentActorIndex; // Offset: 0xF8

    // The current list of AI that can be spawned.
    idBitFlag64 currentAllowedAITypes; // Offset: 0x100

    // List of actors that have been spawned by this summoner
    idList < idEncounterSpawn_t , TAG_IDLIST , false > managedSummonSpawns; // Offset: 0x108

    // Is the system waiting on summoning conditions to be met before processing the next group?
    bool waitingOnSummonConditions; // Offset: 0x120

    // This number of summons that have been initiated but not completed or aborted
    int numberOfSummonsInProgress; // Offset: 0x124

    // Which routine are we using to determine when to start summoning again
    summonConditions_t currentSummonConditions; // Offset: 0x128

    // Cooldown timer for time based summon conditions.
    float summoningCooldown; // Offset: 0x12C

    // True as long as we are still watching fixed group summoning
    bool usingFixedGroupSummons; // Offset: 0x130

    // The current group has been cancelled due to summon interrupts
    bool earlyOutOnCurrentGroup; // Offset: 0x131

    // Time buffer to use for interrupted time clamping
    float currentTimeBuffer; // Offset: 0x134

    // NEW METHOD USING TIERED WAVES List of all AI that are expected to spawn from the summoner
    idList < idEncounterEvent_MaintainSummoner::queuedWaveAIEntry_t , TAG_IDLIST , false > queuedWaveAITypes; // Offset: 0x138

    // Full roster of AI that will be spawned in this wave
    idSummoningWave_t fullWaveRoster; // Offset: 0x150

    // The current tier for summoning
    riftState_t currentRiftTier; // Offset: 0x1A0

    // Group name of the summoner
    idStr summonerGroupName; // Offset: 0x1A8

    // Group name used for any summoned entities
    idStr summonedGroupName; // Offset: 0x1D8

}; // Size: 0x208
