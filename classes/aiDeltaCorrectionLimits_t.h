struct aiDeltaCorrectionLimits_t
{
    // if nonzero, limit per-frame correction {{ units = m }}
    idVec3 translationCorrectionPerFrameMax; // Offset: 0x0

    // if nonzero, limit per-frame correction {{ units = m }}
    idVec3 translationCorrectionPerFrameMin; // Offset: 0xC

    // if nonzero, limit per-frame translation even without correction {{ units = m }}
    idVec3 translationPerFrameMax; // Offset: 0x18

    // if nonzero, limit per-frame translation even without correction {{ units = m }}
    idVec3 translationPerFrameMin; // Offset: 0x24

    // if nonzero, limit per-frame correction {{ units = m }}
    float translationCorrectionMaxScale; // Offset: 0x30

    // if nonzero, limit per-frame correction
    float rotationMaxScale; // Offset: 0x34

    // if nonzero, limit per-frame correction
    float rotationMinScale; // Offset: 0x38

    // if nonzero, limit per-frame correction
    float rotationRateMax; // Offset: 0x3C

}; // Size: 0x40
