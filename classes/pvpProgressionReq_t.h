struct pvpProgressionReq_t
{
    // descriptor for the type of progress points we are checking against
    pvpPointDesc_t pvpPointDesc; // Offset: 0x0

    // the amount of points we must have when the progress is considered as achieved
    int progressPoints; // Offset: 0x4

    // demon descriptor associated with the specific points
    demonType_t progressDemon; // Offset: 0x8

}; // Size: 0xC
