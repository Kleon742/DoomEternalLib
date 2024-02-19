struct idRotation
{
    // origin of rotation {{ units = m }}
    idVec3 origin; // Offset: 0x0

    // normalized vector to rotate around
    idVec3 vec; // Offset: 0xC

    // angle of rotation in degrees
    float angle; // Offset: 0x18

    // rotation axis
    idMat3 axis; // Offset: 0x1C

    // true if rotation axis is valid
    bool axisValid; // Offset: 0x40

}; // Size: 0x44
