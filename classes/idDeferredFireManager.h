struct idDeferredFireManager
{
    struct deferredFire_t
    {
        idFireParms fireParms; // Offset: 0x0

        idHavokQueryId queryHandles[16]; // Offset: 0x2A8

        idHavokMultiHitQueryId multiHitQueryHandles[16]; // Offset: 0x328

        idHavokMultiHitQueryId multiHitPointQueryHandles[16]; // Offset: 0x3A8

        idHavokQueryId fxTraceQueryHandles[16]; // Offset: 0x428

        idTestFireResults fireResults; // Offset: 0x4A8

        unsigned int handle; // Offset: 0x15B8

        int numPenetrations; // Offset: 0x15BC

        int numTraces; // Offset: 0x15C0

    }; // Size: 0x15C8

    idDeferredFireManager::deferredFire_t deferredFireBuffers[2][32]; // Offset: 0x0

    idDeferredFireManager::deferredFire_t deferredDecalBuffers[2][32]; // Offset: 0x57200

    unsigned int shotCount; // Offset: 0xAE400

    unsigned int activeBuffer; // Offset: 0xAE404

}; // Size: 0xAE408
