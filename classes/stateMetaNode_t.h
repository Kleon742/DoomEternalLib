struct stateMetaNode_t
{
    idTypeInfo* stateType; // Offset: 0x0

    idAIState* state; // Offset: 0x8

    idAtomicString stateName; // Offset: 0x10

    idList < stateTransitionMetaNode_t , TAG_AI_FSM , false > transitions; // Offset: 0x18

    stateMetaNode_t* child; // Offset: 0x30

    stateMetaNode_t* parent; // Offset: 0x38

    int lastSelectedTransition; // Offset: 0x40

}; // Size: 0x48
