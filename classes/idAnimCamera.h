struct idAnimCamera : idCameraView
{
    struct idScreenFade
    {
        // if >= 0, start a fade on the next Draw
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeTime; // Offset: 0x0

        // color to fade to if fadeTime >= 0
        idVec4 fadeColor; // Offset: 0x8

    }; // Size: 0x18

    // Animsys to use
    idDeclAnimSys* declAnimSys; // Offset: 0xC18

    // name of the joint to use for the camera position and rotation
    idJointName cameraJointName; // Offset: 0xC20

    // name of the gui to display
    idAtomicString guiName; // Offset: 0xC50

    // number of times to loop the animation ( <= 0 loops infinitely )
    int numLoops; // Offset: 0xC58

    // initial field of view for the cinematic
    float initialFov; // Offset: 0xC5C

    // if true, the player will be hidden during the cinematic
    bool hidePlayer; // Offset: 0xC60

    // If true, the player will be teleported to the camera's position at the end of the cinematic
    bool teleportPlayer; // Offset: 0xC61

    // if true, and we don't have a player passed in, use debug player
    bool useDebugPlayerIfNeeded; // Offset: 0xC62

    // trigger this entity when finished
    idManagedClassPtr < idEntity > triggerWhenDone; // Offset: 0xC68

    // should fade in on start.
    bool fadeInOnStart; // Offset: 0xC88

    // if we should draw player guis
    bool drawPlayerGUIS; // Offset: 0xC89

    // if true show cinematic letterbox bars in view
    bool showLetterboxView; // Offset: 0xC8A

    // if true we use high quality mip generation
    bool useHighQualityMipGeneration; // Offset: 0xC8B

    // true if we have been triggered once.
    bool hasActivated; // Offset: 0xC8C

    // angles that the blend should be offset
    idAngles blendAngleOffset; // Offset: 0xC90

    // when true a second activate will deactivate this camera only useful for gameplay direct activate / deactivate DO NOT USE FOR SCENE DIRECTOR
    bool allowDeactivation; // Offset: 0xC9C

    // is this camera going to be controlled by logic? DO NOT USE FOR SCENE DIRECTOR
    bool logicControlledCamera; // Offset: 0xC9D

    // if this is a logic controlled camera, should we use the player's FOV?
    bool logicUsePlayerFOV; // Offset: 0xC9E

    // if this is a logic controlled camera, specify the FOV transition in just like scene director
    idTypesafeTime < int , millisecondUnique_t , 1000 > logicFovTransitionInDuration; // Offset: 0xCA0

    // if this is a logic controlled camera, specify the FOV transition out just like scene director
    idTypesafeTime < int , millisecondUnique_t , 1000 > logicFovTransitionOutDuration; // Offset: 0xCA4

    // animationalias
    idMD6Alias* animationAlias; // Offset: 0xCA8

    // handle of the animation
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > animationHandle; // Offset: 0xCB0

    // channel animator for playing MD6 animations
    idAnimator_Channel channelAnimator; // Offset: 0xCB8

    idAnimStack animStack; // Offset: 0xDC8

    idJointAnimator* jointAnimator; // Offset: 0x1A08

    idAnimSys* animSys; // Offset: 0x1A10

    idPerfectPlacementComponent perfectPlacementComponent; // Offset: 0x1A18

    // current position of camera
    idVec3 camPos; // Offset: 0x1AC0

    idVec3 localCamPos; // Offset: 0x1ACC

    idVec3 camPosOffset; // Offset: 0x1AD8

    bool useCamPosOffset; // Offset: 0x1AE4

    // current camera axis
    idMat3 camAxis; // Offset: 0x1AE8

    // index of joint that's being used for the camera pos and rotation
    idIndex < short , invalidJointIndex_t , - 1 > camJointIdx; // Offset: 0x1B0C

    // current animation
    idMD6Anim* camAnim; // Offset: 0x1B10

    int cameraCutCounter; // Offset: 0x1B18

    // These two values are only used when the camera is NOT taking these from an animations user channels. current field of view of the camera
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > camFov; // Offset: 0x1B20

    // current distance at which the camera is focused {{ ___ts = m }}
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > camFocalPlane; // Offset: 0x1B50

    // offset to apply to camera translation {{ units = m }}
    idVec3 offset; // Offset: 0x1B80

    // state variables for screen fading
    idAnimCamera::idScreenFade screenFade; // Offset: 0x1B90

    // number of deferred frames remaining after the anim completes... this ensures we display all frames even though the results a deferred
    int remainingFrames; // Offset: 0x1BA8

    idRenderParmLerp depthOfField; // Offset: 0x1BB0

    // starting position for the intial blend to the first camera frame {{ units = m }}
    idVec3 startPos; // Offset: 0x1C00

    // starting orientation for the initial blend to the first camera frame
    idQuat startQuat; // Offset: 0x1C0C

    // ending orientation for the intial blend
    idQuat destQuat; // Offset: 0x1C1C

    // true if the camera is paused at the first frame and we're blending to it's position / orientation
    bool isBlendingIn; // Offset: 0x1C2C

    // This can be saveskip'd because we set them up to point to the above 4 variables in the constructor
    idRenderParmLerp* renderParms[1]; // Offset: 0x1C30

    // Use FOV & focal length params from the animations played on the camera.
    bool useAnimationCameraChannels; // Offset: 0x1C38

    idIndex < short , invalidUserChannelIndex_t , - 1 > userChannelFOV; // Offset: 0x1C3A

    idIndex < short , invalidUserChannelIndex_t , - 1 > userChannelFocalPlane; // Offset: 0x1C3C

    idIndex < short , invalidUserChannelIndex_t , - 1 > userChannelNearPlane; // Offset: 0x1C3E

    idIndex < short , invalidUserChannelIndex_t , - 1 > userChannelCuts; // Offset: 0x1C40

    idIndex < short , invalidUserChannelIndex_t , - 1 > userChannelDofNearStart; // Offset: 0x1C42

    idIndex < short , invalidUserChannelIndex_t , - 1 > userChannelDofNearEnd; // Offset: 0x1C44

    idIndex < short , invalidUserChannelIndex_t , - 1 > userChannelDofFarStart; // Offset: 0x1C46

    idIndex < short , invalidUserChannelIndex_t , - 1 > userChannelDofFarEnd; // Offset: 0x1C48

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastCutValueFrom; // Offset: 0x1C50

    int lastCutValue; // Offset: 0x1C58

    bool curFrameIsAfterACut; // Offset: 0x1C5C

    // Current camera settings. Taken either from the animation being played or cam* interpolators.
    float cameraFOV; // Offset: 0x1C60

    // {{ units = m }}
    float cameraFocalPlane; // Offset: 0x1C64

    // {{ units = m }}
    float cameraDofNearStart; // Offset: 0x1C68

    // {{ units = m }}
    float cameraDofNearEnd; // Offset: 0x1C6C

    // {{ units = m }}
    float cameraDofFarStart; // Offset: 0x1C70

    // {{ units = m }}
    float cameraDofFarEnd; // Offset: 0x1C74

    // {{ units = m }}
    float cameraNearPlane; // Offset: 0x1C78

    bool midnightCameraDataActive; // Offset: 0x1C7C

    idMidnightCameraData midnightCameraData; // Offset: 0x1C80

    idMidnightCameraAnimator* midnightAnimator; // Offset: 0x1CF0

    idDeclEnv* previousEnvOverride; // Offset: 0x1CF8

    bool refreshEnvOverride; // Offset: 0x1D00

    int lastCutsceneFrame; // Offset: 0x1D04

    idTypesafeTime < int , millisecondUnique_t , 1000 > fovTransitionInDuration; // Offset: 0x1D08

    idTypesafeTime < int , millisecondUnique_t , 1000 > fovTransitionOutDuration; // Offset: 0x1D0C

    idMidnightAnimMdntInfo* midnightAnimInfo; // Offset: 0x1D10

    idTypesafeTime < int , millisecondUnique_t , 1000 > midnightClipStartTime; // Offset: 0x1D18

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > midnightTime; // Offset: 0x1D20

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > midnightPreviousTime; // Offset: 0x1D28

    idView* viewLastDrawnTo; // Offset: 0x1D30

}; // Size: 0x1D38
