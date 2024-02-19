struct bloodTrail_t
{
    enum skidMode_t : int
    {
        SKIDMARK_NONE = 0,
        SKIDMARK_START = 1,
        SKIDMARK_MIDDLE = 2,
        SKIDMARK_END = 3
    };

    bloodTrail_t::skidMode_t markMode; // Offset: 0x0

    bloodTrail_t::skidMode_t lastMarkMode; // Offset: 0x4

    // {{ units = m }}
    idVec3 lastOrigin; // Offset: 0x8

    // {{ units = m }}
    idVec3 corners[4]; // Offset: 0x14

    idVec3 left; // Offset: 0x44

    float yBias; // Offset: 0x50

    idMaterial2* material; // Offset: 0x58

}; // Size: 0x60
