struct idAIFiniteStateMachine : idClass
{
    enum fsmStatus_t : int
    {
        FSMSTATUS_DONE = 0,
        FSMSTATUS_WORKING = 1,
        FSMSTATUS_ERROR = 2
    };

    // the object responsible for managing FSM objects.
    idAIFSMManager* manager; // Offset: 0x10

    // list of states
    idList < idAIState * , TAG_AI_FSM , false > states; // Offset: 0x18

    // info about the states
    idList < aiStateInfo_t , TAG_AI_FSM , false > stateInfos; // Offset: 0x30

    // our parent, if one exists
    idAIFiniteStateMachine* parentFSM; // Offset: 0x48

    // stuff for editorlist of timers to set when state is entered
    idList < nameRangePair_t , TAG_AI_FSM , false > timers_setOnEnter; // Offset: 0x50

    // list of timers to set when state exits
    idList < nameRangePair_t , TAG_AI_FSM , false > timers_setOnExit; // Offset: 0x68

    // these tokens must be available for fsm to be entered, will be reserved during use, and released at end
    idList < aiTokenWrapper_t , TAG_AI_FSM , false > tokens_required; // Offset: 0x80

    // snippets to run when entering the fsm
    idList < idTypeInfoObjectPtr < idAISnippet > , TAG_AI_FSM , false > onEnterSnippets; // Offset: 0x98

    // snippets to run when exiting the fsm
    idList < idTypeInfoObjectPtr < idAISnippet > , TAG_AI_FSM , false > onExitSnippets; // Offset: 0xB0

    // conditions that must pass for fsm to be valid
    idList < idTypeInfoObjectPtr < idAICondition > , TAG_AI_FSM , false > requiredConditions; // Offset: 0xC8

    // this fsm is only valid if these behavior keys are set
    idList < idAtomicString , TAG_AI_FSM , false > behaviorKeys; // Offset: 0xE0

    // don't allow re-entry into this fsm within x seconds
    idTypesafeTime < float , secondUnique_t , 1 > minReEnterSeconds; // Offset: 0xF8

    // set min update frequency of entire fsm here
    stateUpdateFrequency_t updateFrequency; // Offset: 0xFC

    // if true, this state is not valid when action target or enemy is off limits
    bool disableForOffLimits_current; // Offset: 0x100

    // if true, this state is not valid when pending action target(s) is off limits
    bool disableForOffLimits_pending; // Offset: 0x101

    // if true, allow AI to linger in failsafe anims for as long as they want ( be careful )
    bool suppressAnimwebNodeFailsafe; // Offset: 0x102

    // if true, don't allow re-entry into this fsm
    bool noReEntry; // Offset: 0x103

    // if true, when this fsm is child of a transition, run in Evaluate()
    bool runFromTransitionEvaluate; // Offset: 0x104

    // if true, when this fsm is child of a transition, run in CanUse()
    bool runFromTransitionCanUse; // Offset: 0x105

    // if true, when started after a CanUse() checked a default passthrough_immediate, use that result
    bool useCachedResults; // Offset: 0x106

    // if true, this fsm is to be used as a decision tree
    bool decisionTree; // Offset: 0x107

    // this is the only stuff we should ever delete
    idList < idAIState * , TAG_AI_FSM , false > createdStates; // Offset: 0x108

    // list of fsms we want continually working while we are active
    idList < idAIFiniteStateMachine * , TAG_AI_FSM , false > workerFSMs; // Offset: 0x120

    // name of this FSM
    idAtomicString name; // Offset: 0x138

    // the current state the FSM is running
    idAIState* curState; // Offset: 0x140

    // pointer to error state
    idAIState* errorState; // Offset: 0x148

    // pointer to done state
    idAIState* doneState; // Offset: 0x150

    // handle to the state to start when this FSM is started
    idHandle < int , invalidFSMState_t , INVALID_FSMSTATE > defaultStateHandle; // Offset: 0x158

    // pointer to the callback object
    idAIFSMCallback* callback; // Offset: 0x160

    // for ai history
    int historyDetailLevel; // Offset: 0x168

    idDeclAIFSMManager* graphDecl; // Offset: 0x170

    // if true, update in faster code path that simply runs transition Evaluate() function
    bool useActionUpdate; // Offset: 0x178

    // true if this fsm isn't valid
    bool disabled; // Offset: 0x179

    // most of the volatile data this fsm needs to store
    aiFSMVolatile_t* volatile; // Offset: 0x180

}; // Size: 0x188
