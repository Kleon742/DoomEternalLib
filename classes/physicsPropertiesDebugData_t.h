struct physicsPropertiesDebugData_t
{
    // Physics object the properties are attached to
    idPhysics* physics; // Offset: 0x0

    // Entity the physics object are attached to
    idEntity* entity; // Offset: 0x8

    // Entity that owns the physics object
    idEntity* owner; // Offset: 0x10

    idStr name; // Offset: 0x18

}; // Size: 0x48
