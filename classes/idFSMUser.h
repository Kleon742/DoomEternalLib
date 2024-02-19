struct idFSMUser
{
    struct fsmAndKeys_t
    {
        idAIFiniteStateMachine* fsm; // Offset: 0x0

        idStaticList < idAtomicString , 32 , false , TAG_IDLIST > keys; // Offset: 0x8

    }; // Size: 0x120

    // contains all non-action fsms and states used by this AI
    idAIFSMManager* fsmManager; // Offset: 0x0

    // current alert cycle state
    alertCycle_t alertCycle; // Offset: 0x8

    // previous alert cycle state
    alertCycle_t previousAlertCycle; // Offset: 0xC

    // list of keys we should clean when a transition is cleaned
    idStaticList < idFSMUser::fsmAndKeys_t , 8 , false , TAG_IDLIST > tempKeysToClean; // Offset: 0x10

    idList < idAtomicString , TAG_AI_UNIT , false > behaviorKeys; // Offset: 0x928

    // Not null if this is an enemy AI
    idAI2* ai; // Offset: 0x940

    // Not null if this is a bot
    idBot* bot; // Offset: 0x948

    idAtomicString name; // Offset: 0x950

    idAITimers timers; // Offset: 0x958

    // logs finite state machine transitions
    idAIFSMCallback fsmCallback; // Offset: 0x1350

}; // Size: 0x1380
