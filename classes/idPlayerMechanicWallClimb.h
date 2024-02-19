struct idPlayerMechanicWallClimb : idPlayerMechanic
{
    enum state_t : int
    {
        NO_STATE = -1,
        INITIALIZE = 0,
        SEARCHING = 1,
        JUMP_TO_WALL = 2,
        NO_MOVE = 3,
        TO_POINTING = 4,
        POINTING_TRANSITION = 5,
        MOVING_TRANSITION = 6,
        MOVING = 7,
        MOUNT_LOOK = 8,
        SWITCH_HANDS = 9,
        MAX_STATES = 10
    };

    enum transitions_t : int
    {
        NO_TRANSITION = -1,
        INITIALIZE_to_SEARCHING = 0,
        SEARCHING_to_JUMP_TO_WALL = 1,
        JUMP_TO_WALL_to_NO_MOVE = 2,
        NO_MOVE_to_MOVING_TRANSITION = 3,
        NO_MOVE_to_MOVING = 4,
        NO_MOVE_to_SEARCHING = 5,
        NO_MOVE_to_MOUNT_LOOK = 6,
        NO_MOVE_to_SWITCH_HANDS = 7,
        NO_MOVE_to_TO_POINTING = 8,
        NO_MOVE_to_POINTING_TRANSITION = 9,
        POINTING_TRANSITION_to_MOUNT_LOOK = 10,
        MOUNT_LOOK_to_NO_MOVE = 11,
        MOUNT_LOOK_to_SEARCHING = 12,
        MOUNT_LOOK_to_SWITCH_HANDS = 13,
        MOUNT_LOOK_to_POINTING_TRANSITION = 14,
        MOUNT_LOOK_to_TO_POINTING = 15,
        POINTING_TRANSITION_to_NO_MOVE = 16,
        SWITCH_HANDS_to_MOUNT_LOOK = 17,
        SWITCH_HANDS_to_SEARCHING = 18,
        JUMP_TO_WALL_to_SEARCHING = 19,
        MOVING_TRANSITION_to_SEARCHING = 20,
        MOVING_TRANSITION_to_MOVING = 21,
        MOVING_TRANSITION_to_NO_MOVE = 22,
        MOVING_to_NO_MOVE = 23,
        MOVING_to_SEARCHING = 24,
        MOVING_to_MOVING_TRANSITION = 25,
        MAX_TRANSITIONS = 26
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

    enum moveAnim_t : int
    {
        CLIMB_UP_CYCLE_RIGHT = 0,
        CLIMB_UP_CYCLE_LEFT = 1,
        CLIMB_DOWN_CYCLE_RIGHT = 2,
        CLIMB_DOWN_CYCLE_LEFT = 3,
        CLIMB_RIGHT_CYCLE = 4,
        CLIMB_LEFT_CYCLE = 5,
        CLIMB_MAX = 6
    };

    enum moveTransAnim_t : int
    {
        CLIMB_TRANS_UP_RIGHT = 0,
        CLIMB_TRANS_UP_LEFT = 1,
        CLIMB_TRANS_DOWN_RIGHT = 2,
        CLIMB_TRANS_DOWN_LEFT = 3,
        CLIMB_TRANS_RIGHT = 4,
        CLIMB_TRANS_LEFT = 5,
        CLIMB_TRANS_OUT_RIGHT_MID = 6,
        CLIMB_TRANS_OUT_LEFT_MID = 7,
        CLIMB_TRANS_MAX = 8
    };

    enum lookAnim_t : int
    {
        LOOK_LEFT = 0,
        LOOK_LEFT_UP_45 = 1,
        LOOK_LEFT_UP_90 = 2,
        LOOK_RIGHT = 3,
        LOOK_RIGHT_UP_45 = 4,
        LOOK_RIGHT_UP_90 = 5,
        LOOK_MAX = 6
    };

    enum staticAnim_t : int
    {
        ANIM_IDLE = 0,
        ANIM_MOUNT_AIR = 1,
        ANIM_MOUNT_GROUND = 2,
        ANIM_TO_POINTING = 3,
        ANIM_FROM_POINTING = 4,
        ANIM_DISMOUNT = 5,
        ANIM_MAX = 6
    };

    struct wallClimbAnims_t
    {
        // climb climb up - right hand first
        idAtomicHandleT < aliasRefType_t > climb_up_cycle_right; // Offset: 0x0

        // climb up - left hand first
        idAtomicHandleT < aliasRefType_t > climb_up_cycle_left; // Offset: 0x8

        // climb down - right hand first
        idAtomicHandleT < aliasRefType_t > climb_down_cycle_right; // Offset: 0x10

        // climb down - left hand first
        idAtomicHandleT < aliasRefType_t > climb_down_cycle_left; // Offset: 0x18

        // climb right - right hand first
        idAtomicHandleT < aliasRefType_t > climb_right_cycle; // Offset: 0x20

        // climb left - left hand first
        idAtomicHandleT < aliasRefType_t > climb_left_cycle; // Offset: 0x28

        // climb into moving climb up - into right hand first
        idAtomicHandleT < aliasRefType_t > climb_into_up_right; // Offset: 0x30

        // climb up - into left hand first
        idAtomicHandleT < aliasRefType_t > climb_into_up_left; // Offset: 0x38

        // climb down - into right hand first
        idAtomicHandleT < aliasRefType_t > climb_into_down_right; // Offset: 0x40

        // climb down - into left hand first
        idAtomicHandleT < aliasRefType_t > climb_into_down_left; // Offset: 0x48

        // climb right -
        idAtomicHandleT < aliasRefType_t > climb_into_right; // Offset: 0x50

        // climb left -
        idAtomicHandleT < aliasRefType_t > climb_into_left; // Offset: 0x58

        // climb out of moving climb up - out of left hand first (right hand up closes this out)
        idAtomicHandleT < aliasRefType_t > climb_out_up_right; // Offset: 0x60

        // climb up - out of right hand first (left hand up closes this out)
        idAtomicHandleT < aliasRefType_t > climb_out_up_left; // Offset: 0x68

        // climb down - out of left hand first (right hand up closes this out)
        idAtomicHandleT < aliasRefType_t > climb_out_down_right; // Offset: 0x70

        // climb down - out of right hand first (left hand up closes this out)
        idAtomicHandleT < aliasRefType_t > climb_out_down_left; // Offset: 0x78

        // climb right -
        idAtomicHandleT < aliasRefType_t > climb_out_right; // Offset: 0x80

        // climb left -
        idAtomicHandleT < aliasRefType_t > climb_out_left; // Offset: 0x88

        // climb right mid break -
        idAtomicHandleT < aliasRefType_t > climb_out_right_mid; // Offset: 0x90

        // climb left mid break -
        idAtomicHandleT < aliasRefType_t > climb_out_left_mid; // Offset: 0x98

        // idle idle
        idAtomicHandleT < aliasRefType_t > idle; // Offset: 0xA0

        // to/from pointing to pointing (mount_look)
        idAtomicHandleT < aliasRefType_t > to_pointing; // Offset: 0xA8

        // from pointing (mount_look)
        idAtomicHandleT < aliasRefType_t > from_pointing; // Offset: 0xB0

        // mount mount from air
        idAtomicHandleT < aliasRefType_t > mount_air; // Offset: 0xB8

        // mount from ground
        idAtomicHandleT < aliasRefType_t > mount_ground; // Offset: 0xC0

        // dismount back dismount when facing the wall
        idAtomicHandleT < aliasRefType_t > dismount; // Offset: 0xC8

        // dismount back __edit aliasRef_t dismount_back_lefthand; dismount backwards left hand __edit aliasRef_t dismount_back_righthand; dismount backwards right hand  dismount forward __edit aliasRef_t dismount_forward_lefthand; dismount forward left hand __edit aliasRef_t dismount_forward_righthand; dismount forward right hand  dismount ground __edit aliasRef_t dismount_ground_lefthand; dismount ground left hand __edit aliasRef_t dismount_ground_righthand; dismount ground right hand  look around look left
        idAtomicHandleT < aliasRefType_t > look_left; // Offset: 0xD0

        // look left up 45
        idAtomicHandleT < aliasRefType_t > look_left_up_45; // Offset: 0xD8

        // look left up 90
        idAtomicHandleT < aliasRefType_t > look_left_up_90; // Offset: 0xE0

        // look right
        idAtomicHandleT < aliasRefType_t > look_right; // Offset: 0xE8

        // look right up 45
        idAtomicHandleT < aliasRefType_t > look_right_up_45; // Offset: 0xF0

        // look right up 90
        idAtomicHandleT < aliasRefType_t > look_right_up_90; // Offset: 0xF8

        // look right idle
        idAtomicHandleT < aliasRefType_t > look_right_idle; // Offset: 0x100

        // look left idle
        idAtomicHandleT < aliasRefType_t > look_left_idle; // Offset: 0x108

    }; // Size: 0x110

    typedef idInternalFsm < idPlayerMechanicWallClimb , idPlayerMechanicWallClimb::state_t , idPlayerMechanicWallClimb::transitions_t > idInternalFSM;

    // anim aliases for wall climb
    idPlayerMechanicWallClimb::wallClimbAnims_t anims; // Offset: 0x28

    // internal state machine for the object
    idInternalFsm < idPlayerMechanicWallClimb , idPlayerMechanicWallClimb::state_t , idPlayerMechanicWallClimb::transitions_t >* fsm; // Offset: 0x138

    idWallClimbTrace positioningLeft[2]; // Offset: 0x140

    idWallClimbTrace positioningRight[2]; // Offset: 0x2E0

    idWallClimbTrace positioningUp[2]; // Offset: 0x480

    idWallClimbTrace positioningDown[2]; // Offset: 0x620

    // straight out of the camera, through the crosshair
    idWallClimbTrace playerViewForwardTrace; // Offset: 0x7C0

    // center bounds, towards wall
    idWallClimbTrace centerForwardTrace; // Offset: 0x890

    // center left side bounds, towards wall
    idWallClimbTrace leftForwardTrace; // Offset: 0x960

    // center right side bounds, towards wall
    idWallClimbTrace rightForwardTrace; // Offset: 0xA30

    // center top of bounds, towards wall
    idWallClimbTrace topForwardTrace; // Offset: 0xB00

    // center bottom of bounds, towards wall
    idWallClimbTrace bottomForwardTrace; // Offset: 0xBD0

    // center bottom of bounds, straight down
    idWallClimbTrace bottomDownTrace; // Offset: 0xCA0

    // center top of bounds, straight up
    idWallClimbTrace topUpTrace; // Offset: 0xD70

    // player origin, forwards
    idWallClimbTrace originForwardTrace; // Offset: 0xE40

    // player origin + viewheight, forwards
    idWallClimbTrace eyeForwardTrace; // Offset: 0xF10

    // player origin + viewheight, forwards (x/y plane only, no z)
    idWallClimbTrace eyeFlattenedForwardTrace; // Offset: 0xFE0

    // "fx_wc_left_hand" tag, forwards. for impact fx
    idWallClimbTrace leftHandForwardTrace; // Offset: 0x10B0

    // "fx_wc_right_hand" tag, forwards. for impact fx
    idWallClimbTrace rightHandForwardTrace; // Offset: 0x1180

    idVec3 modelCameraPos; // Offset: 0x1250

    // {{ units = m }}
    idVec3 jumpToWallPos; // Offset: 0x125C

    idVec3 jumpToWallNormal; // Offset: 0x1268

    idVec3 lastValidPos_top; // Offset: 0x1274

    idVec3 lastValidPos_bottom; // Offset: 0x1280

    idVec3 lastValidPos_left; // Offset: 0x128C

    idVec3 lastValidPos_right; // Offset: 0x1298

    idVec3 lastValidTracePos; // Offset: 0x12A4

    idVec3 lastPosDuringJumpToWall; // Offset: 0x12B0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > attachedToWallTime; // Offset: 0x12C0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > enterNoMoveTime; // Offset: 0x12C8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > enterMovingTime; // Offset: 0x12D0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > enterMountLookTime; // Offset: 0x12D8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > disconnectFromWallTime; // Offset: 0x12E0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > outOfDeadZoneTime; // Offset: 0x12E8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > enteredSwitchHands; // Offset: 0x12F0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > abortJumpToWallTime; // Offset: 0x12F8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > exitMountLookDelayTime; // Offset: 0x1300

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > playAnimStartTime; // Offset: 0x1308

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > autoAttachTime; // Offset: 0x1310

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > hudLastActiveTime; // Offset: 0x1318

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > enterJumpToWallGameTime; // Offset: 0x1320

    // before this time, player is unable to attach to walls
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > disableWallClimbUntilTime; // Offset: 0x1328

    bool isStartingClimb; // Offset: 0x1330

    bool moveFinishedMidAnim; // Offset: 0x1331

    bool playAnimLooping; // Offset: 0x1332

    bool swapPointingHandsNow; // Offset: 0x1333

    bool ledgeGrabStarted; // Offset: 0x1334

    bool startIdleAnim; // Offset: 0x1335

    bool ignoreViewDeadZone; // Offset: 0x1336

    bool disableShooting; // Offset: 0x1337

    bool disconnectingFromWall; // Offset: 0x1338

    bool canActivateClimb; // Offset: 0x1339

    bool switchHandsFromLeftToRight; // Offset: 0x133A

    bool collidedWithWall; // Offset: 0x133B

    bool startedMovingTowardsWall; // Offset: 0x133C

    bool startedOnGround; // Offset: 0x133D

    bool hidFPHands; // Offset: 0x133E

    int atEdgeBits; // Offset: 0x1340

    int lastLedgeGrabFrame; // Offset: 0x1344

    int oldClipMask; // Offset: 0x1348

    int oldContents; // Offset: 0x134C

    int midCycleFrameNum; // Offset: 0x1350

    int prevCycleFrame; // Offset: 0x1354

    idPlayerMechanicWallClimb::staticAnim_t lastAnimPlayed; // Offset: 0x1358

    idPlayerMechanicWallClimb::transitions_t transitionFromMountLook; // Offset: 0x135C

    idPlayerMechanicWallClimb::lookAnim_t curArmReachingSideWeapon; // Offset: 0x1360

    idPlayerMechanicWallClimb::lookAnim_t curArmReachingSide; // Offset: 0x1364

    idPlayerMechanicWallClimb::lookAnim_t mountLookDir; // Offset: 0x1368

    idPlayerMechanicWallClimb::lookAnim_t clampLookDir; // Offset: 0x136C

    float mountLookTransitionSpeed; // Offset: 0x1370

    // this controls the players view
    idVec3 viewPos; // Offset: 0x1374

    idMat3 viewAxis; // Offset: 0x1380

    idAngles viewAngles; // Offset: 0x13A4

    idAngles controllerAngles; // Offset: 0x13B0

    bool userInputControlsViewAngles; // Offset: 0x13BC

    // this controls the arm reaching around anims
    float armReachingAngle; // Offset: 0x13C0

    float armReachingAngleGoal; // Offset: 0x13C4

    float armReachingTransitionAngle; // Offset: 0x13C8

    float original_bringUpAnimRate; // Offset: 0x13CC

    float original_bringDownAnimRate; // Offset: 0x13D0

    float original_hideWeaponAnimRate; // Offset: 0x13D4

    bool userInputControlsArmAngles; // Offset: 0x13D8

    bool waitingForEyeTraceAlignment; // Offset: 0x13D9

    float forwardmove; // Offset: 0x13DC

    float rightmove; // Offset: 0x13E0

    idVec3 stickDir; // Offset: 0x13E4

    idVec3 viewStickDir; // Offset: 0x13F0

    float slerpFrac; // Offset: 0x13FC

    // extra distance behind origin, where traces start (needed for transitioning between angled walls)
    float traceBackoffDistance; // Offset: 0x1400

    // {{ units = m }}
    float goalPlayerDistanceFromWall; // Offset: 0x1404

    // distance for wall detection traces
    float globalTraceDistance; // Offset: 0x1408

    idVec3 wallNormalVec; // Offset: 0x140C

    idVec3 wallRightVec; // Offset: 0x1418

    idVec3 wallUpVec; // Offset: 0x1424

    idVec3 climbDir; // Offset: 0x1430

    idVec3 attachToWallPos; // Offset: 0x143C

    idVec3 lastTopEndPos; // Offset: 0x1448

    idVec3 lastCenterEndPos; // Offset: 0x1454

    idVec3 lastBottomEndPos; // Offset: 0x1460

    idVec3 lastPlayerEndPos; // Offset: 0x146C

    // {{ units = m }}
    idVec3 previousOrigin; // Offset: 0x1478

    float save_ledgeGrabMinInput; // Offset: 0x1484

    bool isCylindricalWall; // Offset: 0x1488

    bool lerpToGoalInstantly; // Offset: 0x1489

    idVec3 clampedGoalMoveDir; // Offset: 0x148C

    idVec3 lastCyndricalCenter; // Offset: 0x1498

    idVec3 moveDir; // Offset: 0x14A4

    // {{ units = m / s }}
    float moveSpeed; // Offset: 0x14B0

    idVec3 goalMoveDir; // Offset: 0x14B4

    // {{ units = m / s }}
    float goalMoveSpeed; // Offset: 0x14C0

    // {{ units = m / s }}
    float goalSpeedAccelRate; // Offset: 0x14C4

    // {{ units = m / s }}
    float goalSpeedDecelRate; // Offset: 0x14C8

    idManagedClassPtr < idEntity > cylinderEntity; // Offset: 0x14D0

    float distFromCylinderCenter; // Offset: 0x14F0

    float entityDistanceToWall; // Offset: 0x14F4

    float lastRtMove; // Offset: 0x14F8

    float smoothVertAnimDir; // Offset: 0x14FC

    float smoothVertAnimFrac; // Offset: 0x1500

    bool settingInitialViewAngle; // Offset: 0x1504

    bool reachedSurfaceEdge; // Offset: 0x1505

    bool movingOppositeGoalDir; // Offset: 0x1506

    bool isTryingToMove; // Offset: 0x1507

    bool isLookingTowardsWall; // Offset: 0x1508

    idPlayerMechanicWallClimb::staticAnim_t pointingTransAnim; // Offset: 0x150C

    idStaticList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , 6 , false , TAG_IDLIST > climbAliasHandles; // Offset: 0x1510

    idStaticList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , 8 , false , TAG_IDLIST > climbIntoAliasHandles; // Offset: 0x1538

    idStaticList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , 8 , false , TAG_IDLIST > climbOutAliasHandles; // Offset: 0x1560

    idStaticList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , 6 , false , TAG_IDLIST > lookAliasHandles; // Offset: 0x1588

    idStaticList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , 1 , false , TAG_IDLIST > singleAliasHandles; // Offset: 0x15B0

    idStaticList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , 6 , false , TAG_IDLIST > staticAliasHandles; // Offset: 0x15D0

    idAlignedEntity* thirdPersonBody; // Offset: 0x15F8

    idAnimator_Synced* animatorSynced; // Offset: 0x1600

    idAnimator_Paused* animatorPaused; // Offset: 0x1608

    // tracks a chainsaw if we deselected it
    idManagedClassPtr < idWeapon > deselectedChainsaw; // Offset: 0x1610

    idEntity* attchdToMover; // Offset: 0x1630

    idWeapon* currentWeapon; // Offset: 0x1638

    idWeapon* previousWeapon; // Offset: 0x1640

    idPhysics* jumpToMoverWall; // Offset: 0x1648

    // movement used when player jumps around wall
    idDeclTable* viewPitchTable; // Offset: 0x1650

    // movement used when player moves around wall
    idDeclTable* verticalMoveTable; // Offset: 0x1658

    // movement used when player moves horizontally
    idDeclTable* horizontalMoveTable; // Offset: 0x1660

    // screen shake params used when player attaches to wall
    idDeclAdvancedViewShake* screenShakeAttachDecl; // Offset: 0x1668

    // sound played when player attaches to wall
    idSoundEvent* attachToWallSoundDecl; // Offset: 0x1670

    // sound played when player moves on the wall
    idSoundEvent* climbMoveSoundDecl; // Offset: 0x1678

    // sound played when player's move is finished
    idSoundEvent* climbMoveDoneSoundDecl; // Offset: 0x1680

    // sound played when player jumps off the wall
    idSoundEvent* jumpOffWallSoundDecl; // Offset: 0x1688

    // sound played when player releases wall to look around
    idSoundEvent* removeHandFromWallSoundDecl; // Offset: 0x1690

    // sound played when player re-grabs the wall, after looking around
    idSoundEvent* attachHandToWallSoundDecl; // Offset: 0x1698

    // scale applied to anim (and player movement) when overdrive is active
    float overdriveSpeedScale; // Offset: 0x16A0

    // Max distance to the wall for the player to be able to climb it. {{ units = m }}
    float distanceToWallToActivate; // Offset: 0x16A4

    // Min time (in secs) before you can reattach to a wall (after leaving a wall).
    float reconnectToWallDelaySec; // Offset: 0x16A8

    // 0 - <1: Percentage of movement from centered stick that's ignored for slow / jump moving.
    float deadZone; // Offset: 0x16AC

    // Delay between the time the stick is beyond the dead zone and the movement starts.
    float startMoveDelaySec; // Offset: 0x16B0

    // Velocity used when you jump off the wall. {{ units = m / s }}
    float jumpOffWallForce; // Offset: 0x16B4

    // Min delay after executing slow move, that another slow move will be triggered.
    float slowMoveDelayBetweenSec; // Offset: 0x16B8

    // When near an edge, clamped movement zeros any axis that's less than this value.
    float clampZeroEpsilon; // Offset: 0x16BC

    // Rate for the entry into the constrained view range, if restriction is necessary (degs/sec)
    float constrainedPitchAnglesRate; // Offset: 0x16C0

    // Rate for the entry into the constrained view range, if restriction is necessary (degs/sec)
    float constrainedYawAnglesRate; // Offset: 0x16C4

    // Maximum delta yaw, relative to surface normal
    float maxDeltaYaw_LookingAway; // Offset: 0x16C8

    // Max rotation angle (from UP), applied to jump based on direction the player's yaw is facing. (Small # jump more UPward .. Bigger # jumps more SIDEward.) (This is used in conjunction with pmec_wc_MaxDeltaYaw.)
    float maxJumpAngleScale; // Offset: 0x16CC

    // Allows the player to press 'melee' to disengage from wall during slow and jump move
    bool allowDisengageDuringMove; // Offset: 0x16D0

    // How many seconds before player will climb when first attaching to wall.
    float initialMovementDelaySec; // Offset: 0x16D4

    // Angle that defines whether to use verticalMove or horizontalMove table.
    float horizontalMoveTableAngle; // Offset: 0x16D8

    // min amount of time after attaching to wall that player is able to disconnect
    float minTimeBeforeAbleToDisconnectSec; // Offset: 0x16DC

    // Angle where player is considered looking off to the side and 'looking around' anims kick in.
    float lookingToSideAngle; // Offset: 0x16E0

    // Angle where player can no longer turn around (to look)
    float maxDeltaYawViewAngle; // Offset: 0x16E4

    // Minimum delta pitch (up), relative to surface normal, while facing the wall
    float pitchUp_Facing; // Offset: 0x16E8

    // Maximum delta pitch (down), relative to surface normal, while facing the wall
    float pitchDown_Facing; // Offset: 0x16EC

    // How far away from the wall the player will be when attached to and FACING the wall. {{ units = m }}
    float viewDistanceToWall_Facing; // Offset: 0x16F0

    // How far away from the wall the player will be when attached to the wall and looking off to the side. {{ units = m }}
    float viewDistanceToWall_LookingToSide; // Offset: 0x16F4

    // How far away from the wall the player will be when first jumping to wall. Helps keep player away from corners. {{ units = m }}
    float viewDistanceToWall_JumpingToWall; // Offset: 0x16F8

    // Minimum delta pitch (up), relative to surface normal, looking to the side
    float maxDeltaPitchUp_LookingToSide; // Offset: 0x16FC

    // Maximum delta pitch (down), relative to surface normal, looking to the side
    float maxDeltaPitchDown_LookingToSide; // Offset: 0x1700

    // Rate for the entry into the constrained view range, if restriction is necessary (degs/sec)
    float constrainedViewAnglesRate; // Offset: 0x1704

    // Max yaw angle where player is still allowed to climb wall. Must be less than "lookingToSideAngle".
    float maxDeltaYawFromWallToMove; // Offset: 0x1708

    // Angle from wall where, when crossed, a hand switch will occur and view will adjust appropriately
    float handSwitchYawAngleFromWall; // Offset: 0x170C

    // Rate for the entry into the constrained view range, if restriction is necessary (degs/sec), initial jump to the wall
    float constrainedAnglesRate_JumpingToWall; // Offset: 0x1710

    // Maximum delta yaw, relative to surface normal, initial jump to wall
    float maxDeltaYaw_JumpingToWall; // Offset: 0x1714

    // Minimum delta pitch (up), relative to surface normal, initial jump to the wall
    float maxDeltaPitchUp_JumpingToWall; // Offset: 0x1718

    // Maximum delta pitch (down), relative to surface normal, initial jump to the wall
    float maxDeltaPitchDown_JumpingToWall; // Offset: 0x171C

    // Speed at which view is adjusted (angles per sec).
    float viewAdjustRate; // Offset: 0x1720

    // Angle at which repulsor will remove player's downward movement. ( should be less than pmec_wc_MaxDeltaPitchDown_Facing )
    float repulsorUpAngle; // Offset: 0x1724

    // Angle applied to view to determine jump direction.
    float jumpFromWallAngle; // Offset: 0x1728

    // Angle (from looking at wall) that allows you to jump off the wall.
    float allowedToJumpAngleFromWall; // Offset: 0x172C

    // Adjustment made to current speed, to move it towards the goal speed. (lower number more floaty, bigger number more abrupt change) {{ units = m / s }}
    float goalSpeedVerticalAccelRate; // Offset: 0x1730

    // Adjustment made to current speed, to move it towards the goal speed. (lower number more floaty, bigger number more abrupt change) {{ units = m / s }}
    float goalSpeedHorizontalAccelRate; // Offset: 0x1734

    // Adjustment made to current speed, to move it towards the goal speed. (lower number more floaty, bigger number more abrupt change) {{ units = m / s }}
    float goalSpeedVerticalJumpAccelRate; // Offset: 0x1738

    // Adjustment made to current speed, to move it towards the goal speed. (lower number more floaty, bigger number more abrupt change) {{ units = m / s }}
    float goalSpeedHorizontalJumpAccelRate; // Offset: 0x173C

    // Adjustment made to current speed, to move it towards the goal speed. (lower number more floaty, bigger number more abrupt change) {{ units = m / s }}
    float goalSpeedVerticalDecelRate; // Offset: 0x1740

    // Adjustment made to current speed, to move it towards the goal speed. (lower number more floaty, bigger number more abrupt change) {{ units = m / s }}
    float goalSpeedHorizontalDecelRate; // Offset: 0x1744

    // Speed at which player moves towards and locks onto wall. {{ units = m / s }}
    float jumpToWallSpeed; // Offset: 0x1748

    // Adjustment made to current direction, to move it towards the goal dir.
    float goalDirAdjustRate; // Offset: 0x174C

    // pressing crouch while on wall, drops player from the wall
    bool crouchToReleaseFromWall; // Offset: 0x1750

    // If true, requires player to release 'jump' button and repress it to perform another 'jump' move. Otherwise, just holding the button will work.
    bool releaseAndPressToJump; // Offset: 0x1751

    // If true, camera automatically orients up the wall.
    bool autoOrientUpwardWhenAttachingToWall; // Offset: 0x1752

    // 0 - 1 percentage of arm reaching out anim to use as transition moving to <--> from wall
    float transitionFrac; // Offset: 0x1754

    // arm reaching out transition, rotation speed
    float transitionSpeed; // Offset: 0x1758

    // overdrive decl
    idDeclStatusEffect* overdriveDecl; // Offset: 0x1760

    // text displayed when you can wall climb
    idStrId wallClimbText; // Offset: 0x1768

    // scalar (greater than 0) applied to any damage taken by player while on a wall
    float playerDamageMitigationScale; // Offset: 0x176C

}; // Size: 0x1770
