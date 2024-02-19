struct idRenderModelUpdateTools
{
    idRenderModelTransparency* transparencyModel; // Offset: 0x0

    idRenderModel* flareModel; // Offset: 0x8

    deferredParticleGenParms_t* deferredParticleList[4096]; // Offset: 0x10

    int numDeferredParticles; // Offset: 0x8010

}; // Size: 0x8018
