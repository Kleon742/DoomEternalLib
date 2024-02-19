struct collectibleInputSpeeds_t
{
    // speed of the camera yaw rotation.
    float cameraYawSpeed; // Offset: 0x0

    // speed of the camera pitch rotation.
    float cameraPitchSpeed; // Offset: 0x4

    // speed of the camera height movement.
    float cameraHeightSpeed; // Offset: 0x8

    // speed of the camera zoom movement.
    float cameraZoomSpeed; // Offset: 0xC

    // Dead Zone for X movement.
    float XAxisDeadZone; // Offset: 0x10

    // Dead Zone for Y movement.
    float YAxisDeadZone; // Offset: 0x14

}; // Size: 0x18
