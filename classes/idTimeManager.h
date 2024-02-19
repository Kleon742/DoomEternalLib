struct idTimeManager
{
    // number of frames per second
    int gameHz; // Offset: 0x0

    // 1.0f / gameHz
    float inverseGameHz; // Offset: 0x4

    // the amount game time will increment in a single frame
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTimePerFrame; // Offset: 0x8

    // the fractional residual
    float gameTimePerFrame_residual; // Offset: 0x10

    // the amount game time will increment in one second
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTimePerSecond; // Offset: 0x18

    // our target, so we can blend to it
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTimePerSecond_target; // Offset: 0x20

    // 1.0f / gameTimePerSecond
    float inverseGameTimePerSecond; // Offset: 0x28

    // multiply hard-coded values by this factor, which is < current ticks per frame > / < default, or 16 >
    float adaptiveFixUpFactor; // Offset: 0x2C

    // if false, don't allow changes to hz
    bool allowHzChange; // Offset: 0x30

}; // Size: 0x38
