struct idStagedTimer
{
    struct entityHighlightPair_t
    {
        idManagedClassPtr < idEntity > entity; // Offset: 0x0

        int handle; // Offset: 0x20

    }; // Size: 0x28

    struct entityMaterialListPair_t
    {
        idManagedClassPtr < idEntity > entity; // Offset: 0x0

        idList < const idMaterial2 * , TAG_IDLIST , false >* matList; // Offset: 0x20

    }; // Size: 0x28

    bool active; // Offset: 0x0

    bool stageChangedThisUpdate; // Offset: 0x1

    int lastTimerStage; // Offset: 0x4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeSinceStart; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pauseTime; // Offset: 0x18

    idTypesafeTime < float , secondUnique_t , 1 > prevTimeLeft; // Offset: 0x20

    uint16 gcBroadcastId; // Offset: 0x24

    // so we know whether this was for a bounty, a traversal, etc.
    unsigned short startingEvent; // Offset: 0x26

    idDeclStagedTimer* currentBehavior; // Offset: 0x28

    int totalCoins; // Offset: 0x30

    int numCoinsPickedUp; // Offset: 0x34

    int numGoldCoinsPickedUp; // Offset: 0x38

    idList < idStagedTimer::entityHighlightPair_t , TAG_IDLIST , false > highlightEntities; // Offset: 0x40

    // these entities allocate, release, show, and hide their own highlights, but we still need to update the colors
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > selfManagedHighlightEntities; // Offset: 0x58

    idList < idStagedTimer::entityMaterialListPair_t , TAG_IDLIST , false > materialEntities; // Offset: 0x70

}; // Size: 0x88
