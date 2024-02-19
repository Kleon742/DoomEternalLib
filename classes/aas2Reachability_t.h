struct aas2Reachability_t
{
    // type of travel required to get to the area
    unsigned int travelFlags; // Offset: 0x0

    // travel time of the inter area movement
    unsigned short travelTime; // Offset: 0x4

    // number of area the reachability starts
    unsigned short fromAreaNum; // Offset: 0x6

    // number of area the reachability leads to
    unsigned short toAreaNum; // Offset: 0x8

    // special ID of actors that reserve this reachability
    idHandle < unsigned short , invalidAASUserHandle_t , AAS_USER_HANDLE_INVALID > reservationID; // Offset: 0xA

    // start point of inter area movement
    short start[3]; // Offset: 0xC

    // end point of inter area movement
    short end[3]; // Offset: 0x12

    // time reservation expires
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > reservationExpireTime; // Offset: 0x18

    // travel times in fromAreaNum from reachabilities that lead towards this area to this  reachability, and the reachability number
    unsigned int areaTTOfsAndNumber; // Offset: 0x20

    // next reachability in list
    idIndex < int , invalidReachability_t , - 1 > next; // Offset: 0x24

    // next reachability in reversed list
    idIndex < int , invalidReachability_t , - 1 > rev_next; // Offset: 0x28

}; // Size: 0x30
