struct idSyncEntity : idAnimatedEntity
{
    enum finishAction_t : int
    {
        FINISHACTION_LEAVE = 0,
        FINISHACTION_DELETE = 1,
        FINISH_ACTION_DELETE_AFTER_TIME = 2,
        FINISHACTION_UNBIND = 3,
        FINISHACTION_UNBIND_AND_HIDE = 4
    };

    enum attachAction_t : int
    {
        ATTACH_NO_BIND = 0,
        ATTACH_BIND = 1,
        ATTACH_SIMULATE_BIND = 2
    };

    enum spawnAction_t : int
    {
        SPAWN_IF_NOT_REFERENCED = 0,
        SPAWN_IF_HAS_ANIMATION = 1,
        SPAWN_ALWAYS = 2,
        SPAWN_NEVER = 3
    };

    enum showAction_t : int
    {
        SHOW_ALWAYS = 0,
        SHOW_DEFERRED = 1,
        SHOW_WITH_ANIM = 2
    };

    enum jointControlPhase_t : int
    {
        JC_UPDATEANIM = 0,
        JC_POSTUPDATEANIM = 1
    };

    enum participantType_t : int
    {
        INSTIGATOR = 0,
        TARGET = 1,
        HELPER = 2
    };

    struct postSyncInvulnerability_t
    {
        // The time in milliseconds that invulnerability is extended after the sync ends
        idTypesafeTime < int , millisecondUnique_t , 1000 > invulnerableTimeMS; // Offset: 0x0

        // If true, this time is applied in PVP matches. Otherwise it is applied to single player games
        bool isPVP; // Offset: 0x4

        // The difficulty invulnerableTimeMS applies to in single player games. This is ignored if isPVP is true
        gameDifficulty_t gameDifficulty; // Offset: 0x8

    }; // Size: 0xC

    struct flawlessSyncData_t
    {
        // the path of the sync animation win
        idAnimWebPath flawlessAnim; // Offset: 0x0

        // the path of the sync animation fail
        idAnimWebPath failAnim; // Offset: 0x30

        // How long to stay in idle before winning.
        idTypesafeTime < int , millisecondUnique_t , 1000 > idleTimeMS; // Offset: 0x60

        // when did we start?
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > syncStartTime; // Offset: 0x68

    }; // Size: 0x70

    struct cameraData_t
    {
        // The camera joint
        idIndex < short , invalidJointIndex_t , - 1 > cameraJoint; // Offset: 0x0

        // Likelihood for this camera to be selected
        float weight; // Offset: 0x4

        // Traces to ensure this camera isn't obstructed havok'd
        idList < idHavokQueryId , TAG_GAME , false > traces; // Offset: 0x8

        // The traces from the last frame came back clear
        bool validated; // Offset: 0x20

    }; // Size: 0x28

    struct inputTrackInfo_t
    {
        // general info
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > windowStartTime; // Offset: 0x0

        idAnimWebState destState; // Offset: 0x8

        idIndex < short , idAnimWeb::invalidModelIndex_t , - 1 > trackModelIndex; // Offset: 0x28

        // input spec
        playerInput_t inputType; // Offset: 0x2C

        inputMode_t inputMode; // Offset: 0x30

        int currentHits; // Offset: 0x34

        float targetRate; // Offset: 0x38

        bool needsBlendWindow; // Offset: 0x3C

        // health spec
        idManagedClassPtr < idEntity > healthCompareEntity; // Offset: 0x40

        compareOp_t healthCompareOp; // Offset: 0x60

        float healthValueOp; // Offset: 0x64

        bool canChangeState; // Offset: 0x68

    }; // Size: 0x70

    struct inputWindowTimes_t
    {
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x8

    }; // Size: 0x10

    struct scheduledInputWindow_t
    {
        playerInput_t inputType; // Offset: 0x0

        inputMode_t inputMode; // Offset: 0x4

        float targetRate; // Offset: 0x8

        idSyncEntity::inputWindowTimes_t inputWindowTimes; // Offset: 0x10

        bool active; // Offset: 0x20

    }; // Size: 0x28

    struct animStateDelay_t
    {
        syncDelayType_t delayType; // Offset: 0x0

        idAnimWebState animState; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > expireTime; // Offset: 0x28

    }; // Size: 0x30

    struct proceduralJointControl_t
    {
        enum controlSpace_t : int
        {
            SPACE_PARENT = 0,
            SPACE_JOINT = 1,
            SPACE_MODEL = 2
        };

        enum controlType_t : int
        {
            CONTROL_NONE = 0,
            CONTROL_MOVE_FWDBACK = 1,
            CONTROL_MOVE_RIGHTLEFT = 2,
            CONTROL_MOVE_UPDN = 3,
            CONTROL_LOOK_YAW = 4,
            CONTROL_LOOK_PITCH = 5
        };

        enum contourType_t : int
        {
            CONTOUR_NONE = 0,
            CONTOUR_POSITION = 1,
            CONTOUR_ROTATION = 2
        };

        struct movement_t
        {
            struct controlParameter_t
            {
                // control that maps to this parameter
                idSyncEntity::proceduralJointControl_t::controlType_t controlType; // Offset: 0x0

                // acceleration to modify current speed
                float acceleration; // Offset: 0x4

                // speed at which to change this parameter
                float speedMax; // Offset: 0x8

                // the threshold under which to ignore the input altogether
                float threshold; // Offset: 0xC

                // current speed of control
                float speedCurrent; // Offset: 0x10

            }; // Size: 0x14

            struct controlPositionParameter_t
            {
                // control that maps to this parameter
                idSyncEntity::proceduralJointControl_t::controlType_t controlType; // Offset: 0x0

                // acceleration to modify current speed {{ units = m / ( s * s ) }}
                float acceleration; // Offset: 0x4

                // speed at which to change this parameter {{ units = m / s }}
                float speedMax; // Offset: 0x8

                // the threshold under which to ignore the input altogether {{ units = m / s }}
                float threshold; // Offset: 0xC

                // current speed of control {{ units = m / s }}
                float speedCurrent; // Offset: 0x10

            }; // Size: 0x14

            struct controlAnimStepParameter_t : idSyncEntity::proceduralJointControl_t::movement_t::controlParameter_t
            {
                // resting idle animation between +- anims
                idAnimWebPath animIdle; // Offset: 0x18

                // positive animation direction to take
                idAnimWebPath animUp; // Offset: 0x48

                // additive to play when playing the up anim
                idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > animUpAdditive; // Offset: 0x78

                // negative animation direction to take
                idAnimWebPath animDn; // Offset: 0x80

                // additive to play when playing the dn anim, useful for user channels
                idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > animDnAdditive; // Offset: 0xB0

                // name of the blend variable that indexes the current animation
                idAtomicString blendScalar; // Offset: 0xB8

                // the initial joint to lock to(optional)
                idAtomicString startingJoint; // Offset: 0xC0

                // if defined, each animation step acts as a procedural interpolation between multiple joints
                idList < idAtomicString , TAG_GAME , false > jointLerpList; // Offset: 0xC8

                // what user channel drives the interpolation
                idAtomicString jointLerpChannelName; // Offset: 0xE0

                // user to normalize the user channel, if channel isn't normalized, set this to the range of the channel so it can be normalized
                float jointLerpRange; // Offset: 0xE8

                idIndex < short , invalidUserChannelIndex_t , - 1 > jointLerpChannel; // Offset: 0xEC

                int jointIndexFrom; // Offset: 0xF0

                int jointIndexTo; // Offset: 0xF4

            }; // Size: 0xF8

            // drives the 'roll' of the parent offset
            idSyncEntity::proceduralJointControl_t::movement_t::controlParameter_t parmParentYaw; // Offset: 0x0

            // drives the 'roll' of the parent offset
            idSyncEntity::proceduralJointControl_t::movement_t::controlParameter_t parmParentPitch; // Offset: 0x14

            // drives the 'roll' of the parent offset
            idSyncEntity::proceduralJointControl_t::movement_t::controlParameter_t parmParentRoll; // Offset: 0x28

            // drives the parents local X offset(forward)
            idSyncEntity::proceduralJointControl_t::movement_t::controlPositionParameter_t parmParentOffsetFwdBack; // Offset: 0x3C

            // drives the parents local Y offset(left)
            idSyncEntity::proceduralJointControl_t::movement_t::controlPositionParameter_t parmParentOffsetRightLeft; // Offset: 0x50

            // drives the parents local Z offset(up)
            idSyncEntity::proceduralJointControl_t::movement_t::controlPositionParameter_t parmParentOffsetUpDn; // Offset: 0x64

            // drives
            idSyncEntity::proceduralJointControl_t::movement_t::controlAnimStepParameter_t parmAnimStep; // Offset: 0x78

            // range of allowed translational offset {{ units = m }}
            idRange < idVec3 > controlOffsetLimits; // Offset: 0x170

            // range of allowed parent angle modification
            idRange < idAngles > controlAngleOffsetLimits; // Offset: 0x188

            // {{ units = m }}
            idVec3 controlOffset; // Offset: 0x1A0

            idAngles controlAngleOffset; // Offset: 0x1AC

            // user channel that controls the scale of this effect
            idIndex < short , invalidUserChannelIndex_t , - 1 > controlScaleOffset; // Offset: 0x1B8

            // user channel that controls the angles of this effect
            idIndex < short , invalidUserChannelIndex_t , - 1 > controlScaleAngles; // Offset: 0x1BA

        }; // Size: 0x1C0

        struct contour_t
        {
            // how should we contour the joint
            idSyncEntity::proceduralJointControl_t::contourType_t contourFlags; // Offset: 0x0

            // collision mask of contour traces
            idContents clipMask; // Offset: 0x4

        }; // Size: 0x8

        // what phase this attach joint is updated in
        idSyncEntity::jointControlPhase_t updatePhase; // Offset: 0x0

        // joint to contour
        idAtomicString jointName; // Offset: 0x8

        // what direction to test for contouring
        idSyncEntity::proceduralJointControl_t::controlSpace_t controlSpace; // Offset: 0x10

        // cached joint index
        idIndex < short , invalidJointIndex_t , - 1 > jointIndex; // Offset: 0x14

        // allow the joint to be 'driven' by user input
        idSyncEntity::proceduralJointControl_t::movement_t movement; // Offset: 0x18

        // perform a trace to snap the joint along its local down axis
        idSyncEntity::proceduralJointControl_t::contour_t traceContour; // Offset: 0x1D8

    }; // Size: 0x1E0

    struct facingRequirement_t
    {
        // If you care about the target yaw, which way should it face? 0 = facing away from instigator. 270 = facing right(right side of target faces instigator), 180 = facing instigator, 90 = facing left.
        float desiredTargetRelativeYaw; // Offset: 0x0

        // If you care about the target yaw, how far off can it be from desired? (In degrees)
        float maximumTargetRelativeYawError; // Offset: 0x4

        // Do you care about the direction the target is facing, relative to the vector between instigator and target?
        bool requireSpecificTargetYaw; // Offset: 0x8

        // Treat "front" as facing the instigator, independent of the target's facing.
        bool alignToInstigatorIgnoringTargetFacing; // Offset: 0x9

    }; // Size: 0xC

    struct initialBlendVars_t
    {
        // the name of the blend variable to set
        idAtomicString blendVarName; // Offset: 0x0

        // the value of the blend variable to set
        float blendVarValue; // Offset: 0x8

    }; // Size: 0x10

    struct joinCacheData_t
    {
        // the animation node index these joints are for
        idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > nodeIndex; // Offset: 0x0

        // the cache joint data
        idMD6Util::idJointCache jointCache; // Offset: 0x10

    }; // Size: 0x3030

    struct depthOfFieldData_t
    {
        // are we currently active
        bool active; // Offset: 0x0

        // is depth of field enabled for locally controlled instigators
        bool enabled; // Offset: 0x1

        // near depth for dof {{ units = m }}
        float nearDepth; // Offset: 0x4

        // far depth for dof {{ units = m }}
        float farDepth; // Offset: 0x8

        // focus depth for dof {{ units = m }}
        float focusDepth; // Offset: 0xC

        // blend in time in MS
        idTypesafeTime < int , millisecondUnique_t , 1000 > blendInMs; // Offset: 0x10

        // blend out time in MS
        idTypesafeTime < int , millisecondUnique_t , 1000 > blendOutMs; // Offset: 0x14

    }; // Size: 0x18

    struct fovInterpolation_t
    {
        // is fovInterpolation enabled?
        bool enabled; // Offset: 0x0

        // What are we interpolating to?
        float lerpFomFov; // Offset: 0x4

    }; // Size: 0x8

    struct chainsawMinigame_t
    {
        // for precalculating the window times for all the stages
        idList < idSyncEntity::inputWindowTimes_t , TAG_GAME , false > inputWindowTimes; // Offset: 0x0

        // duration of all the success stages of the sync, not including the glory kill at the end
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > totalDuration; // Offset: 0x18

        // current duration of sync stages, not including time spent in random input windows
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > curDuration; // Offset: 0x20

        // total number of stages, including the GK
        int numStages; // Offset: 0x28

        // which stage of the sync are we in (indexes inputWindowTimes)
        int currentStage; // Offset: 0x2C

        // tracks when a window is active for teh current stage
        bool windowActive; // Offset: 0x30

        // true while the formal minigame is active, false when release, retaliate, or GK outcome occurs
        bool active; // Offset: 0x31

        // true if the random input window is missed and the enemy retaliates
        bool failed; // Offset: 0x32

        // true while the sync is playing
        bool syncActive; // Offset: 0x33

        // true if the GK outline model is drawing
        bool outlineVisible; // Offset: 0x34

        // tracks the external damage received during the sync
        float externalDamageReceived; // Offset: 0x38

        // tracks when external damage has reached a deadly level
        bool externalDeadlyDamageReceived; // Offset: 0x3C

    }; // Size: 0x40

    // player that is involved in this sync animation
    idManagedClassPtr < idPlayer > syncPlayer; // Offset: 0x1B48

    // did the player take damage?
    bool playerTookDamage; // Offset: 0x1B68

    // if they player died in the sync
    bool playerDied; // Offset: 0x1B69

    // tracks whether the value was saved already or not
    bool playerNoPlayerDeathSaved; // Offset: 0x1B6A

    // saves the setting that was in effect at the start of the sync
    bool playerNoPlayerDeathSaveVal; // Offset: 0x1B6B

    // Find an ideal location if we are within geometry.
    bool validateSyncArea; // Offset: 0x1B6C

    // Set the player's position after we are done.
    bool resetPlayersPosition; // Offset: 0x1B6D

    // use the origin of the sync target to reset the player's position to
    bool useTargetOriginForPlayerReset; // Offset: 0x1B6E

    // put the player back on AAS after we are done.
    bool aasValidate; // Offset: 0x1B6F

    // Remove this syncEntity after sync End.
    bool removeAfterSyncEnd; // Offset: 0x1B70

    // Interpolate the Target's pos/axis.
    idManagedClassPtr < idEntity > lerpToTarget; // Offset: 0x1B78

    // When we will finish the lerp.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lerpToTargetEndTime; // Offset: 0x1B98

    // How much time to lerp.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lerpToTargetTime; // Offset: 0x1BA0

    // where we started. {{ units = m }}
    idVec3 lerpStartingLocation; // Offset: 0x1BA8

    // where we started.
    idQuat lerpStartingOrientation; // Offset: 0x1BB4

    idAnimWebState lastAnimState; // Offset: 0x1BC8

    // Did we collide with something, and couldn't find a good location?
    bool possible_badLocation; // Offset: 0x1BE8

    // Where the player Started. {{ units = m }}
    idVec3 player_startOrigin; // Offset: 0x1BEC

    // where we want to reset the player to if we've detected a bad location {{ units = m }}
    idVec3 player_resetLocation; // Offset: 0x1BF8

    bool participants_precached; // Offset: 0x1C04

    // If non-empty, will only add interactions from groups with a matching or empty name.
    idAtomicString syncGroupName; // Offset: 0x1C08

    // the path of the sync animation start
    idAnimWebPath syncAnim; // Offset: 0x1C10

    // the anim web that drives the sync entity and slaved objects
    idDeclAnimWeb* animWeb; // Offset: 0x1C40

    // the anim web layers to load
    idList < idAtomicString , TAG_GAME , false > animWebLayers; // Offset: 0x1C48

    // the participants of the sync
    idList < idSyncParticipant , TAG_GAME , false > participants; // Offset: 0x1C60

    // the participants of the sync for 3rd-person onlookers
    idList < idSyncParticipant , TAG_GAME , false > thirdPersonParticipants; // Offset: 0x1C78

    // anim set name for first person sync entity
    idAtomicString syncEntityAnimSetName; // Offset: 0x1C90

    // override for the first person version of the sync entity model
    idStrRenderModel firstPersonModelOverride; // Offset: 0x1C98

    // anim set name for third person sync entity
    idAtomicString thirdPersonSyncEntityAnimSetName; // Offset: 0x1CA0

    // fallback third person animation when we don't have a third person version of a sync interaction
    idAnimWebPath thirdPersonFallbackAnim; // Offset: 0x1CA8

    // what to do for the sync entity when the sync is complete
    idSyncEntity::finishAction_t finishSyncAction; // Offset: 0x1CD8

    // Rumble controller at start of sync.
    idDeclRumble* startRumble; // Offset: 0x1CE0

    // Rumble controller at end of sync.
    idDeclRumble* endRumble; // Offset: 0x1CE8

    // destroy entity after use.
    bool removeAfterUse; // Offset: 0x1CF0

    // don't attempt to orient this in 3D - just use 2D orientation.
    bool onlyOrientIn2D; // Offset: 0x1CF1

    // For calculating sync positioning etc, use the final interpolation position for entities, not the current (matches the server more closely)
    bool adjustToInterpolationEndPosition; // Offset: 0x1CF2

    // clear participant list after sync plays
    bool clearParticipantsAtEnd; // Offset: 0x1CF3

    // List of items specifying post sync invulnerability based on difficulty and PVP/Campaign
    idList < idSyncEntity::postSyncInvulnerability_t , TAG_IDLIST , false > postSyncInvulnerabilityItems; // Offset: 0x1CF8

    // ok for EITHER participant to take damage during sync
    bool takesDamageDuringSync; // Offset: 0x1D10

    // ok for EITHER participant to die during sync
    bool canDieDuringSync; // Offset: 0x1D11

    // ok for only the instigator to take damage during sync (overridden by 'takesDamageDuringSync')
    bool instigatorOnlyTakesDamageDuringSync; // Offset: 0x1D12

    // ok for only the instigator to die during sync (overridden by 'canDieDuringSync')
    bool instigatorOnlyCanDieDuringSync; // Offset: 0x1D13

    // if true then damage does not need DAMAGETYPE_SYNC to be taken during chainsaw syncs only
    bool takesNonSyncDamageDuringChainsawSync; // Offset: 0x1D14

    // show the debug meter or not
    bool showChainsawSyncDebugMeter; // Offset: 0x1D15

    // if true the target will flash with the GK visuals when GKable
    bool flashChainsawTargetWhenGKAvailable; // Offset: 0x1D16

    // Allow this sync to be skippable.
    bool skippable; // Offset: 0x1D17

    // force the player to crouch when released from the sync
    bool playerEndsCrouched; // Offset: 0x1D18

    // raise player weapon when sync is finished
    bool playerRaiseWeaponAtEnd; // Offset: 0x1D19

    // if true, disable adaptivet tick for all participants
    bool disableAdaptiveTickForAllParticipants; // Offset: 0x1D1A

    // if true, hides the hud during the sync anim, will restore afterwards
    bool disableHudOnSync; // Offset: 0x1D1B

    // verifies final position by doing a trace from player start
    bool traceVerificationToFinalPosition; // Offset: 0x1D1C

    // should this sync ent continue its animation if the player has died?
    bool abortPlayerOnly; // Offset: 0x1D1D

    // participant type to hide when aborting player only
    idSyncEntity::participantType_t hideParticipantOnAbortPlayerOnly; // Offset: 0x1D20

    // rtpc to poke the animation length into for wwise
    idSoundRTPC* animationLengthRTPC; // Offset: 0x1D28

    // rtpc to poke the animation length scale
    float animationRTPCScale; // Offset: 0x1D30

    // Data for Flawless Sync type.
    idSyncEntity::flawlessSyncData_t flawlessSync; // Offset: 0x1D38

    idStr startedSyncName; // Offset: 0x1DA8

    idList < idActiveSyncParticipant , TAG_GAME , false > activeParticipants; // Offset: 0x1DD8

    idAnimator_SyncEntity animatorSyncEntity; // Offset: 0x1DF0

    idAnimator_Channel additiveAnimator; // Offset: 0x2720

    // is this sync ent currently working?
    bool isCurrentlyWorking; // Offset: 0x2830

    idMD6Anim* currentSyncEntityAnim; // Offset: 0x2838

    // used to scale 3p anim speed to match 1p
    float currentSyncEntityAnimScale; // Offset: 0x2840

    idVec3 firstPersonSyncEntityPredictedFinalPosition; // Offset: 0x2844

    float thirdToFirstPersonFixupNormalizedStartTime; // Offset: 0x2850

    float thirdToFirstPersonFixupNormalizedEndTime; // Offset: 0x2854

    // Cameras for this sync, ordered by preference
    idList < idSyncEntity::cameraData_t , TAG_GAME , false > cameras; // Offset: 0x2858

    // Currently used camera, tracked to avoid switching often
    int currentCameraIndex; // Offset: 0x2870

    idDeclTable* timeScaleTable; // Offset: 0x2878

    // track the input data
    idSyncEntity::inputTrackInfo_t inputTracking[5]; // Offset: 0x2880

    idSyncEntity::scheduledInputWindow_t scheduledInputWindow[5]; // Offset: 0x2AB0

    // forced transitions force a transition to this state when the player officially loses the sync by missing the input window
    idAnimWebState forceStateOnLose; // Offset: 0x2B78

    // the threshold of damage to trigger the forced damage transition
    float damageTransitionThreshold; // Offset: 0x2B98

    // force a transition to this state when the player receives damageTransitionThreshold of external damage
    idAnimWebState forceStateOnDamage; // Offset: 0x2BA0

    // force a transition to this state when the player dies during the sync from external damage
    idAnimWebState forceStateOnDeath; // Offset: 0x2BC0

    // temp cache for what entity events are coming from
    idManagedClassPtr < idAnimatedEntity > eventSource; // Offset: 0x2BE0

    // Logic node that activated this cineractive
    idLogicPlayerCineractive* logicNode; // Offset: 0x2C00

    idList < idSyncEntity::animStateDelay_t , TAG_GAME , false > nodeDelay; // Offset: 0x2C08

    // Optional requirements for target facing to use this syncEntity
    idSyncEntity::facingRequirement_t facingRequirements; // Offset: 0x2C20

    // procedural modification of joints for ground contouring
    idList < idSyncEntity::proceduralJointControl_t , TAG_GAME , false > proceduralJoints; // Offset: 0x2C30

    // initial blend variable values
    idList < idSyncEntity::initialBlendVars_t , TAG_GAME , false > initialBlendVars; // Offset: 0x2C48

    // list of cached joints for all the animations this sync entity has.
    idList < idSyncEntity::joinCacheData_t , TAG_GAME , false > cachedAnimJoints; // Offset: 0x2C60

    idHavokShapePointer obstacleHavokShape; // Offset: 0x2C78

    idAngles playerInstigatorViewAngles; // Offset: 0x2C80

    bool hasFinalAttackerPosition; // Offset: 0x2C8C

    // {{ units = m }}
    idVec3 finalAttackerPosition; // Offset: 0x2C90

    bool isInteractableSync; // Offset: 0x2C9C

    bool swapDelayedCopyTargetNow; // Offset: 0x2C9D

    int delayedTargetCopyParticipant; // Offset: 0x2CA0

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > spawnedEnts; // Offset: 0x2CA8

    // dof
    idSyncEntity::depthOfFieldData_t depthOfField; // Offset: 0x2CC0

    // FOV Interpolation Parms.
    idSyncEntity::fovInterpolation_t fovInterpolation; // Offset: 0x2CD8

    // chainsaw minigame things
    idSyncEntity::chainsawMinigame_t chainsawMinigame; // Offset: 0x2CE0

    int cameraCutCounter; // Offset: 0x2D20

    idMD6LeafCopyPose leafCopyPose; // Offset: 0x2D28

    idManagedClassPtr < idAnimatedEntity > referencingEntity; // Offset: 0x2D38

}; // Size: 0x2D58
