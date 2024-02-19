struct havokShapeData_t
{
    // never NULL
    idHavokShape* rootShape; // Offset: 0x0

    int contentFlags; // Offset: 0x8

    int surfaceFlags; // Offset: 0xC

    int surfaceType; // Offset: 0x10

    int surfaceVelocityGroup; // Offset: 0x14

    float dynamicFriction; // Offset: 0x18

    float staticFriction; // Offset: 0x1C

    float restitution; // Offset: 0x20

    float softContactForceFactor; // Offset: 0x24

    float softContactDampFactor; // Offset: 0x28

    float softContactSeparationVelocity; // Offset: 0x2C

    // For debugging purposes only
    idAtomicString sourceFileName; // Offset: 0x30

    idHavokMaterialId id; // Offset: 0x38

    idIndex < short , invalidJointIndex_t , - 1 > jointIndex; // Offset: 0x3A

    idVec3 jointOffset; // Offset: 0x3C

    int modelFeatureIndex; // Offset: 0x48

    // Can be NULL
    idJointGroup* jointGroup; // Offset: 0x50

}; // Size: 0x58
