struct idDeclElectricBolt : idDeclTypeInfo
{
    struct branchOverride_t
    {
        // the material applied to the branch
        idMaterial2* material; // Offset: 0x0

        // how many frames in the filmstrip
        int frames; // Offset: 0x8

        // width of quad {{ units = m }}
        float width; // Offset: 0xC

    }; // Size: 0x10

    // ------------------------ System specific parameters ------------------------ material applied to the electric bolt
    idMaterial2* material; // Offset: 0x88

    // apply a gradient based on length to the vertex color (white at top of bolt to black at bottom)
    bool applyGradient; // Offset: 0x90

    // how long before entire bolt is revealed (ms)
    idTypesafeTime < int , millisecondUnique_t , 1000 > revealTime; // Offset: 0x94

    // ------------------------ Main Beam specific parameters ------------------------ start width of main branch {{ units = m }}
    float startWidth; // Offset: 0x98

    // end width of the main branch {{ units = m }}
    float endWidth; // Offset: 0x9C

    // max segment displacement of main branch {{ units = m }}
    float maxDeviation; // Offset: 0xA0

    // color of main branch
    idVec4 color; // Offset: 0xA4

    // brightness of the main branch
    float brightness; // Offset: 0xB4

    // number of subdivides to perform for the main branch
    int subdivisions; // Offset: 0xB8

    // scale the entire branch for BLAS RT reflections
    float raytracingBlasGeometryScale; // Offset: 0xBC

    // ------------------------ Branch specific parameters ------------------------ the probability [0.0,1.0] that a segment will generate a branch
    float branchProbability; // Offset: 0xC0

    // max level of branching
    int maxBranchLevels; // Offset: 0xC4

    // start width of branches {{ units = m }}
    float branchStartWidth; // Offset: 0xC8

    // end width of branches {{ units = m }}
    float branchEndWidth; // Offset: 0xCC

    // [min,max] branch length {{ units = m }}
    idVec2 branchLength; // Offset: 0xD0

    // max angle from main branch
    float maxBranchAngle; // Offset: 0xD8

    // number of subdivides to perform for branches
    int branchSubdivisions; // Offset: 0xDC

    // max segment displacement of branches {{ units = m }}
    float maxBranchDeviation; // Offset: 0xE0

    // ------------------------ Animation parameters ------------------------ jitter for animating bolt
    idDeclTable* jitterTable; // Offset: 0xE8

    // jitter falloff for animating bolt
    idDeclTable* jitterFalloffTable; // Offset: 0xF0

    // decay applied to magnitude at differing subdivision levels
    float jitterDecay; // Offset: 0xF8

    // jitter animation speed {{ units = 1 / s }}
    float jitterSpeed; // Offset: 0xFC

    // [min,max] jitter on left vector {{ units = m }}
    idVec2 jitterLeftMag; // Offset: 0x100

    // [min,max] jitter on up vector {{ units = m }}
    idVec2 jitterUpMag; // Offset: 0x108

    // ------------------------ Prototype vars for tesla coil ------------------------ test for tesla coil
    bool useBranchOverride; // Offset: 0x110

    // branch override testing
    idDeclElectricBolt::branchOverride_t branchOverride; // Offset: 0x118

    // when enabled, the bolt will be different each time
    bool randomBolt; // Offset: 0x128

    // the inverse speed with which the bolt fades in ( the larger the slower, 0 = instant )
    float inverseSpeedIn; // Offset: 0x12C

    // the duration time for the lightning strike to be solid ( in milliseconds )
    idTypesafeTime < int , millisecondUnique_t , 1000 > durationTime; // Offset: 0x130

    // the inverse speed with which the bolt fades out ( the larger the slower, 0 = instant )
    float inverseSpeedOut; // Offset: 0x134

    // time it takes a segment to fully fade out {{ units = ms }}
    float fadeOutDuration; // Offset: 0x138

}; // Size: 0x140
