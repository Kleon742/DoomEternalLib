struct aiDeltaCorrectionInfo_t
{
    // name of this delta correction info
    idAtomicString name; // Offset: 0x0

    // flags controlling how correction is applied
    aiAnimDCFlags_t flags; // Offset: 0x8

    // limits to apply during this correction
    aiDeltaCorrectionLimits_t limits; // Offset: 0xC

    // if true, match legacy anim events by treating values as game units
    bool useGameUnits; // Offset: 0x4C

}; // Size: 0x50
