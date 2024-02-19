struct bucketInfo_t
{
    // type of pain this bucket overrides
    painType_t painType; // Offset: 0x0

    // the max value for the leaky bucket
    float bucketMaxValue; // Offset: 0x4

    // the decay rate for the bucket
    float decayRate; // Offset: 0x8

    // delay for the decay, in game ticks.
    idTypesafeTime < int , millisecondUnique_t , 1000 > decayDelay; // Offset: 0xC

}; // Size: 0x10
