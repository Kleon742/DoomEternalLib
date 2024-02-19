struct renderView_t
{
    idTypesafeTime < long long , microsecondUnique_t , 1000000 > renderTimeUs; // Offset: 0x0

    // Player views will set this to a non-zero integer for per-view model suppression to allow a view weapon to only show in the player view while a player body only shows in a third person view.
    unsigned int viewID; // Offset: 0x8

    // The view has jumped, so occlusion queries from the previous frame are no longer valid, and everything in-frame should be assumed visible. This doesn't implicitly affect texture streaming, so the first frame will likely be blurry before textures page in.
    bool discontinuousViewPosition; // Offset: 0xC

    // Many tools don't want the final glare pass.
    bool skipPostProcess; // Offset: 0xD

    // Envshot never wants to see testimage, showtris, etc in the images
    bool skipRenderTools; // Offset: 0xE

    // Use a default environment map instead of dynamic rendering of one, usually for tools.
    bool skipDynamicEnvironment; // Offset: 0xF

    // XY windows gather with an ortho projection
    bool streamingGatherOrthographic; // Offset: 0x10

    // Disable the dynamic resolution scaling code, render only at the full resolution
    bool forceFullResolution; // Offset: 0x11

    // Use high quality mipmap generation method when generating the view color mips, this can be set for cinematics which take advantage of post effects which use the view color mips (ie depth of field) giving a higher-quality result.
    bool useHQViewColorMipsGeneration; // Offset: 0x12

    // For steroescopic 3D rendering, we don't want to allow the hands/weapons to use a custom (inconsistant) FOV
    bool inhibitModelFovScale; // Offset: 0x13

    // Render wireframe surfaces, used by idStudio XY view
    bool enableWorldEditorPass; // Offset: 0x14

    // In cut scene used for letting the renderer know that the cutscene has taken player camera control
    bool inCutscene; // Offset: 0x15

    // A cut scene just triggered a camera cut.
    bool cameraCut; // Offset: 0x16

    // the number of frames to hold with a camera cut
    int cameraCutFrames; // Offset: 0x18

    // Disable shakes
    bool disableShakes; // Offset: 0x1C

    // Disable temporal amortization of sun shadows, required for some cutscenes only.
    unsigned char numForcedSunShadowSlices; // Offset: 0x1D

    bool disableTriangleOcclusionCulling; // Offset: 0x1E

    // Disable async GPU particles (for when draws write depth in oapque in idStudio)
    bool enableAsyncGPUParticles; // Offset: 0x1F

    toolsVisibilityMask_t toolsVisibilityMask; // Offset: 0x20

    renderModelVisibilityScope_t renderModelVisibilityMask; // Offset: 0x24

    // ------------------------ the projection matrix is derived from these ------------------------
    float fov_x; // Offset: 0x28

    float fov_y; // Offset: 0x2C

    float weaponFOVX; // Offset: 0x30

    float weaponFOVY; // Offset: 0x34

    float customFOV2X; // Offset: 0x38

    float customFOV2Y; // Offset: 0x3C

    float nominalFOVX; // Offset: 0x40

    float nominalFOVY; // Offset: 0x44

    // Cinematics often want control over the near plane. Remember that fidling with this comes at the  cost of altering depth precision! Valid if zNear > 0.0f {{ units = m }}
    float zNear; // Offset: 0x48

    // optional zFar, to override value supplied from environment
    float zFar; // Offset: 0x4C

    // FIXME: remove the above specification and require setting the 'explicitProjectionMatrix'
    idRenderMatrix explicitProjectionMatrix; // Offset: 0x50

    bool useExplicitProjectionMatrix; // Offset: 0x90

    // ------------------------ the view matrix is derived from these ------------------------
    idVec3 vieworg; // Offset: 0x94

    // transformation matrix, view looks down the positive X axis
    idMat3 viewaxis; // Offset: 0xA0

    // ------------------------ De-concatenated view position. This is useful in very specific situations, typically on animated cameras far away from the origin. In order to minimize floating point inaccuracy in rendering computations that are very sensitive to precision (typically MVP computation), we can decompose the position into a mostly constant offset (viewOriginOffset) and an animated position (localViewOrigin). The sum of those two will be equal to the global view position (vieworg), but storing them separately makes it possible to minimize floating point error by carefully subtracting first the constant viewOriginOffset and then adding the animated part. Subtracting two arbitrarily large typically constant values (a model's position and the viewOriginOffset) and then adding a much smaller animated value will be much more temporaly stable than subtracting a large animated value in a single step thanks to a much more smaller epsilon near zero. This makes it possible to have jitter-free rendering of very
    bool usesViewOriginOffset; // Offset: 0xC4

    idVec3 localViewOrigin; // Offset: 0xC8

    idVec3 viewOriginOffset; // Offset: 0xD4

    idVec2 particleFovScreenScale; // Offset: 0xE0

    // To reduce latency, the renderer may be given the option of creating new origin / axis data with an updated idUserCmd.
    idViewBypass viewBypass; // Offset: 0xE8

    // If the explicitProjectionMatrix is to be used as a complete MVP matrix, we want this to be an identity. Because viewAxis is normally multiplied by the "flipMatrix" to go from the game coordinate system (looking down X) to our coordinate system (looking down -Z), there isn't a convenient and obvious way to disable the view matrix without this option.
    bool forceIdentityViewMatrix; // Offset: 0x130

    // ------------------------  any variables to be passed to the renderProgs can be put here.
    idGrowableParmBlock < 32 > parmBlock; // Offset: 0x140

    // used to completely override the current dynamic environment
    idDeclEnv* dynEnvOverride; // Offset: 0x390

    bool dynEnvOverrideDirty; // Offset: 0x398

    float dynEnvOverrideDuration; // Offset: 0x39C

    int dynEnvOverrideModelIndex; // Offset: 0x3A0

    bool applyDynEnvOverride; // Offset: 0x3A4

    // used to change a subset of env parms on the current dynamic environment
    idGrowableParmBlock < 32 > envOverrideParmBlock; // Offset: 0x3B0

    bool depthOfFieldEnable; // Offset: 0x600

    bool depthOfFieldNearEnabled; // Offset: 0x601

    // depthOfFieldNearEnd < depthOfFieldNearStart < depthOfFieldFarStart < depthOfFieldFarEnd  The focus field starts at depthOfFieldNearStart and ends at DepthOfFieldFarStart  NearDof starts at depthofFieldNearStart and gradually increases to "max dof" as you get closer to the camera until depthOfFieldNearEnd where max dof is reached. Closer than that  gets max dof.  FarDof starts at depthofFieldFarStart and gradually increases to "max dof" as you get further from the camera until depthOfFieldFarEnd where max dof is reached. Further than that  gets max dof.  depthOfField(Near | Far)Blend controls the maximum amount of dof to apply in each case. It is  a scalar from 0 - 1 (so it scales max dof in each case).  depthOfField(Near | Far)Min specifies the minimum amount of dof to apply at the near & far dof planes. {{ units = m }}
    float depthOfFieldNearEnd; // Offset: 0x604

    // {{ units = m }}
    float depthOfFieldNearStart; // Offset: 0x608

    float depthOfFieldNearBlend; // Offset: 0x60C

    // {{ units = m }}
    float depthOfFieldNearMin; // Offset: 0x610

    // {{ units = m }}
    float depthOfFieldFarStart; // Offset: 0x614

    // {{ units = m }}
    float depthOfFieldFarEnd; // Offset: 0x618

    float depthOfFieldFarBlend; // Offset: 0x61C

    float depthOfFieldFarMin; // Offset: 0x620

    bool wallhackVision; // Offset: 0x624

    bool prowlerVision; // Offset: 0x625

    bool deathCamVision; // Offset: 0x626

    // {{ units = m }}
    idVec3 echoProjectorPosition; // Offset: 0x628

    bool hdrAutoExposureInstant; // Offset: 0x634

    // If != 0.0f use this value instead of auto exposure. Fully disables auto exposure if != 0.0f.
    float hdrManualExposure; // Offset: 0x638

    bool filmicCurveOverride; // Offset: 0x63C

    float filmicCurveShadowsScale; // Offset: 0x640

    float filmicCurveMidtonesScale; // Offset: 0x644

    float filmicCurveHighlightsScale; // Offset: 0x648

    float filmicCurveWhitePoint; // Offset: 0x64C

    // sub sample indices used for temporal AA / screenshots up-resolution
    unsigned char subBufferIndex; // Offset: 0x650

    // numSubSamples = numSubSamplesRow * numSubSamplesRow
    unsigned char numSubBuffersRow; // Offset: 0x651

    unsigned char subSampleIndex; // Offset: 0x652

    // numSubSamples = numSubSamplesRow * numSubSamplesRow
    unsigned char numSubSamplesRow; // Offset: 0x653

    unsigned char upsamplerSubSampleIndex; // Offset: 0x654

    bool screenshotResolutionScale; // Offset: 0x655

    float slowMotionScale; // Offset: 0x658

    int forceLod; // Offset: 0x65C

    // Scale factor applied to the density of all light scattering volumes.
    float lightScatteringDensityScale; // Offset: 0x660

    // Prevents background color from being cleared to black where ndcZ == 1.0
    bool deferredPassesKeepBackground; // Offset: 0x664

    // used to calculate the radial blur screen space position - radial blurs are added game-side, the calculations are render dependent though
    blurRadialParms_t blurRadialParms[8]; // Offset: 0x668

    int numRadialBlurs; // Offset: 0x728

    blurRadialDashParms_t blurRadialDashParms; // Offset: 0x72C

    blurGaussianParms_t blurGaussianParms; // Offset: 0x73C

    // Different from hdrManualExposure: hdrManualExposure is applied during autoexposure pass, and therefore requires the autoexposure update to run. exposureOverride (if enabled) supersedes hdrManualExposure, and is applied in postprocess regardless if autoexposure updates or not.
    float exposureOverride; // Offset: 0x748

    bool skipAutoExposureUpdate; // Offset: 0x74C

    bool disableToneMapping; // Offset: 0x74D

    bool disableScreenEffects; // Offset: 0x74E

    bool disableScreenWaterTransitionEffect; // Offset: 0x74F

    bool disableTssaaNextFewFrames; // Offset: 0x750

    screenOverlayParms_t screenOverlayParms[3]; // Offset: 0x758

    screenOverlayAnimatedMaskParms_t screenOverlayAnimatedMaskParms[4]; // Offset: 0x830

    int numScreenOverlayAnimatedMasks; // Offset: 0x870

    screenDistortionParms_t screenDistortionParms; // Offset: 0x878

    screenVignetteParms_t screenVignetteParms[3]; // Offset: 0x8B0

    int numScreenVignettes; // Offset: 0x8EC

    idVec4 augmentHighlightColors[4]; // Offset: 0x8F0

    idVec4 augmentHighlightFillColor; // Offset: 0x930

    idVec3 pingCenterPos; // Offset: 0x940

    float pingDistance; // Offset: 0x94C

    idImageView* deferredCompositeBackgroundImg; // Offset: 0x950

    bool skipFogAndRainForGUIs; // Offset: 0x958

    idImage* hdrCalibrationImage; // Offset: 0x960

}; // Size: 0x970
