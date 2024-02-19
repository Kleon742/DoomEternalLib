struct idBreakableDecal
{
    idList < const idMaterial2 * , TAG_FXPHYSICS , false > materials; // Offset: 0x0

    idList < const idMaterial2 * , TAG_FXPHYSICS , false > dripMaterials; // Offset: 0x18

    idList < const idDeclParticle * , TAG_FXPHYSICS , false > ceilingParticles; // Offset: 0x30

    idList < const idDeclParticle * , TAG_FXPHYSICS , false > floorParticleFromCeilingDrip; // Offset: 0x48

    idList < const idMaterial2 * , TAG_FXPHYSICS , false > floorDecalFromCeilingDrip; // Offset: 0x60

    idAtomicString name; // Offset: 0x78

    // {{ units = m }}
    idVec2 minSize; // Offset: 0x80

    // {{ units = m }}
    idVec2 maxSize; // Offset: 0x88

    // {{ units = m }}
    idVec2 dripMinSize; // Offset: 0x90

    // {{ units = m }}
    idVec2 floorDeclMinSize; // Offset: 0x98

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lifetime; // Offset: 0xA0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeOutStartTime; // Offset: 0xA8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeInEndTime; // Offset: 0xB0

    // {{ units = m / s }}
    float minBounceVelocity; // Offset: 0xB8

    // {{ units = m * m }}
    float decalSpacing; // Offset: 0xBC

    // {{ units = m }}
    float depth; // Offset: 0xC0

    idList < int , TAG_FXPHYSICS , false > pieces; // Offset: 0xC8

    bool splatterOnBounce; // Offset: 0xE0

    bool splatterOnRest; // Offset: 0xE1

}; // Size: 0xE8
