struct idSpectacleCamera : idCameraView
{
    enum eSpectacleCameraState : int
    {
        spectacleCameraNeverActivated = 0,
        spectacleCameraActivated = 1,
        spectacleCameraFadeIn = 2,
        spectacleCameraReachedFadeInCutThreshold = 3,
        spectacleCameraFadeToSpectacle = 4,
        spectacleOccuring = 5,
        spectacleCameraReachedFadeOutCutThreshold = 6,
        spectacleCameraFadeOut = 7,
        spectacleCameraDeactivated = 8
    };

    // Skip the initial intro fade (only requires one fade in the fade table) and apply initial positions. This is used for starting a camera during level fade.
    bool skipIntroFade; // Offset: 0xC18

    // Table to use for fading the camera, manual control must be enabled
    idDeclTable* fadeTable; // Offset: 0xC20

    // Table to use for driving the camera FOV
    idDeclTable* fovTable; // Offset: 0xC28

    // the color to fade too
    idColor fadeColor; // Offset: 0xC30

    // Threshold at which the camera cut to this camera occurs and the threshold at which the cut back to the player occurs
    float threshold; // Offset: 0xC40

    // The fov for the camera
    float fov; // Offset: 0xC44

    // The end point for the pan
    idVec3 panDestination; // Offset: 0xC48

    // The time taken to get from the cameras spawn position to the panDestination
    float panDuration; // Offset: 0xC54

    // if true, the player will be hidden during the camera take
    bool hidePlayer; // Offset: 0xC58

    // if true, the player hud will be hidden during the camera take
    bool hideGui; // Offset: 0xC59

    // Leave the player and HUD in a state to start a cinematic (DYOUNG: This is for the end of DLC1 and should be replaced with more rigorous tests of the screen fade curves so transitions can be hidden)
    bool exitsToCinematic; // Offset: 0xC5A

    // trigger this entity when finished
    idManagedClassPtr < idEntity > triggerWhenDone; // Offset: 0xC60

    // trigger this entity when the spectacle camera is completing the second fade out
    idManagedClassPtr < idEntity > triggerOnFadeOut; // Offset: 0xC80

    // sound event to trigger
    idSoundEvent* soundEvent; // Offset: 0xCA0

    // while active sound occlusion will be disable
    bool skipSoundOcclusion; // Offset: 0xCA8

    // starting position of the player when this camera was initially activated
    idVec3 startPos; // Offset: 0xCAC

    // starting orientation of the player when this camera was initially activated
    idQuat startQuat; // Offset: 0xCB8

    // saved view angles for demonplayers
    idAngles dpDeltaViewAngles; // Offset: 0xCC8

    // game time at the point this camera was initially activated
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > activationTime; // Offset: 0xCD8

    // game time at the point this camera was initially activated
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > deactivationTime; // Offset: 0xCE0

    // the current state of the camera
    idSpectacleCamera::eSpectacleCameraState spectacleCameraState; // Offset: 0xCE8

    // current position of camera
    idVec3 camPos; // Offset: 0xCEC

    // current camera axis
    idMat3 camAxis; // Offset: 0xCF8

    // current camera FOV
    float camFov; // Offset: 0xD1C

}; // Size: 0xD20
