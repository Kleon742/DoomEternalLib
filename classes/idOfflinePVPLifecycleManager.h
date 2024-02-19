struct idOfflinePVPLifecycleManager : idPVPLifecycleManager
{
    // helper func
    idList < idOfflineCharacterPodium , TAG_IDLIST , false > offlinePodiums; // Offset: 0x3D8

    idStaticList < OfflineCharacterPodiumSetupData_t , 3 , false , TAG_IDLIST > offlinePodiumData; // Offset: 0x3F0

    idStaticList < bool , 3 , false , TAG_IDLIST > forceRefreshChar; // Offset: 0x5A0

    int fakeLocalPlayerIndex; // Offset: 0x5C0

    bool sequenceLayersActivated; // Offset: 0x5C4

}; // Size: 0x5C8
