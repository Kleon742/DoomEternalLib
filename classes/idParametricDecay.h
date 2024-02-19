struct idParametricDecay
{
    // value at t = t0
    float delta; // Offset: 0x0

    // [0,1] coef between linear and exponential decay
    float linear; // Offset: 0x4

    float t0; // Offset: 0x8

    // time delta allocated for attenuation
    float tdelta; // Offset: 0xC

    // [0,1] coef of half-life of the exponent component against tdelta
    float lambda; // Offset: 0x10

}; // Size: 0x14
