struct idBreakableExplosion
{
    // explosion name
    idAtomicString name; // Offset: 0x0

    // explosion fx
    idDeclFX* fx; // Offset: 0x8

    // explosion particle effect
    idDeclParticle* particle; // Offset: 0x10

    // in model space {{ units = m }}
    idVec3 position; // Offset: 0x18

    // set to zero for no radius limit {{ units = m }}
    float radius; // Offset: 0x24

    // explosion impulse {{ units = kg * m / s }}
    float impulse; // Offset: 0x28

    // impulse falloff over distance ( impulse / ( dist * falloff ) ) {{ units = 1 / m }}
    float falloff; // Offset: 0x2C

    // angular impulse {{ units = m }}
    float angular; // Offset: 0x30

    // delay before the explosion starts in milliseconds
    idTypesafeTime < int , millisecondUnique_t , 1000 > delay; // Offset: 0x34

    // duration of the explosion impulse in milliseconds
    idTypesafeTime < int , millisecondUnique_t , 1000 > duration; // Offset: 0x38

    // delay before we force every piece to activate
    idTypesafeTime < int , millisecondUnique_t , 1000 > activateAllDelay; // Offset: 0x3C

    // added activateAllDelay based on distance from source
    idTypesafeTime < int , millisecondUnique_t , 1000 > distTimeScaleDelay; // Offset: 0x40

    // whether to continue the point of impact along the line (such as a bullet)
    bool useLinear; // Offset: 0x44

    // end position for using linear force. start is the provided position. {{ units = m }}
    idVec3 endLinear; // Offset: 0x48

    idList < int , TAG_FXPHYSICS , false > pieces; // Offset: 0x58

}; // Size: 0x70
