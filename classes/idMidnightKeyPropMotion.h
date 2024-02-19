struct idMidnightKeyPropMotion : idMidnightKeyProperties
{
    // Position of the entity {{ units = m }}
    idVec3 position; // Offset: 0x10

    // relatif Tangent in {{ units = m }}
    idVec3 tangentIn; // Offset: 0x1C

    // relatif Tangent out {{ units = m }}
    idVec3 tangentOut; // Offset: 0x28

    // Orientation of the entity
    idAngles orientation; // Offset: 0x34

    // relatif Tangent in for orientation
    idAngles tangentInOr; // Offset: 0x40

    // relatif Tangent out for orientation
    idAngles tangentOutOr; // Offset: 0x4C

}; // Size: 0x58
