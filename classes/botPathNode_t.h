struct botPathNode_t
{
    int nodeFlags; // Offset: 0x0

    // cache this off for a HUGE speed increase.
    int nodeAreaNum; // Offset: 0x4

    // cache off how long it takes to travel from this node to the goal.
    int travelTimeToGoal; // Offset: 0x8

    // ref count for how many bots are currently using this node as a route.
    int routeRefCount; // Offset: 0xC

    // {{ units = m }}
    float nodeRadius; // Offset: 0x10

    // {{ units = m }}
    idVec3 nodeOrg; // Offset: 0x14

    idAtomicString nodeName; // Offset: 0x20

}; // Size: 0x28
