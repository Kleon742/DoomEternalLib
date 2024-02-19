struct idAnimWebRoute
{
    typedef short pathIndex_t;

    // indexes of all nodes in the path
    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > path[32]; // Offset: 0x0

    // num of nodes in the path
    int num; // Offset: 0x40

    // total distance for this path
    int cost; // Offset: 0x44

}; // Size: 0x48
