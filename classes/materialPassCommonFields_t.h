struct materialPassCommonFields_t
{
    // per-pass visibility
    toolsVisibilityMask_t toolsVisibility; // Offset: 0x0

    // sort bias within a render pass - higher priority than depth sorting
    short passSortBias; // Offset: 0x2

    // sort bias within a model when sortSurfaces false or when depths are equal - lower priority than depth sorting. Used for "hair" material to force hair to render after head in MATERIALPASS_BLEND when in echo mode.
    int localSortBias; // Offset: 0x0

    // depth sort bias
    float depthSortBias; // Offset: 0x8

}; // Size: 0xC
