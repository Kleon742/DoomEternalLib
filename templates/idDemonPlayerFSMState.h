// idDemonPlayerFSMState < idDemonPlayer >
template <typename _type_>
struct idDemonPlayerFSMState : _type_FSMStateInterface
{
    // demon who owns us and our fsm
    _type_* ownerDemon; // Offset: 0x8

    // fsm we belong to
    _type_FSM* fsm; // Offset: 0x10

    // state we represent
    demonPlayerState_t stateId; // Offset: 0x18

    // whether we've received a call to AnimEvent_ExitDemonPlayerState for our state
    bool recievedExitAnimEvent; // Offset: 0x1C

    // hint for how we chose the anim we did. Useful for making the same choice remotely
    int animData; // Offset: 0x20

    // server time we entered this state
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > serverStartTime; // Offset: 0x28

}; // Size: 0x30
