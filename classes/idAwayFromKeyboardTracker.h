struct idAwayFromKeyboardTracker
{
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastPlayerInputTime; // Offset: 0x0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > accumulatedAFKTime; // Offset: 0x8

    short lastPlayerInputAngles[2]; // Offset: 0x10

    bool active; // Offset: 0x14

}; // Size: 0x18
