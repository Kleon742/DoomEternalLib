struct idMidnightKeyPropRetargeting : idMidnightKeyProperties
{
    // Informations for each slave. targeting.
    idList < idRetargetingSlaveInfo , TAG_IDLIST , false > slaveInfos; // Offset: 0x10

    // Duration of the interpolation ( s ).
    float interpolationDuration; // Offset: 0x28

    // Axis used for position retargeting.
    idPositionRetargetingAxis_t positionRetargetAxis; // Offset: 0x2C

    // Retargeting involves orientation?
    bool retargetOrientation; // Offset: 0x30

    // Is master origin rotation flipped 180?
    bool masterIsFlipped180AroundY; // Offset: 0x31

    // Orientation retargeting mode.
    idOrientationRetargetingMode_t orientationRetargetMode; // Offset: 0x34

    // ( UNUSED FOR NOW ) Apply an offset on render model to visually hide physics collisions.
    bool renderModelOffset; // Offset: 0x38

    // Allows the player narrow limit viewing
    bool allowLimitViewNarrow; // Offset: 0x39

    // Allows the player wide limit viewing
    bool allowLimitViewWide; // Offset: 0x3A

    // Is this a takedown?
    bool takedown; // Offset: 0x3B

    // Is this a takedown where we can moved? used at end of takedowns.
    bool takedownWithMovement; // Offset: 0x3C

    // Should this AI skip FSM update
    bool aiSkipFSMUpdate; // Offset: 0x3D

    // Should this AI skip it's navgrid update, this means we have full control of where it's placed and can move it outside/to invalid navgrid positions
    bool aiSkipNavgridUpdate; // Offset: 0x3E

    // Check if entity fits in new position before moving it there
    bool checkPhysicsCollision; // Offset: 0x3F

    // If world collision should be disabled on slaves
    bool disablePhysicsCollision; // Offset: 0x40

    // Should we exit into crouch
    bool exitToCrouch; // Offset: 0x41

    // Should we exit into prone
    bool exitToProne; // Offset: 0x42

    // Should we exit into wanderer
    bool exitToWanderer; // Offset: 0x43

    // If we depend on animation to get joint positions correctly
    bool dependOnAnim; // Offset: 0x44

    // Should we use the initial rotation of the master and not update it. Primary use case is if the master is an engine path
    bool useInitialMasterOrientation; // Offset: 0x45

    // Should player view be reset? Only use if we are spawning into this event
    bool resetPlayerView; // Offset: 0x46

    // Duration of the interpolation ( s ) when reset player view.
    float resetPlayerViewDuration; // Offset: 0x48

}; // Size: 0x50
