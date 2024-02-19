struct idAIEventProjectedSphere : idAIEventSphere
{
    // {{ units = m }}
    idVec3 projectedOrigin; // Offset: 0x80

    // {{ units = m }}
    idVec3 curSimPos; // Offset: 0x8C

    // {{ units = m / s }}
    idVec3 curSimVel; // Offset: 0x98

    // {{ units = m }}
    idVec3 traceFrom; // Offset: 0xA4

    int bounces; // Offset: 0xB0

    int horizontalBounces; // Offset: 0xB4

    bool hasProjection; // Offset: 0xB8

}; // Size: 0xC0
