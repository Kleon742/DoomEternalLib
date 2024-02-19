struct idGlobalEncounterManager : idClass
{
    int currentGlobalEncounterID; // Offset: 0x10

    int lastGlobalEncounterID; // Offset: 0x14

    unsigned int encounterHash; // Offset: 0x18

    // Store the AI count
    int previousAICount; // Offset: 0x1C

    // Keep a tally of all spirits spawned so far
    int activeSpirits; // Offset: 0x20

    // Hints will register themselves so they can be updated in one place.
    idList < idManagedClassPtr < idAICombatHint > , TAG_IDLIST , false > combatHints; // Offset: 0x28

    // Array of completion points for mission select
    idArray < int , 5 > cachedMapCorruptionMeterPoints; // Offset: 0x40

    bool inMissionSelect; // Offset: 0x54

    // List of actors that have been set to flee from child encounter scripts
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > fleeingAIList; // Offset: 0x58

    // GUI for debug
    idRenderModelGui* debugGuiModel; // Offset: 0x70

    // track the last time a spawn happened. The global manager will only allow a single spawn per frame.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastSpawnTime; // Offset: 0x78

    // Was highlighting active in the previous frame?
    bool highlightWasActive; // Offset: 0x80

    // This is the max value for a level's combat rating
    int combatRatingMax; // Offset: 0x84

    // Number of current combat points
    int currentCombatPoints; // Offset: 0x88

    // The level that has been stored on the player for this level
    int previouslyAwardLevel; // Offset: 0x8C

    // This is the max value for a level's secret encounter rating
    int secretRatingMax; // Offset: 0x90

    // Number of current secret combat points
    int currentSecretPoints; // Offset: 0x94

    // The level that has been stored on the player for this level
    int previousSecretLevel; // Offset: 0x98

    // This is the max value for a level's escalation encounter rating
    int escalationEncounterRatingMax; // Offset: 0x9C

    // Number of current escalation encounter points
    int currentEscalationEncounterPoints; // Offset: 0xA0

    // The level that has been stored on the player for this level
    int previousEscalationEncounterLevel; // Offset: 0xA4

    // The level number that gives the hammer upgrade in the escalation encounter
    int escalationEncounterLevelHammer; // Offset: 0xA8

    // The level number that gives a reward in the escalation encounter
    int escalationEncounterLevelHorde; // Offset: 0xAC

    // This is the max value for a level's slayer gate rating
    int slayerGateRatingMax; // Offset: 0xB0

    // Number of current slayer gate points
    int currentSlayerGatePoints; // Offset: 0xB4

    // The level that has been stored on the player for this level
    int previousSlayerGateLevel; // Offset: 0xB8

    // This is the max value for a level's boss combat rating
    int bossCombatRatingMax; // Offset: 0xBC

    // Number of current boss combat points
    int currentBossCombatPoints; // Offset: 0xC0

    // The level that has been stored on the player for this level
    int previousBossCombatLevel; // Offset: 0xC4

    // All spawn types that will be encountered during this map
    idBitFlag64 allEncounterSpawnTypes; // Offset: 0xC8

    eEncounterSpawnType_t desiredBounty; // Offset: 0xD0

    uint16 encounterBroadcastSystemId; // Offset: 0xD8

    // Persistent encounter data Names of all encounters in this map that have been completed at any time in the past
    char completedEncounterNames[2048]; // Offset: 0xDA

    int completedEncounterNamesLength; // Offset: 0x8DC

}; // Size: 0x8E0
