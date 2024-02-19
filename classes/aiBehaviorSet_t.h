struct aiBehaviorSet_t
{
    // name of this behavior set
    idAtomicString name; // Offset: 0x0

    // whether this set can be used
    bool enabled; // Offset: 0x8

    // name of this behavior set to use as a key when matching validity
    idAtomicString nameKey; // Offset: 0x10

    // optional list of required conditions for this set to apply
    idList < idTypeInfoObjectPtr < idAICondition > , TAG_AI_FSM , false > requiredConditions; // Offset: 0x18

    // optionally override any timer the AI uses here
    idList < aiTimerData_t , TAG_IDLIST , false > timers; // Offset: 0x30

    // if this is non-empty, AI will ONLY use these
    idList < idAtomicString , TAG_IDLIST , false > behaviorKeys_enabled; // Offset: 0x48

    // behavior keys to disable when in this behavior state
    idList < idAtomicString , TAG_IDLIST , false > behaviorKeys_disabled; // Offset: 0x60

    // add these values to temp memory when AI is put in this behavior set
    idList < stringIntegerTuple_t , TAG_IDLIST , false > tempMemoryKeys; // Offset: 0x78

}; // Size: 0x90
