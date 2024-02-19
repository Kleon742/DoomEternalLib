struct idAAS2NearestReachable
{
    // the reachable area that is nearest to the dst target
    int nearestDestArea; // Offset: 0x0

    // the reachable position in nearestDestArea closest the dst point {{ units = m }}
    idVec3 nearestDestPos; // Offset: 0x4

    // travel time to the nearest to dst target
    int nearestTravelTime; // Offset: 0x10

    // the reachable area that is quickest to the dst target(in travel time)
    int quickestDestArea; // Offset: 0x14

    // the reachable position in quickestDestArea closest to the dst point {{ units = m }}
    idVec3 quickestDestPos; // Offset: 0x18

    // travel time to the quickest to dst target
    int quickestTravelTime; // Offset: 0x24

}; // Size: 0x28
