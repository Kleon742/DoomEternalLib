struct idUserCmd
{
    struct touch_t
    {
        short pos[2]; // Offset: 0x0

        bool active; // Offset: 0x4

    }; // Size: 0x6

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTime; // Offset: 0x0

    // set if cmd is generated by a bot. NOT sent over the wire.
    bool fromBot; // Offset: 0x8

    // Button Info stored from command tracker update
    bool inhibited; // Offset: 0x9

    // buttons
    long long buttons; // Offset: 0x10

    // Directional Movement forward/backward movement
    char forwardmove; // Offset: 0x18

    // left/right movement
    char rightmove; // Offset: 0x19

    // up/down movement
    char upmove; // Offset: 0x1A

    // Transform information view angles
    short angles[3]; // Offset: 0x1C

    idUserCmd::touch_t touch[2]; // Offset: 0x22

    float joystickAxis[6]; // Offset: 0x30

    float vrAxis[20]; // Offset: 0x48

}; // Size: 0x98
