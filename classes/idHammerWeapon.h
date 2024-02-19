struct idHammerWeapon : idWeapon
{
    enum state_t : int
    {
        NO_STATE = -1,
        INITIALIZE = 0,
        IDLE = 1,
        ACTIVE = 2,
        LANDED = 3,
        RESET = 4,
        MAX_STATES = 5
    };

    enum transition_t : int
    {
        NO_TRANSITION = -1,
        INITIALIZE_to_IDLE = 0,
        IDLE_to_ACTIVE = 1,
        IDLE_to_LANDED = 2,
        ACTIVE_to_IDLE = 3,
        ACTIVE_to_LANDED = 4,
        LANDED_to_IDLE = 5,
        RESET_ALL = 6,
        RESET_to_IDLE = 7,
        MAX_TRANSITIONS = 8
    };

    struct hammerGroundTraceInfo_t
    {
        idHavokMultiHitQueryId groundQueryId; // Offset: 0x0

        bool isOnGround; // Offset: 0x8

    }; // Size: 0x10

    typedef idInternalFsm < idHammerWeapon , idHammerWeapon::state_t , idHammerWeapon::transition_t > idInternalFSM;

    // internal state machine for the hammer
    idInternalFsm < idHammerWeapon , idHammerWeapon::state_t , idHammerWeapon::transition_t >* fsm; // Offset: 0x3BA0

    // Dash vars
    idVec3 dashDir; // Offset: 0x3BA8

    idVec3 lastPos; // Offset: 0x3BB4

    idVec3 movementVector; // Offset: 0x3BC0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeStartActive; // Offset: 0x3BD0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeStartLand; // Offset: 0x3BD8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > slamStartTime; // Offset: 0x3BE0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > slamCancelTime; // Offset: 0x3BE8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextSlamTime; // Offset: 0x3BF0

    bool slamStarted; // Offset: 0x3BF8

    bool dashInhibited; // Offset: 0x3BF9

    float dashDist; // Offset: 0x3BFC

    float lastPlayerPitch; // Offset: 0x3C00

    float airCharge; // Offset: 0x3C04

    bool isFullyCharged; // Offset: 0x3C08

    bool slamFree; // Offset: 0x3C09

    bool slamInProgress; // Offset: 0x3C0A

    bool shouldAdjustPlayerPitch; // Offset: 0x3C0B

    bool slamming; // Offset: 0x3C0C

    // cache the result of the last activation, in case we leave our landed state too quickly for the hands to check it
    bool lastActivationTriggeredLanding; // Offset: 0x3C0D

    bool hammerDebugBarVisible; // Offset: 0x3C0E

    bool cancelDebugBarVisible; // Offset: 0x3C0F

    bool cooldownDebugBarVisible; // Offset: 0x3C10

    bool supermeterDebugBarVisible; // Offset: 0x3C11

    bool airMeterVisible; // Offset: 0x3C12

    int prevClipMask; // Offset: 0x3C14

    idHammerWeapon::hammerGroundTraceInfo_t groundTraceInfo; // Offset: 0x3C18

}; // Size: 0x3C28
