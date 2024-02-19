struct idHavokPhysics_Player : idHavokPhysics_Actor
{
    enum enum_C901 : int
    {
        SHAPE_STAND = 0,
        SHAPE_CROUCH = 1,
        SHAPE_PRONE = 2,
        SHAPE_SWIM = 3,
        SHAPE_WANDERER = 4,
        SHAPE_PIPECRAWL = 5,
        SHAPE_DEAD = 6,
        SHAPE_SPRINT_SLIDE = 7,
        SHAPE_WHEELCHAIR = 8,
        NUM_SHAPES = 9
    };

    enum cmdScaleFlags_t : int
    {
        CMDSCALE_FLAG_NONE = 0,
        CMDSCALE_FLAG_IGNORE_UPMOVE = 1
    };

    struct waterInfo_t
    {
        idPhysics* waterBody; // Offset: 0x0

        float waterLevel; // Offset: 0x8

        float surfHeight; // Offset: 0xC

    }; // Size: 0x10

    float maxJumpHeight; // Offset: 0x3CB0

    float jumpHeightScale; // Offset: 0x3CB4

    idHavokCollision* havokCollision; // Offset: 0x3CB8

    int currentShapeIndex; // Offset: 0x3CC0

    int currentHavokBodyShapeIndex; // Offset: 0x3CC4

    idHavokShapePointer rigidShapes[9]; // Offset: 0x3CC8

    idHavokShapePointer traceShapes[9]; // Offset: 0x3D10

    idHavokShapePointer traceStepupShapes[9]; // Offset: 0x3D58

    float stepUpSize[9]; // Offset: 0x3DA0

    int currentMotion; // Offset: 0x3DC4

    int motionInAir; // Offset: 0x3DC8

    int motionOnGround; // Offset: 0x3DCC

    idHavokPhysics_WaterValues* waterValues; // Offset: 0x3DD0

    waterThresholdState_t currentWaterThresholdState; // Offset: 0x3DD8

    idUserCmd command; // Offset: 0x3DE0

    idUserCmd prevcmd; // Offset: 0x3E78

    idAngles viewAngles; // Offset: 0x3F10

    idAngles deltaViewAngles; // Offset: 0x3F1C

    playerPState_t current; // Offset: 0x3F28

    playerPState_t previous; // Offset: 0x3FE0

    idVec3 prevPos; // Offset: 0x4098

    idVec3 debugPrevPos; // Offset: 0x40A4

    idVec3 pushVelocity; // Offset: 0x40B0

    idSpawnId lastPusherEntity; // Offset: 0x40BC

    // spring controlling the step-up and crouch for the view
    idSpring < idVec1 > stepUpSpring; // Offset: 0x40C0

    float keepDistance; // Offset: 0x40F0

    float moveSpeed; // Offset: 0x40F4

    // if > 0 then use
    float accelerationOverride; // Offset: 0x40F8

    float moveSpeedOverride; // Offset: 0x40FC

    idPhysics* groundPhysics; // Offset: 0x4100

    idEntity* ownerHandlerEntity; // Offset: 0x4108

    bool (*ownerJumpHandler)(spawnId_t spawnId , const idVec3 & pos , const idVec3 & forward , const idVec3 & right , const idVec3 & up , const idUserCmd & userCmd); // Offset: 0x4110

    bool (*ownerCrouchHandler)(spawnId_t spawnId , const idVec3 & pos , const idVec3 & forward , const idVec3 & right , const idVec3 & up , const idUserCmd & userCmd); // Offset: 0x4118

    bool (*ownerCrouchJumpHandler)(spawnId_t spawnId , const idVec3 & pos , const idVec3 & forward , const idVec3 & right , const idVec3 & up , const idUserCmd & userCmd); // Offset: 0x4120

    bool (*ownerLandHandler)(spawnId_t spawnId , float val); // Offset: 0x4128

    bool (*ownerWandererHandler)(spawnId_t spawnId , bool val , bool val2); // Offset: 0x4130

    bool (*ownerProneHandler)(spawnId_t spawnId); // Offset: 0x4138

    bool (*ownerGroundPoundHandler)(spawnId_t spawnId); // Offset: 0x4140

    bool (*ownerStandFailHandler)(spawnId_t spawnId); // Offset: 0x4148

    void (*ownerTranslatedHandler)(spawnId_t spawnId , const idVec3 & translation); // Offset: 0x4150

    void (*ownerRotatedHandler)(spawnId_t spawnId , const idRotation & rotation); // Offset: 0x4158

    void (*ownerPusherInfoHandler)(spawnId_t spawnId , spawnId_t pusherId); // Offset: 0x4160

    void (*ownerCrusherInfoHandler)(spawnId_t spawnId , spawnId_t crusherId); // Offset: 0x4168

    bool canCrouch; // Offset: 0x4170

    bool canSprintSlide; // Offset: 0x4171

    bool forcedClientCrouchState; // Offset: 0x4172

    bool canWaterJump; // Offset: 0x4173

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastCrouchToggleCommandTime; // Offset: 0x4178

    int jumpCount; // Offset: 0x4180

    int hasJumpedCount; // Offset: 0x4184

    int hasDoubleJumpedCount; // Offset: 0x4188

    int maxAllowedJumps; // Offset: 0x418C

    int extraJumpCount; // Offset: 0x4190

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastJumpTime; // Offset: 0x4198

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDoubleJumpTime; // Offset: 0x41A0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > wandererActivationTimeOut; // Offset: 0x41A8

    bool okToTriggerSecondWandererJumpPress; // Offset: 0x41B0

    int groundSurfaceFlags; // Offset: 0x41B4

    int groundContentFlags; // Offset: 0x41B8

    surfTypes_t groundSurfaceType; // Offset: 0x41BC

    idVec3 groundContactNormal; // Offset: 0x41C0

    trace_t groundTrace; // Offset: 0x41CC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTime; // Offset: 0x4250

    float gameSecPerFrame; // Offset: 0x4258

    // charge
    bool charging; // Offset: 0x425C

    bool airbornCharge; // Offset: 0x425D

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeEndTime; // Offset: 0x4260

    // {{ units = m / s }}
    idVec3 chargeVelocity; // Offset: 0x4268

    bool useCrouchClipWhenDead; // Offset: 0x4274

    bool freeFallWhenDead; // Offset: 0x4275

    bool upMoveActiveInAir; // Offset: 0x4276

    bool startedOnGround; // Offset: 0x4277

    // {{ units = m / s }}
    float minimumThrownOffGroundVelocity; // Offset: 0x4278

    // {{ units = m / s }}
    float playerSpeed; // Offset: 0x427C

    float walkSpeedModifier; // Offset: 0x4280

    // {{ units = 1 / s }}
    float walkAccelerate; // Offset: 0x4284

    // {{ units = 1 / s }}
    float airAccelerate; // Offset: 0x4288

    // {{ units = 1 / s }}
    float flyAccelerate; // Offset: 0x428C

    float waterAccelerate; // Offset: 0x4290

    // {{ units = m / s }}
    float walkSpeed; // Offset: 0x4294

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentGameTime; // Offset: 0x4298

    // gets multiplied against final air move speed component by component
    idVec3 airSpeedScalars; // Offset: 0x42A0

    bool allowEnglishScaleOnFirstJump; // Offset: 0x42AC

    float forwardMoveScale; // Offset: 0x42B0

    float rightMoveScale; // Offset: 0x42B4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTimePerFrame; // Offset: 0x42B8

    bool inhibitJump; // Offset: 0x42C0

    // {{ units = 1 / s }}
    float walkFriction; // Offset: 0x42C4

    // {{ units = 1 / s }}
    float airFriction; // Offset: 0x42C8

    // {{ units = 1 / s }}
    float doubleJumpFriction; // Offset: 0x42CC

    // independent control of friction z scale from none to full
    float doubleJumpFrictionZScale; // Offset: 0x42D0

    // {{ units = 1 / s }}
    float flyFriction; // Offset: 0x42D4

    // {{ units = 1 / s }}
    float waterFriction; // Offset: 0x42D8

    // {{ units = 1 / s }}
    float noGravityFriction; // Offset: 0x42DC

    // {{ units = 1 / s }}
    float knockbackFriction; // Offset: 0x42E0

    bool allowFriction; // Offset: 0x42E4

    multiHitTrace_t crushContacts; // Offset: 0x42E8

    // ----------------------- Demon Hover values ----------------------- {{ units = 1 / s }}
    float demonHoverFriction; // Offset: 0x44EC

    // {{ units = 1 / s }}
    float demonHoverAccelRate; // Offset: 0x44F0

    // {{ units = m / s }}
    float demonHoverTopVerticalSpeed; // Offset: 0x44F4

    // {{ units = m / s }}
    float demonHoverMaximumSpeed; // Offset: 0x44F8

    // {{ units = m / s }}
    float demonHoverGravitySpeed; // Offset: 0x44FC

    // {{ units = m / s }}
    float demonHoverVerticalBoost; // Offset: 0x4500

    // {{ units = m / s }}
    idVec3 demonHoverBaseVel; // Offset: 0x4504

    // ----------------------- Spectator Hover values ----------------------- {{ units = 1 / s }}
    float spectatorHoverFriction; // Offset: 0x4510

    // {{ units = 1 / s }}
    float spectatorHoverAccelRate; // Offset: 0x4514

    // {{ units = m / s }}
    float spectatorHoverTopVerticalSpeed; // Offset: 0x4518

    // {{ units = m / s }}
    float spectatorHoverMaximumSpeed; // Offset: 0x451C

    // {{ units = m / s }}
    float spectatorHoverGravitySpeed; // Offset: 0x4520

    // {{ units = m / s }}
    float spectatorHoverVerticalBoost; // Offset: 0x4524

    float spectatorHoverTotalSpeedScale; // Offset: 0x4528

    // ------------------------ blocked player-controlled acceleration (used to prevent player moving in a 'blocked' direction--as in NPC pushing player) ------------------------ amount to block acceleration (usually 0 or 1, but could dampen acceleration, if desired)
    float blockedAccelerationPercent; // Offset: 0x452C

    // direction of acceleration to block (does not block if player thrusts away or perpendicular)
    idVec3 blockedAccelerationVec; // Offset: 0x4530

    float fallSpeed; // Offset: 0x453C

    playerExplicitMove_t explicitMove; // Offset: 0x4540

    idStaticList < idHavokPhysics_Player::waterInfo_t , 3 , false , TAG_IDLIST > waterInfos; // Offset: 0x4588

    // {{ units = m }}
    float waterBreachlevel; // Offset: 0x45D0

    float waterBoostScale; // Offset: 0x45D4

    idPhysics* waterBody; // Offset: 0x45D8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastGroundTime; // Offset: 0x45E0

    float lastGroundHeight; // Offset: 0x45E8

    idHavokMultiHitQueryId groundQueryId; // Offset: 0x45F0

    idStr traceDebugString; // Offset: 0x45F8

    // ------------------------ water movement ------------------------
    float currentWaterSurfaceHeight; // Offset: 0x4628

    idVec3 timedPushVelocity; // Offset: 0x462C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timedPushTimeLeft; // Offset: 0x4638

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timedPushTime; // Offset: 0x4640

    bool timedPushAltCurve; // Offset: 0x4648

    bool timedPushIgnoreInput; // Offset: 0x4649

    bool timedPushlocalDir; // Offset: 0x464A

    // {{ units = m / ( s * s ) }}
    idVec3 gravityBeforeZeroG; // Offset: 0x464C

    idVec3 gravityVector; // Offset: 0x4658

    float gravityScale; // Offset: 0x4664

    idVec3 gravityNormal; // Offset: 0x4668

    idVec3 groundNormal; // Offset: 0x4674

    idVec3 groundVelocity; // Offset: 0x4680

    idVec3 groundPoint; // Offset: 0x468C

    float groundDistance; // Offset: 0x4698

    idVec3 viewForward; // Offset: 0x469C

    idVec3 viewRight; // Offset: 0x46A8

    // TODO: remove?
    float frametime; // Offset: 0x46B4

    float customRadius; // Offset: 0x46B8

    float customHeight; // Offset: 0x46BC

    float customOffset; // Offset: 0x46C0

    float customStepUp; // Offset: 0x46C4

    bool walking; // Offset: 0x46C8

    bool groundPounding; // Offset: 0x46C9

    idTypesafeTime < long long , microsecondUnique_t , 1000000 > curTimeHkUs; // Offset: 0x46D0

    idTypesafeTime < long long , microsecondUnique_t , 1000000 > prevTimeHkUs; // Offset: 0x46D8

    idTypesafeTime < long long , microsecondUnique_t , 1000000 > timeStepHkUs; // Offset: 0x46E0

    idStaticList < int , 8 , false , TAG_IDLIST > groundBodies; // Offset: 0x46E8

    idStaticList < idSpawnId , 8 , false , TAG_IDLIST > groundEntities; // Offset: 0x4720

    pusherInfo_t pusherInfo; // Offset: 0x4758

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > jumpBlockedTime; // Offset: 0x4798

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastJumpChance; // Offset: 0x47A0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > tickTime; // Offset: 0x47A8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > knockBackEndsAt; // Offset: 0x47B0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pushEndsAt; // Offset: 0x47B8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > groundPoundStartTime; // Offset: 0x47C0

    // extreme friction this frame (resets after applied)
    bool overrideFriction; // Offset: 0x47C8

    idSpawnId ownerSpawnId; // Offset: 0x47CC

    // {{ units = m }}
    float maxDoubleJumpHeight; // Offset: 0x47D0

    float doubleJumpSpeedScale; // Offset: 0x47D4

    float doubleJumpAirEnglishScale; // Offset: 0x47D8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > doubleJumpWindowTimeOffset; // Offset: 0x47E0

    // TODO ERE: Is this value needed?
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > doubleJumpWindowDuration; // Offset: 0x47E8

    // {{ units = m / ( s * s ) }}
    idVec3 doubleJumpGravityVec; // Offset: 0x47F0

    // flag when interrupted - to ignore doubleJumpFriction
    bool doubleJumpInterrupted; // Offset: 0x47FC

    // {{ units = m }}
    idVec3 lastOnGroundPosition; // Offset: 0x4800

    bool wallClimbing; // Offset: 0x480C

    bool doubleJumpNeedsRelease; // Offset: 0x480D

    bool doubleJumpEnabled; // Offset: 0x480E

    bool dashActive; // Offset: 0x480F

    float dashMoveScale; // Offset: 0x4810

    idDeclTable* dashMoveTable; // Offset: 0x4818

    // {{ units = m }}
    float spectatorMaxDistance; // Offset: 0x4820

    // {{ units = m }}
    idVec3 spectatorOrigin; // Offset: 0x4824

    // {{ units = m }}
    idVec3 prevLastOnGroundPosition[5]; // Offset: 0x4830

    float groundTraceDistance; // Offset: 0x486C

}; // Size: 0x4870
