struct idInfoOrbit : idInfo
{
    // orbit speed, degrees per second
    float degreesPerSec; // Offset: 0xB90

    // (in secs) time to orbit (becomes inactive when time expires)
    float time; // Offset: 0xB94

    // use real world time (rather than game time)
    bool useRealTime; // Offset: 0xB98

    // {{ units = m }}
    float rtDist; // Offset: 0xB9C

    // {{ units = m }}
    float upDist; // Offset: 0xBA0

    int startTime; // Offset: 0xBA4

    int endTime; // Offset: 0xBA8

    // {{ units = m }}
    idVec3 spawnOrg; // Offset: 0xBAC

    idVec3 spawnDir; // Offset: 0xBB8

}; // Size: 0xBC8
