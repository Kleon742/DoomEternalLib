struct idDeclAIComponent_Scythe : idDeclAIComponent
{
    // percent per second {{ units = 1 / s }}
    float hellScytheGrowthRate; // Offset: 0x98

    // max scale of hell scythe
    float hellScytheMaxScale; // Offset: 0x9C

    // how fast the wave peels when it is cut, how value is interpreted depends on cvar
    float hellScytheDestroyRate; // Offset: 0xA0

    // Force the scythe to run along the ground at a fixed height
    bool hellScytheForceFixedHeight; // Offset: 0xA4

    // If fixed height, this is the Z offset to keep the projectile above the ground
    float hellScytheFixedHeightZOffset; // Offset: 0xA8

    // max pitch ( degrees ) variation in sub projectile trajectories
    float subProjectileRandomPitch; // Offset: 0xAC

    // max yaw ( degrees ) variation in sub projectile trajectories
    float subProjectileRandomYaw; // Offset: 0xB0

    // how fast sub projectiles go compared to parent scythe
    idRange < float > subProjectileSpeedBoostRange; // Offset: 0xB4

    // how far apart sub projectiles must be {{ units = m }}
    float subProjectileSpacing; // Offset: 0xBC

    // projectile to spawn when scythe is breaking apart
    idDeclProjectile* subProjectile; // Offset: 0xC0

    // how far from front of wave sub-projectiles should spawn {{ units = m }}
    float subProjectileSpawnLeading; // Offset: 0xC8

    // random lateral value from joint, specified as fraction between joints
    idRange < float > subProjectileRandomOffset; // Offset: 0xCC

    // temp damage for when enable knockdowns is false
    idDeclDamage* noKDDamage; // Offset: 0xD8

    // Only test for collision against the player
    bool playerCollisionOnly; // Offset: 0xE0

}; // Size: 0xE8
