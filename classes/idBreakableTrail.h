struct idBreakableTrail
{
    idAtomicString name; // Offset: 0x0

    idDeclParticle* particleTrail; // Offset: 0x8

    idDeclParticle* particleBounce; // Offset: 0x10

    idDeclParticle* particleDie; // Offset: 0x18

    idMaterial2* glowQuadMaterial; // Offset: 0x20

    // {{ units = m }}
    float glowQuadSize; // Offset: 0x28

    // {{ units = m / s }}
    float minTrailVelocity; // Offset: 0x2C

    // {{ units = m / s }}
    float minBounceVelocity; // Offset: 0x30

    // {{ units = m }}
    float trailSpacing; // Offset: 0x34

    float trailVelocityScale; // Offset: 0x38

    float trailRandomness; // Offset: 0x3C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > delay; // Offset: 0x40

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > duration; // Offset: 0x48

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeInDuration; // Offset: 0x50

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeOutDuration; // Offset: 0x58

    idList < int , TAG_FXPHYSICS , false > pieces; // Offset: 0x60

}; // Size: 0x78
