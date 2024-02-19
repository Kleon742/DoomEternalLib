struct idLeakyBucket
{
    // the max this value can be...
    float maxValue; // Offset: 0x0

    // rate of value decay per second
    float decayRate; // Offset: 0x4

    // current value of the integrator
    float value; // Offset: 0x8

    // last time integrator was updated
    idTypesafeTime < int , millisecondUnique_t , 1000 > lastUpdateMS; // Offset: 0xC

    // delay time before decay happens after stimulus.
    idTypesafeTime < int , millisecondUnique_t , 1000 > decayDelay; // Offset: 0x10

    // the amount of time that has passed.
    idTypesafeTime < int , millisecondUnique_t , 1000 > delayTimer; // Offset: 0x14

}; // Size: 0x18
