struct idEncounterMetrics
{
    struct plyrScoreKill_t
    {
        aiMonsterType_t aiMonsterType; // Offset: 0x0

        idList < idDeclCombatEncounterScoring::scoringEvent_t , TAG_IDLIST , false > scoreEvents; // Offset: 0x8

        int totalScore; // Offset: 0x20

        int fuseMultiplierIndex; // Offset: 0x24

        int fuseMultiplierBase; // Offset: 0x28

    }; // Size: 0x30

    struct encounterStats_t
    {
        int encounterId; // Offset: 0x0

        float encounterScore; // Offset: 0x4

        float medalScore; // Offset: 0x8

        float relicScore; // Offset: 0xC

        float oneUpScore; // Offset: 0x10

        float encounterDamageTaken; // Offset: 0x14

        float momentumMultiplier; // Offset: 0x18

        int encounterEventsCount[idDeclCombatEncounterScoring::scoringEvent_t::NUM_OF_SCORING_EVENTS-1]; // Offset: 0x1C

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > encounterTime; // Offset: 0x58

    }; // Size: 0x60

    idEncounterMetrics::encounterStats_t* currentEncounterStats; // Offset: 0x0

    int currentEncounterID; // Offset: 0x8

    idDeclCombatEncounterScoring* combatEncounterScoringDecl; // Offset: 0x10

    idPlayer* owner; // Offset: 0x18

    idStaticList < idEncounterMetrics::encounterStats_t , 64 , false , TAG_IDLIST > encounterStats; // Offset: 0x20

    idList < idEncounterMetrics::plyrScoreKill_t , TAG_IDLIST , false >* playerScoreKills; // Offset: 0x1838

}; // Size: 0x1840
