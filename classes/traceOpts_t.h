struct traceOpts_t
{
    // it would probably be good to get rid of radius altogether and move to the faster triangle intersection code from TraceWorld, but radius is set to 0.1 in some places to "avoid tracing through edges" {{ units = m }}
    float radius; // Offset: 0x0

    bool twoSided; // Offset: 0x4

    bool skipBoundsCheck; // Offset: 0x5

    bool skipInvisible; // Offset: 0x6

    bool skipCollision; // Offset: 0x7

    bool skipTranslucent; // Offset: 0x8

    bool skipDynamic; // Offset: 0x9

}; // Size: 0xC
