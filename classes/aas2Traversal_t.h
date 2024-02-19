struct aas2Traversal_t
{
    // Why aren't these short vectors? We'd need to ensure the start point was always inside of the area after quantization. On RAGE's largest map, making these shorts would only save about 7KB of memory... so probably not worth it. 12 {{ units = m }}
    idVec3 startPoint; // Offset: 0x0

    // 24 {{ units = m }}
    idVec3 endPoint; // Offset: 0xC

    // 30
    idQuantizedVec3 orientationFwd; // Offset: 0x18

    // 36
    idQuantizedVec3 extrusionFwd; // Offset: 0x1E

    // 38
    idIndex < short , invalidAASAnimIndex_t , - 1 > animIndex; // Offset: 0x24

    // 40
    short extrusionDistance; // Offset: 0x26

    // 44
    idIndex < int , invalidReachability_t , - 1 > reachabilityIndex; // Offset: 0x28

    // 46
    idIndex < short , invalidAASDependencyIndex_t , - 1 > dependencyIndex; // Offset: 0x2C

    // 48
    idIndex < short , invalidAASInteractionEntIndex_t , - 1 > interactionEntIndex; // Offset: 0x2E

    // / AASMERGE: reference back to reachability and get flags from there? 52
    unsigned int flags; // Offset: 0x30

    // 54
    short startAreaNum; // Offset: 0x34

    // 56
    short endAreaNum; // Offset: 0x36

    // 58 interpreted as travelTime *= 1.1^(travelTimeScale - 128)
    unsigned short travelTimeScale; // Offset: 0x38

    // 60
    unsigned short padding; // Offset: 0x3A

}; // Size: 0x3C
