struct testForBlockedTraceParms_t
{
    // friendly actors will be considered shot blockers
    bool blockOnFriendly; // Offset: 0x0

    // breakables closer than this will be considered shot blockers
    float blockOnBreakableFraction; // Offset: 0x4

    // if the delta between the target distance and actual hit distance is greater than this, shot is blocked {{ units = m }}
    float minImpactDelta; // Offset: 0x8

    // any shot traveling less than this fraction to the target will be blocked
    float minTravelRatio; // Offset: 0xC

}; // Size: 0x10
