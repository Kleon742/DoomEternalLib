struct chainsawAtRpmSound_t
{
    // the sound to trigger
    idSoundEvent* sound; // Offset: 0x0

    // the engine RPM to trigger the sound at (0 - 100)
    float engineRPM; // Offset: 0x8

}; // Size: 0x10
