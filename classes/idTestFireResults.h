struct idTestFireResults
{
    // number of collision traces performed
    int numTraces; // Offset: 0x0

    // results of the all traces (some weapons, like a shotgun, may perform multiple traces)
    trace_t traces[16]; // Offset: 0x4

    trace_t fxTraces[16]; // Offset: 0x804

    // actual direction of each trace
    idVec3 traceDirs[16]; // Offset: 0x1004

    // distance of each trace before collision {{ units = m }}
    float traceLens[16]; // Offset: 0x10C4

    idHavokShapePointer havokShape; // Offset: 0x1108

}; // Size: 0x1110
