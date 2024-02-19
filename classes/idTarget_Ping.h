struct idTarget_Ping : idTarget
{
    // enable / disable world ping visuals
    bool enableVisuals; // Offset: 0xB88

    // Distance to turn off visuals. 0 means they stay on the whole time.
    int visualDistance; // Offset: 0xB8C

    // Scale Speed at which the ping travels
    float speed; // Offset: 0xB90

}; // Size: 0xB98
