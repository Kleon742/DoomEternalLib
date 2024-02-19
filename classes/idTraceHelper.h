struct idTraceHelper
{
    trace_t trace; // Offset: 0x0

    idHavokQueryId query; // Offset: 0x80

    idHavokMultiHitQueryId multiHitQuery; // Offset: 0x88

    // {{ units = m }}
    idVec3 startPos; // Offset: 0x90

    // {{ units = m }}
    idVec3 endPos; // Offset: 0x9C

    float traceDistance; // Offset: 0xA8

    bool wasDeferredTrace; // Offset: 0xAC

    bool wasMultiHitTrace; // Offset: 0xAD

    bool enableDebug; // Offset: 0xAE

    bool debugTraceResolve; // Offset: 0xAF

    int debugLifetime; // Offset: 0xB0

    idColor traceColor; // Offset: 0xB4

    int resolveFrame; // Offset: 0xC4

    int submitFrame; // Offset: 0xC8

}; // Size: 0xD0
