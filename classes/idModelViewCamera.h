struct idModelViewCamera
{
    // the position that we are rotating around. {{ units = m }}
    idVec3 targetPos; // Offset: 0x0

    // Glamour Camera Interpolation Parameters. Where we are going next {{ units = m }}
    idVec3 desiredPosition; // Offset: 0xC

    // Where we are going next
    idMat3 desiredAxis; // Offset: 0x18

    // The Last Set Position we were at. {{ units = m }}
    idVec3 lastPosition; // Offset: 0x3C

    // The Last Set Axis we were at.
    idMat3 lastAxis; // Offset: 0x48

    // The current view pos. {{ units = m }}
    idVec3 currentViewPos; // Offset: 0x6C

    // The current view axis.
    idMat3 currentViewAxis; // Offset: 0x78

    // When will we arrive at our destination.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > cameraArrivalTime; // Offset: 0xA0

    // How long will it take us to get there.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > cameraLerpTime; // Offset: 0xA8

    // Last Update Time Stamp.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > previousTime; // Offset: 0xB0

    // are we locked in glamour view?
    bool glamourView; // Offset: 0xB8

    // Spline Camera Movement.
    idCurve_Spline < idVec3 >* splineMovement; // Offset: 0xC0

    // Input parms.
    idVec3 joyDeflection; // Offset: 0xC8

    float inputAngle; // Offset: 0xD4

    float inputAnglePitch; // Offset: 0xD8

    // {{ units = m }}
    float inputHeight; // Offset: 0xDC

    // {{ units = m }}
    float inputDistance; // Offset: 0xE0

    float inputAngleVelocity; // Offset: 0xE4

    // {{ units = m }}
    float inputHeightVelocity; // Offset: 0xE8

    idVec3 currentMouse; // Offset: 0xEC

    idVec3 previousMouse; // Offset: 0xF8

    int currentMouseWheel; // Offset: 0x104

    bool leftPressed; // Offset: 0x108

    bool rightPressed; // Offset: 0x109

    bool useWeaponViewControls; // Offset: 0x10A

    // Bounds Clamping.
    idBounds innerBoundsClamp; // Offset: 0x10C

    idBounds outterBoundsClamp; // Offset: 0x124

    // {{ units = m }}
    float inputModeCameraDistance; // Offset: 0x13C

    // {{ units = m }}
    float inputModeCameraHeight; // Offset: 0x140

    idSoundEvent* cameraRotateSound; // Offset: 0x148

    idSoundEvent* cameraZoomSound; // Offset: 0x150

    idSoundEvent* cameraHeightSound; // Offset: 0x158

    idSoundObject soundObject; // Offset: 0x160

}; // Size: 0x170
