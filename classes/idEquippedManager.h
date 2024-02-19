struct idEquippedManager
{
    struct remoteEquipped_t
    {
        idList < characterEquippedSet_t , TAG_IDLIST , false > characterEquippedSets; // Offset: 0x0

        weaponSkinSet_t weaponEquippedSet; // Offset: 0x18

    }; // Size: 0x60

    struct equippedSyncState_t
    {
        // When the equipped set was last changed locally
        unsigned int timeLastChanged; // Offset: 0x0

        // What change we last pushed to the service
        unsigned int timeLastChangedTasked; // Offset: 0x4

        // What change the service last responded successful event push
        unsigned int timeLastConfirmedPushed; // Offset: 0x8

        // What change the service has started using the new change in a poll response
        unsigned int timeLastConfirmedSynced; // Offset: 0xC

        // The most recent task
        asyncio::idTaskPtr taskToSync; // Offset: 0x10

    }; // Size: 0x18

    idList < characterEquippedSet_t , TAG_IDLIST , false > localCharacterEquipped; // Offset: 0x0

    weaponSkinSet_t localWeaponEquipped; // Offset: 0x18

    accountEquippedSet_t localAccountEquipped; // Offset: 0x60

    equippedSkyboxes_t equippedSkyboxes; // Offset: 0x90

    idList < idEquippedManager::equippedSyncState_t , TAG_IDLIST , false > localCharacterEquippedSyncs; // Offset: 0xA0

    idEquippedManager::equippedSyncState_t localWeaponEquippedSync; // Offset: 0xB8

    idEquippedManager::equippedSyncState_t localAccountEquippedSync; // Offset: 0xD0

    // The most recent task
    asyncio::idTaskPtr confirmSyncTask; // Offset: 0xE8

    // Time last response finished.
    idTypesafeTime < int , millisecondUnique_t , 1000 > confirmSync_timeOfLastResponse; // Offset: 0xF0

    // How many times tried to confirm the most recent
    int confirmSync_numTries; // Offset: 0xF4

    idProxyPtr < idEquippedManager > proxyPtr; // Offset: 0xF8

    // Identity container for our associated user
    idLocklessWeakPtr < idPlatformIdentityContainer > containerWeakPtr; // Offset: 0x100

}; // Size: 0x108
