struct idMaterialPhysicsInfo
{
    // static friction
    float StaticFriction; // Offset: 0x0

    // dynamic friction
    float DynamicFriction; // Offset: 0x4

    // restitution
    float Restitution; // Offset: 0x8

    // surface velocity group
    idStr SurfaceVelocityGroup; // Offset: 0x10

    int GroupHash; // Offset: 0x40

}; // Size: 0x48
