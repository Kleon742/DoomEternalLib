struct idAnimSysNode_Ragdoll : idAnimSysNode
{
    enum testSolidResult_t : int
    {
        TESTSOLID_NOT_IN_SOLID = 0,
        TESTSOLID_IN_SOLID_NOCLIP = 1,
        TESTSOLID_IN_SOLID = 2,
        TESTSOLID_MAX = 3
    };

    enum ragdollJointModType_t : int
    {
        RAGDOLL_JOINTMOD_AXIS = 1,
        RAGDOLL_JOINTMOD_ORIGIN = 2,
        RAGDOLL_JOINTMOD_BOTH = 3
    };

    struct idAFJointMod
    {
        // id of the body
        int bodyId; // Offset: 0x0

        // origin of body relative to joint
        idVec3 jointBodyOrigin; // Offset: 0x4

        // axis of body relative to joint
        idMat3 jointBodyAxis; // Offset: 0x10

        // index of the joint this body modifies
        idIndex < short , invalidJointIndex_t , - 1 > jointIndex; // Offset: 0x34

        // modify joint axis, origin or both
        idAnimSysNode_Ragdoll::ragdollJointModType_t jointMod; // Offset: 0x38

    }; // Size: 0x3C

    struct idSyncConstraint
    {
        // constraint's world pos is anchored to this joint in world space
        idHandle < unsigned short , invalidJointHandle_t , INVALID_JOINT_HANDLE > jointHandle; // Offset: 0x0

        // the actual constraint
        idHavokConstraint* constraint; // Offset: 0x8

    }; // Size: 0x10

    // parameters the articulated figure decl to use
    idDeclAF* declOverride; // Offset: 0xA8

    // name of the loaded .af file
    idStr afName; // Offset: 0xB0

    idHavokPhysics* havokPhysics; // Offset: 0xE0

    idHavokCollision* havokCollision; // Offset: 0xE8

    // anim to modify
    idMD6Anim* modifiedAnim; // Offset: 0xF0

    idSpawnId ownerSpawnID; // Offset: 0xF8

    // offset of base body relative to skeletal model origin
    idVec3 baseOrigin; // Offset: 0xFC

    // axis of base body relative to skeletal model origin
    idMat3 baseAxis; // Offset: 0x108

    // list with transforms from skeletal model joints to articulated figure bodies
    idList < idAnimSysNode_Ragdoll::idAFJointMod , TAG_AF , false > jointMods; // Offset: 0x130

    // table to find the nearest articulated figure body for a joint of the skeletal model
    idList < int , TAG_AF , false > jointBody; // Offset: 0x148

    // List of deleted body id's (in order), so deleting bodies in the same order should get the same result
    idList < int , TAG_AF , false > deletedBodyIds; // Offset: 0x160

    // Generation
    idGameTimeManager* gameTimeManager; // Offset: 0x178

    animInstance_t animinstance; // Offset: 0x180

    blendInfo_t syncBlendInfo; // Offset: 0x1A8

    int currentDeferred; // Offset: 0x1C8

    idList < idMD6Blend::jointMod_t , TAG_ANIMSYS , false > animMods[2]; // Offset: 0x1D0

    // state last origin of the render model to blend from towards the AF origin
    idVec3 lastRenderModelOrigin; // Offset: 0x200

    // last axis of the render model to blend from towards the AF axis
    idMat3 lastRenderModelAxis; // Offset: 0x20C

    idVec3 gravityBeforeSync; // Offset: 0x230

    idVec3 lastSyncDelta; // Offset: 0x23C

    // last time the articulated figure was transformed to reflect the current animation pose
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > poseTime; // Offset: 0x248

    int restState; // Offset: 0x250

    // true if this articulated figure modifies the render model origin
    bool modifiesOrigin; // Offset: 0x254

    // true when the articulated figure is properly loaded
    bool isLoaded; // Offset: 0x255

    // true when running the articulated figure physics
    bool isRunningPhysics; // Offset: 0x256

    // true if the articulated figure physics is active
    bool isActive; // Offset: 0x257

    // true if the articulated figure is being synced to an animation
    bool isSyncing; // Offset: 0x258

    // true if the articulated figure is being synced to an animation
    bool isDynamic; // Offset: 0x259

    // true if the bind constraints have been added
    bool hasBindConstraints; // Offset: 0x25A

    // true if the ragdoll has blended in full and disabled walk IK
    bool walkIKDisabled; // Offset: 0x25B

    // If true, no solid checks are done while syncing
    bool noSolidChecks; // Offset: 0x25C

    // constraints applied only when syncing to animation
    idList < idAnimSysNode_Ragdoll::idSyncConstraint , TAG_AF , false > syncConstraints; // Offset: 0x260

    // articulated figure physics
    idHavokRagdoll havokRagdoll; // Offset: 0x278

    idPhysicsCallbacks* physicsCallbacks; // Offset: 0x2E8

    idRenderModel* renderModel; // Offset: 0x2F0

    idJointAnimator* jointAnimator; // Offset: 0x2F8

    // effects
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextSoundTime; // Offset: 0x300

    idImpactManager* impactMgr; // Offset: 0x308

    // networking
    bool oldIsActive; // Offset: 0x310

    idDeclAF* storedDeclAF; // Offset: 0x318

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTime; // Offset: 0x320

    // last time an impulse was applied -- we use this to make sure we don't maintain impulses over multiple frames
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastImpulseTime; // Offset: 0x328

    // count calls to InitAF so clients know to do that as well
    int initCount; // Offset: 0x330

    bool inheritAnimationVelocity; // Offset: 0x334

    bool inheritOverrideVelocity; // Offset: 0x335

    idVec3 overrideVelocity; // Offset: 0x338

}; // Size: 0x348
