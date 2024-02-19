struct idGameViewInfo
{
    struct GameViewProcessJobData_t
    {
        int viewIndex; // Offset: 0x0

        int processIndex; // Offset: 0x4

        idGameViewInfo* me; // Offset: 0x8

    }; // Size: 0x10

    struct viewInfoTraceData_t
    {
        // {{ units = _ }}
        idVec3 startPosition; // Offset: 0x0

        // {{ units = m }}
        idVec3 endPosition; // Offset: 0xC

        int clipMask; // Offset: 0x18

        int viewIndex; // Offset: 0x1C

        int entityIndex; // Offset: 0x20

        int processIndex; // Offset: 0x24

    }; // Size: 0x28

    jobHandle_t jobHandle; // Offset: 0x0

    idList < idGameViewInfo::GameViewProcessJobData_t , TAG_IDLIST , false > gameViewSpawnIdInfos; // Offset: 0x8

    idList < idGameViewInfo::viewInfoTraceData_t , TAG_IDLIST , false > viewTraces; // Offset: 0x20

    interlockedInt_t viewTraceIndex; // Offset: 0x38

    idList < gameView_t , TAG_IDLIST , false > views; // Offset: 0x40

    int resultsIndex; // Offset: 0x58

    idManagedClassPtr < idEntity > debug_selectedEntity; // Offset: 0x60

    idManagedClassPtr < idEntity > debug_selectedViewEntity; // Offset: 0x80

    int debug_highlightHandle; // Offset: 0xA0

    uint16 broadcastSystemId; // Offset: 0xA4

    mutexHandle_t mutex; // Offset: 0xA8

    idList < idSpawnId , TAG_IDLIST , false > registeredEntities_entity; // Offset: 0xD0

    idList < const idDeclTargeting * , TAG_IDLIST , false > registeredEntities_decl; // Offset: 0xE8

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > newViewAllocations; // Offset: 0x100

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > newViewDeallocations; // Offset: 0x118

    float fieldOfView; // Offset: 0x130

    int traceClipMask; // Offset: 0x134

    idAtomicString destructibleTargetString; // Offset: 0x138

    idAtomicString aiProxyTargetString; // Offset: 0x140

}; // Size: 0x148
