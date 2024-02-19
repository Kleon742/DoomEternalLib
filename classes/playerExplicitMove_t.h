struct playerExplicitMove_t
{
    enum moveType_t : int
    {
        MOVE_NONE = 0,
        MOVE_SINGLE_EXCLUSIVE = 1,
        MOVE_SINGLE_ADDITIONAL = 2,
        MOVE_TO_DESTINATION = 3
    };

    enum velocityType_t : int
    {
        VEL_EXPLICIT = 0,
        VEL_OVERRIDE = 1,
        VEL_CURRENT = 2,
        VEL_CURRENT_PLUS_EXPLICIT = 3,
        VEL_USER_SPEED = 4
    };

    // the delta to move {{ units = m }}
    idVec3 delta; // Offset: 0x0

    // the destination to move to {{ units = m }}
    idVec3 dest; // Offset: 0xC

    // clip the move
    bool clipMove; // Offset: 0x18

    // clip mask to use if clipping
    int clipMask; // Offset: 0x1C

    // the user speed when going to a destination {{ units = m / s }}
    float userSpeed; // Offset: 0x20

    // shape to use (-1 to use current) (for havok physics)
    int shapeIndex; // Offset: 0x24

    playerExplicitMove_t::moveType_t moveType; // Offset: 0x28

    playerExplicitMove_t::velocityType_t velocityType; // Offset: 0x2C

    // override velocity to use if velocityType = VEL_OVERRIDE {{ units = m / s }}
    idVec3 overrideVelocity; // Offset: 0x30

    // ignore this entity number during explicit move
    idSpawnId ignoreSpawnId; // Offset: 0x3C

    // apply gravity or not
    bool gravity; // Offset: 0x40

    // apply friction or not
    bool friction; // Offset: 0x41

}; // Size: 0x44
