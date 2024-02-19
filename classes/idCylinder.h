struct idCylinder
{
    // center of the cylinder {{ units = m }}
    idVec3 origin; // Offset: 0x0

    // half height of the cylinder, since the origin is the center, 2*halfHeight = height of cylinder {{ units = m }}
    float halfHeight; // Offset: 0xC

    // radius of cylinder {{ units = m }}
    float radius; // Offset: 0x10

}; // Size: 0x14
