struct idProgressionManager : idEventReceiver
{
    struct progressionItemData_t
    {
        // whether the entity for this item is hidden
        bool isHidden; // Offset: 0x0

        // whether this secret has been found
        bool isCompleted; // Offset: 0x1

        // whether the player has hit l-o-s with this secret
        bool isKnown; // Offset: 0x2

        // whether the player found it this level or not
        bool isFromPreviousPlay; // Offset: 0x3

        // name of secret
        idStr itemName; // Offset: 0x8

        // category
        int progressionCategory; // Offset: 0x38

        // map group
        automapMapGroupId_t automapGroup; // Offset: 0x3C

    }; // Size: 0x40

    struct levelProgressionData_t
    {
        // level that the stats correspond to
        idStr levelName; // Offset: 0x0

        bool mapCompleted; // Offset: 0x30

        idList < idProgressionManager::progressionItemData_t , TAG_IDLIST , false > progressionData; // Offset: 0x38

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > playTime; // Offset: 0x50

    }; // Size: 0x58

    struct slayerGateData_t
    {
        idStr levelName; // Offset: 0x0

        idStr encounterName; // Offset: 0x30

        bool isCompleted; // Offset: 0x60

    }; // Size: 0x68

    struct removeDeferredData_t
    {
        progressFlags_t progressFlag; // Offset: 0x0

        saveGameSerSpan_t spanType; // Offset: 0x4

        idStr entityName; // Offset: 0x8

    }; // Size: 0x38

    typedef idList < idProgressionManager::progressionItemData_t > idProgressionList;

    // system id for progression manager in the event system
    uint16 broadcastSystemId; // Offset: 0x38

    // list of items that need to be removed on checkpoint
    idList < idStr , TAG_IDLIST , false > checkpointRemovalList; // Offset: 0x40

    // list of items that need to be removed on checkpoint for the game
    idList < idStr , TAG_IDLIST , false > checkpointRemovalListGame; // Offset: 0x58

    // list of items that need to be removed on checkpoint
    idList < idStr , TAG_IDLIST , false > checkpointRemovalListAllowMS; // Offset: 0x70

    // list of items that need to be removed on checkpoint for the game
    idList < idStr , TAG_IDLIST , false > checkpointRemovalListGameAllowMS; // Offset: 0x88

    idList < idProgressionManager::removeDeferredData_t , TAG_IDLIST , false > removeDeferredData; // Offset: 0xA0

    idList < idProgressionManager::levelProgressionData_t , TAG_IDLIST , false > progressionData; // Offset: 0xB8

    idList < idProgressionManager::slayerGateData_t , TAG_IDLIST , false > slayerGateData; // Offset: 0xD0

    idManagedClassPtr < idPlayer > playerOwner; // Offset: 0xE8

}; // Size: 0x108
