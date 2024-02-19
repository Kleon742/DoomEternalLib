struct aiStateEvaluationParms_t
{
    // if true, evaluate transitions
    bool eval; // Offset: 0x0

    // fsm that owns the state being evaluated
    idAIFiniteStateMachine* ownerFSM; // Offset: 0x8

    // fsm that is doing the evaluation ( can be a parent )
    idAIFiniteStateMachine* evalFSM; // Offset: 0x10

    // list of transitions to evaluate
    idList < idAIStateTransition * , TAG_AI_TRANSITIONS , false >* transitions; // Offset: 0x18

    // frametimeinfo
    frameTimeInfo_t frameTimeInfo; // Offset: 0x20

    // highest priority of any child
    statePriority_t highestPriority; // Offset: 0x40

    // what group of transitions to evaluate
    fsmTransGroup_t transGroup; // Offset: 0x44

}; // Size: 0x48
