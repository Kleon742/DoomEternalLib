struct idFSMGraphFSM : idTypeInfoSubGraph
{
    // typeinfo specifying the class type for this FSM/ ??? change this?
    idTypeInfoPtr < idAIFiniteStateMachine > fsmType; // Offset: 0x40

    // typeinfo object pointer for fsm
    idTypeInfoObjectPtr < idAIFiniteStateMachine > fsmType_new; // Offset: 0x48

    // set the min update frequency of entire fsm here
    stateUpdateFrequency_t updateFrequency; // Offset: 0x58

    // notes people might want to put here
    idStr developerNotes; // Offset: 0x60

    // for debugging
    int aiHistoryDetailLevel; // Offset: 0x90

    // flags for debugging
    idAIFSMFSMDebugFlags debugFlags; // Offset: 0x94

    // true if the FSM is marked as root FSM
    bool isRoot; // Offset: 0x98

}; // Size: 0xA0
