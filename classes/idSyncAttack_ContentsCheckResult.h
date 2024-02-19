struct idSyncAttack_ContentsCheckResult
{
    // {{ units = m }}
    idVec3 origin; // Offset: 0x0

    idBounds bounds; // Offset: 0xC

    idSpawnId spawnID; // Offset: 0x24

    idHavokShapePointer havokShape; // Offset: 0x28

    // Trace Clip Query.
    idHavokQueryId traceQuery; // Offset: 0x30

    // Trace Result.
    trace_t traceResult; // Offset: 0x38

    bool traceComplete; // Offset: 0xB8

}; // Size: 0xC0
