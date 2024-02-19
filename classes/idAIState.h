struct idAIState : idClass
{
    struct transitionInfo_t
    {
        idAIFiniteStateMachine* fsm; // Offset: 0x0

        idAIState* prevState; // Offset: 0x8

        idAIState* curState; // Offset: 0x10

        idAIFiniteStateMachine* prevChildFSM; // Offset: 0x18

        idAIFiniteStateMachine* curChildFSM; // Offset: 0x20

        int prevTransitionCode; // Offset: 0x28

        idTransitionCode transitionCode; // Offset: 0x30

    }; // Size: 0x50

    // pointer to static state data
    idStateData* stateData; // Offset: 0x10

    // index of proxy data for this state, in owning fsm
    int infoIndex; // Offset: 0x18

    // behavior priority of this state
    statePriority_t priority; // Offset: 0x1C

    // bits representing what functions we need to call to evaluate this state
    idFlags functionFlags; // Offset: 0x20

    // the highest update frequency of any transition
    stateUpdateFrequency_t highestTransitionUpdateFrequency; // Offset: 0x24

    // update frequency for entire state, use along with transition update frequencies
    stateUpdateFrequency_t updateFrequency; // Offset: 0x28

    // transitions stored from a deferred tra
    idList < idTransitionCode , TAG_AI_FSM , false > deferredTransCodes; // Offset: 0x30

    // list of timers to set when state is entered
    idList < nameRangePair_t , TAG_AI_FSM , false > timers_setOnEnter; // Offset: 0x48

    // list of timers to set when state exits
    idList < nameRangePair_t , TAG_AI_FSM , false > timers_setOnExit; // Offset: 0x60

    // these tokens must be available for state to be entered, will be reserved during state, and released at end
    idList < aiTokenWrapper_t , TAG_AI_FSM , false > tokens_required; // Offset: 0x78

    // snippets to run when entering the state
    idList < idTypeInfoObjectPtr < idAISnippet > , TAG_AI_FSM , false > onEnterSnippets; // Offset: 0x90

    // snippets to run when exiting the state
    idList < idTypeInfoObjectPtr < idAISnippet > , TAG_AI_FSM , false > onExitSnippets; // Offset: 0xA8

    // conditions that must pass for state to be valid
    idList < idTypeInfoObjectPtr < idAICondition > , TAG_AI_FSM , false > requiredConditions; // Offset: 0xC0

    // snippets to run while in the state
    idList < idTypeInfoObjectPtr < idAISnippet > , TAG_AI_FSM , false > workSnippets; // Offset: 0xD8

    // states that should run alongside this one
    idList < idTypeInfoObjectPtr < idAIState > , TAG_AI_FSM , false > workerStates; // Offset: 0xF0

    // this state is only valid if these behavior keys are set
    idList < idAtomicString , TAG_AI_FSM , false > behaviorKeys; // Offset: 0x108

    // optional stuff for this state
    aiStateFlags_t flags; // Offset: 0x120

    // don't allow re-entry into this state within x seconds
    idTypesafeTime < float , secondUnique_t , 1 > minReEnterSeconds; // Offset: 0x124

    // if true, this state is not valid when action target or enemy is off limits
    bool disableForOffLimits_current; // Offset: 0x128

    // if true, this state is not valid when pending action target(s) is off limits
    bool disableForOffLimits_pending; // Offset: 0x129

    // if true, allow AI to linger in failsafe anims for as long as they want ( be careful )
    bool suppressAnimwebNodeFailsafe; // Offset: 0x12A

    // if true, don't allow re-entry into this state
    bool noReEntry; // Offset: 0x12B

    // if true, will evaluate the transitions in a random order
    bool randomizeTransitionOrder; // Offset: 0x12C

}; // Size: 0x130
