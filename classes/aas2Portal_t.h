struct aas2Portal_t
{
    // area number that is the actual portal
    unsigned short areaNum; // Offset: 0x0

    // cluster number at the front and back of the portal
    short clusters[2]; // Offset: 0x2

    // portal area number in the front and back cluster
    unsigned short clusterAreaNum[2]; // Offset: 0x6

    // maximum travel time through the portal area
    unsigned short maxAreaTravelTime; // Offset: 0xA

}; // Size: 0xC
