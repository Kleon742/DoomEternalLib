struct decayParams_s
{
    // time to decay (ms)
    idTypesafeTime < int , millisecondUnique_t , 1000 > time; // Offset: 0x0

    // [0,1] proportion of linear decay vs exponential
    float linear; // Offset: 0x4

    // half-life proportion of the total time for the exponential decay component
    float lambda; // Offset: 0x8

}; // Size: 0xC
