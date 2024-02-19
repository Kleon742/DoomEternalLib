struct idSyncAttackInteraction_WallSmash : idSyncAttackInteraction
{
    // Trace from the center of the head.
    int centerHeadTrace; // Offset: 0x160

    // Trace from the left of the head.
    int leftHeadTrace; // Offset: 0x164

    // Trace from the right of the head.
    int rightHeadTrace; // Offset: 0x168

    // Swept Clip trace.
    int sweepTrace; // Offset: 0x16C

    // Wall Trace Results.
    trace_t headSmashCenter; // Offset: 0x170

    trace_t headSmashLeft; // Offset: 0x1F0

    trace_t headSmashRight; // Offset: 0x270

    trace_t headSmashSweep; // Offset: 0x2F0

    // The direction we check for the wall.
    idVec3 traceNormal; // Offset: 0x370

}; // Size: 0x380
