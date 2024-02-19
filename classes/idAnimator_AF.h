struct idAnimator_AF : idAnimator_Base
{
    enum testSolidResult_t : int
    {
        TESTSOLID_NOT_IN_SOLID = 0,
        TESTSOLID_IN_SOLID_NOCLIP = 1,
        TESTSOLID_IN_SOLID = 2,
        TESTSOLID_MAX = 3
    };

    enum AFJointModType_t : int
    {
        AF_JOINTMOD_AXIS = 1,
        AF_JOINTMOD_ORIGIN = 2,
        AF_JOINTMOD_BOTH = 3
    };

    struct idAFJointMod
    {
        // id of the body
        int bodyId; // Offset: 0x0

        // origin of body relative to joint {{ units = m }}
        idVec3 jointBodyOrigin; // Offset: 0x4

        // axis of body relative to joint
        idMat3 jointBodyAxis; // Offset: 0x10

        // calculated during the sync
        idVec3 jointBodyVelocity; // Offset: 0x34

        // index of the joint this body modifies
        idIndex < short , invalidJointIndex_t , - 1 > jointIndex; // Offset: 0x40

        // modify joint axis, origin or both
        idAnimator_AF::AFJointModType_t jointMod; // Offset: 0x44

        // if false, this joint mod doesn't pull from AF physics
        bool enabled; // Offset: 0x48

        // if true, use the joint body's calculated velocity instead of the deltas coming from the animation
        bool useJointBodyVelocity; // Offset: 0x49

    }; // Size: 0x4C

    struct idSyncConstraint
    {
        // the type of the constraint
        constraintType_t constraintType; // Offset: 0x0

        // constraint's world pos is anchored to this joint in world space
        idIndex < short , invalidJointIndex_t , - 1 > jointIndex; // Offset: 0x4

        // ere: temp for merge.
        idHandle < unsigned short , invalidJointHandle_t , INVALID_JOINT_HANDLE > jointHandle; // Offset: 0x6

        // the actual constraint
        idHavokConstraint* constraintHavok; // Offset: 0x8

    }; // Size: 0x10

    struct idBindConstraint
    {
        enum bindConstraint_t : int
        {
            Fixed = 0,
            BallAndSocket = 1,
            Universal = 2
        };

        // constraint type
        idAnimator_AF::idBindConstraint::bindConstraint_t type; // Offset: 0x0

        // name of constraint
        idAtomicString name; // Offset: 0x8

        // articulated figure body to bind to other entity
        idAtomicString bodyName; // Offset: 0x10

        // name of joint which specifies the position for the constraint
        idAtomicString jointName; // Offset: 0x18

        // if this constraint should skip its clamp
        bool shouldClamp; // Offset: 0x20

    }; // Size: 0x28

    // the articulated figure decl to use
    idDeclAF* articulatedFigure; // Offset: 0x40

    // impact table for sound and particles
    idDeclImpactEffect* impactEffectTable; // Offset: 0x48

    // constraints used to bind this articulated figure to it's parent
    idList < idAnimator_AF::idBindConstraint , TAG_AF , false > bindConstraints; // Offset: 0x50

    // don't allow physics impulses to activate unless sync has been running for this much time
    idTypesafeTime < float , secondUnique_t , 1 > noImpulseDeathTime; // Offset: 0x68

    // __edit idAtomicStringgroupName; optional name used to filter out bodies and constraints from AF decl __edit idList< idAtomicString >validBodies; temp, until decl AF is easier to edit whether we can fall apart on use
    bool canDeattachBones; // Offset: 0x6C

    // If this setup can getup from ragdolled state back to living
    bool canGetUp; // Offset: 0x6D

    // __def boolloadInvalidParts; whether to try and load bodies or constraints that are missing bones in the skeleton  parameters name of the loaded .af file
    idStr afName; // Offset: 0x70

    idHavokPhysics* havokPhysics; // Offset: 0xA0

    idHavokCollision* havokCollision; // Offset: 0xA8

    // runtime cache for af bodies/constraints
    idRuntimeCache* runtimeCache; // Offset: 0xB0

    idRenderModel* renderModel; // Offset: 0xB8

    // tree animator this articulated figure deals with
    idJointAnimator* jointAnimator; // Offset: 0xC0

    // anim to modify
    idMD6Anim* modifiedAnim; // Offset: 0xC8

    idSpawnId ownerSpawnID; // Offset: 0xD0

    // offset of base body relative to skeletal model origin {{ units = m }}
    idVec3 baseOrigin; // Offset: 0xD4

    // axis of base body relative to skeletal model origin
    idMat3 baseAxis; // Offset: 0xE0

    // list with transforms from skeletal model joints to articulated figure bodies
    idList < idAnimator_AF::idAFJointMod , TAG_AF , false > jointMods; // Offset: 0x108

    // table to find the nearest articulated figure body for a joint of the skeletal model
    idList < int , TAG_AF , false > jointBody; // Offset: 0x120

    // Which joints to match against (initialized from decl)
    idList < idGetUpJoint , TAG_IDLIST , false > getUpJoints; // Offset: 0x138

    // Get up animations that we have available
    idList < idGetUpAnimation , TAG_IDLIST , false > getUpAnims; // Offset: 0x150

    int currentDeferred; // Offset: 0x168

    idSoundObject soundObject; // Offset: 0x170

    // state last origin of the render model to blend from towards the AF origin {{ units = m }}
    idVec3 lastRenderModelOrigin; // Offset: 0x180

    // last axis of the render model to blend from towards the AF axis
    idMat3 lastRenderModelAxis; // Offset: 0x18C

    // {{ units = m / ( s * s ) }}
    idVec3 gravityBeforeSync; // Offset: 0x1B0

    idVec3 lastSyncDelta; // Offset: 0x1BC

    // last time the articulated figure was transformed to reflect the current animation pose
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > poseTime; // Offset: 0x1C8

    // time the articulated figure came to rest
    int restStartTime; // Offset: 0x1D0

    // sum of all ragdoll bodies^2 linear velocities
    float cachedRagdollLinearVelSqSum; // Offset: 0x1D4

    // true if this articulated figure modifies the render model origin
    bool modifiesOrigin; // Offset: 0x1D8

    // true when the articulated figure is properly loaded
    bool isLoaded; // Offset: 0x1D9

    // true when running the articulated figure physics
    bool isRunningPhysics; // Offset: 0x1DA

    // true if the articulated figure physics is active
    bool isActive; // Offset: 0x1DB

    // this is only set to true on clients when they need to kill themselves or another client based on relibale messages fromt he server. They can get a reliable message from the server before they see isActive sent through the snapshots.
    bool isClientAuthoritativeActive; // Offset: 0x1DC

    // true if the articulated figure is being synced to an animation
    bool isSyncing; // Offset: 0x1DD

    // Sometimes people call BeginSync after calling EndSync... this is to make sure we don't turn a dynamic ragdoll into a keyframed ragdoll and therefore it freezes in mid-air
    bool didEndSync; // Offset: 0x1DE

    // true if the articulated figure is being synced to an animation
    bool isDynamic; // Offset: 0x1DF

    // true if the bind constraints have been added
    bool hasBindConstraints; // Offset: 0x1E0

    // true if the ragdoll has blended in full and disabled walk IK
    bool walkIKDisabled; // Offset: 0x1E1

    // If true, no solid checks are done while syncing
    bool noSolidChecks; // Offset: 0x1E2

    // Currently blending out from ragdoll back to living
    bool isGettingUp; // Offset: 0x1E3

    // Currently blending out from ragdoll while getting up
    bool isBlendingOutGettingUp; // Offset: 0x1E4

    // If we should get back up again, disable when dead
    bool shouldGetUp; // Offset: 0x1E5

    // HACK HACK
    bool isAI; // Offset: 0x1E6

    // constraints applied only when syncing to animation
    idList < idAnimator_AF::idSyncConstraint , TAG_AF , false > syncConstraints; // Offset: 0x1E8

    idHavokRagdoll havokRagdoll; // Offset: 0x200

    idPhysicsCallbacks* physicsCallbacks; // Offset: 0x270

    idAfConstraintCallbacks* constraintCallbacks; // Offset: 0x278

    unsigned char jointFilter[256]; // Offset: 0x280

    idMD6LeafPause AFLeaf; // Offset: 0x380

    idMD6LeafPlay getUpLeaf; // Offset: 0x408

    // branch used to splice getting up animation with ragdoll
    idMD6Branch* getUpMergeBranch; // Offset: 0x468

    // effects
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextSoundTime; // Offset: 0x470

    idImpactManager* impactMgr; // Offset: 0x478

    // networking
    bool oldIsActive; // Offset: 0x480

    idAnimatedEntityPhysicsCallbacksFake* fakeCB; // Offset: 0x488

    idDeclAF* storedDeclAF; // Offset: 0x490

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTime; // Offset: 0x498

    // last time an impulse was applied -- we use this to make sure we don't maintain impulses over multiple frames
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastImpulseTime; // Offset: 0x4A0

    // count calls to InitAF so clients know to do that as well
    int initCount; // Offset: 0x4A8

    bool inheritAnimationVelocity; // Offset: 0x4AC

    bool inheritOverrideVelocity; // Offset: 0x4AD

    bool allowInheritVelocity; // Offset: 0x4AE

    // {{ units = m / s }}
    idVec3 overrideVelocity; // Offset: 0x4B0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastSyncFrameTime; // Offset: 0x4C0

}; // Size: 0x4C8
