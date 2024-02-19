struct idTrigger_SonicBoom : idTrigger
{
    // used to determine the triggering entity info
    idManagedClassPtr < idEntity > triggeringEntity; // Offset: 0xC90

    // used to set the destination of the blast if needed
    idManagedClassPtr < idEntity > destinationEntity; // Offset: 0xCB0

    // used to set the placement of the destination {{ units = m }}
    idVec3 destinationPoint; // Offset: 0xCD0

    // speed of movement {{ units = m / s }}
    float speed; // Offset: 0xCDC

    // the percentage of the velocity to retain if necessary
    float retainVelocityPct; // Offset: 0xCE0

    // the time we want to restrict the blast for
    idTypesafeTime < int , millisecondUnique_t , 1000 > restrictedTimeMs; // Offset: 0xCE4

    // player view direction dictates where we go
    bool restrictedView; // Offset: 0xCE8

    // bring hands up instead of weapon during blast
    bool bringUpHands; // Offset: 0xCE9

    // whether we want the gravity to be on
    bool gravityOn; // Offset: 0xCEA

    // retain the velocity of the blast when colliding/ending
    bool retainVelocity; // Offset: 0xCEB

    // moves the player parallel to the entry point of the trigger in the direction indicated
    bool parallelMovement; // Offset: 0xCEC

    // sound to play when taking off
    idSoundEvent* takeOffSound; // Offset: 0xCF0

    // sound to play during the blast
    idSoundEvent* sonicBlastSound; // Offset: 0xCF8

    // sound to play when landing
    idSoundEvent* landingSound; // Offset: 0xD00

    // used to trigger a separate rail ride mechanic
    idManagedClassPtr < idSplinePath > currentSpline; // Offset: 0xD08

    // whether we are using this as a landing pad
    bool isLandingPad; // Offset: 0xD28

}; // Size: 0xD30
