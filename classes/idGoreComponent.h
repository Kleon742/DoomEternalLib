struct idGoreComponent
{
    struct cachedGoreDecalParms_t
    {
        deferredDecalParams_t* decalParam; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTime; // Offset: 0x8

        idVec3 endPos; // Offset: 0x10

        idVec3 normal; // Offset: 0x1C

    }; // Size: 0x28

    struct mainThreadCallParms_t
    {
        idList < idGoreComponent::cachedGoreDecalParms_t , TAG_IDLIST , false > decalParms; // Offset: 0x0

    }; // Size: 0x18

    // ================================================ DAMAGE Members  ================================================
    idStaticList < goreFrameDamage_t , 8 , false , TAG_IDLIST > frameDamage; // Offset: 0x0

    idStaticList < goreFrameDamage_t , 8 , false , TAG_IDLIST > frameDamageClient; // Offset: 0x618

    int localFrameDamageIndex; // Offset: 0xC30

    int serverFrameDamageIndex; // Offset: 0xC34

    int serializeFrameDamageIndex; // Offset: 0xC38

    int serializeWoundDataIndex; // Offset: 0xC3C

    int startingFrameDamageIndex; // Offset: 0xC40

    int startingClientFrameDamageIndex; // Offset: 0xC44

    int clientFrameDamageIndex; // Offset: 0xC48

    idEntityDamageComponent* entityDamageComponent; // Offset: 0xC50

    // ================================================ GPU Rendering ================================================ quick list of blood spheres
    idList < idSphere , TAG_IDLIST , false > bloodSpheres; // Offset: 0xC58

    // quick list of all active clip spheres
    idList < const idDeclGoreWound * , TAG_IDLIST , false > bloodSphereIndices; // Offset: 0xC70

    // when the clip sphere clears.
    idList < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , TAG_IDLIST , false > bloodSphereClearTime; // Offset: 0xC88

    // ================================================  ================================================ The Entity that owns us.
    idManagedClassPtr < idAnimatedEntity > owningEntity; // Offset: 0xCA0

    // gore component decl
    idDeclGoreContainer* goreContainer; // Offset: 0xCC0

    // The currently used full body subgraph
    idDeclGoreWound* currentFullBodyWound; // Offset: 0xCC8

    // Local entity has full body gibbed
    bool hasFullBodyGibbedLocally; // Offset: 0xCD0

    // The Decal Manager to use.
    idDeferredDecalManager* decalManager; // Offset: 0xCD8

    // The blood splatters we have yet to create.
    idList < decalPendingData_t , TAG_IDLIST , false > pendingBloodSplatters; // Offset: 0xCE0

    // active bloodsplatters
    idList < decalActiveData_t , TAG_IDLIST , false > activeBloodSplatters; // Offset: 0xCF8

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > createdEntities; // Offset: 0xD10

    idGoreComponent::mainThreadCallParms_t mainThreadParms; // Offset: 0xD28

    // Data on all our wounds.
    idList < woundData_t , TAG_IDLIST , false > woundData; // Offset: 0xD40

    // Wounds mask to serialize
    uint32_t woundsToSerializeMask; // Offset: 0xD58

    // Data for pending full body wounds
    idList < idPendingFullBodyWound_t , TAG_IDLIST , false > pendingFullBodyWounds; // Offset: 0xD60

    // the global fx manager handle
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0xD78

    // the global fx manager handle for cheat code overrides
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > cheatCodeFXHandle; // Offset: 0xD80

    bool fxHandleInit; // Offset: 0xD88

    bool cheatCodeFXHandleInit; // Offset: 0xD89

    idList < requestedGore_t , TAG_IDLIST , false > requestedGore; // Offset: 0xD90

    requestedPain_t requestedPain; // Offset: 0xDA8

    // targeting groups disabled by wounds
    idList < idAtomicString , TAG_IDLIST , false > disabledTargetingGroups; // Offset: 0xE70

    // highlight groups disabled by wounds
    idList < idAtomicString , TAG_IDLIST , false > disabledHighlightGroups; // Offset: 0xE88

    // damage group weakpoints disabled by wounds
    idList < idAtomicString , TAG_IDLIST , false > disabledDamageWeakpointGroups; // Offset: 0xEA0

    // Since we check full body over multiple frames - if I keep re-rolling the dice then I'll almost always get it - so roll this once per life.
    float randomNumberForFullBodyOccurrences; // Offset: 0xEB8

    // if nonzero, don't do a classic death
    int classicDeathSuppressionFlags; // Offset: 0xEBC

    // game frame that full body gib was initiated ( 0 == not initiated yet )
    int gameFrameFullBodyGib; // Offset: 0xEC0

    int currentWoundMask; // Offset: 0xEC4

    // whether or not it should start full body gib if the server says to
    idNetEvent < 15 > startFullBodyGib; // Offset: 0xEC8

    // last set damage force parms for a full body gib to serialize over
    serializedFullBodyGibParms_t lastFullBodyGibParams; // Offset: 0xEE0

    // The last time we made a blood splatter.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDecalSpawnTime; // Offset: 0xF00

    idList < const idDeclGoreWound * , TAG_IDLIST , false > excludedWounds; // Offset: 0xF08

    // gore wound overrides for custom cosmetic types
    idAtomicString customCosmeticGoreType; // Offset: 0xF20

    // used to start/stop presentation states that can override wound data
    idList < idAtomicString , TAG_IDLIST , false > overrideKeys; // Offset: 0xF28

    // global blood pool spawned?
    bool bloodPoolHasBeenSpawned; // Offset: 0xF40

    // no more gore after a terminal wound has been enabled
    bool terminalWoundEnabled; // Offset: 0xF41

    // force full body gibs
    bool forceFullBody; // Offset: 0xF42

    bool renderModelNeedsHide; // Offset: 0xF43

}; // Size: 0xF48
