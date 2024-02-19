struct idDemonPlayerFSM
{
    struct queuedState_t
    {
        // state to go to
        demonPlayerState_t stateId; // Offset: 0x0

        // animData for the state
        int animData; // Offset: 0x4

        // server time of demonPlayer to transition to this state
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > serverStartTime; // Offset: 0x8

    }; // Size: 0x10

    // demon who owns us
    idDemonPlayer* ownerDemon; // Offset: 0x0

    // current state of the FSM
    demonPlayerState_t curStateId; // Offset: 0x8

    // previous state of the FSM
    demonPlayerState_t prevStateId; // Offset: 0xC

    // sparsely populated array of state pointers given to us through AddState
    idArray < idDemonPlayerFSMStateInterface * , 72 > states; // Offset: 0x10

    // queue of states to transition to when the time is right
    idList < idDemonPlayerFSM::queuedState_t , TAG_IDLIST , false > stateQueue; // Offset: 0x250

    // we've just had state modified by first serialize
    bool firstSerialize; // Offset: 0x268

}; // Size: 0x270
