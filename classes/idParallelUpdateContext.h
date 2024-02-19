struct idParallelUpdateContext
{
    idGameTimeManager* timeManager; // Offset: 0x0

    // common game times, to reduces some pointer chasing
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTime; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > previousGameTime; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastPhysicsTime; // Offset: 0x18

    idMapInstance* game; // Offset: 0x20

}; // Size: 0x28
