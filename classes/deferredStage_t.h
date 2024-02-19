struct deferredStage_t
{
    idDeclParticle* particleDecl; // Offset: 0x0

    idGpuParticles::idStageRuntime* runtime; // Offset: 0x8

    idVec3 origin; // Offset: 0x10

    int surfaceIndex; // Offset: 0x1C

    idMat3 axis; // Offset: 0x20

    int quadCount; // Offset: 0x44

    int indexOffset; // Offset: 0x48

}; // Size: 0x50
