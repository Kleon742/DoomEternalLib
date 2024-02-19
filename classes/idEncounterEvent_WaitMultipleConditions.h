struct idEncounterEvent_WaitMultipleConditions : idEncounterEvent_Wait
{
    // private: Number of conditions to test against
    int conditionCount; // Offset: 0xA8

    // List of all wait events in the multi-condition statement
    idList < idEncounterEvent_Wait * , TAG_IDLIST , false > waitEvents; // Offset: 0xB0

    // Logic operation between all wait conditions
    encounterLogicOperator_t logicOperator; // Offset: 0xC8

}; // Size: 0xD0
