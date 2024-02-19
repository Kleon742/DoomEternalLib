struct idSnapshotTrace
{
    enum stat_t : int
    {
        SL_STAT_SIZE_UNCOMPRESSED = 0,
        SL_STAT_SIZE_ENCODED = 1,
        SL_STAT_SIZE_COMPRESSED = 2,
        SL_STAT_FLAG_SKIP = 3,
        SL_STAT_FLAG_COMPARE = 4,
        SL_STAT_PRIORITY = 5,
        SL_STAT_MAX = 6
    };

    enum skipReason_t : int
    {
        SL_STAT_SKIP_NOSKIP = 0,
        SL_STAT_SKIP_REDUNDANT = 1,
        SL_STAT_SKIP_NONRELEVANT = 2,
        SL_STAT_SKIP_OBJECTSAME = 3,
        SL_STAT_SKIP_OLDERTHANBASE = 4,
        SL_STAT_SKIP_MAX = 5
    };

    enum compareAgainst_t : int
    {
        SL_STAT_COMPARE_INVALID = 0,
        SL_STAT_COMPARE_NONE = 1,
        SL_STAT_COMPARE_BASE = 2,
        SL_STAT_COMPARE_TEMPLATE = 3,
        SL_STAT_COMPARE_MAX = 4
    };

    enum receiveReason_t : int
    {
        SL_SNAPSHOT_RECEIVED = 0,
        SL_SNAPSHOT_BLOCK_OLD_SEQUENCE = 1,
        SL_SNAPSHOT_BLOCK_DIFF_BASE_SEQUENCE = 2,
        SL_SNAPSHOT_BLOCK_NO_DELTA_SPACE = 3,
        SL_SNAPSHOT_MAX = 4
    };

    struct entry_t
    {
        // Same as snapshot object
        char* tag; // Offset: 0x0

        // Used to identify template entries instead, as they don't have objectIDs
        unsigned long long resourceID; // Offset: 0x8

        int objectID; // Offset: 0x10

        idSerializeTrace trace; // Offset: 0x18

        idArray < int , 6 > stats; // Offset: 0x38

        bool reading; // Offset: 0x50

    }; // Size: 0x58

    idList < idSnapshotTrace::entry_t , TAG_IDLIST , false > traceEntries; // Offset: 0x0

    int finalCompressedSize; // Offset: 0x18

    int finalEncodedSize; // Offset: 0x1C

    int finalUncompressedSize; // Offset: 0x20

    int finalUncompressedNonNetRelSize; // Offset: 0x24

    idSnapshotTrace::receiveReason_t receivedReason; // Offset: 0x28

    bool fragmented; // Offset: 0x2C

    int refCount; // Offset: 0x30

    bool inUse; // Offset: 0x34

}; // Size: 0x38
