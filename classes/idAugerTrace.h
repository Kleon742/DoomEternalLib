struct idAugerTrace
{
    idHavokQueryId clipQuery; // Offset: 0x0

    idHavokQueryId havokQuery; // Offset: 0x8

    trace_t trace; // Offset: 0x10

    int resolveFrame; // Offset: 0x90

    // {{ units = m }}
    idVec3 startPos; // Offset: 0x94

    // {{ units = m }}
    idVec3 endPos; // Offset: 0xA0

    float desiredTraceDist; // Offset: 0xAC

    idColor debugColor; // Offset: 0xB0

    idEntity* hitEntity; // Offset: 0xC0

}; // Size: 0xC8
