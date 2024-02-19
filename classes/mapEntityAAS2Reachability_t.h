struct mapEntityAAS2Reachability_t
{
    int aasType; // Offset: 0x0

    idVec3 reachabilityStartPosition; // Offset: 0x4

    idMat3 reachabilityOrientation; // Offset: 0x10

    idVec3 reachabilityEndOffset; // Offset: 0x34

    bool isTwoWay; // Offset: 0x40

    int travelTime; // Offset: 0x44

    int travelFlags; // Offset: 0x48

    mapEntityAAS2Reachability_t::anon_11 hasFlags; // Offset: 0x4C

}; // Size: 0x50
