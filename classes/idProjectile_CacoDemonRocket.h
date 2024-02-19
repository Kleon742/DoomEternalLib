struct idProjectile_CacoDemonRocket : idProjectile_SwarmMissile
{
    bool isDrifting; // Offset: 0x30C8

    // {{ units = m / s }}
    idVec3 baseLaunchVelocity; // Offset: 0x30CC

    // how far to drift before firing {{ units = m }}
    float driftDistance; // Offset: 0x30D8

    // how wide to allow drifting
    float driftAngle; // Offset: 0x30DC

    // how long to drift
    idTypesafeTime < int , millisecondUnique_t , 1000 > driftTimeMS; // Offset: 0x30E0

}; // Size: 0x30E8
