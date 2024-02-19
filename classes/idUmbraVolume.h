struct idUmbraVolume : idBloatedEntity
{
    // smallest hole parameter, a value > 0 means override the default global value (r_umbraSmallestHole)
    float smallestHole; // Offset: 0xB88

    // smallest occluder parameter, a value > 0 means override the default global value (r_umbraSmallestOccluder)
    float smallestOccluder; // Offset: 0xB8C

    // backface limit parameter, a value > 0 means override the default global value (r_umbraBackfaceLimit)
    float backfaceLimit; // Offset: 0xB90

}; // Size: 0xB98
