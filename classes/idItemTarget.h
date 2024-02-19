struct idItemTarget
{
    // position of target {{ units = m }}
    idVec3 pos; // Offset: 0x0

    // distance to target {{ units = m }}
    float dist; // Offset: 0xC

    // distance to target squared {{ units = m * m }}
    float distSqr; // Offset: 0x10

    // offset to target fomr AI {{ units = m }}
    idVec3 delta; // Offset: 0x14

}; // Size: 0x20
