struct frameTimeInfo_t
{
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTime; // Offset: 0x0

    idTypesafeTime < float , secondUnique_t , 1 > realSecondsPerFrame; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > ticksPerSecond; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > ticksPerFrame; // Offset: 0x18

}; // Size: 0x20
