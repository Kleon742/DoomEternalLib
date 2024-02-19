struct idView
{
    enum idViewFadeMode : int
    {
        FADE_MODE_GUI = 0,
        FADE_MODE_PPE = 1
    };

    enum threatIndicatorType_t : int
    {
        THREAT_INDICATOR_TYPE_DAMAGE = 0,
        THREAT_INDICATOR_TYPE_GRENADE = 1,
        THREAT_INDICATOR_TYPE_DEMON = 2
    };

    struct threatIndicatorTriangle_t
    {
        // These are in world-space coordinates
        bool drawDebug; // Offset: 0x0

        bool isOnScreen; // Offset: 0x1

        float alpha; // Offset: 0x4

        float scale; // Offset: 0x8

        float intensity; // Offset: 0xC

        // {{ units = m }}
        idVec3 center; // Offset: 0x10

        idMat3 orientation; // Offset: 0x1C

        // {{ units = m }}
        idVec3 threatIconPosition; // Offset: 0x40

        idMat3 threatIconOrientation; // Offset: 0x4C

        idRenderModel* threatIconModel; // Offset: 0x70

        idRenderModel* onscreenRenderModel; // Offset: 0x78

        idRenderModel* offscreenRenderModel; // Offset: 0x80

        idView::threatIndicatorType_t type; // Offset: 0x88

    }; // Size: 0x90

    struct threatTrackingDetails_t
    {
        // The ID of the threat being tracked
        int threatID; // Offset: 0x0

        // The last time this threat was seen
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastSeenTime; // Offset: 0x8

        // The time at which we started tracking this threat
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > trackingStartTime; // Offset: 0x10

    }; // Size: 0x18

    struct screenParticleState_t
    {
        idRenderModelHandle < idRenderModelParticle > pModel; // Offset: 0x0

        float excludeAngle; // Offset: 0x10

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeStartTime; // Offset: 0x18

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeEndTime; // Offset: 0x20

        bool isActive; // Offset: 0x28

    }; // Size: 0x30

    struct blurRadial_t
    {
        // {{ units = m }}
        idVec3 center; // Offset: 0x0

        // {{ units = m }}
        float peakRadius; // Offset: 0xC

        float fadeSlope; // Offset: 0x10

        idInterpolatePingPong < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > scale; // Offset: 0x18

        bool enabled; // Offset: 0x58

    }; // Size: 0x60

    struct blurRadialDash_t
    {
        // x: forward, y: left, z: up
        idVec3 dirViewAxis; // Offset: 0x0

        idInterpolatePingPong < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > scale; // Offset: 0x10

    }; // Size: 0x50

    struct blurGaussian_t
    {
        float curveScale; // Offset: 0x0

        float curvePower; // Offset: 0x4

        idInterpolatePingPong < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > scale; // Offset: 0x8

    }; // Size: 0x48

    struct depthOfField_t
    {
        idInterpolateRelay < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > nearStartDepth; // Offset: 0x0

        idInterpolateRelay < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > nearEndDepth; // Offset: 0x78

        idInterpolateRelay < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > nearBlend; // Offset: 0xF0

        idInterpolateRelay < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > nearMin; // Offset: 0x168

        idInterpolateRelay < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > farStartDepth; // Offset: 0x1E0

        idInterpolateRelay < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > farEndDepth; // Offset: 0x258

        idInterpolateRelay < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > farBlend; // Offset: 0x2D0

        idInterpolateRelay < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > farMin; // Offset: 0x348

        bool enabled; // Offset: 0x3C0

        bool enableNear; // Offset: 0x3C1

        bool enabledEndState; // Offset: 0x3C2

    }; // Size: 0x3C8

    struct screenEffectGen_t
    {
        float x; // Offset: 0x0

        float y; // Offset: 0x4

        float w; // Offset: 0x8

        float h; // Offset: 0xC

        float s1; // Offset: 0x10

        float t1; // Offset: 0x14

        float s2; // Offset: 0x18

        float t2; // Offset: 0x1C

        float driftAmount; // Offset: 0x20

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > delay; // Offset: 0x28

    }; // Size: 0x30

    struct screenEffect_t
    {
        idMaterial2* material; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeStartTime; // Offset: 0x10

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x18

        idView::screenEffectGen_t genParms[10]; // Offset: 0x20

        int numGenParms; // Offset: 0x200

    }; // Size: 0x208

    struct damageEffect_t
    {
        idMaterial2* material; // Offset: 0x0

        int alpha; // Offset: 0x8

        idVec4 tr; // Offset: 0xC

        idVec4 tl; // Offset: 0x1C

        idVec4 br; // Offset: 0x2C

        idVec4 bl; // Offset: 0x3C

        idView::screenEffectGen_t genParms; // Offset: 0x50

        idVec2 centerPos; // Offset: 0x80

    }; // Size: 0x88

    struct screenOverlay_t
    {
        unsigned int actionId; // Offset: 0x0

        idImageView* colorMap; // Offset: 0x8

        idImageView* flowMap; // Offset: 0x10

        idVec4 tintColor; // Offset: 0x18

        float colorScale; // Offset: 0x28

        idVec2 colorMapTiling; // Offset: 0x2C

        idDeclTable* alphaTable; // Offset: 0x38

        idTypesafeTime < int , millisecondUnique_t , 1000 > alphaTablePeriod; // Offset: 0x40

        float flowMapScale; // Offset: 0x44

        idTypesafeTime < int , millisecondUnique_t , 1000 > flowPeriod; // Offset: 0x48

        float curveScale; // Offset: 0x4C

        float curvePower; // Offset: 0x50

        idInterpolatePingPong < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > scale; // Offset: 0x58

        bool blendAdditive; // Offset: 0x98

        bool useColorMapAsAlphaOnly; // Offset: 0x99

        bool colorMapMirroredTiling; // Offset: 0x9A

        bool revealedByAnimatedMasks; // Offset: 0x9B

        bool startedInCutscene; // Offset: 0x9C

    }; // Size: 0xA0

    struct screenOverlayAnimatedMask_t
    {
        unsigned int tintColorPacked; // Offset: 0x0

        float maskShapePower; // Offset: 0x4

        float animationSpeed; // Offset: 0x8

        float startTime; // Offset: 0xC

        // cached value computed from maskShapePower
        float distNormalizeScale; // Offset: 0x10

    }; // Size: 0x14

    struct screenDistortion_t
    {
        idImageView* distortionMap; // Offset: 0x0

        idImageView* aberrationMap; // Offset: 0x8

        idImageView* flowMap; // Offset: 0x10

        idVec4 scales; // Offset: 0x18

        idTypesafeTime < int , millisecondUnique_t , 1000 > flowPeriod; // Offset: 0x28

        float curvePower; // Offset: 0x2C

        idInterpolatePingPong < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > scale; // Offset: 0x30

    }; // Size: 0x70

    struct screenVignette_t
    {
        unsigned long long actionGroupHandle; // Offset: 0x0

        int declActionIdx; // Offset: 0x8

        // ACTION_ID_INVALID indicates unused
        unsigned int actionId; // Offset: 0xC

        // set to layer - NUM_SCREEN_VIGNETTE_LAYERS if inactive
        short layerIndex; // Offset: 0x10

        float curve; // Offset: 0x14

        // color.w is scale
        idVec4 color; // Offset: 0x18

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x28

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeInEndTime; // Offset: 0x30

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeOutStartTime; // Offset: 0x38

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x40

        bool startedInCutscene; // Offset: 0x48

    }; // Size: 0x50

    struct screenVignetteLayer_t
    {
        // -1 means no active vignette in this layer
        int vignetteIndex; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x8

        float startCurve; // Offset: 0x10

        idVec4 startColor; // Offset: 0x14

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x28

        float endCurve; // Offset: 0x30

        idVec4 endColor; // Offset: 0x34

    }; // Size: 0x48

    struct EnvOverride
    {
        idDeclEnv* env; // Offset: 0x0

        int modelIndex; // Offset: 0x8

        bool enabled; // Offset: 0xC

    }; // Size: 0x10

    struct advanceViewShakeDetails_t
    {
        float normalizedMagnitude; // Offset: 0x0

        idVec3 axisOffsets; // Offset: 0x4

        idVec3 rotationFrequencies; // Offset: 0x10

        idVec3 translationFrequencies; // Offset: 0x1C

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x28

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x30

        idDeclAdvancedViewShake* declAdvancedViewShake; // Offset: 0x38

        idManagedClassPtr < idEntity > referenceEntity; // Offset: 0x40

        idMat3 currentRotationOffset; // Offset: 0x60

        // {{ units = m }}
        idVec3 currentTranslationOffset; // Offset: 0x84

        // shakes infinitely, until EndAdvancedCameraShake() is called by outside source
        bool isInfiniteShake; // Offset: 0x90

    }; // Size: 0x98

    // effects get rendered to this model
    idRenderModelGui* guiModelForEffects; // Offset: 0x0

    // guis get rendered to this model
    idRenderModelGui* guiModelForGuis; // Offset: 0x8

    // render model used for automap
    idRenderModelGui* automapRenderModel; // Offset: 0x10

    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > blurRadius; // Offset: 0x18

    bool lerpToFovActive; // Offset: 0x48

    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > camFov; // Offset: 0x50

    bool isAlreadyBlurred; // Offset: 0x80

    // the game's view
    renderView_t gameview; // Offset: 0x90

    // Debug material for damage effects
    idMaterial2* whiteMaterial; // Offset: 0xA00

    idMaterial2* redMaterial; // Offset: 0xA08

    idMaterial2* blueMaterial; // Offset: 0xA10

    idMaterial2* greenMaterial; // Offset: 0xA18

    bool skipViewEffects; // Offset: 0xA20

    idView::screenParticleState_t fxScreenPrtState[16]; // Offset: 0xA28

    // ----------------------------------------------------------------- view damage parms -----------------------------------------------------------------
    bool viewDamageEnabled; // Offset: 0xD28

    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > damageScaleTracker; // Offset: 0xD30

    // ----------------------------------------------------------------- temp -----------------------------------------------------------------
    bool stealthField; // Offset: 0xD60

    idList < idView::EnvOverride , TAG_IDLIST , false > envOverrideList; // Offset: 0xD68

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > overrideEnvBlendDuration; // Offset: 0xD80

    bool envOverrideDirty; // Offset: 0xD88

    idGrowableParmBlock < 32 > envParms; // Offset: 0xD90

    // ----------------------------------------------------------------- controller shake parms ----------------------------------------------------------------- magnitude of the high frequency controller shake
    float controllerShakeHighMag; // Offset: 0xFE0

    // magnitude of the low frequency controller shake
    float controllerShakeLowMag; // Offset: 0xFE4

    // time the controller shake ends for high frequency.
    int controllerShakeHighTime; // Offset: 0xFE8

    // time the controller shake ends for low frequency.
    int controllerShakeLowTime; // Offset: 0xFEC

    // magnitude of the left trigger controller shake
    float controllerShakeLeftTriggerMag; // Offset: 0xFF0

    // magnitude of the right trigger controller shake
    float controllerShakeRightTriggerMag; // Offset: 0xFF4

    // temporary - allows rumble table to override normal SetControllerShake()
    idDeclRumble* activeRumbleDecl; // Offset: 0xFF8

    // ----------------------------------------------------------------- view kick parms ----------------------------------------------------------------- view kick will be stopped at this time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > kickFinishTime; // Offset: 0x1000

    // length of the kick
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > kickTime; // Offset: 0x1008

    // pre-scaled for the time calculation
    idAngles kickAngles; // Offset: 0x1010

    // ----------------------------------------------------------------- view bob parms ----------------------------------------------------------------- if false, the bob code will not run (needed for rotatable cameras)
    bool isBobEnabled; // Offset: 0x101C

    // {{ units = m }}
    idVec3 viewBob; // Offset: 0x1020

    idAngles viewBobAngles; // Offset: 0x102C

    // ----------------------------------------------------------------- camera shake parms -----------------------------------------------------------------
    viewShakeParms_t* declViewShake; // Offset: 0x1038

    float normalizedDeclViewShakeMagnitude; // Offset: 0x1040

    // amount of shake from the camera
    float cameraShake; // Offset: 0x1044

    // the max amount of shake the player can have
    float playerMaxShakeScale; // Offset: 0x1048

    // a shake of 1.0 can rotate the camera view direction this much on each axis
    idAngles maxShakeAngles; // Offset: 0x104C

    // a shake of 1.0 can displace the camera view location this much on each axis {{ units = m }}
    idVec3 maxShakeOffset; // Offset: 0x1058

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x1068

    float decay; // Offset: 0x1070

    // from the sound sources
    float shakeVolume; // Offset: 0x1074

    // position of the FX entity triggering the screen shake {{ units = m }}
    idVec3 shakeFXPosition; // Offset: 0x1078

    // distance from which the shake must fade relative to fxPosition {{ units = m }}
    float shakeStartFadeDistance; // Offset: 0x1084

    // distance at which the shake is completely faded {{ units = m }}
    float shakeEndFadeDistance; // Offset: 0x1088

    // shake amount applied last frame
    float lastAppliedShake; // Offset: 0x108C

    // {{ units = m }}
    idVec3 lastShakeOffset; // Offset: 0x1090

    idMat3 lastShakeAngles; // Offset: 0x109C

    idArray < idView::advanceViewShakeDetails_t , 4 > advancedViewShakeDetails; // Offset: 0x10C0

    // ----------------------------------------------------------------- Post exposure parms -----------------------------------------------------------------
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > postExposure; // Offset: 0x1320

    // ----------------------------------------------------------------- full screen blur parms -----------------------------------------------------------------  idInterpolate< float, gameTime_t >blur;  ----------------------------------------------------------------- double vision parms -----------------------------------------------------------------
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > dbl; // Offset: 0x1350

    // ----------------------------------------------------------------- screen fade parms -----------------------------------------------------------------
    idInterpolate < idVec4 , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > fadeParameters; // Offset: 0x1380

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeDelayTime; // Offset: 0x13D0

    idView::idViewFadeMode fadeMode; // Offset: 0x13D8

    // ----------------------------------------------------------------- AR Echo parms ----------------------------------------------------------------- {{ units = m }}
    idVec3 echoProjectorPosition; // Offset: 0x13DC

    idVec4 echoInfo; // Offset: 0x13E8

    bool pingWithVisuals; // Offset: 0x13F8

    int pingVisualDistance; // Offset: 0x13FC

    float magnificationRamp; // Offset: 0x1400

    float magnificationScale; // Offset: 0x1404

    // ----------------------------------------------------------------- Radial blur parms -----------------------------------------------------------------
    idView::blurRadial_t blurRadials[8]; // Offset: 0x1408

    int blurRadialIndex; // Offset: 0x1708

    idView::blurRadialDash_t blurRadialDash; // Offset: 0x1710

    // ----------------------------------------------------------------- Gaussian blur parms -----------------------------------------------------------------
    idView::blurGaussian_t blurGaussian; // Offset: 0x1760

    // ----------------------------------------------------------------- DOF parms -----------------------------------------------------------------
    idView::depthOfField_t depthOfField; // Offset: 0x17A8

    idVec4 zoomBlurValue; // Offset: 0x1B70

    // ----------------------------------------------------------------- EM Interference parms -----------------------------------------------------------------
    float emInterference; // Offset: 0x1B80

    // ----------------------------------------------------------------- god rays -----------------------------------------------------------------
    bool godRaysEnabled; // Offset: 0x1B84

    idVec3 godRaysDirection; // Offset: 0x1B88

    int godRaysSize; // Offset: 0x1B94

    int godRaysSourceSize; // Offset: 0x1B98

    idVec3 godRaysColor; // Offset: 0x1B9C

    idView::screenEffect_t screenEffects[8]; // Offset: 0x1BA8

    bool disableToneMapping; // Offset: 0x2BE8

    bool disableScreenEffects; // Offset: 0x2BE9

    bool disableScreenWaterTransitionEffect; // Offset: 0x2BEA

    bool forceDisableDepthOfField; // Offset: 0x2BEB

    bool disableTssaaNextFewFrames; // Offset: 0x2BEC

    // ----------------------------------------------------------------- Screen overlays -----------------------------------------------------------------
    idView::screenOverlay_t screenOverlays[3]; // Offset: 0x2BF0

    // ----------------------------------------------------------------- Screen overlay animated masks -----------------------------------------------------------------
    idView::screenOverlayAnimatedMask_t screenOverlayAnimatedMasks[4]; // Offset: 0x2DD0

    int screenOverlayAnimatedMaskIndex; // Offset: 0x2E20

    // ----------------------------------------------------------------- Screen distortion parms -----------------------------------------------------------------
    idView::screenDistortion_t screenDistortion; // Offset: 0x2E28

    // ----------------------------------------------------------------- Screen vignette parms -----------------------------------------------------------------
    idView::screenVignette_t screenVignettesBuffer[8]; // Offset: 0x2E98

    int numScreenVignettesInBuffer; // Offset: 0x3118

    idView::screenVignetteLayer_t screenVignetteLayers[3]; // Offset: 0x3120

    // ----------------------------------------------------------------- Augment highlight parms -----------------------------------------------------------------
    idVec4 augmentHighlightColors[4]; // Offset: 0x31F8

    idVec4 augmentHighlightFillColor; // Offset: 0x3238

    // ----------------------------------------------------------------- Ping parms -----------------------------------------------------------------
    idVec3 pingCenterPos; // Offset: 0x3248

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pingStartTime; // Offset: 0x3258

    idVec2 pingDistanceFunctionCoeffs; // Offset: 0x3260

    // ----------------------------------------------------------------- Menus background -----------------------------------------------------------------
    idMaterial2* deferredCompositeBackgroundMaterial; // Offset: 0x3268

    // ----------------------------------------------------------------- Whiplash parms -----------------------------------------------------------------
    idAngles whiplashGoal; // Offset: 0x3270

    idAngles whiplashVel; // Offset: 0x327C

    idAngles whiplashCur; // Offset: 0x3288

    float whiplashUpdateFrac; // Offset: 0x3294

    float whiplashVelocityFrac; // Offset: 0x3298

    float whiplashFrictionFrac; // Offset: 0x329C

    float whiplashMinVelocityLen; // Offset: 0x32A0

    // ----------------------------------------------------------------- Damage Feedback -----------------------------------------------------------------
    idView::threatTrackingDetails_t demonTrackingDetails; // Offset: 0x32A8

    idView::threatIndicatorTriangle_t demonThreatIndicator; // Offset: 0x32C0

    idArray < idView::threatIndicatorTriangle_t , 3 > attackerThreatIndicators; // Offset: 0x3350

    idArray < idView::threatIndicatorTriangle_t , 5 > grenadeThreatIndicators; // Offset: 0x3500

    idArray < idView::threatTrackingDetails_t , 5 > grenadeTrackingDetails; // Offset: 0x37D0

    idRenderMatrix worldSpaceMVPMatrix; // Offset: 0x3848

    int lastMatrixUpdateFrame; // Offset: 0x3888

    int lastMotionBlurSetting; // Offset: 0x388C

    float weaponFOVScale; // Offset: 0x3890

    // for a custom FOV scale different from weaponFOVScale
    float customFOVScale2; // Offset: 0x3894

}; // Size: 0x38A0
