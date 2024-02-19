struct idAIEventTrace : idAIEvent
{
    idVec3 dir; // Offset: 0x80

    idHavokQueryId traceQuery; // Offset: 0x90

    int lastTraceFrame; // Offset: 0x98

    trace_t lastTraceResult; // Offset: 0x9C

}; // Size: 0x120
