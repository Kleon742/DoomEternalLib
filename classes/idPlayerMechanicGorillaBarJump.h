struct idPlayerMechanicGorillaBarJump : idPlayerMechanic
{
    enum gorillaBarState_t : int
    {
        NO_STATE = -1,
        BAR_JUMP_IDLE = 0,
        BAR_JUMP_CHECK_TRIGGER = 1,
        BAR_SONIC_BOOM = 2,
        BAR_JUMP_SWING = 3,
        BAR_GORILLA_JUMP = 4,
        BAR_JUMP_RESTORE = 5,
        MAX_STATES = 6
    };

    enum gorillaBarTransition : int
    {
        NO_TRANSITION = -1,
        GBJ_JUMPED = 0,
        GBJ_SONIC_BOOM = 1,
        GBJ_TRIGGER_JUMP = 2,
        GBJ_EDGE_JUMP = 3,
        GBJ_EDGE_RESTORE = 4,
        GBJ_RESET = 5,
        MAX_TRANSITIONS = 6
    };

    typedef idInternalFsm < idPlayerMechanicGorillaBarJump , idPlayerMechanicGorillaBarJump::gorillaBarState_t , idPlayerMechanicGorillaBarJump::gorillaBarTransition > idGorillaBarJumpFSM;

    idSpawnId entityList[10]; // Offset: 0x28

    idInternalFsm < idPlayerMechanicGorillaBarJump , idPlayerMechanicGorillaBarJump::gorillaBarState_t , idPlayerMechanicGorillaBarJump::gorillaBarTransition >* gorillaBarJumpFSM; // Offset: 0x50

    // {{ units = m / s }}
    idVec3 prevVel; // Offset: 0x58

    // {{ units = m }}
    idVec3 barOrigin; // Offset: 0x64

    idMat3 barAxis; // Offset: 0x70

    idVec3 barOriginOffset; // Offset: 0x94

    bool jumpRequestAllowed; // Offset: 0xA0

    int surfaceType; // Offset: 0xA4

    bool hidFPHands; // Offset: 0xA8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextTimeStamp; // Offset: 0xB0

    // {{ units = m / s }}
    float barForceOverride; // Offset: 0xB8

    // third person animation to play when doing the bar swing
    idAtomicHandleT < aliasRefType_t > swingAnimation; // Offset: 0xC0

    // max angle that player can be looking away from bar and still be a valid grab
    float maxLookAngleFromBar; // Offset: 0xC8

    // max angle that player view pos (to bar center) can be and still be a valid grab
    float maxPositionAngleFromBar; // Offset: 0xCC

    // screen shake params used when player executes grab
    idDeclAdvancedViewShake* screenShakeDecl; // Offset: 0xD0

    idHavokQueryId queryForwardTest; // Offset: 0xD8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUsedMonkeyBarWaitTime; // Offset: 0xE0

    idManagedClassPtr < idTrigger_GorillaBar > lastUsedMonkeyBar; // Offset: 0xE8

    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > swingAnimHandle; // Offset: 0x108

    idHavokGatherQueryId gatherQuery; // Offset: 0x110

    idVec3 thirdPersonGrabPos; // Offset: 0x118

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > uniqueTimeStamp; // Offset: 0x128

}; // Size: 0x130
