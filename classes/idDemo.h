struct idDemo
{
    enum demoPacketType_t : int
    {
        DEMOPACKETTYPE_NONE = 0,
        DEMOPACKETTYPE_PACKET_SNAPSHOT = 1,
        DEMOPACKETTYPE_RELIABLE_MESSAGE = 2,
        DEMOPACKETTYPE_PAUSE_BREAK = 3,
        DEMOPACKETTYPE_PARTIAL_SNAP = 4
    };

    enum demoPauseType_t : int
    {
        DEMOPAUSETYPE_NONE = 0,
        DEMOPAUSETYPE_BADSPAWN = 1,
        DEMOPAUSETYPE_FAILEDGLORYKILL = 2,
        DEMOPAUSETYPE_BADTELEPORT = 3,
        DEMOPAUSETYPE_SERVERINVALIDATINGREMOTEGLORYKILL = 4
    };

    struct demoSnapshotSummary_t
    {
        int timeSnapshotWritten; // Offset: 0x0

        int snapshotDataSize; // Offset: 0x4

        int demoPlaybackSnapshotBaseSequence; // Offset: 0x8

        int demoPlaybackSnapshotDeltaSequence; // Offset: 0xC

        int demoRecordedSnapshotBaseSequence; // Offset: 0x10

        int demoRecordedSnapshotDeltaSequence; // Offset: 0x14

        bool isPartialSnap; // Offset: 0x18

    }; // Size: 0x1C

    struct checkPointInfo_t
    {
        long long checkPointStartFileOffset; // Offset: 0x0

        long long checkPointEndFileOffset; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > serverGameTime; // Offset: 0x10

        bool checkPointIsValid; // Offset: 0x18

    }; // Size: 0x20

    // If true then only the user can delete this demo.
    bool userSaved; // Offset: 0x0

    idStr requiredBinary; // Offset: 0x8

    unsigned int fileTag; // Offset: 0x38

    unsigned int version; // Offset: 0x3C

    idStr demoName; // Offset: 0x40

    idStr fileName; // Offset: 0x70

    long long fileSize; // Offset: 0xA0

    unsigned long long snapRate; // Offset: 0xA8

    long long timestamp; // Offset: 0xB0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0xB8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0xC0

    int snapshotsRecorded; // Offset: 0xC8

    idGameSpawnInfo* spawnInfo; // Offset: 0xD0

    idFile* demoFile; // Offset: 0xD8

    long long baseStateOffset; // Offset: 0xE0

    long long playbackStartOffset; // Offset: 0xE8

    idDemo::checkPointInfo_t checkPointFileOffsets[64]; // Offset: 0xF0

    long long checkPointOffset; // Offset: 0x8F0

    int checkPointCount; // Offset: 0x8F8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastCheckPointTime; // Offset: 0x900

}; // Size: 0x908
