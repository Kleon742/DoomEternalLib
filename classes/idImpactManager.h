struct idImpactManager
{
    struct impactState_t
    {
        idRenderModelParticle* pmodel; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x10

    }; // Size: 0x18

    struct impactBindState_t
    {
        bool bindToParent; // Offset: 0x0

        // {{ units = m }}
        idVec3 relOrg; // Offset: 0x4

        idMat3 relRot; // Offset: 0x10

    }; // Size: 0x34

    struct impactBufferItem_t
    {
        // {{ units = m }}
        idVec3 pos; // Offset: 0x0

        idMat3 axis; // Offset: 0xC

        idDeclParticle* prt; // Offset: 0x30

        bool bindToParent; // Offset: 0x38

        int playerIndex; // Offset: 0x3C

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > serverTime; // Offset: 0x40

    }; // Size: 0x48

    idList < idImpactManager::impactState_t , TAG_IDLIST , false > impacts; // Offset: 0x0

    idList < idImpactManager::impactBindState_t , TAG_IDLIST , false > impactBinds; // Offset: 0x18

    int next; // Offset: 0x30

    idRandom random; // Offset: 0x34

    bool initialized; // Offset: 0x38

    idFXResourceManager* fxResourceManager; // Offset: 0x40

    idImpactManager::impactBufferItem_t impactBuffer[16]; // Offset: 0x48

    // Current position in emitBuffer
    int impactBufferPos; // Offset: 0x4C8

    int serializeImpactCount; // Offset: 0x4CC

    // Used on clients to determine whether this should be predicted or serialized
    int localPlayerIndex; // Offset: 0x4D0

}; // Size: 0x4D8
