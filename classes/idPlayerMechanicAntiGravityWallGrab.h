struct idPlayerMechanicAntiGravityWallGrab : idPlayerMechanic
{
    enum state_t : int
    {
        NO_STATE = -1,
        INITIALIZE = 0,
        SEARCHING = 1,
        JUMP_TO_WALL = 2,
        NO_MOVE = 3,
        MOUNT_LOOK = 4,
        MAX_STATES = 5
    };

    enum transitions_t : int
    {
        NO_TRANSITION = -1,
        INITIALIZE_to_SEARCHING = 0,
        SEARCHING_to_JUMP_TO_WALL = 1,
        JUMP_TO_WALL_to_NO_MOVE = 2,
        NO_MOVE_to_SEARCHING = 3,
        NO_MOVE_to_MOUNT_LOOK = 4,
        MOUNT_LOOK_to_NO_MOVE = 5,
        MOUNT_LOOK_to_SEARCHING = 6,
        JUMP_TO_WALL_to_SEARCHING = 7,
        MAX_TRANSITIONS = 8
    };

    enum edge_t : int
    {
        EDGE_NONE = 0,
        EDGE_TOP = 1,
        EDGE_BOTTOM = 2,
        EDGE_LEFT = 4,
        EDGE_RIGHT = 8,
        EDGE_ALL_OFF = 15
    };

    typedef idInternalFsm < idPlayerMechanicAntiGravityWallGrab , idPlayerMechanicAntiGravityWallGrab::state_t , idPlayerMechanicAntiGravityWallGrab::transitions_t > idInternalFSM;

    // internal state machine for the object
    idInternalFsm < idPlayerMechanicAntiGravityWallGrab , idPlayerMechanicAntiGravityWallGrab::state_t , idPlayerMechanicAntiGravityWallGrab::transitions_t >* fsm; // Offset: 0x28

    idAntiGravityWallClimbTrace centerForwardTrace; // Offset: 0x30

    idAntiGravityWallClimbTrace leftForwardTrace; // Offset: 0xD8

    idAntiGravityWallClimbTrace rightForwardTrace; // Offset: 0x180

    idAntiGravityWallClimbTrace topForwardTrace; // Offset: 0x228

    idAntiGravityWallClimbTrace bottomForwardTrace; // Offset: 0x2D0

    idAntiGravityWallClimbTrace bottomDownTrace; // Offset: 0x378

    // {{ units = m }}
    idVec3 jumpToWallHitPos; // Offset: 0x420

    idVec3 jumpToWallNormal; // Offset: 0x42C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > disconnectFromWallTime; // Offset: 0x438

    bool lookingAwayFromWall; // Offset: 0x440

    bool disconnectingFromWall; // Offset: 0x441

    bool canActivateClimb; // Offset: 0x442

    int onEdge; // Offset: 0x444

    int lastLedgeGrabFrame; // Offset: 0x448

    idVec3 wallNormalVec; // Offset: 0x44C

    idVec3 wallRightVec; // Offset: 0x458

    idVec3 wallFwdVec; // Offset: 0x464

    idVec3 climbDir; // Offset: 0x470

    idVec3 moveDir; // Offset: 0x47C

    idVec3 clampedMoveDir; // Offset: 0x488

    float save_ledgeGrabMinInput; // Offset: 0x494

    // {{ units = m }}
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > lerpViewPos; // Offset: 0x498

    bool settingInitialViewAngle; // Offset: 0x4C8

    bool reachedSurfaceEdge; // Offset: 0x4C9

    // movement used when not moving (player slowly drops)
    idDeclTable* noMoveTable; // Offset: 0x4D0

    // screen shake params used when player attaches to wall
    idDeclAdvancedViewShake* screenShakeAttachDecl; // Offset: 0x4D8

    // sound played when player attaches to wall
    idSoundEvent* attachToWallSoundDecl; // Offset: 0x4E0

    // sound played when player moves on the wall
    idSoundEvent* climbMoveSoundDecl; // Offset: 0x4E8

    // sound played when player is not directly moving but being dragged down by gravity
    idSoundEvent* dragDownSoundDecl; // Offset: 0x4F0

    // sound played when player jumps off the wall
    idSoundEvent* jumpOffWallSoundDecl; // Offset: 0x4F8

}; // Size: 0x500
