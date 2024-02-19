struct aiConditionSet_t
{
    // name of this condition set
    idAtomicString name; // Offset: 0x0

    // conditions in this set
    idList < idTypeInfoObjectPtr < idAICondition > , TAG_AI_FSM , false > conditions; // Offset: 0x8

}; // Size: 0x20
