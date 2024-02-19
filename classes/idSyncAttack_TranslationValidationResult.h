struct idSyncAttack_TranslationValidationResult
{
    // {{ units = m }}
    idVec3 start; // Offset: 0x0

    // {{ units = m }}
    idVec3 end; // Offset: 0xC

    idHavokShape* havokShape; // Offset: 0x18

    idSpawnId spawnID; // Offset: 0x20

    int clipMask; // Offset: 0x24

    // Trace Clip Query.
    idHavokQueryId traceQuery; // Offset: 0x28

    // Trace Result.
    trace_t traceResult; // Offset: 0x30

    bool traceComplete; // Offset: 0xB0

}; // Size: 0xB8
