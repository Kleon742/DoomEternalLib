// idInternalFsm < idPlayer , idPlayer::playerState_t , idPlayer::playerTransition_t >
template <typename _type_>
struct idInternalFsm
{
    // idInternalFsm < idPlayer , idPlayer::playerState_t , idPlayer::playerTransition_t >::StateRegistration_t
    struct StateRegistration_t
    {
        // enter portion of our state
        idInternalFsm < _type_ , _type_::playerState_t , _type_::playerTransition_t >::TransitionStatePtr enterStateFn; // Offset: 0x0

        // service portion of our state
        idInternalFsm < _type_ , _type_::playerState_t , _type_::playerTransition_t >::ServiceStatePtr serviceStateFn; // Offset: 0x8

        // exit portion of our state
        idInternalFsm < _type_ , _type_::playerState_t , _type_::playerTransition_t >::TransitionStatePtr exitStateFn; // Offset: 0x10

    }; // Size: 0x18

    // flushing mechanism is active
    bool flushingStates; // Offset: 0x0

    fsmFlushType_t flushType; // Offset: 0x4

    // the next active state
    _type_::playerState_t nextStateId; // Offset: 0x8

    // the current active state
    _type_::playerState_t activeStateId; // Offset: 0xC

    // the previously active state, used to determine enter/exit of states
    _type_::playerState_t previousStateId; // Offset: 0x10

    // the currently active transition enumeration
    _type_::playerTransition_t activeTransitionId; // Offset: 0x14

    // dynamic registration of state delegates
    idInternalFsm < _type_ , _type_::playerState_t , _type_::playerTransition_t >::StateRegistration_t* statesList[_type_::MAX_STATES]; // Offset: 0x18

    // implementation of our transitions as composite values
    idList < idFSMTransitionComposite , TAG_IDLIST , false > transitionsList; // Offset: 0x70

    // who owns this fsm
    _type_* ownerObject; // Offset: 0x88

}; // Size: 0x90
