struct idPlayerTimer
{
    // Last time stamp for system time.
    idTypesafeTime < int , millisecondUnique_t , 1000 > lastSystemTime; // Offset: 0x8

    // When the timer started.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x10

    // How much time has elapsed.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > elapsedTime; // Offset: 0x18

    // When to stop the timer.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stopOnTime; // Offset: 0x20

    // When to start the timer.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startOnTime; // Offset: 0x28

    // When to pause the timer.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pauseOnTime; // Offset: 0x30

    // How long to pause the timer
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pauseDuration; // Offset: 0x38

    // have we paused?
    bool paused; // Offset: 0x40

    // have we started?
    bool started; // Offset: 0x41

}; // Size: 0x48
