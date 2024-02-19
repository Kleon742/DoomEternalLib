struct idLocomotionParameters
{
    locomotionPlane_t plane; // Offset: 0x0

    // {{ units = m }}
    idVec3 positions[2]; // Offset: 0x24

    idQuat orientations[2]; // Offset: 0x3C

    // {{ units = m / s }}
    float moveSpeed; // Offset: 0x5C

    float moveAngle; // Offset: 0x60

    // {{ units = radians / s }}
    float turnSpeed; // Offset: 0x64

}; // Size: 0x68
