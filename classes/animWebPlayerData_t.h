struct animWebPlayerData_t
{
    idVec3 lastVelocity; // Offset: 0x0

    idVec3 viewDir; // Offset: 0xC

    // {{ units = m / s }}
    idVec3 physicsLinearVelocity; // Offset: 0x18

    idAngles modelAngles; // Offset: 0x24

    // {{ units = m / s }}
    float lastSpeed; // Offset: 0x30

    idUserCmd curCmd; // Offset: 0x38

    idThirdPersonWalkAnimState_t thirdPersonAnimData; // Offset: 0xD0

    bool isSprinting; // Offset: 0xF8

    bool useThirdPersonWalkAnimData; // Offset: 0xF9

    bool isInAir; // Offset: 0xFA

    bool useTurnOrientationAngle; // Offset: 0xFB

    bool isInPhotoModeAndAttachedToMover; // Offset: 0xFC

}; // Size: 0x100
