struct idDemonPlayer : idActor
{
    enum demonPlayerBlendAnim_t : int
    {
        DPBLENDANIM_PRIMARYFIRE = 0,
        DPBLENDANIM_SECONDARYFIRE = 1
    };

    enum demonTurnAnimState_t : int
    {
        DEMONTURNANIMSTATE_NONE = 0,
        DEMONTURNANIMSTATE_LEFT_45 = 1,
        DEMONTURNANIMSTATE_RIGHT_45 = 2,
        DEMONTURNANIMSTATE_LEFT_90 = 3,
        DEMONTURNANIMSTATE_RIGHT_90 = 4
    };

    struct guiInfo_t
    {
        // Icon to show for this Demon.
        idMaterial2* icon; // Offset: 0x0

        // Alternate icon to show for this Demon.
        idMaterial2* iconAlt; // Offset: 0x8

    }; // Size: 0x10

    struct summonedAIInfo_t
    {
        int maxAllowed; // Offset: 0x0

        idEntityDefRef aiType; // Offset: 0x8

        idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > ais; // Offset: 0x10

    }; // Size: 0x28

    struct demonRemoteInputInfo_t
    {
        // serverGameTime from last input from client (used to determine when we get a new input)
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastInputServerGameTime; // Offset: 0x0

        // Last real time in MS we got an input from the client
        idTypesafeTime < int , millisecondUnique_t , 1000 > lastUpdateTimeMS; // Offset: 0x8

        // Time it took between last two updates
        idTypesafeTime < int , millisecondUnique_t , 1000 > timeBetweenUpdatesMS; // Offset: 0xC

        // Previous two update positions {{ units = m }}
        idVec3 origins[2]; // Offset: 0x10

        // Previous two update view angles
        idAngles viewAngles[2]; // Offset: 0x28

        // Previous two update model angles
        idAngles modelAngles[2]; // Offset: 0x40

        // Previously set origin in the physics {{ units = m }}
        idVec3 previousSetOrigin; // Offset: 0x58

    }; // Size: 0x68

    struct lockonData
    {
        idManagedClassPtr < idPlayer > instigatorPlayer; // Offset: 0x0

        lockonState_t currentState; // Offset: 0x20

        // sound to play when lockon is acquiring
        idSoundEvent* lockon_acquiringSound; // Offset: 0x28

        // sound to play when lockon is locked
        idSoundEvent* lockon_lockedSound; // Offset: 0x30

        // sound to play when lockon is lost
        idSoundEvent* lockon_lost; // Offset: 0x38

        // sound to play when meathooked
        idSoundEvent* lockon_meathooked; // Offset: 0x40

        // sound to play when lockon is broken via ability
        idSoundEvent* lockon_broken; // Offset: 0x48

    }; // Size: 0x50

    struct trackingAnimatorInfo_t
    {
        // whether this demon should ever use this tracking
        bool enable; // Offset: 0x0

        // which headTrackingGroup to use in md6
        idStr trackingGroupName; // Offset: 0x8

        // which tag is the effector to point
        idStr focusTagName; // Offset: 0x38

        // which tag is the relative orientation determined from
        idStr orientationTagName; // Offset: 0x68

        // how fast can we pitch in degrees
        float pitchTurnRate; // Offset: 0x98

        // min pitch in degrees
        float minPitchClamp; // Offset: 0x9C

        // max pitch in degrees
        float maxPitchClamp; // Offset: 0xA0

        // how fast can we yaw in degrees
        float yawTurnRate; // Offset: 0xA4

        // min yaw in degrees
        float minYawClamp; // Offset: 0xA8

        // max yaw in degrees
        float maxYawClamp; // Offset: 0xAC

        // min yaw in degrees to keep tracking. will look forward beyond this
        float minYawToTrackClamp; // Offset: 0xB0

        // max yaw in degrees to keep tracking. will look forward beyond this
        float maxYawToTrackClamp; // Offset: 0xB4

        // offset to apply to target in degrees
        idAngles angleOffset; // Offset: 0xB8

    }; // Size: 0xC8

    struct perchConstants_t
    {
        struct releaseConstants_t
        {
            // Velocity resulting from the Prowler pushing off the wall when releasing from a Perch {{ units = m / s }}
            float velocity; // Offset: 0x0

            // Minimal movement value to consider the player moving off a perch {{ units = m }}
            float minMovement; // Offset: 0x4

            // Minimal dot product between the movement and perch axis to release off a perch
            float minDot; // Offset: 0x8

            // Distance to move the player off of the wall when the Prowler times out while perched {{ units = m }}
            float distanceOnTimeOut; // Offset: 0xC

        }; // Size: 0x10

        // Time before you can exit when arriving to perch
        idTypesafeTime < int , millisecondUnique_t , 1000 > arriveTime; // Offset: 0x0

        // Z offset to place the Prowler on the wall {{ units = m }}
        float wallZOffset; // Offset: 0x4

        // Offset from the wall (based on the normal) to place the Prowler {{ units = m }}
        float wallOffset; // Offset: 0x8

        // Eye offset from origin when perching from the wall {{ units = m }}
        idVec3 wallEyeOffset; // Offset: 0xC

        // Z offset for the POI from the eye position when perched on a wall {{ units = m }}
        float wallPOIZOffset; // Offset: 0x18

        // Z offset from the ceiling to the origin to place the Prowler {{ units = m }}
        float ceilingZOffset; // Offset: 0x1C

        // Eye offset from origin when perching from the ceiling {{ units = m }}
        idVec3 ceilingEyeOffset; // Offset: 0x20

        // Z offset for the POI from the eye position when hanging {{ units = m }}
        float ceilingPOIZOffset; // Offset: 0x2C

        // How many attachment traces to issue to validate a perch
        int attachmentTestPoints; // Offset: 0x30

        // Attachment point radius from the center of clip {{ units = m }}
        float attachmentTestRadius; // Offset: 0x34

        // How far from a failed perch position to try again {{ units = m }}
        float alternatePlacementDistance; // Offset: 0x38

        // head tracking info while perched.
        idDemonPlayer::trackingAnimatorInfo_t perchHeadTrackingInfo; // Offset: 0x40

        // defines the parameters of the Prowler perch release
        idDemonPlayer::perchConstants_t::releaseConstants_t releaseConstants; // Offset: 0x108

    }; // Size: 0x118

    struct demonTurnAnimData_t
    {
        // If the angle between look dir and model dir is greater than this, we'll start turning
        float degThresholdStart; // Offset: 0x0

        // If the angle between look dir and model dir is less than this, we'll stop turning
        float degThresholdEnd; // Offset: 0x4

        // Min rate for turning anim playback
        float minPlaybackRate; // Offset: 0x8

        // Max rate for turning anim playback
        float maxPlaybackRate; // Offset: 0xC

        // If out dot is greater than this, we'll use minPlaybackRate for turning anim playback
        float minPlaybackRateDot; // Offset: 0x10

        // If out dot is less than this, we'll use maxPlaybackRate for turning anim playback
        float maxPlaybackRateDot; // Offset: 0x14

        // does demon have 45 degree turn anims?
        bool use45DegreeTurns; // Offset: 0x18

    }; // Size: 0x1C

    struct spawnAnimData_t
    {
        // Name of the node in the player's animWeb to play when this demon spawns
        idStr playerAnimNode; // Offset: 0x0

        // Whether to scale the player/demon during the demon spawning
        bool scaleEnable; // Offset: 0x30

        // How long from the start to scale up the player
        int scalePlayerDuration; // Offset: 0x34

        // Scale for the player to hit when the duration ends
        float scalePlayerEndScale; // Offset: 0x38

        // Scale for the demon to start at
        float scaleDemonStartScale; // Offset: 0x3C

        // When to start scaling up the demon from the start of the state
        idTypesafeTime < int , millisecondUnique_t , 1000 > scaleDemonStartTime; // Offset: 0x40

        // How long from the start time to scale up the demon
        idTypesafeTime < int , millisecondUnique_t , 1000 > scaleDemonDuration; // Offset: 0x44

        // first person spawn anim for the transformHands
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > spawnAnimAlias; // Offset: 0x48

        // playback scale applied when playing the spawn anim alias animation
        float spawnAnimPlaybackScale; // Offset: 0x4C

    }; // Size: 0x50

    struct dashAnimData_t
    {
        // first person dash left anim alias
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > firstPersonAliasLeft; // Offset: 0x0

        // first person dash right anim alias
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > firstPersonAliasRight; // Offset: 0x2

        // first person dash forward anim alias
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > firstPersonAliasForward; // Offset: 0x4

        // first person dash back anim alias
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > firstPersonAliasBack; // Offset: 0x6

        // first person anim blend time (in MS)
        idTypesafeTime < int , millisecondUnique_t , 1000 > firstPersonAnimBlendTimeMS; // Offset: 0x8

        // third person dash left anim alias
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > thirdPersonAliasLeft; // Offset: 0xC

        // third person dash right anim alias
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > thirdPersonAliasRight; // Offset: 0xE

        // third person dash forward anim alias
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > thirdPersonAliasForward; // Offset: 0x10

        // third person dash back anim alias
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > thirdPersonAliasBack; // Offset: 0x12

        // third person anim blend time (in MS)
        idTypesafeTime < int , millisecondUnique_t , 1000 > thirdPersonAnimBlendTimeMS; // Offset: 0x14

    }; // Size: 0x18

    struct healthGainOnKill_t
    {
        // min health that's given at upperHealthLimit and above
        float minAmount; // Offset: 0x0

        // max health that's given at lowerHealthLimit and below
        float maxAmount; // Offset: 0x4

        // lower health limit where maxAmount gets applied
        float lowerHealthLimit; // Offset: 0x8

        // upper health limit where minAmount gets applied
        float upperHealthLimit; // Offset: 0xC

    }; // Size: 0x10

    struct critHitFX_t
    {
        // FX condition to start/stop
        fxCondition_t fxCond; // Offset: 0x0

        // game time to stop
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x8

    }; // Size: 0x10

    struct idDemonPlayerExplicitMotion_t
    {
        idVec3 right; // Offset: 0x0

        idVec3 up; // Offset: 0xC

        idVec3 forward; // Offset: 0x18

        // {{ units = m }}
        idVec3 lastPos; // Offset: 0x24

        playerExplicitMove_t singleMove; // Offset: 0x30

    }; // Size: 0x74

    typedef void (idPlayer::*PlayerOverrideFovFunc)(float , gameTime_t);

    typedef idList < idManagedClassPtr < idEntity > > entityPtrList_t;

    // allows individual user commands to be inhibited
    idUCmdTracker::inhibitFlags_t inhibitFlags; // Offset: 0x4BD8

    // GUI info on this player.
    idDemonPlayer::guiInfo_t guiInfo; // Offset: 0x4BE0

    float damage; // Offset: 0x4BF0

    idVector < roundDamageData_t > roundOutgoingDamageData; // Offset: 0x4BF8

    idVector < roundDamageData_t > roundIncomingDamageData; // Offset: 0x4C10

    // enemy rocket launcher lockon data
    idDemonPlayer::lockonData lockonData; // Offset: 0x4C28

    idArray < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , 10 > flashEndTimes; // Offset: 0x4C78

    idUserCmd previousRemoteInput; // Offset: 0x4CC8

    // stores the offset from the pusher where we are currently located {{ units = m }}
    idVec3 pusherOffset; // Offset: 0x4D60

    // stores the last position we computed for a non local entity push {{ units = m }}
    idVec3 lastPushedPos; // Offset: 0x4D6C

    // the spawn id of the entity pushing us
    idSpawnId pusherSpawnId; // Offset: 0x4D78

    // fsm to handle the actor state of the demon
    idDemonPlayerFSM fsm; // Offset: 0x4D80

    // current state if we join in progress
    demonPlayerState_t joinInProgressState; // Offset: 0x4FF0

    // ticks up while alive
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > aliveTime; // Offset: 0x4FF8

    // last time aliveTime was updated
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > aliveTimeUpdatedTime; // Offset: 0x5000

    // most minutes alive thus far
    int mostMinutesAlive; // Offset: 0x5008

    // When we started being controlled, or 0 for never/unknown.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > controlStartedTime; // Offset: 0x5010

    // What's the max time we can have control, or 0 for infinite
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > maxControlTime; // Offset: 0x5018

    // When we revert to a human, or 0 for never.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > revertToHumanTime; // Offset: 0x5020

    // How many kills this demon has been credited with.
    int numberKills; // Offset: 0x5028

    // Teleportation Clip mask which defines what surfaces are considered solid for FX and render model placement
    contentsFlags_t solidSurfaceClipMask; // Offset: 0x502C

    // point we started our teleport from {{ units = m }}
    idVec3 teleportStartPos; // Offset: 0x5030

    // our orientation when we started teleporting (so we can lerp to teleportEndOrient)
    idMat3 teleportStartOrient; // Offset: 0x503C

    // point we're teleporting to {{ units = m }}
    idVec3 teleportEndPos; // Offset: 0x5060

    // normal of the surface we're teleporting to
    idVec3 teleportEndSurfaceNormal; // Offset: 0x506C

    // orientation of the model after teleport
    idMat3 teleportEndOrient; // Offset: 0x5078

    // what type of teleport are we currently performing
    prowlerTeleportType_t teleportCurrentType; // Offset: 0x509C

    // Type of current Teleport Target
    prowlerTeleportType_t teleportTargetType; // Offset: 0x50A0

    // defines the parameters of the Prowler perching
    idDemonPlayer::perchConstants_t perchConstants; // Offset: 0x50A8

    // Dimensions of the clip box to use when checking for a valid wall perch position {{ units = m }}
    idVec3 wallPerchBoundingBoxDimensions; // Offset: 0x51C0

    // Offset from the contact point on the wall for the clip box to use when checking for a valid wall perch position (X axis aligned with the wall normal) {{ units = m }}
    idVec3 wallPerchBoundingBoxOffset; // Offset: 0x51CC

    // The object that actually handles animating based on the anim web decl
    idAnimWebDemonPlayer* animWebAnimator; // Offset: 0x51D8

    // for aim-tracking of the head/torso
    idAnimator_AimTrackerDemonPlayer headTrackerAnimator; // Offset: 0x51E0

    // for aim-tracking of the left gun
    idAnimator_AimTracker leftGunTrackerAnimator; // Offset: 0x5328

    // for aim-tracking of the right gun
    idAnimator_AimTracker rightGunTrackerAnimator; // Offset: 0x5470

    // animator for playing additional torso blends
    idAnimator_Channel torsoChannelAnimator; // Offset: 0x55B8

    // animator for playing additive pain anims (cannot also be used for fire anims because they would interrupt each other)
    idAnimator_Channel painAdditiveAnimator; // Offset: 0x56C8

    // animator for playing exclusive additive anims (these will interrupt each other - caller is responsible for making sure they interact properly)
    idAnimator_Channel exclusiveAdditiveAnimator; // Offset: 0x57D8

    idHavokPhysics_Player physicsObjHavok; // Offset: 0x58E8

    // model axis
    idMat3 modelAxis; // Offset: 0xA158

    bool inputLocked; // Offset: 0xA17C

    // networked interpolation data for server to use for interpolating client input.
    idDemonPlayer::demonRemoteInputInfo_t demonRemoteInputInfo; // Offset: 0xA180

    // For derived demon types to set whether they die messily
    bool diesMessily; // Offset: 0xA1E8

    // For suppressing multiple messy deaths
    bool hasDiedMessily; // Offset: 0xA1E9

    // count of the number of times the transform has been reset on the controlling client
    int teleportCount; // Offset: 0xA1EC

    // Set to true in game challenge coop when spawning from ghost state is possible
    bool canSpawnFromGhosting; // Offset: 0xA1F0

    idFxSiphonUpdate siphonFxUpdate; // Offset: 0xA1F8

    // avoid updating the animations a frame after we just updated them. hack fix to bug
    bool skipNextThirdPersonAnimationUpdate; // Offset: 0xA248

    // which way our animation is turning us
    idDemonPlayer::demonTurnAnimState_t animTurning; // Offset: 0xA24C

    // We are playing moving anims
    bool animMoving; // Offset: 0xA250

    // array of the last MAX_VELOCITY_SAMPLES anim body velocities {{ units = m / s }}
    idArray < idVec3 , 5 > animBodyVelocitySamples; // Offset: 0xA254

    // last index used therefore stores last known computed animBodyLastVelocity
    int lastAnimBodyVelocityIndex; // Offset: 0xA290

    // The last known computed origin {{ units = m }}
    idVec3 animBodyLastOrigin; // Offset: 0xA294

    // current movement direction used for animation purposes {{ units = m }}
    idVec3 animMoveDir; // Offset: 0xA2A0

    // current look direction used for animation purposes
    idVec3 animLookDir; // Offset: 0xA2AC

    // current look direction quaternion used for animation purposes
    idQuat animLookQuat; // Offset: 0xA2B8

    // limits to what the player's input can control
    demonPlayerControlMode_t playerControlMode; // Offset: 0xA2C8

    // percentage of the anim motion to add to the player motion.
    float animMotionPower; // Offset: 0xA2CC

    // HACK: AnimMotion appears to run a few frames behind(animation moves ahead of physics) - if necessary you can set this to try and compensate.
    float animMotionNumFramesBehind; // Offset: 0xA2D0

    // Part of the Hack for anim motion # frames behind. {{ units = m }}
    idVec3 previousFrameAnimMotionDelta; // Offset: 0xA2D4

    // How does this demon normally move?
    pmtype_t defaultPlayerMovementType; // Offset: 0xA2E0

    // speed associated with walking anims/bob {{ units = m / s }}
    float walkSpeed; // Offset: 0xA2E4

    // speed associated with running full speed. also used for anims/bob {{ units = m / s }}
    float runSpeed; // Offset: 0xA2E8

    // speed used by some demons for a faster forward speed. {{ units = m / s }}
    float sprintSpeed; // Offset: 0xA2EC

    // ghost speed {{ units = m / s }}
    float ghostSpeed; // Offset: 0xA2F0

    // ghost input scale factor
    float ghostSpeedScale; // Offset: 0xA2F4

    // distance above demon origin we trace down from for ground trace {{ units = m }}
    float groundTraceDistance; // Offset: 0xA2F8

    // step height this demon uses navigating the world {{ units = m }}
    float maxStepHeight; // Offset: 0xA2FC

    // how high this demon can jump (if at all) {{ units = m }}
    float maxJumpHeight; // Offset: 0xA300

    // approximate height the demon can jump {{ units = m }}
    float doubleJumpHeight; // Offset: 0xA304

    // current speed is scaled by this amount
    float doubleJumpSpeedScale; // Offset: 0xA308

    // air english ability is scaled by this amount
    float doubleJumpAirEnglishScale; // Offset: 0xA30C

    // offset in MS from the start of the initial jump until the start of the double jump window
    idTypesafeTime < int , millisecondUnique_t , 1000 > doubleJumpWindowOffset; // Offset: 0xA310

    // duration in MS of the double jump window
    idTypesafeTime < int , millisecondUnique_t , 1000 > doubleJumpWindowDuration; // Offset: 0xA314

    // the view pitch change during the double jump
    float doubleJumpViewPitchChange; // Offset: 0xA318

    // how long the view pitch variation takes
    idTypesafeTime < int , millisecondUnique_t , 1000 > doubleJumpViewPitchDuration; // Offset: 0xA31C

    // do we trigger bounce pads?
    bool canUseBouncePad; // Offset: 0xA320

    // bounce pads should adjust their height by this amount for this demon {{ units = m }}
    float bouncePadHeightDelta; // Offset: 0xA324

    // minimal fall distance (peak to ground) for a regular fall impact {{ units = m }}
    float minFallLandHeight; // Offset: 0xA328

    // minimal fall distance (peak to ground) for a heavy fall impact {{ units = m }}
    float minFallLandHeavyHeight; // Offset: 0xA32C

    // angle of the taper at the bottom of the pencil collision clip model. if 0, uses cylinder instead of pencil
    float pencilCollisionAngle; // Offset: 0xA330

    // radius of the bottom of the pencil collision clip model. {{ units = m }}
    float pencilCollisionTaperRadius; // Offset: 0xA334

    // whether we set our team specific contents that blocks projectiles or not
    bool ignoreTeamSpecificContents; // Offset: 0xA338

    // velocity away from surface player is on, required to leave the ground. {{ units = m / s }}
    float thrownOffGroundVelocity; // Offset: 0xA33C

    // stop all fx when dash ability is used
    bool stopAllFXOnDash; // Offset: 0xA340

    // on primary fire, use secondary axis calculated from left weapon muzzle position
    bool calcSecondaryFireAxis; // Offset: 0xA341

    // Does this demon need to make use of the extra life system
    bool useExtraLives; // Offset: 0xA342

    // Maximum height of current fall/jump {{ units = m }}
    float peakFallHeight; // Offset: 0xA344

    // Which type of footstep land the next AnimEvent_Land should play
    footStepType_t footstepTypeForNextLand; // Offset: 0xA348

    // Which type of impact the next AnimEvent_LedgeGrabImpact should play
    footStepType_t footstepTypeForNextLedgeGrab; // Offset: 0xA34C

    // walk animation data, if not provided will default to the old motion code.
    idThirdPersonWalkAnimDatabase_t thirdPersonWalkAnimDatabase; // Offset: 0xA350

    // data for how to use the turn anims
    idDemonPlayer::demonTurnAnimData_t turnAnimData; // Offset: 0xAE98

    // all the head tracking info we need
    idDemonPlayer::trackingAnimatorInfo_t headTrackingInfo; // Offset: 0xAEB8

    // tracking for the left gun
    idDemonPlayer::trackingAnimatorInfo_t leftGunTrackingInfo; // Offset: 0xAF80

    // tracking for the right gun
    idDemonPlayer::trackingAnimatorInfo_t rightGunTrackingInfo; // Offset: 0xB048

    // whether the animation or demon state has disabled tracking temporarily
    bool trackingAnimatorsDisabled; // Offset: 0xB110

    // previous angles used for head tracking relative to model facing
    idAngles prevHeadTrackingAngles; // Offset: 0xB114

    // previous angles used for left gun tracking relative to model facing
    idAngles prevLeftGunTrackingAngles; // Offset: 0xB120

    // previous angles used for right gun tracking relative to model facing
    idAngles prevRightGunTrackingAngles; // Offset: 0xB12C

    // offset for the repulsor origin from the entity origin
    idVec3 repulsorOriginOffset; // Offset: 0xB138

    // radius to repulse friendlies by {{ units = m }}
    float friendlyRepulsorRadius; // Offset: 0xB144

    // radius to repulse enemies by {{ units = m }}
    float enemyRepulsorRadius; // Offset: 0xB148

    // whether to repulse enemies if they're still
    bool enemyRepulseOnlyMoving; // Offset: 0xB14C

    // method to use when repulsing enemies
    repulsorStyle_t enemyRepulsorStyle; // Offset: 0xB150

    // result of last deferred query for ground height
    trace_t groundHeightTrace; // Offset: 0xB154

    // Used to determine how close the ground is
    idHavokQueryId groundHeightTraceQuery; // Offset: 0xB1D8

    // deferred query to check if the groundHeightQuery returned a position that's valid for the pickup. if so we update lastValidPickupPosition
    idHavokQueryId validPickupQuery; // Offset: 0xB1E0

    // havok version of validPickupQuery
    idHavokQueryId validPickupQueryHavok; // Offset: 0xB1E8

    // last valid position to drop the pickup {{ units = m }}
    idVec3 lastValidPickupPosition; // Offset: 0xB1F0

    // last time we set a valid pickup position
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastValidPickupTime; // Offset: 0xB200

    // flag on server saying we need to call ReturnToPlayer for timeout reasons
    bool returnToPlayerTimeout; // Offset: 0xB208

    // flag on server saying we've called ReturnToPlayer
    bool hasReturnedToPlayer; // Offset: 0xB209

    // flag saying we were glory killed when ReturnToPlayer is called
    bool wasGloryKilled; // Offset: 0xB20A

    // flag saying we played a special death anim
    bool playedSpecialDeathAnim; // Offset: 0xB20B

    // idDeclDamage that killed us the last time we died
    idDeclDamage* lastKillingDamageDecl; // Offset: 0xB210

    // whether to enabled/disable jump for this demon
    bool jumpEnabled; // Offset: 0xB218

    // how many MS to delay between jumps
    int jumpDelayMS; // Offset: 0xB21C

    // next locally controlled gameTime we're allowed to jump
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextValidJumpTime; // Offset: 0xB220

    // flag that we should start a jump anim at the given time
    idNetEvent < 15 > jumpRequested; // Offset: 0xB228

    // flag that we should start a double jump anim at the given time
    idNetEvent < 15 > doubleJumpRequested; // Offset: 0xB240

    // if non-zero, we started a jump and this is the earliest time we can exit
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > jumpLaunchEndTime; // Offset: 0xB258

    // number of times we've requested a jump that we'll use to set jumpRequested from clients on the server
    int physicsHasJumpedCount; // Offset: 0xB260

    // number of times we've requested a double jump
    int physicsHasDoubleJumpedCount; // Offset: 0xB264

    // whether we're currently jumping or falling
    bool isJumpingOrFalling; // Offset: 0xB268

    // horns (or rockets) attached to the camera separate from hands and thirdPersonBody
    idDemonPlayerHorns demonHorns; // Offset: 0xB270

    // hands for the first person demon player.
    idDemonPlayerHands demonHands; // Offset: 0xC818

    // amount to offset the melee trace by when executed in 3rd person {{ units = m }}
    float thirdPersonMeleeTraceOffset; // Offset: 0x10050

    // lookdir that we serialize to clients. locally controlled demons will ignore.
    idVec3 serializedLookDir[2]; // Offset: 0x10054

    // look dir quaternion
    idQuat serializedLookQuat[2]; // Offset: 0x1006C

    // How fast do we lerp between eye offsets {{ units = m / s }}
    float eyeOffsetLerpSpeed; // Offset: 0x1008C

    // lerp the eye offset if it changes {{ __ts = m }}
    idInterpolate < idVec3 , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > eyeOffsetLerper; // Offset: 0x10090

    // unified third person hands + legs def (move to playerprops? Both player and demonplayer have it)
    idDeclEntityDef* thirdPersonBodyDef; // Offset: 0x100D8

    // unified third person hands + legs
    idManagedClassPtr < idAlignedEntity > thirdPersonBody; // Offset: 0x100E0

    // def for hands to show while transforming to a demon
    idDeclEntityDef* transformHandsDef; // Offset: 0x10100

    // hands to show while transforming to a demon
    idManagedClassPtr < idAlignedEntity > transformHands; // Offset: 0x10108

    idMat3 transformHandsAxis; // Offset: 0x10128

    // The camera that we will use to track this demon player
    idDemonPlayerCamera demonCamera; // Offset: 0x10150

    // interpolater to smoothly slide the third person camera in and out. {{ ___ts = m }}
    idInterpolateAccelDecelSine < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > demonCamDistance; // Offset: 0x101E8

    // interpolater to smoothly pitch the third person camera in and out.
    idInterpolateAccelDecelSine < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > demonCamPitch; // Offset: 0x10248

    // Anim web used for the demon player
    idDeclAnimWeb* animWeb; // Offset: 0x102A8

    // values used during the demon spawn state
    idDemonPlayer::spawnAnimData_t spawnAnimData; // Offset: 0x102B0

    // Displayed to other players so that they know what type of demon is on the map.
    idMaterial2* demonTypeIcon; // Offset: 0x10300

    // Primary Fire anim alias for 3rd person
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > torsoPrimaryFireAnimAlias; // Offset: 0x10308

    // Secondary Fire anim alias for 3rd person
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > torsoSecondaryFireAnimAlias; // Offset: 0x1030A

    // MS it takes to blend into/out of torso blends
    idTypesafeTime < int , millisecondUnique_t , 1000 > torsoChannelBlendMs; // Offset: 0x1030C

    // twitch pain decl referencing anims for this demon
    idDeclTwitchPain* twitchPain; // Offset: 0x10310

    // next time we can play a pain anim
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextPainAnimTime; // Offset: 0x10318

    // next time we can play a pain sound
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextPainSoundTime; // Offset: 0x10320

    // pain joint the server says we should play anim on
    short serializedPainJoint; // Offset: 0x10328

    // pain direction from server
    unsigned char serializedPainDir; // Offset: 0x1032A

    // pain anim count the server says we're up to
    int serializedPainAnimCount; // Offset: 0x1032C

    // pain anim count we're up to on this local machine
    int localPainAnimCount; // Offset: 0x10330

    // serialized dash direction
    idVec3 serializedDashDirection; // Offset: 0x10334

    // dash time stamp
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > serializedDashTimeStamp; // Offset: 0x10340

    // last local time stamp
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDashUniqueTimeStamp; // Offset: 0x10348

    // last time player tried to use dash, but failed (due to cooldown) -- used for local HUD stuff
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDashUseFailedLocalTime; // Offset: 0x10350

    // impact manager to manage special weak point particles attached to the demon
    idImpactManager impactManager; // Offset: 0x10358

    // particle to play when a weak point is hit
    idDeclParticle* weakPointImpactParticle; // Offset: 0x10830

    // gore component
    idGoreComponent goreComponent; // Offset: 0x10838

    // threat sensor visual data
    idThreatSensorVisualComponent threatSensorVisual; // Offset: 0x11780

    // Describes the demon's gore when it explodes
    idDeclGoreBehavior* goreBehavior; // Offset: 0x117F0

    // first person status effect to show when in ghosting state
    idDeclStatusEffect* firstPersonStatusEffectGhosting; // Offset: 0x117F8

    // first person status effect to show when disguised/possessing
    idDeclStatusEffect* firstPersonStatusEffectDisguised; // Offset: 0x11800

    // first person status effect to show when frozen by ice bomb
    idDeclStatusEffect* firstPersonStatusEffectIceBomb; // Offset: 0x11808

    // max distance for RTPC
    float demonToSlayerMaxDistance; // Offset: 0x11810

    // demon to slayer distance RTPC
    idSoundRTPC* demonToSlayerDistance; // Offset: 0x11818

    // Looping sound to let enemy players know a demon is near
    idSoundEvent* demonPresenceLoop; // Offset: 0x11820

    // Looping sound when ghosting
    idSoundEvent* demonGhostLoop; // Offset: 0x11828

    // Looping sound when disguised
    idSoundEvent* demonDisguiseLoop; // Offset: 0x11830

    // Stop sound event for demon presence
    idSoundEvent* demonPresenceStop; // Offset: 0x11838

    // Plays when the demon dies instantly
    idSoundEvent* instantDeathSound; // Offset: 0x11840

    // When control time is almost up, this plays repeatedly for the controller.
    idSoundEvent* lowTimePulseSound; // Offset: 0x11848

    // The breath loop that the demon plays at all times. Ramps up to full volume when the demon is idle for a long time.
    idSoundEvent* demonBreathLoopSound; // Offset: 0x11850

    // The amount of time it takes for the demon breath loop to start once the demon has hit idle.
    idTypesafeTime < int , millisecondUnique_t , 1000 > demonBreathLoopTimeUntilStartMS; // Offset: 0x11858

    // The amount of time it takes for the demon breath loop to ramp up to full volume in milliseconds
    idTypesafeTime < int , millisecondUnique_t , 1000 > demonBreathLoopRampUpTimeMS; // Offset: 0x1185C

    // The time that the demon breath loop should start ramping up
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > demonBreathLoopRampUpStartTime; // Offset: 0x11860

    // VO to play when this demon kills a player on all machines
    idSoundEvent* killedPlayerVOSound; // Offset: 0x11868

    // handles firing the weapon on the client
    idClientWeaponFire clientWeaponFire; // Offset: 0x11870

    // weapon Kick Component
    idWeaponKickComponent weaponKickComponent; // Offset: 0x118D8

    // damage over time component
    idDOTComponent dotComponent; // Offset: 0x11B50

    // Used to check if our serialized player is new so we can teleport them in PostSerializeRead
    idManagedClassPtr < idPlayer > serializedPlayer; // Offset: 0x209E8

    // The player that this DemonPlayer came from (while active)
    idManagedClassPtr < idPlayer > player; // Offset: 0x20A08

    // The player that this DemonPlayer came from (even while inactive)
    idManagedClassPtr < idPlayer > originalPlayer; // Offset: 0x20A28

    // need to cache based off controlling player. needs to stay true even after ownership ends
    bool isLocallyControlled; // Offset: 0x20A48

    // need to cache based off controlling player.
    bool isViewedFirstPersonLocally; // Offset: 0x20A49

    // enable / disable highlight by forcing no LOS
    bool highlightDisabled; // Offset: 0x20A4A

    // We run a status effect for the current client only !
    bool ShouldRunCurrentStatusEffect; // Offset: 0x20A4B

    // The current status effect we run for the client only !
    idDeclStatusEffect* CurrentStatusEffectDecl; // Offset: 0x20A50

    // The current lifetimeOverride for the status effect we run for the client only !
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > LifetimeOverrideForCurrentStatusEffect; // Offset: 0x20A58

    // The current instigatorForCurrentStatusEffect for the status effect we run for the client only !
    idEntity* InstigatorForCurrentStatusEffect; // Offset: 0x20A60

    // The affect will be applied to the following demon
    idDemonPlayer* DemonPlayerStatusEffectAppliedTo; // Offset: 0x20A68

    // ms the invulnerability should end.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > invulnerabilityEndTime; // Offset: 0x20A70

    // if true will ignore most dmg
    bool isInvulnerable; // Offset: 0x20A78

    // dummy melee weapon to use so that melee attacks can record stats properly
    idDeclWeapon* dummyMeleeWeapon; // Offset: 0x20A80

    // hack to scale depth scale hack of FX on hands
    float demonHandsDepthHackScaleFX; // Offset: 0x20A88

    // extra scale to show the demon on the killer card
    float avatarKillerCardScale; // Offset: 0x20A8C

    // extra offset to show the demon on the killer card {{ units = m }}
    idVec3 avatarKillerCardOffset; // Offset: 0x20A90

    // Dashboard ( Meters and timers for the demon player )
    idPlayerDashboard dashboard; // Offset: 0x20AA0

    // dash ability decl
    idDeclAbility_Dash* dashItemDecl; // Offset: 0x304B8

    // time in ms before demon can dash again
    idTypesafeTime < int , millisecondUnique_t , 1000 > dashCooldown; // Offset: 0x304C0

    // dash button
    usercmdButton_t dashButton; // Offset: 0x304C8

    idAbility_Dash* dashItem; // Offset: 0x304D0

    // flags in-use so when know when it's over and can send a stop condition
    bool dashInUse; // Offset: 0x304D8

    // dash anim data
    idDemonPlayer::dashAnimData_t dashAnimData; // Offset: 0x304DC

    // demon player type --> use AI_MONSTER_PLAYER_xxxxxxx
    aiMonsterType_t demonPlayerType; // Offset: 0x304F8

    // track distance moved per frame
    int intDistanceMovedThisFrame; // Offset: 0x30500

    float distanceFallenThisFrame; // Offset: 0x30504

    float leftoverDistanceTraveled; // Offset: 0x30508

    idVec3 prevOrigin; // Offset: 0x3050C

    idList < idDemonPlayer::summonedAIInfo_t , TAG_IDLIST , false > summonedAIs; // Offset: 0x30518

    bool debugTeleportZ; // Offset: 0x30530

    float debugTeleportZDist; // Offset: 0x30534

    idTypesafeTime < int , millisecondUnique_t , 1000 > debugTeleportZRepeatTimeMS; // Offset: 0x30538

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > debugTeleportZNextTime; // Offset: 0x30540

    // monitor whether we've called SetAndHidePlayer on this machine with a valid player yet
    bool setAndHidePlayerCalled; // Offset: 0x30548

    // bool event to notify when to update health component
    idInstantNetEvent < 15 > demonHealthBuffModified; // Offset: 0x3054C

    // bool parameter to know if we want to update current health
    bool demonHealthBuffUpdateCurrentHealth; // Offset: 0x30554

    // value for current health
    float demonHealthBuffCurrentHealth; // Offset: 0x30558

    // server teleport network event
    idInstantNetEvent < 15 > teleported; // Offset: 0x3055C

    idInstantNetEvent < 15 > teleportedRemoteOnly; // Offset: 0x30564

    // {{ units = m }}
    idVec3 teleportedOrigin; // Offset: 0x3056C

    idAngles teleportedAngles; // Offset: 0x30578

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > serverOverridePositionTime; // Offset: 0x30588

    idDamageFeedbackComponent damageFeedbackComponent; // Offset: 0x30590

    // scale the damage this demon player does (default 1.0f)
    float damageDealingScale; // Offset: 0x30F68

    // Extra definition data about the player
    idDeclPlayerProps* playerProps; // Offset: 0x30F70

    // FOV for the player view.
    float playerFov; // Offset: 0x30F78

    // Scalar for demonplayer hands
    float demonHandsFovScale; // Offset: 0x30F7C

    // scalar for demon horns
    float demonHornsFovScale; // Offset: 0x30F80

    // Function pointer for overriding the player's FOV
    void (idPlayer::*playerOverrideFovFunc)(float , gameTime_t); // Offset: 0x30F88

    // scalar for joystick sensitivity while controlling this demon
    float inputSensitivityScalar; // Offset: 0x30F90

    // scalar for mouse sensitivity while controlling this demon
    float inputMouseSensitivityScalar; // Offset: 0x30F94

    // if > 0, max mouse yaw change per frame while controlling this demon
    float inputMouseYawClamp; // Offset: 0x30F98

    // if > 0, max mouse pitch change per frame while controlling this demon
    float inputMousePitchClamp; // Offset: 0x30F9C

    // the bindset to use while controlling this demon
    bindSet_t inputBindset; // Offset: 0x30FA0

    // aim assist object that modifies inputs to help them point at targets better
    idPlayerAimAssist aimAssist; // Offset: 0x30FA8

    // data used for aim assist
    idDeclAimAssist* aimAssistData; // Offset: 0x31070

    // next time we're allowed to fire the weapon
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextWeaponFireTime; // Offset: 0x31078

    // where the player was located the last time they fired their weapon {{ units = m }}
    idVec3 lastFireOrigin; // Offset: 0x31080

    // time that the player last fired their weapon
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastFireTime; // Offset: 0x31090

    // size of the clip model for fired projectiles - used to test for LOS from muzzle to aim position {{ units = m }}
    idVec3 projectileClipSize; // Offset: 0x31098

    // clip model of projectile launched from weapon - used to test for LOS from muzzle to aim position
    idHavokShapePointer projectileHavokShape; // Offset: 0x310A8

    // Type of reticle to use for this demon if no weapon is equipped
    idDeclWeaponReticle* reticle; // Offset: 0x310B0

    // cached reticle tag data needed for hud
    tagData_t reticleTagData; // Offset: 0x310B8

    tagData_t reticleZoomTagData; // Offset: 0x310D8

    tagData_t videoTagData; // Offset: 0x310F8

    tagData_t contextTagData; // Offset: 0x31118

    tagData_t dossierTagData; // Offset: 0x31138

    // How much is our health currently scaled by?
    float currentHealthScale; // Offset: 0x31158

    // store previous health so client can notice changes and update hud
    float previousHealth; // Offset: 0x3115C

    // store previous health max so client can notice changes and update hud
    float previousHealthMax; // Offset: 0x31160

    // Demon health component
    idSimpleHealth demonHealth; // Offset: 0x31168

    // which health component are we using? demonHealth or one of the healthModeOverrides
    idSimpleHealth* activeHealthComponent; // Offset: 0x31298

    // Z Offset for POI position {{ units = m }}
    float poiZOffset; // Offset: 0x312A0

    // sound RTPC param for health: 0 is dead, 1 is critical, above 1 is normal (max is 2)
    idSoundRTPC* playerHealthRTPC; // Offset: 0x312A8

    // so that the RTPC can be updated only when it changes
    float playerHealthForRTPC; // Offset: 0x312B0

    // height to initially use when spawning {{ units = m }}
    float smallSpawnClipHeight; // Offset: 0x312B4

    // server time of death
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > deathTime; // Offset: 0x312B8

    // list of nearby threats (grenades, exploding bomb cars, etc.)
    idStaticList < threatEntity_t , 4 , false , TAG_IDLIST > nearbyThreats; // Offset: 0x312C0

    // whether we've called OnDemonDeath yet
    bool hasCalledOnDemonDeath; // Offset: 0x31398

    // whether we've already started a death animation so we don't do it again
    bool hasStartedDeathAnimation; // Offset: 0x31399

    // Amount of health for the demon to gain upon getting a kill.
    idDemonPlayer::healthGainOnKill_t healthGainOnKill; // Offset: 0x3139C

    // Amount of health for the demon to gain upon inflicting 1.0 points of damage.
    float healthGainOnDamage; // Offset: 0x313AC

    // Amount of control time to gain upon getting a kill, in milliseconds.
    idTypesafeTime < int , millisecondUnique_t , 1000 > controlTimeGainOnKillMS; // Offset: 0x313B0

    // How many kills allowed, after which we revert to human.
    int maxKillsBeforeRevert; // Offset: 0x313B4

    // Full screen FX FX Decl for all screen effects for the demons.
    idDeclFX* screenFXDecl; // Offset: 0x313B8

    // the global fx manager handle for the screen
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > screenFXHandle; // Offset: 0x313C0

    bool screenFXHandleInit; // Offset: 0x313C8

    // list of all active critHitFX
    idList < idDemonPlayer::critHitFX_t , TAG_IDLIST , false > critHitFXList; // Offset: 0x313D0

    // how long crit hit fx should last in MS
    idTypesafeTime < int , millisecondUnique_t , 1000 > critHitFXDurationMS; // Offset: 0x313E8

    // damage mitigation last game time damage was taken
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDamageTakenTime; // Offset: 0x313F0

    // Tracks how many times player received damage mitigation damage events in a frame
    int damageMitigationEventCount; // Offset: 0x313F8

    // running total of damage taken this frame
    float totalDamageThisFrame; // Offset: 0x313FC

    // Sync melee "death after sync" code.
    float midSyncDamageAmount; // Offset: 0x31400

    idManagedClassPtr < idEntity > midSyncKiller; // Offset: 0x31408

    idManagedClassPtr < idEntity > midSyncInflictor; // Offset: 0x31428

    idDamageParms midSyncDamageParms; // Offset: 0x31448

    idVec3 midSyncDamageDir; // Offset: 0x31E98

    // next time the actor can show pain
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pain_debounce_time; // Offset: 0x31EA8

    idDemonPlayerAdapter demonPlayerAdapter; // Offset: 0x31EB0

    // How much time to spend ghosting before spawning
    idTypesafeTime < int , millisecondUnique_t , 1000 > ghostedTimeMS; // Offset: 0x31EC0

    // How much time to spend ghosting after possessed entity is picked up
    idTypesafeTime < int , millisecondUnique_t , 1000 > ghostedTimeAfterPickupMS; // Offset: 0x31EC4

    // How much time to spend in disguised movement state
    idTypesafeTime < int , millisecondUnique_t , 1000 > disguisedPropMovementTimeMS; // Offset: 0x31EC8

    // How long it takes to go into ghosting state from regular state
    idTypesafeTime < int , millisecondUnique_t , 1000 > ghostEnterDelayMS; // Offset: 0x31ECC

    // determines how ghosted demon players spawn
    demonGhostSpawnStyle_t ghostSpawnStyle; // Offset: 0x31ED0

    // time when ghosting started (for drawing HUD bar)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startGhostedTime; // Offset: 0x31ED8

    // time after which ghosting ends and I must be spawned.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > endGhostedTime; // Offset: 0x31EE0

    // button to spawn as demon from ghosting state
    usercmdButton_t ghostingSpawnAsDemonButton; // Offset: 0x31EE8

    // button to briefly go back into ghosting from prop form
    usercmdButton_t disguisedMovementButton; // Offset: 0x31EF0

    // button to activate hazard disguise (e.g. explode barrel)
    usercmdButton_t activateHazardButton; // Offset: 0x31EF8

    // button to warp to nearest spawn location to player in invasion
    usercmdButton_t warpToPlayerButton; // Offset: 0x31F00

    // true if the demon has been lethally wounded in a GK
    bool hasLethalWound; // Offset: 0x31F08

    // flag to record the demon's current 'stealthed' state
    bool isStealthed; // Offset: 0x31F09

    // used to show rimlight for hostile demons
    bool isAllyToLocalPlayer; // Offset: 0x31F0A

    bool loopingLightPlaying; // Offset: 0x31F0B

    // true if demon player doesn't collide when moving
    bool noClip; // Offset: 0x31F0C

    // ------------------------ physics / explicit motion ------------------------
    idDemonPlayer::idDemonPlayerExplicitMotion_t explicitMotion; // Offset: 0x31F10

    // ------------------------ Sync melee ------------------------ Need to save the sync entity so that we can refer to it in AnimEvent_ReleasePlayerFromSync.
    idManagedClassPtr < idSyncEntity > savedSyncEntity; // Offset: 0x31F88

    // Sync melee entity setup
    idSyncAttack syncMelee; // Offset: 0x31FA8

    // component for demon ledge grabs
    idDemonLedgeGrabComponent ledgeGrabComponent; // Offset: 0x325F8

    // component for demon forcing his presence onto others
    idDemonPresenceComponent presenceComponent; // Offset: 0x359C0

    // ------------------------ spring camera - for animating the camera ------------------------ camera used in ledge grabs, glory kills, and spawning
    idManagedClassPtr < idSpringCamera > springCamera; // Offset: 0x35A78

    // whether or not to have our PlayerController apply view limits set there to the results of the spring camera
    bool applyLocalViewLimitsToSpringCamera; // Offset: 0x35A98

    // handle to spawn manager representation of this demon's influence
    idHandle < int , invalidSpawnInfluencer_t , INVALID_INFLUENCER > spawnInfluencer; // Offset: 0x35A9C

    // ------------------------ whole model distance fade. For hiding the demon when near the camera. ------------------------distance to the camera in world space at which this demon will start to fade out. {{ units = m }}
    float nearCameraFadeStart; // Offset: 0x35AA0

    // distance to the camera in world space at which this demon will finish to fading out. {{ units = m }}
    float nearCameraFadeEnd; // Offset: 0x35AA4

    // z offset of center point to fade from. {{ units = m }}
    float nearCameraFadeZOffset; // Offset: 0x35AA8

    // minimum amount of fade to apply.
    float nearCameraFadeMinFade; // Offset: 0x35AAC

    // ------------------------ Metrics ------------------------ Get a kill while using this demon
    gameStat_t killStat; // Offset: 0x35AB0

    // Kill an opponent using this demon
    gameStat_t killedStat; // Offset: 0x35AB4

    // Get a multikill using this demon
    gameStat_t multiKillStat; // Offset: 0x35AB8

    // Get a killing spree using this demon
    gameStat_t killingSpreeStat; // Offset: 0x35ABC

    bool bouncePadIsInTransit; // Offset: 0x35AC0

    bool bouncePadLockedMovement; // Offset: 0x35AC1

    bool alreadyAwardedUniqueDemon; // Offset: 0x35AC2

    // pointer to our full size clip we're trying to use but need to check if we can fit into.
    idHavokShapePointer fullSizeClipModel_Havok; // Offset: 0x35AC8

    // query we're using to check if our full size clip fits yet
    idHavokQueryId fullSizeClipQuery_Havok; // Offset: 0x35AD0

    idDemonCardDeckComponent playableCardDeck; // Offset: 0x35AD8

    // if non-NULL, demon is currently disguised as this entity
    idManagedClassPtr < idEntity > disguiseEntity; // Offset: 0x35DF8

    // entity that handles FX for entering disguise
    idManagedClassPtr < idEntity > disguiseHideFXEntity; // Offset: 0x35E18

    // entity that handles FX for turning back into demon
    idManagedClassPtr < idEntity > disguiseRevealFXEntity; // Offset: 0x35E38

    // entity that handles FX for entering disguise
    idManagedClassPtr < idEntity > posessionFXEntity; // Offset: 0x35E58

    // entity that handles FX for entering ghost mode
    idManagedClassPtr < idEntity > becomingGhostFXEntity; // Offset: 0x35E78

    // cache desire to become disguised immediately on hitting ambient state
    bool disguiseOnAmbient; // Offset: 0x35E98

    // track when disguise entity is picked up, since ghost time will be different
    bool disguiseEntityPickedUp; // Offset: 0x35E99

    // when first created, wait for ground trace to find good position
    bool disguiseEntityNeedsInitialPosition; // Offset: 0x35E9A

    // true when performing disguised movement (which is just a brief ghost state)
    bool disguisedMovement; // Offset: 0x35E9B

    // true if we revealed ourself and disguise entity needs removal, false if disguise destroyed and hence already removed
    bool disguiseEntityNeedsRemove; // Offset: 0x35E9C

    // if non-zero, demon will finish revealing from disguise at this time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > disguiseRevealEndTime; // Offset: 0x35EA0

    // time being disguised started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > disguiseEntityBeginTime; // Offset: 0x35EA8

    // last valid position of demon player before becoming disguised
    idVec3 lastValidPosBeforeDisguise; // Offset: 0x35EB0

    // after this many seconds demon will be forced back into normal form (also applies to possession)
    idTypesafeTime < float , secondUnique_t , 1 > disguiseTimeLimitSeconds; // Offset: 0x35EBC

    // latest list of viable possession targets
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > possessionTargets; // Offset: 0x35EC0

    // closest viable possession target
    idManagedClassPtr < idEntity > possessionTargetBest; // Offset: 0x35ED8

    // currently possessed entity, if any
    idManagedClassPtr < idEntity > possessedEntity; // Offset: 0x35EF8

    // dummy entity placed around possessed entity to detect shots
    idManagedClassPtr < idEntity > possessedShootableEntity; // Offset: 0x35F18

    // What contents flags do we need to restore after possession
    int contentsBitsToRestoreAfterPossess; // Offset: 0x35F38

    // can this demon possess entities?
    bool canPossess; // Offset: 0x35F3C

    // true when performing possessed movement (which is just a brief ghost state)
    bool possessedMovement; // Offset: 0x35F3D

    // can this demon press a button to warp to nearest spawn point to slayer?
    bool canWarpToSlayer; // Offset: 0x35F3E

    // What additional height offset should be applied for this demon entity?
    float heightOffsetForPropAndDisguiseAction; // Offset: 0x35F40

    // if true, we don't move from disguise/possession, we just go back to ghost mode
    bool invasionReturnToGhostInsteadOfMove; // Offset: 0x35F44

    // is this demon's highlight and nameplate visible to the slayer?
    bool highlightVisibleToSlayer; // Offset: 0x35F45

    // demon card shown in the UI for the invasion ability to spawn from disguise/possession
    idDeclDemonCard* spawnFromDisguiseDemonCard; // Offset: 0x35F48

    // demon card shown in the UI for the invasion ability to teleport to slayer
    idDeclDemonCard* teleportToSlayerDemonCard; // Offset: 0x35F50

    // demon card shown in the UI for the invasion ability to become a ghost
    idDeclDemonCard* becomeGhostDemonCard; // Offset: 0x35F58

    // demon card shown in the UI for the invasion ability to blow up the currently disguised prop
    idDeclDemonCard* activateHazardCard; // Offset: 0x35F60

    // Decl that defines the highlight box for this demon
    idDeclHighlightLOSBox* highlightLOSBoxDecl; // Offset: 0x35F68

    // smaller number means less speed tolerance before invisibility is removed, negative means speed never removes invisibility
    float invisibilitySpeedTolerance; // Offset: 0x35F70

    // time until visible when demon is revealed from invisibility by taking damage or shooting
    idTypesafeTime < int , millisecondUnique_t , 1000 > invisibilityRevealDelayMS; // Offset: 0x35F74

    // is invisibility removed when demon takes damage?
    bool invisibilityRemovedOnDamage; // Offset: 0x35F78

    // does becoming invisible remove entity highlight?
    bool invisibilityRemovesHighlight; // Offset: 0x35F79

    // absolute time invisibility will be removed, if non-zero
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > invisibilityRemoveTime; // Offset: 0x35F80

    // if true, demon player will be killed if it falls below killZ value
    bool killBelowZ; // Offset: 0x35F88

    // value to kill demon player if it falls below
    float killZ; // Offset: 0x35F8C

    // scale applied to damage
    idDamageScaleTableComponent damageScaleTableComponent; // Offset: 0x35F90

    // [sic] copied from player.h
    idEnvironmentalDamageComponent evironmentalHazard; // Offset: 0x35FA8

    // Entities we have dissolved
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > dissolvedEntities; // Offset: 0x36F60

    // PVP upgrades that we're holding off on applying until this demon gets a player
    idList < idDeclPVPUpgrade::demonPlayerUpgradeData_t , TAG_IDLIST , false > pendingPVPUpgrades; // Offset: 0x36F78

    // [0.0, 1.0] where 0.0 means ready to perform actions
    float invasionGlobalCooldown; // Offset: 0x36F90

    // These values used to be defined per demon but (by phook request) was moved to idDeclInvasionSettings. These values are set in idDemonPlayer::Spawn(), from the invasion settings. does this demon use global cooldown for actions?
    bool usesGlobalCooldown; // Offset: 0x36F94

    // how long cooldown takes when demon player is in combat form (milliseconds)
    idTypesafeTime < int , millisecondUnique_t , 1000 > invasionGlobalCooldownCombatTimeMS; // Offset: 0x36F98

    // how long cooldown takes when demon player is disguised or possessing (milliseconds)
    idTypesafeTime < int , millisecondUnique_t , 1000 > invasionGlobalCooldownHiddenTimeMS; // Offset: 0x36F9C

    // it true, taking damage restarts global cooldown timer
    bool damageResetsGlobalCooldown; // Offset: 0x36FA0

    // this is tracked locally for this demon (NOT serialized, so don't try to query)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > localSlayerSeenLast; // Offset: 0x36FA8

    // this is tracked locally for this demon (NOT serialized, so don't try to query)
    bool localCanSeeSlayer; // Offset: 0x36FB0

    // this is updated via reliable message from client - OK to query/use
    bool serverCanSeeSlayer; // Offset: 0x36FB1

    // have we set the gravity yet?
    bool gravitySet; // Offset: 0x36FB2

    bool spectreEnable; // Offset: 0x36FB3

    float spectreFactor; // Offset: 0x36FB4

    // The game time of the first trace from a blood punch, used for loot drop
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > firstBloodPunchTraceTime; // Offset: 0x36FB8

    // last debug camera distance
    float prevDebugCameraDistance; // Offset: 0x36FC0

}; // Size: 0x36FC8
