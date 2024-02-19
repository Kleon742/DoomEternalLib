struct idPerceptionVolume : idVolume
{
    // amount to scale all stimulus for a target when it is in this volume ( normalPerception * scale )
    float scale; // Offset: 0xC20

    // treat visual distances this many times as far away when within this volume
    float distanceScale; // Offset: 0xC24

}; // Size: 0xC28
