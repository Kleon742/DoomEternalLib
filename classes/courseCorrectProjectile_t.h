struct courseCorrectProjectile_t
{
    idManagedClassPtr < idProjectile > projectile; // Offset: 0x0

    // {{ units = m / s }}
    idVec3 destVelocity; // Offset: 0x20

    // {{ units = m }}
    idVec3 reflectPoint; // Offset: 0x2C

}; // Size: 0x38
