struct idFuncRotate : idBloatedEntity
{
    enum state_t : int
    {
        STATE_INACTIVE = 0,
        STATE_ACCEL = 1,
        STATE_LINEAR = 2,
        STATE_DECEL = 3
    };

    idHavokPhysics_Parametric physicsObjHavok; // Offset: 0xB88

    // true if mover is solid
    bool solid; // Offset: 0x1388

    // true if mover can't push blockers
    bool noPush; // Offset: 0x1389

    // in degrees / second
    idAngles rotateSpeed; // Offset: 0x138C

    // Start the rotator off.
    bool startoff; // Offset: 0x1398

    // Speed of bob. {{ units = m / s }}
    float bob_speed; // Offset: 0x139C

    // Phase of bob. {{ units = m }}
    float bob_phase; // Offset: 0x13A0

    // direction of bob
    idVec3 bob_direction; // Offset: 0x13A4

    // do we apply bob?
    bool useBob; // Offset: 0x13B0

    // running
    bool running; // Offset: 0x13B1

    idFuncRotate::state_t state; // Offset: 0x13B4

}; // Size: 0x13B8
