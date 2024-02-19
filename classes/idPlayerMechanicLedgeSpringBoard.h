struct idPlayerMechanicLedgeSpringBoard : idPlayerMechanic
{
    enum springBoardState_t : int
    {
        NO_STATE = -1,
        SPRING_BOARD_IDLE = 0,
        SPRING_BOARD_CHECK_EDGE = 1,
        SPRING_BOARD_CHECK_WAIT = 2,
        SPRING_BOARD_JUMP = 3,
        SPRING_BOARD_RESTORE = 4,
        MAX_STATES = 5
    };

    enum springBoardTransition : int
    {
        NO_TRANSITION = -1,
        SB_JUMPED = 0,
        SB_EDGE_DETECTED = 1,
        SB_EDGE_JUMP = 2,
        SB_EDGE_RESTORE = 3,
        SB_RESET = 4,
        MAX_TRANSITIONS = 5
    };

    struct defferedQueryInfo_t
    {
        idHavokQueryId query; // Offset: 0x0

        // {{ units = m }}
        idVec3 start; // Offset: 0x8

        // {{ units = m }}
        idVec3 end; // Offset: 0x14

    }; // Size: 0x20

    typedef idInternalFsm < idPlayerMechanicLedgeSpringBoard , idPlayerMechanicLedgeSpringBoard::springBoardState_t , idPlayerMechanicLedgeSpringBoard::springBoardTransition > idSpringBoardFSM;

    idInternalFsm < idPlayerMechanicLedgeSpringBoard , idPlayerMechanicLedgeSpringBoard::springBoardState_t , idPlayerMechanicLedgeSpringBoard::springBoardTransition >* springBoardFSM; // Offset: 0x28

    idPlayerMechanicLedgeSpringBoard::defferedQueryInfo_t bottomQuery; // Offset: 0x30

    idPlayerMechanicLedgeSpringBoard::defferedQueryInfo_t topQuery; // Offset: 0x50

    // {{ units = m / s }}
    idVec3 prevVel; // Offset: 0x70

    // {{ units = m }}
    idVec3 lastOnGround; // Offset: 0x7C

    bool jumpAllowed; // Offset: 0x88

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextTimeStamp; // Offset: 0x90

    int prevClipMask; // Offset: 0x98

    int prevContentsMask; // Offset: 0x9C

    // sound to play when jumping on the ledge
    idSoundEvent* jumpSound; // Offset: 0xA0

}; // Size: 0xA8
