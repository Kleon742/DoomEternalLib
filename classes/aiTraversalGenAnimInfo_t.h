struct aiTraversalGenAnimInfo_t
{
    // animweb node for this traversal
    idAnimWebPath webPath; // Offset: 0x0

    // endpoint of anim must be within this vertical range of the sample endpoint
    idRange < float > acceptedDelta_vertical; // Offset: 0x30

    // endpoint of anim must be within this horizontal range of the sample endpoint ( negative implies closer )
    idRange < float > acceptedDelta_horizontal; // Offset: 0x38

    // endpoint of anim must be within this range of sample endpoing
    float maxDeltaFromEndpoint; // Offset: 0x40

    // extra usage flags
    aiTraversalAnimFlags_t flags; // Offset: 0x44

}; // Size: 0x48
