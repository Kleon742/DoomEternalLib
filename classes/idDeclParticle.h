struct idDeclParticle : idDeclTypeInfo
{
    struct runtimeReference_t
    {
        idParticleStage* stage; // Offset: 0x0

        int nameHash; // Offset: 0x8

        idAtomicString name; // Offset: 0x10

        int instanceIndex; // Offset: 0x18

    }; // Size: 0x20

    // derived from stages
    idBounds bounds; // Offset: 0x88

    // recorded bounds
    idBounds recordedBounds; // Offset: 0xA0

    // derived from stages
    idTypesafeTime < int , millisecondUnique_t , 1000 > maxSystemDuration; // Offset: 0xB8

    // lod radius for the system {{ units = m }}
    float lodRadius; // Offset: 0xBC

    // automatically-hide effect after given duration (ms)
    idTypesafeTime < int , millisecondUnique_t , 1000 > autoHideTimer; // Offset: 0xC0

    // stage instances
    idList < idParticleStageInstance , TAG_IDLIST , false > instances; // Offset: 0xC8

    // list of stages embedded into this system
    idList < idParticleStage , TAG_PARTICLE , false > stages; // Offset: 0xE0

    // exposed scalars that can be overridden
    idList < particleExposedScalar_t , TAG_IDLIST , false > exposedScalars; // Offset: 0xF8

    // runtime list of stages, this does not get serialized
    idList < idDeclParticle::runtimeReference_t , TAG_PARTICLE , false > runtimeStageReferences; // Offset: 0x110

    idList < unsigned int , TAG_PARTICLE , false > compiledStageHashes; // Offset: 0x128

    idList < unsigned int , TAG_PARTICLE , false > materialLocks; // Offset: 0x140

    idList < idGpuParticles::idStageRuntime * , TAG_IDLIST , false > stageRuntimes; // Offset: 0x158

    // LEGACY ASSET SUPPORT Note: after loading this array is cleared. The lists of tableDecls are directly in the stages now list of table decls
    idList < const idDeclTable * , TAG_PARTICLE , false > tableDecls; // Offset: 0x170

    // list of (independent) stages for this system
    idList < idDeclParticleStage * , TAG_PARTICLE , false > stageDecls; // Offset: 0x188

    // used to know when a runtime is safe to use in the engine in case it has recompiled
    int runtimeVersion; // Offset: 0x1A0

}; // Size: 0x1A8
