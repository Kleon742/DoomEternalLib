struct idSpawnInfluencerSource_Timed : idSpawnInfluencerSource
{
    gameTeam_t team; // Offset: 0x50

    // {{ units = m }}
    idVec3 position; // Offset: 0x54

    // After this time, we're expired.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > expiresAfter; // Offset: 0x60

}; // Size: 0x68
