struct idAnimatedEntity : idBloatedEntity
{
    struct collisionMesh_t
    {
        // Name of the sub mesh. This will be used to determine collision.
        idStr meshName; // Offset: 0x0

        // Name of the joint the sub model is associated with
        idAtomicString jointName; // Offset: 0x30

        // {{ units = m }}
        idVec3 startingJointPos; // Offset: 0x38

    }; // Size: 0x48

    struct idAnimateEntityVolatile_t
    {
        idAnimSys* animSys; // Offset: 0x0

        // ------------------------- network -------------------------
        idRenderModel* cachedRenderModel; // Offset: 0x8

        idJointAnimator* jointAnimator; // Offset: 0x10

        idHavokShapePointer sphereModelShape; // Offset: 0x18

        int sphereModelContents; // Offset: 0x20

        idHavokPhysics_SphereTree* spherePhysicsObj; // Offset: 0x28

        bool useSphereModel; // Offset: 0x30

        // flag to indicate we want collision to be updated
        bool updateCollision; // Offset: 0x31

        tagData_t cachedTagData; // Offset: 0x34

        // List of physics objects
        idList < idHavokPhysics_DefaultStatic * , TAG_IDLIST , false > physicsObjs; // Offset: 0x58

    }; // Size: 0x70

    typedef unsigned short aimAssistBitVectorInfo_t;

    customizationMaterialLocks_t customizationMaterialLocks; // Offset: 0xB88

    bool lockedTarget; // Offset: 0xBA8

    float lockedOnPercent; // Offset: 0xBAC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lockEndTime; // Offset: 0xBB0

    bool updatesEchoProjectorPosition; // Offset: 0xBB8

    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > echoOpacity; // Offset: 0xBC0

    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > echoGlitch; // Offset: 0xBF0

    // Targeting Decl ( defines specific aim assist / AR target points )
    idDeclTargeting* targetingDecl; // Offset: 0xC20

    // a cache of data for target points. ( used by aim target and hit detection )
    idList < idTargetPointCache , TAG_IDLIST , false > targetPointCache; // Offset: 0xC28

    // For ignoring certain frame commands from the last frame of a cancelled sync.
    unsigned long long finalTargetSyncAnimResource; // Offset: 0xC40

    // clear glory kill highlight
    idNetEvent < 15 > clearGKHighlight; // Offset: 0xC48

    cosmeticSkinData_t* cosmeticSkinData; // Offset: 0xC60

    // animation system decl to use
    idDeclAnimSys* declAnimSys; // Offset: 0xC68

    idAnimStack animStack; // Offset: 0xC70

    bool forceNonDeferredPosing; // Offset: 0x18B0

    // the fx decl
    idDeclFX* fxDecl; // Offset: 0x18B8

    // damage skin (scarred, scraped, etc..)
    idStr damageSwapSkin; // Offset: 0x18C0

    // initial morph strength to apply to a character's damage skin (ex.can start a character off completely bloodied)
    float initialMorphValue; // Offset: 0x18F0

    // if >= 0, animations are paused and this is the time they were paused
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pauseTime; // Offset: 0x18F8

    // for the md6 sphere tree use these additional content flags
    contentsFlags_t forcedAdditionalSphereContents; // Offset: 0x1900

    // added from Doom4 for sync entities
    idManagedClassPtr < idAnimatedEntity > animationMaster; // Offset: 0x1908

    // added from Doom4 for sync entities
    idAnimator_Proxy proxyAnimator; // Offset: 0x1928

    bool allowedToUpdateProxyAnimator; // Offset: 0x1970

    bool animStackChangedDuringSerialization; // Offset: 0x1971

    // joint indices to trace to for radius damage
    idList < idIndex < short , invalidJointIndex_t , - 1 > , TAG_IDLIST , false > radiusDamageJointIndices; // Offset: 0x1978

    // joint group indices whose hit test spheres will be traced to for radius damage
    idList < int , TAG_IDLIST , false > radiusDamageHitTestGroupIndices; // Offset: 0x1990

    // joint group indices whose positions will be used for aim assist and targeting
    idList < int , TAG_IDLIST , false > targetingGroupIndices; // Offset: 0x19A8

    idMidnightAnimMdntInfo* midnightAnimInfo; // Offset: 0x19C0

    idMidnightAnimClipInfo* midnightClipInfo; // Offset: 0x19C8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > midnightTime; // Offset: 0x19D0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > midnightPreviousTime; // Offset: 0x19D8

    // cosmetic fx
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > cosmeticFxActionGroup; // Offset: 0x19E0

    bool md6ChangedDuringCosmeticApplication; // Offset: 0x19E8

    bool forceFxDeclOverride; // Offset: 0x19E9

    // ------------------------- network -------------------------
    idHavokShapePointer sphereShape; // Offset: 0x19F0

    int sphereModelContents; // Offset: 0x19F8

    // any animation in this stack will be modified accordingly
    float animRateScale_Inv; // Offset: 0x19FC

    bool createdAnimStack; // Offset: 0x1A00

    // true only while this entity is the instigator of a sync attack
    bool isSyncAttackInstigator; // Offset: 0x1A01

    // true if we are coming from a pool respawn
    bool isRespawn; // Offset: 0x1A02

    // true if anim stack's tree is dirty -- don't run frame commands this frame
    bool treeIsDirty; // Offset: 0x1A03

    bool hasAnimatedSinceSync; // Offset: 0x1A04

    unsigned short serializedAimAssist; // Offset: 0x1A06

    // This can be set in SetMasterAnimator, used to select the correct set from an animweb.
    idStr animSetName; // Offset: 0x1A08

    // Collision parts in the animated entity
    idList < idAnimatedEntity::collisionMesh_t , TAG_IDLIST , false > collisionParts; // Offset: 0x1A38

    // Play the animation in reverse.
    bool reverse; // Offset: 0x1A50

    bool wasReversed; // Offset: 0x1A51

    // if false, will not create collision spheres
    bool canUseSphereModels; // Offset: 0x1A52

    idAnimatedEntity::idAnimateEntityVolatile_t animatedEntityVolatile; // Offset: 0x1A58

    // a default implementation, actors override this
    idAnimatedEntityPhysicsCallbacks defaultPhysicsCallbacks; // Offset: 0x1AC8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > prev_time; // Offset: 0x1AF8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > cur_time; // Offset: 0x1B00

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > cur_time_offset; // Offset: 0x1B08

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > time_started; // Offset: 0x1B10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > duration; // Offset: 0x1B18

    idRigIKComponentInstance* ikComponent; // Offset: 0x1B20

    idRigFootContactResolver* ikFootContactResolver; // Offset: 0x1B28

    idTypesafeTime < float , secondUnique_t , 1 > syncBlendOutTime; // Offset: 0x1B30

    // Bot Component
    idBot* botController; // Offset: 0x1B38

    // for tracking sound position on a joint
    idAtomicString soundTag; // Offset: 0x1B40

}; // Size: 0x1B48
