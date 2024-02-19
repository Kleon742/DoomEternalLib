struct idEffectPhysicsCollision
{
    // {{ units = m }}
    idVec3 collisionPoint; // Offset: 0x0

    // {{ units = m / s }}
    idVec3 collisionNormalVelocity; // Offset: 0xC

    int collisionSurfaceType; // Offset: 0x18

}; // Size: 0x1C
