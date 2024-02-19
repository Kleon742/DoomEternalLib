struct navSearchReachNode_t
{
    idTypesafeTime < float , secondUnique_t , 1 > travelTime; // Offset: 0x0

    idTypesafeTime < float , secondUnique_t , 1 > travelTimeToGoal; // Offset: 0x4

    // parent of this node, in search
    int parentNum; // Offset: 0x8

}; // Size: 0xC
