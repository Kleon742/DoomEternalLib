struct idStateData : idClass
{
    struct transResult_t
    {
        // the transition that was evaluated
        idTypeInfo* transitionType; // Offset: 0x0

        // state the transition came from
        idAIState* fromState; // Offset: 0x8

        // the next state to transition to
        idAIState* nextState; // Offset: 0x10

        // pointer to actual transition object in memory
        idAIStateTransition* transition; // Offset: 0x18

        // the transition code that was returned
        idTransitionCode transCode; // Offset: 0x20

        // the transition group that was evaluated
        fsmTransGroup_t transGroup; // Offset: 0x40

        // true if the transition's evaluation must be deferred 1 frame
        bool deferred; // Offset: 0x44

        // the max number of transitions to keep track of during recursive passthrough eval
        idStaticList < const idAIStateTransition * , 32 , false , TAG_IDLIST > transitionStack; // Offset: 0x48

    }; // Size: 0x160

    typedef idList < idAIStateTransition * , TAG_AI_TRANSITIONS > transitionList_t;

    // list of transitions, ordered by priority
    idList < idAIStateTransition * , TAG_AI_TRANSITIONS , false > transitions; // Offset: 0x10

    // list of transitions to test upon receiving an event
    idList < idAIStateTransition * , TAG_AI_TRANSITIONS , false > eventTransitions; // Offset: 0x28

    // list of transitions to test upon receiving an FSM event
    idList < idAIStateTransition * , TAG_AI_TRANSITIONS , false > fsmEventTransitions; // Offset: 0x40

    // name of this state, as seen in fsm decl
    idAtomicString nameFromDecl; // Offset: 0x58

    // the child FSM this state can start
    idAtomicString childFSMName; // Offset: 0x60

    // flags for this state
    unsigned int flags; // Offset: 0x68

    // io flags for this state
    unsigned int IOFlags; // Offset: 0x6C

}; // Size: 0x70
