struct idFSMGraphState : idTypeInfoGraphNode
{
    // typeinfo specifying the class type for this state
    idTypeInfoObjectPtr < idAIState > stateType; // Offset: 0x30

    // the child FSM this state starts
    idAtomicString childFSMName; // Offset: 0x40

    // true if the state is marked as default state
    bool isDefault; // Offset: 0x48

    // enumdebugFlags_t { DEBUGFLAG_BREAK_ON_ANY_TRANSITION_TO_STATE= BIT( 0 ), DEBUGFLAG_BREAK_ON_ANY_TRANSITION_FROM_STATE= BIT( 1 ), DEBUGFLAG_INVALID_STATE= BIT( 2 ), DEBUGFLAG_FSM_LOG_STATE= BIT( 3 ), DEBUGFLAG_BREAK_ON_INIT= BIT( 4 ) }; flags for debugging
    idAIFSMStateDebugFlags debugFlags; // Offset: 0x4C

    // set incoming links will be rendered differently
    typeInfoGraphLinkRenderShape_t incomingLinkRenderShape; // Offset: 0x50

    // notes people might want to put here
    idStr developerNotes; // Offset: 0x58

}; // Size: 0x88
