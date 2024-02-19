struct aiTurnRateConfig_t
{
    // min and max turn rates for model axis
    idRange < float > bodyTurnRate; // Offset: 0x0

    // min and max turn rates for velocity
    idRange < float > moveTurnRate; // Offset: 0x8

    // acceleration of move turn rate
    float moveTurnAccel; // Offset: 0x10

    // acceleration of body turn rate
    float bodyTurnAccel; // Offset: 0x14

    // normalization speed {{ units = m / s }}
    float baseNormalizationSpeed; // Offset: 0x18

    // inside of this, always prohibit anim based movement {{ units = m }}
    float maxDistForAnimMovement; // Offset: 0x1C

}; // Size: 0x20
