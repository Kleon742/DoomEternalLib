struct idRetargetingParameters
{
    idOrientationRetargetingMode_t orientationRetargetingMode; // Offset: 0x0

    durationTime_t retargetingDuration; // Offset: 0x4

    durationTime_t resetPlayerViewDuration; // Offset: 0x8

    int positionRetargetingAxis; // Offset: 0xC

    bool renderModelOffset; // Offset: 0x10

    bool retargetOrientation; // Offset: 0x11

    bool masterIsFlipped180AroundY; // Offset: 0x12

    bool allowLimitViewNarrow; // Offset: 0x13

    bool allowLimitViewWide; // Offset: 0x14

    bool takedown; // Offset: 0x15

    bool takedownWithMovement; // Offset: 0x16

    bool aiSkipFSMUpdate; // Offset: 0x17

    bool aiSkipNavgridUpdate; // Offset: 0x18

    bool checkPhysicsCollision; // Offset: 0x19

    bool disablePhysicsCollision; // Offset: 0x1A

    bool exitToCrouch; // Offset: 0x1B

    bool exitToProne; // Offset: 0x1C

    bool exitToWanderer; // Offset: 0x1D

    bool dependOnAnim; // Offset: 0x1E

    bool useInitialMasterOrientation; // Offset: 0x1F

    bool resetPlayerView; // Offset: 0x20

}; // Size: 0x24
