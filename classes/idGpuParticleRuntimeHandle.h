struct idGpuParticleRuntimeHandle
{
    struct runtimeInfo_t
    {
        unsigned int compiledStageHash; // Offset: 0x0

        int handle; // Offset: 0x4

        bool deferredDrawCall; // Offset: 0x8

        int runtimeVersion; // Offset: 0xC

        idGpuParticles::idStageRuntime* runtime; // Offset: 0x10

        idMaterial2* material; // Offset: 0x18

        idBounds bounds; // Offset: 0x20

    }; // Size: 0x38

    idDeclParticle* declParticle; // Offset: 0x0

    idGpuParticles::idParticleManager* manager; // Offset: 0x8

    idStaticList < idGpuParticleRuntimeHandle::runtimeInfo_t , 32 , false , TAG_IDLIST > runtimeInfos; // Offset: 0x10

    idTriangles* triangles; // Offset: 0x728

    bool isDeactivated; // Offset: 0x730

}; // Size: 0x738
