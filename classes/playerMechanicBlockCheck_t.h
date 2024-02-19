struct playerMechanicBlockCheck_t
{
    // whether the block check was blocked or not
    bool blocked; // Offset: 0x0

    // start pos of block test {{ units = m }}
    idVec3 p0; // Offset: 0x4

    // end pos of block test if not blocked, or the block pos if blocked {{ units = m }}
    idVec3 p1; // Offset: 0x10

    // length of p0-p1 ray {{ units = m }}
    float dist; // Offset: 0x1C

    // surface normal of block surface, if any
    idVec3 n; // Offset: 0x20

}; // Size: 0x2C
