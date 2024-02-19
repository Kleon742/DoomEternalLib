struct idEntityFxRandom : idBloatedEntity
{
    // what color to change particles to
    idColor particleColor; // Offset: 0xB88

    // true to start off
    bool startOff; // Offset: 0xB98

    // Random delay between activations
    float randomDelay; // Offset: 0xB9C

    // Minimum delay between activations
    float minDelay; // Offset: 0xBA0

    // fx decl
    idDeclFX* fxEffect; // Offset: 0xBA8

    // value to scale the 'size' value of all fxActions in the fxEffect given
    float fxSizeScalar; // Offset: 0xBB0

    // toggle on if this is ever moving or fxEffect needs Updates
    bool fxNeedsUpdate; // Offset: 0xBB4

    // particle cast shadows
    bool fxParticleLightCastShadows; // Offset: 0xBB5

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextTriggerTime; // Offset: 0xBB8

    bool isFirstThink; // Offset: 0xBC0

}; // Size: 0xBC8
