struct idRotatableCamera : idUtilityCamera
{
    // starting angle for camera (usually 0--roll could be set for a little movement)
    idAngles startingAngles; // Offset: 0xC48

    // camera will attempt to return to this angle if returnToGoalSpeed (below) is set
    idAngles goalAngles; // Offset: 0xC54

    // minimum values for each angle
    idAngles clampedMinAngles; // Offset: 0xC60

    // maximum values for each angle
    idAngles clampedMaxAngles; // Offset: 0xC6C

    // if true, the camera will watch it's position and axis to simulate movement
    bool doesCameraReactToMovement; // Offset: 0xC78

    // if non-zero, camera will roll/pitch/yaw when it is turned
    idAngles reactionToMovement; // Offset: 0xC7C

    // how fast should it react to quick turn changes?
    float reactionToMovementSpeed; // Offset: 0xC88

    // if non-zero, camera will start turning to face direction of movement
    idAngles goalForTurning; // Offset: 0xC8C

    // the camera turns to goal
    float turnToGoalSpeed; // Offset: 0xC98

    // bind player to camera, if true, so that player moves around the world (unlocking streamed areas and such..)
    bool bindPlayerToCamera; // Offset: 0xC9C

    // was player 'notarget' before starting this?
    bool playerWasNoTarget; // Offset: 0xC9D

    // camera angle based on joystick movement
    idAngles currentUserAngles; // Offset: 0xCA0

    // additive camera angle based on reactions to movement
    idAngles currentReactionAngles; // Offset: 0xCAC

    // additive camera direction to simulate looking into a turn
    idAngles currentTurningAngles; // Offset: 0xCB8

    // needed to calculate the camera's movement
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > previousThinkTime; // Offset: 0xCC8

    // axis is not correct for some reason so we calculate {{ units = m }}
    idVec3 lastPosition; // Offset: 0xCD0

    // look at movement to determine axis
    idQuat lastMoveAxis; // Offset: 0xCDC

    // average out rotation changes a bit
    idQuat averageAxis; // Offset: 0xCEC

    // the stored camera axis to use
    idMat3 cameraAxis; // Offset: 0xCFC

    // {{ units = m }}
    idVec3 playerStartPos; // Offset: 0xD20

    // suppresses motion when camera is first activated
    float suppressMovement; // Offset: 0xD2C

}; // Size: 0xD30
