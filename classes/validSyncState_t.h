struct validSyncState_t
{
    int requestId; // Offset: 0x0

    // {{ units = m }}
    idVec3 syncPos; // Offset: 0x4

    idMat3 syncAxis; // Offset: 0x10

    idAnimWebState animState; // Offset: 0x38

    idSyncParticipant* instigator; // Offset: 0x58

    idSyncParticipant* target; // Offset: 0x60

    idDeclSyncInteraction* interaction; // Offset: 0x68

    idDeclAnimWebNode* animWebNode; // Offset: 0x70

    syncAnimationInfo_t animInfo; // Offset: 0x78

    float priority; // Offset: 0xA8

    bool slowMoRequested; // Offset: 0xAC

    // if the interaction consumes ammo, this is the amount we're expecting to finish at. helps if we've also fire during the request to server.
    int expectedAmmo; // Offset: 0xB0

    idManagedClassPtr < idSyncEntity > syncEntity; // Offset: 0xB8

}; // Size: 0xD8
