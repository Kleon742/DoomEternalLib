struct idInteractionCamera : idCamera
{
    // interp from
    idAngles startAngles; // Offset: 0xBB0

    // interp from {{ units = m }}
    idVec3 startPos; // Offset: 0xBBC

    // saved return-to origin {{ units = m }}
    idVec3 returnToPos; // Offset: 0xBC8

    // interp to
    idAngles destAngles; // Offset: 0xBD4

    // interp to. {{ units = m }}
    idVec3 destPos; // Offset: 0xBE0

    // returning the view back to the player.
    bool returningToPlayer; // Offset: 0xBEC

    // if we're in the setup to move to ai.
    bool movingToAI; // Offset: 0xBED

    // offset for the camera target position {{ units = m }}
    idVec3 targetOffset; // Offset: 0xBF0

    // offset the target angles by this amount.
    idAngles targetAnglesOffset; // Offset: 0xBFC

    // time in msec to transition the camera
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lerpTime; // Offset: 0xC08

    // time in msec to transition the camera to the target view
    idTypesafeTime < int , millisecondUnique_t , 1000 > lerpInTime; // Offset: 0xC10

    // time in msec to transition to switch view. i.e. buy vrs sell
    idTypesafeTime < int , millisecondUnique_t , 1000 > lerpSwitchTime; // Offset: 0xC14

    // time in msec to transition the camera to the player view
    idTypesafeTime < int , millisecondUnique_t , 1000 > lerpOutTime; // Offset: 0xC18

    // fov of the camera view
    float cameraFov; // Offset: 0xC1C

    // environment settings decl for the camera view
    idDeclEnv* envSettings; // Offset: 0xC20

    // if true we try to teleport player at the end.
    bool tryToTeleportPlayer; // Offset: 0xC28

    // if true we always teleport player at the end.
    bool forceTeleportPlayer; // Offset: 0xC29

    // if true try to keep the pitch from the interaction
    bool tryToKeepPitch; // Offset: 0xC2A

    // camera transition start time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0xC30

    // starting fov
    float startFov; // Offset: 0xC38

    // the interp fraction of this camera
    float currentInterpFraction; // Offset: 0xC3C

    // ai to let know that we've deativated
    idManagedClassPtr < idEntity > deactivateCallbackAI; // Offset: 0xC40

    // ai to let know that we've deativated
    idManagedClassPtr < idEntity > activatingAI; // Offset: 0xC60

    // if we're a code solution camera instead of data
    bool dynamicallySetup; // Offset: 0xC80

}; // Size: 0xC88
