struct prtDistanceScaleSetting_t
{
    // min quality level for which this distance setting applies
    particleQualityLevel_t minQuality; // Offset: 0x0

    // max quality level for which this distance setting applies
    particleQualityLevel_t maxQuality; // Offset: 0x4

    // distance at which distance scale modifiers will kick in {{ units = m }}
    float nearDistance; // Offset: 0x8

    // distance at which distance scale modifiers will get fully applied {{ units = m }}
    float farDistance; // Offset: 0xC

}; // Size: 0x10
