struct aiFSMObjectParms_t
{
    idFSMUser* fsmUser; // Offset: 0x0

    // fsm that is evaluating us
    idAIFiniteStateMachine* evalFSM; // Offset: 0x8

    // fsm that owns us
    idAIFiniteStateMachine* owningFSM; // Offset: 0x10

    // the state that this transition/condition/snippet lives on
    idAIState* myState; // Offset: 0x18

    // the state that is being considered
    idAIState* destinationState; // Offset: 0x20

    // the state the fsm was in
    idAIState* sourceState; // Offset: 0x28

    // the transition that is being evaluated
    idAIStateTransition* myTransition; // Offset: 0x30

    frameTimeInfo_t frameTimeInfo; // Offset: 0x38

}; // Size: 0x58
