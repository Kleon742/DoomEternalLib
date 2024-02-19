struct animationJointLimit_t
{
    int indexFrom; // Offset: 0x0

    int indexTo; // Offset: 0x4

    int indexFromParent; // Offset: 0x8

    // normal to the plane (for hinge movement only)
    idVec3 normal; // Offset: 0xC

    idVec3 direction; // Offset: 0x18

    idVec3 initialVector; // Offset: 0x24

    idSinCos angle; // Offset: 0x30

    idStr jointNameFrom; // Offset: 0x38

    idStr jointNameTo; // Offset: 0x68

    int bodyFrom; // Offset: 0x98

    int bodyTo; // Offset: 0x9C

}; // Size: 0xA0
