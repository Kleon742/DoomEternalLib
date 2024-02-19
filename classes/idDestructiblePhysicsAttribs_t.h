struct idDestructiblePhysicsAttribs_t
{
    // physics contents value
    idContents contents; // Offset: 0x0

    // physics clip mask value
    idContents clipMask; // Offset: 0x4

    // quality of the physics.
    idPhysics::quality_t quality; // Offset: 0x8

    // Static / dynamic / keyframed.
    idPhysics::motionType_t motionType; // Offset: 0xC

    // Motion properties for the object.
    motionProperties_t motionProperties; // Offset: 0x10

    // materialType.
    physicsMaterialType_t materialType; // Offset: 0x28

    // Table for piece Impact.
    idDeclImpactEffect* impactTable; // Offset: 0x30

    // surface type for the object.
    surfTypes_t surfaceType; // Offset: 0x38

}; // Size: 0x40
