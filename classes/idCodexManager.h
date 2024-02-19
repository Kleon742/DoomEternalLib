struct idCodexManager : idEventReceiver
{
    struct idTutorialCheckpointTracking_t
    {
        idTutorialCheckpointData_t tutorialData; // Offset: 0x0

        int numDeaths; // Offset: 0x28

    }; // Size: 0x30

    // codex entries for currencies
    idArray < const idDeclCodexEntry * , 9 > currencyCodexEntries; // Offset: 0x38

    // formatted codex, for recursion's sake
    idList < codexEntry_t , TAG_IDLIST , false > contentTree; // Offset: 0x80

    idManagedClassPtr < idPlayer > playerOwner; // Offset: 0x98

    idList < const idDeclCodexEntry * , TAG_IDLIST , false > acquiredCodexEntries; // Offset: 0xB8

    idDeclCodexEntry* recentEntry; // Offset: 0xD0

    int recentCategoryIndex; // Offset: 0xD8

    bool initialized; // Offset: 0xDC

    // Only tracks tutorial events tied to checkpoint reloads
    idList < const idDeclTutorialEvent * , TAG_IDLIST , false > seenCheckpointTutorialEvents; // Offset: 0xE0

    idCodexManager::idTutorialCheckpointTracking_t tutorialCheckpointTracking; // Offset: 0xF8

}; // Size: 0x128
