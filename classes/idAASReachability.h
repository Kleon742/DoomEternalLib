struct idAASReachability : idBloatedEntity
{
    // the AAS layer of navigation this reachability applies to
    aasType_t aas_type; // Offset: 0xB88

    // the type of reachability this is.
    aas2TravelFlag_t aas_travelFlags; // Offset: 0xB8C

    // how long, in milliseconds, it takes to travel through this reachability.
    int aas_travelTime; // Offset: 0xB90

    // if true, traversal works in both directions.
    bool aas_twoWay; // Offset: 0xB94

    // Designates the start point for the traversal ( set by editor! ).
    idVec3 aas_traversalStartPoint; // Offset: 0xB98

    // Designates the end point for the traversal ( set by editor! ).
    idVec3 aas_traversalEndPoint; // Offset: 0xBA4

}; // Size: 0xBB0
