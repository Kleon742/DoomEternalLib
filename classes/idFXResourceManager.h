struct idFXResourceManager
{
    struct fxPrtModel_t
    {
        idDeclParticle* pDecl; // Offset: 0x0

        idRenderModelParticle* pmodel; // Offset: 0x8

    }; // Size: 0x10

    struct fxStaticModel_t
    {
        idRenderModel* rmodel; // Offset: 0x0

        idStaticModel* modelResource; // Offset: 0x8

    }; // Size: 0x10

    idRenderWorld* rw; // Offset: 0x0

    idSoundWorld2ID sw; // Offset: 0x8

    idStaticList < idFXResourceManager::fxPrtModel_t , 1624 , false , TAG_IDLIST > fxPrtModels; // Offset: 0x10

    idHashIndex activePrtModelHash; // Offset: 0x65A8

    idHashIndex inactivePrtModelHash; // Offset: 0x65D8

    // Double linked list for LRU eviction of inactive particles
    unsigned short fxPrtLruHead; // Offset: 0x6608

    unsigned short fxPrtLruTail; // Offset: 0x660A

    unsigned short fxPrtLruNext[1624]; // Offset: 0x660C

    unsigned short fxPrtLruPrev[1624]; // Offset: 0x72BC

    idStaticList < idFXResourceManager::fxStaticModel_t , 128 , false , TAG_IDLIST > fxStaticModels; // Offset: 0x7F70

    idHashIndex activeStaticModelHash; // Offset: 0x8788

    idHashIndex inactiveStaticModelHash; // Offset: 0x87B8

    // pool of render lights
    idStaticList < idRenderLight * , 512 , false , TAG_IDLIST > fxLights; // Offset: 0x87E8

    // list of active render lights
    idStaticList < idRenderLight * , 512 , false , TAG_IDLIST > activeLights; // Offset: 0x9800

    // list of inactive render lights
    idStaticList < idRenderLight * , 512 , false , TAG_IDLIST > inactiveLights; // Offset: 0xA818

}; // Size: 0xB830
