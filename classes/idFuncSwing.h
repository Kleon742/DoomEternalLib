struct idFuncSwing : idBloatedEntity
{
    idHavokPhysics_Parametric physicsObjHavok; // Offset: 0xB88

    // true if mover is solid
    bool solid; // Offset: 0x1388

    // true if mover can't push blockers
    bool noPush; // Offset: 0x1389

    // how far the thing swings
    idAngles swingExtents; // Offset: 0x138C

    // how fast it swings in cycles / second (ie: 2 makes it swing twice a second)
    float swingSpeed; // Offset: 0x1398

    // running
    bool running; // Offset: 0x139C

}; // Size: 0x13A0
