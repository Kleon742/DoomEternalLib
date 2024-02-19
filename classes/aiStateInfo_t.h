struct aiStateInfo_t
{
    idAIState* state; // Offset: 0x0

    // the FSM this state is running
    idAIFiniteStateMachine* childFSM; // Offset: 0x8

    // the current update frequency of this state
    stateUpdateFrequency_t updateFrequency; // Offset: 0x10

    // true if an error occurred entering the state
    bool enterFailed; // Offset: 0x14

    // true if the state is temporarily uninterruptible
    bool tempUninterruptible; // Offset: 0x15

    // if true, the parent state (in the parent FSM) can interrupt, but nothing else can
    bool parentCanInterrupt; // Offset: 0x16

    // true if this state is turned off
    bool disabled; // Offset: 0x17

    // Is this state finished successfully?
    bool done; // Offset: 0x18

    // Is this state finished unsuccessfully?
    bool errored; // Offset: 0x19

}; // Size: 0x20
