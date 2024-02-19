struct idCollectibleCamera_Orbit
{
    // Current Axis.
    idMat3 currentAxis; // Offset: 0x0

    // Current Origin
    idVec3 currentOrigin; // Offset: 0x24

    idVec3 offsetVelocities; // Offset: 0x30

    idAngles angleVelocities; // Offset: 0x3C

    // Y = zoom, Z = up/down
    idVec3 currentOffset; // Offset: 0x48

    // yaw and pitch are used (roll ignored)
    idAngles currentAngles; // Offset: 0x54

    // 0: not zooming, 1: zooming out, -1: zooming in
    float joystickZoom; // Offset: 0x60

    bool hasAllNonGatedCollectibles; // Offset: 0x64

    bool isViewingExternalModel; // Offset: 0x65

    // mouse controls. Mouse pressed?
    bool isRightPressed; // Offset: 0x66

    bool isLeftPressed; // Offset: 0x67

    // Mouse Coords.
    idVec2 currentMouse; // Offset: 0x68

    // previous Mouse Coords.
    idVec2 prevMouse; // Offset: 0x70

    // Sound for rotating.
    idSoundEvent* cameraRotateSound; // Offset: 0x78

    // Sound for Zooming.
    idSoundEvent* cameraZoomSound; // Offset: 0x80

    // Sound for adjusting height.
    idSoundEvent* cameraHeightSound; // Offset: 0x88

    // Entity that we are currently looking at (either selectionEntity or externalEntity)
    idManagedClassPtr < idEntity > targetEntity; // Offset: 0x90

    collectibleInfo_t* info; // Offset: 0xB0

    collectibleOrbit_t* orbitValues; // Offset: 0xB8

}; // Size: 0xC0
