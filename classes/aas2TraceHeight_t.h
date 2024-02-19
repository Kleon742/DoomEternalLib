struct aas2TraceHeight_t
{
    int maxPoints; // Offset: 0x0

    // number of areas the trace went through
    int numPoints; // Offset: 0x4

    // points where the trace entered each new area {{ units = m }}
    idVec3* points; // Offset: 0x8

}; // Size: 0x10
