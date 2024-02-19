struct aiTraversalGenKnobs_t
{
    // generate samples in source volumes along a grid of this size
    float sampleSpacing_source; // Offset: 0x0

    // generate samples in dest volumes along a grid of this size
    float sampleSpacing_dest; // Offset: 0x4

    // final output should not result in traversals with endpoints closer together than this value
    float densitySpacing_start; // Offset: 0x8

    // final output should not result in traversals with startpoints closer together than this value
    float densitySpacing_end; // Offset: 0xC

    // only accept traversals if they are at least this much shorter than the analog path in nav mesh
    float pathDist_requiredSavings; // Offset: 0x10

    // only accept traversals if they are at least this fraction or less of analog path
    float pathDist_requiredFraction; // Offset: 0x14

    // only accept traversals if the distance outside of a nav edge gap is less than this
    float span_maxSummedDistance; // Offset: 0x18

    // reject any traversals with a distance from front or back edge of span greater than this
    float span_maxSingleDistance; // Offset: 0x1C

    // when checking for edges that might represent a span, expand bounds around traversals by this much
    float span_expandGatherBoundsDist; // Offset: 0x20

    // gather sample points within this radius of start point
    float mouse_clickRadius_start; // Offset: 0x24

    // gather sample points within this radius of end point
    float mouse_clickRadius_end; // Offset: 0x28

    // gather sample points within this height of start/end point
    float mouse_sampleHeightDelta; // Offset: 0x2C

}; // Size: 0x30
