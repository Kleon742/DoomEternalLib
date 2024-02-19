struct aas2Room_t
{
    // a room is connected to other rooms through choke points
    unsigned short firstChokePoint; // Offset: 0x0

    unsigned short numChokePoints; // Offset: 0x2

    // a room has a list with cover positions
    unsigned short firstCover; // Offset: 0x4

    unsigned short numCover; // Offset: 0x6

}; // Size: 0x8
