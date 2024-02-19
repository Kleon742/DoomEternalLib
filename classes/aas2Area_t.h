struct aas2Area_t
{
    // travel flags for traveling through this area
    unsigned int travelFlags; // Offset: 0x0

    // several area flags
    unsigned short flags; // Offset: 0x4

    // number of edges in the boundary of the face
    short numEdges; // Offset: 0x6

    // first edge in the edge index
    int firstEdge; // Offset: 0x8

    // the area's cluster--if negative, it's a portal
    short cluster; // Offset: 0xC

    // number of the area in the cluster
    unsigned short clusterAreaNum; // Offset: 0xE

    // offset into obstacle PVS
    unsigned int obstaclePVSOffset; // Offset: 0x10

    // reachabilities that start from this area
    idIndex < int , invalidReachability_t , - 1 > reach; // Offset: 0x14

    // reachabilities that lead to this area
    idIndex < int , invalidReachability_t , - 1 > rev_reach; // Offset: 0x18

    unsigned short firstChokePoint; // Offset: 0x1C

    // room number if negative
    short numChokePoints; // Offset: 0x1E

    // first index in the cover index list
    unsigned short firstCover; // Offset: 0x20

    // number of cover in the area
    unsigned short numCover; // Offset: 0x22

    // first index in the traversal list
    idIndex < short , invalidAASTraversalIndex_t , 0 > firstTraversal; // Offset: 0x24

    // number of traversals out of the area
    unsigned short numTraversals; // Offset: 0x26

    // first index int the search node list
    unsigned short firstHintNode; // Offset: 0x28

    // number of search nodes in the area
    unsigned short numHintNodes; // Offset: 0x2A

}; // Size: 0x2C
