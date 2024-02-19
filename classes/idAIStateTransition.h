struct idAIStateTransition : idClass
{
    enum stateTransitionFlags_t : unsigned int
    {
        TRANSFLAG_NONE = 0,
        TRANSFLAG_CHECK_CAN_USE = 1,
        TRANSFLAG_CHECK_DEFAULT_USE = 2,
        TRANSFLAG_FORCE_DUPLICATES = 4,
        TRANSFLAG_DEFERRED_ATOMIC = 8
    };

    enum aiStateTransitionFlags_t : int
    {
        FLAG_NONE = 0,
        FLAG_DISABLE_FOR_OFF_LIMITS_CURRENT = 1,
        FLAG_DISABLE_FOR_OFF_LIMITS_PENDING = 2,
        FLAG_APPLY_HASTE_MIN_SECONDS = 4,
        FLAG_APPLY_HASTE_ALL_TIMERS = 8,
        FLAG_SUPPRESS_HASTE = 16,
        FLAG_CHECK_DESTINATION_FIRST = 32,
        FLAG_DEBUG_RENDER = 64,
        FLAG_OR_CONDITIONS = 128,
        FLAG_SKIP_DURING_CAN_USE = 256,
        FLAG_OR_TIMERS = 512,
        FLAG_APPLY_RENDERMODEL_SCALE = 1024
    };

    struct transDest_t
    {
        // identifies the state to transition to
        idHandle < int , invalidFSMState_t , INVALID_FSMSTATE > nextStateHandle; // Offset: 0x0

        // transition code that must be returned in order to transition (-1 if any transcode other than TRANSCODE_NONE will do)
        int transCode; // Offset: 0x4

    }; // Size: 0x8

    idAtomicString nameFromDecl; // Offset: 0x10

    // the name of the child FSM this transition can start
    idAtomicString childFSMName; // Offset: 0x18

    unsigned int flags; // Offset: 0x20

    // update frequency of this transition
    stateUpdateFrequency_t updateFrequency; // Offset: 0x24

    // behavior priority of this transition
    statePriority_t priority; // Offset: 0x28

    // if we've been in root state for longer than X seconds, don't force other transitions to wait for our result
    idTypesafeTime < float , secondUnique_t , 1 > deferredWaitTime; // Offset: 0x2C

    // if true, fsm will take this transition when transcode does NOT match
    bool invertTranscode; // Offset: 0x30

    // bits representing cached information about what functions we need to call when evaluating this transition
    idFlags functionFlags; // Offset: 0x34

    stateIOFlags_t IOFlags; // Offset: 0x38

    idAIStateTransition::transDest_t destination; // Offset: 0x3C

    // current state must have been active for this many seconds before transition will be considered
    idTypesafeTime < float , secondUnique_t , 1 > minSecondsInState; // Offset: 0x44

    // snippets to run when taking the transition
    idList < idTypeInfoObjectPtr < idAISnippet > , TAG_AI_FSM , false > onTakenSnippets; // Offset: 0x48

    // Conditions the transition must meet before in can be run
    idList < idTypeInfoObjectPtr < idAICondition > , TAG_AI_FSM , false > requiredConditions; // Offset: 0x60

    // list of timers that must have elapsed / had interval passed, before transition canbe taken
    idList < nameRangePair_t , TAG_AI_FSM , false > timers_required; // Offset: 0x78

    // list of timers that will be applied when transition is taken
    idList < nameRangePair_t , TAG_AI_FSM , false > timers_setOnTaken; // Offset: 0x90

    // list of timers that will be applied whenever transition is evaluated
    idList < nameRangePair_t , TAG_AI_FSM , false > timers_setOnEvaluate; // Offset: 0xA8

    // AI must be in one of thse web nodes for transition to be taken
    idList < idAnimWebPath_Atomic , TAG_AI_FSM , false > webNodes_include; // Offset: 0xC0

    // AI must not be in any of these nodes for transition to be taken
    idList < idAnimWebPath_Atomic , TAG_AI_FSM , false > webNodes_exclude; // Offset: 0xD8

    // if true, this transition is not valid when action target or enemy is off limits
    bool disableForOffLimits_current; // Offset: 0xF0

    // if true, this transition is not valid when pending action target(s) is off limits
    bool disableForOffLimits_pending; // Offset: 0xF1

    // various flags for this transition
    idAIStateTransition::aiStateTransitionFlags_t transitionFlags; // Offset: 0xF4

}; // Size: 0xF8
