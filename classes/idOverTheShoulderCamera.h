struct idOverTheShoulderCamera : idEntityCamera
{
    // {{ units = m }}
    idVec3 lastLookPositionOffset; // Offset: 0xCA0

    idHavokShape* cameraHavokShape; // Offset: 0xCB0

}; // Size: 0xCB8
