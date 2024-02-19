struct idDemoManager
{
    idDemo* activeDemo; // Offset: 0x0

    demoMode_t demoMode; // Offset: 0x8

    idSnapshotProcessor* demoSSProcessor; // Offset: 0x10

    // ERE: Temp until we resolve players versus spectators
    int currentLobbyUserCount; // Offset: 0x18

    unsigned char* objMemory; // Offset: 0x20

    idStr pendingDemoName; // Offset: 0x28

    unsigned long long pendingSnapRate; // Offset: 0x58

    idList < idDemo::demoSnapshotSummary_t , TAG_IDLIST , false > snapshotSummaries; // Offset: 0x60

    idList < int , TAG_IDLIST , false > snapshotSummaryWarningTimes; // Offset: 0x78

}; // Size: 0x90
