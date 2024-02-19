struct idAAS2TravelSpeeds
{
    // maximum speed when unhindered {{ units = m / s }}
    float defaultSpeed; // Offset: 0x0

    // maximum speed in water {{ units = m / s }}
    float swimSpeed; // Offset: 0x4

    // maximum speed while flying {{ units = m / s }}
    float flySpeed; // Offset: 0x8

    // maximum speed while crouched {{ units = m / s }}
    float crouchSpeed; // Offset: 0xC

}; // Size: 0x10
