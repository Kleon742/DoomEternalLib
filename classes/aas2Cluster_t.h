struct aas2Cluster_t
{
    // number of areas in the cluster
    int numAreas; // Offset: 0x0

    // number of areas with reachabilities
    int numReachableAreas; // Offset: 0x4

    // number of cluster portals
    int numPortals; // Offset: 0x8

    // first cluster portal in the index
    int firstPortal; // Offset: 0xC

}; // Size: 0x10
