struct locomotionInfo_t
{
    float lengthInSeconds; // Offset: 0x0

    idVec3 moveDirection; // Offset: 0x4

    // {{ units = radians }}
    float moveAngleInRadians; // Offset: 0x10

    // {{ units = m / s }}
    float moveSpeedPerSecond; // Offset: 0x14

    // {{ units = m }}
    idVec3 turnCenter; // Offset: 0x18

    // {{ units = m }}
    float turnRadius; // Offset: 0x24

    // {{ units = radians }}
    float turnAngleInRadians; // Offset: 0x28

    // {{ units = radians / s }}
    float turnSpeedPerSecond; // Offset: 0x2C

}; // Size: 0x30
