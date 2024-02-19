struct idMidnightConnectionControlPoint
{
    // start connection handle
    idMidnightGraphHandle startHandle; // Offset: 0x0

    // end connection handle
    idMidnightGraphHandle endHandle; // Offset: 0x4

    // curve control position
    idVec2 pos; // Offset: 0x8

}; // Size: 0x10
