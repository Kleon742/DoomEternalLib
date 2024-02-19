struct timeContainer_t
{
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > ticks; // Offset: 0x0

    idTypesafeTime < long long , microsecondUnique_t , 1000000 > microseconds; // Offset: 0x8

    idTypesafeTime < int , millisecondUnique_t , 1000 > milliseconds; // Offset: 0x10

    idTypesafeTime < float , secondUnique_t , 1 > seconds; // Offset: 0x14

}; // Size: 0x18
