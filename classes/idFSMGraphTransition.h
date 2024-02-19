struct idFSMGraphTransition : idTypeInfoGraphLink
{
    // typeinfo specifying the class type for this transition
    idTypeInfoObjectPtr < idAIStateTransition > transitionType; // Offset: 0x40

    // transition code that must be returned in order to transition (-1 if any transcode other than TRANSCODE_NONE will do)
    aiTransCode_t transCode; // Offset: 0x50

    // transition group, i.e. normal state transition, AI event transition, FSM event transition
    fsmTransGroup_t transGroup; // Offset: 0x54

    // the child FSM this transition evaluates
    idAtomicString childFSMName; // Offset: 0x58

    // index in the transitions list of the source state
    int orderIndex; // Offset: 0x60

    // enumdebugFlags_t { DEBUGFLAG_BREAK_ON_TRANSITION_TAKEN= BIT( 0 ), DEBUGFLAG_BREAK_ON_TRANSITION_NOT_TAKEN= BIT( 1 ), DEBUGFLAG_INVALID_TRANSITION= BIT( 2 ), DEBUGFLAG_FSM_LOG_TRANSITION= BIT( 3 ), DEBUGFLAG_DISABLED_TRANSITION= BIT( 4 ), DEBUGFLAG_BREAK_ON_INIT= BIT( 5 ), }; flags for debugging
    idAIFSMTransitionDebugFlags debugFlags; // Offset: 0x64

    // notes people might want to put here
    idStr developerNotes; // Offset: 0x68

}; // Size: 0x98
