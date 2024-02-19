struct idActiveSyncParticipant
{
    // data should never be NULL!
    idManagedClassPtr < idAnimatedEntity > instance; // Offset: 0x0

    idManagedClassPtr < idAnimatedEntity > target; // Offset: 0x20

    syncDeltaCorrection_t syncDeltaCorrectionData; // Offset: 0x40

    idHandle < int , invalidAttachment_t , INVALID_ATTACHMENT > equippedAttachment; // Offset: 0xD0

    // set to true once we drew this
    bool debugDrawnSkel; // Offset: 0xD4

    idSyncParticipant* data; // Offset: 0xD8

}; // Size: 0xE0
