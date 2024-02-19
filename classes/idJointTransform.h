struct idJointTransform
{
    idQuat rotation; // Offset: 0x0

    idVec3 translation; // Offset: 0x10

    float pad1; // Offset: 0x1C

    idVec3 scale; // Offset: 0x20

    float pad2; // Offset: 0x2C

}; // Size: 0x30
