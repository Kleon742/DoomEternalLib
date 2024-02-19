struct idFXSingleAction
{
    struct fxLightParms_t
    {
        // light radius {{ units = m }}
        idVec3 radius; // Offset: 0x0

        // light falloff
        float falloff; // Offset: 0xC

        // clip volume light falloff
        float clipVolumefalloff; // Offset: 0x10

        // light intensity
        float intensity; // Offset: 0x14

        // specular scale
        float specularScale; // Offset: 0x18

        // if true the light will not contribute to any static ambient light (lightmap or light-probes)
        bool dynamicOnly; // Offset: 0x1C

        // max Visible Range {{ units = m }}
        float maxVisibleRange; // Offset: 0x20

        // distance to fade over when going out of range {{ units = m }}
        float fadeVisibilityOver; // Offset: 0x24

        // table to use for intensity
        idDeclTable* intensityTable; // Offset: 0x28

        // light material
        idMaterial2* lightMtr; // Offset: 0x30

        // light center position {{ units = m }}
        idVec3 lightCenter; // Offset: 0x38

    }; // Size: 0x48

    struct fxParticleParms_t
    {
        // particle decl
        idDeclParticle* declPrt; // Offset: 0x0

        // particle decl list. Will randomly choose from this list IF declPrt is empty.
        idList < const idDeclParticle * , TAG_IDLIST , false > declPrtList; // Offset: 0x8

        // if trackvelocity enabled, scale the velocity by this amount
        float velocityScale; // Offset: 0x20

        // if trackvelocity enabled, only emit particles when velocity is within range {{ units = m / s }}
        float minVelocity; // Offset: 0x24

        // if smokeSystem enabled, emit the particles at this rate from the smoke system
        int smokeSystemRate; // Offset: 0x28

        // if smokeSystem enabled, emit the particles at this spacing from the smoke system {{ units = m }}
        float trailSpacing; // Offset: 0x2C

        // if isScreenPrt enabled, this is the exclusion angle for the player view particle
        float screenPrtExcludeAngle; // Offset: 0x30

        // if enabled, inherit the bind master's velocity
        bool trackVelocity; // Offset: 0x34

        // if enabled, use the global smoke system for particle emission
        bool useSmokeSystem; // Offset: 0x35

        // if enabled, this is a player view particle
        bool isScreenPrt; // Offset: 0x36

        // if enabled, screen particle FX that cannot be started when requested will be skipped altogether
        bool allowScreenParticleFailure; // Offset: 0x37

        // rendering sort bias
        short sortBias; // Offset: 0x38

        // name of override that matches override name in particle system. This represents a value modified by game code
        idAtomicString overrideValueName; // Offset: 0x40

        // if nonzero, spawn from ai's surface
        bool surfaceSpawning; // Offset: 0x48

        // depth offset
        float surfaceSpawnDepthOffset; // Offset: 0x4C

        // scale factor applied to surface spawning rate
        float surfaceSpawnRateScale; // Offset: 0x50

        // scale factor applied to surface spawning rate based on velocities
        float surfaceSpawnRateVelocityBased; // Offset: 0x54

        // particle lights will cast shadows if set
        bool enableShadowLights; // Offset: 0x58

        // Use scaled offset to calculate final world position.
        bool useCorrectTagMath; // Offset: 0x59

    }; // Size: 0x60

    struct fxDecalParms_t
    {
        // decal angle
        float angle; // Offset: 0x0

        // decal depth {{ units = m }}
        float depth; // Offset: 0x4

        // how long the emissive tint is applied to the decal for
        idTypesafeTime < int , millisecondUnique_t , 1000 > emissiveLifetime; // Offset: 0x8

        // decal emissive tint xyz emissive color w emissive power
        idVec4 emissiveTint; // Offset: 0xC

        // decal material
        idMaterial2* decalMtr; // Offset: 0x20

        // decal should persist until forceably removed
        bool isPersistent; // Offset: 0x28

        // decal will read color from the color parm and ignore any albedo texture reads
        bool skipAlbedoTextureRead; // Offset: 0x29

        // render priority if not persistent
        int priority; // Offset: 0x2C

    }; // Size: 0x30

    struct fxModelParms_t
    {
        // name of static model lwo
        idStaticModel* staticModel; // Offset: 0x0

        // custom material
        idMaterial2* customMaterial; // Offset: 0x8

        // renders model in gun fov space
        bool renderWithGunFov; // Offset: 0x10

        // uses the custom fov 2 (equipment launcher)
        bool renderWithCustomFov2; // Offset: 0x11

        // if true then don't set renderparm color vals
        bool externalColorControl; // Offset: 0x12

    }; // Size: 0x18

    struct fxSoundParms_t
    {
        // sound event used to start the audio
        idSoundEvent* startSoundEvent; // Offset: 0x0

        // sound event used to start the audio
        idSoundEvent* stopSoundEvent; // Offset: 0x8

        // if true then sound will be stopped when the FX that started it stops
        bool stopSound; // Offset: 0x10

        // if true the fade out duration will be used to keep the action activate after the stop event has been fired, it will stay active for the specified duration
        bool allowStopFade; // Offset: 0x11

    }; // Size: 0x18

    struct fxScreenShakeParms_t
    {
        // screen shake magnitude
        float magnitude; // Offset: 0x0

        // screen shake max angles
        idAngles maxAngles; // Offset: 0x4

        // screen shake max offset {{ units = m }}
        idVec3 maxOffset; // Offset: 0x10

        // screen shake by decl
        idDeclViewShake* viewShakeDecl; // Offset: 0x20

        // Advanced screen shake by decl. If this is specified, it will override all of the other screen shake parms.
        idDeclAdvancedViewShake* advancedShakeDecl; // Offset: 0x28

    }; // Size: 0x30

    struct fxControllerShakeParms_t
    {
        // controller shake high magnitude
        float highMag; // Offset: 0x0

        // controller shake low magnitude
        float lowMag; // Offset: 0x4

        // controller shake high duration
        idTypesafeTime < float , secondUnique_t , 1 > highDuration; // Offset: 0x8

        // controller shake low duration
        idTypesafeTime < float , secondUnique_t , 1 > lowDuration; // Offset: 0xC

    }; // Size: 0x10

    struct fxRenderParmParms_t
    {
        // renderparm decl
        idDeclRenderParm* declRenderParm; // Offset: 0x0

        // parm type to use
        fxParmType_t parmType; // Offset: 0x8

        // color to use
        idColor color; // Offset: 0xC

        // vec4 to use
        idVec4 vec4; // Offset: 0x1C

        // image to use
        idImage* image; // Offset: 0x30

        // forces the color value set when the action is stopped
        bool forceValueWhenStopped; // Offset: 0x38

        // if true, then also apply renderparm to models from FX_MODEL actions
        bool applyToFXModels; // Offset: 0x39

    }; // Size: 0x40

    struct fxBlendedOpacityParms_t
    {
        // enable blended opacity
        bool enable; // Offset: 0x0

    }; // Size: 0x1

    struct fxEnvOverrideParms_t
    {
        // environment decl
        idDeclEnv* declEnv; // Offset: 0x0

    }; // Size: 0x8

    struct fxEnvChangeParms_t
    {
        // Render parameters
        idStaticList < idFXRenderParm , 16 , false , TAG_IDLIST > envRenderParm; // Offset: 0x0

    }; // Size: 0x198

    struct fxFlareParms_t
    {
        // local space flare position {{ units = m }}
        idVec3 position; // Offset: 0x0

        // flare decl
        idDeclFlare* declFlare; // Offset: 0x10

        // autosprite the occlusion quad
        bool isAutosprited; // Offset: 0x18

    }; // Size: 0x20

    struct fxBlurRadial2Parms_t
    {
        // peak-blur radius {{ units = m }}
        float peakRadius; // Offset: 0x0

        // slope of blur fade
        float fadeSlope; // Offset: 0x4

    }; // Size: 0x8

    struct fxBlurGaussianParms_t
    {
        // scale value of gaussian blur vignette curve
        float curveScale; // Offset: 0x0

        // power value of gaussian blur vignette curve
        float curvePower; // Offset: 0x4

    }; // Size: 0x8

    struct fxDepthOfFieldParms_t
    {
        // near dof distance {{ units = m }}
        float nearDepth; // Offset: 0x0

        // far dof distance {{ units = m }}
        float farDepth; // Offset: 0x4

        // focus of dof {{ units = m }}
        float focusDepth; // Offset: 0x8

    }; // Size: 0xC

    struct fxFOVParms_t
    {
        // fov table
        idDeclTable* fovTable; // Offset: 0x0

        // if true, the last lerp of the fovTable will be to the user's old FOV value.
        bool restorePreviousFOV; // Offset: 0x8

    }; // Size: 0x10

    struct fxRibbon2Parms_t
    {
        // ribbon decl
        idDeclRibbon2* declRibbon; // Offset: 0x0

        // adjust ribbon spawn speed
        float speedMultiplier; // Offset: 0x8

        // adjust ribbon spawn speed over time
        idDeclTable* speedOverTime; // Offset: 0x10

        // adjust ribbon width
        float widthMultiplier; // Offset: 0x18

        // adjust ribbon width over time
        idDeclTable* widthOverTime; // Offset: 0x20

        // adjust ribbon opacity
        float alphaMultiplier; // Offset: 0x28

        // adjust ribbon opacity over time
        idDeclTable* alphaOverTime; // Offset: 0x30

        // use world (ribbon emitter position change/frametime) or tag (fxDecl tag) velocity when spawning trails
        bool useWorldVelocity; // Offset: 0x38

        // inherit velocity with this multiplier
        float inheritVelocity; // Offset: 0x3C

        // control velocity inheritance over time
        idDeclTable* inheritVelocityOverTime; // Offset: 0x40

        // clamp inherited speed (0 to uncap)
        float inheritSpeedCap; // Offset: 0x48

    }; // Size: 0x50

    struct fxHurtTriggerParms_t
    {
        // entitydef for trigger
        idDeclEntityDef* triggerDef; // Offset: 0x0

        // decl for damage to override existing
        idDeclDamage* damageDecl; // Offset: 0x8

        // Duration between emissions in MS when emitting triggers (-1 emits a single trigger)
        idTypesafeTime < int , millisecondUnique_t , 1000 > periodMS; // Offset: 0x10

        // how long each trigger will last, -1 implies cycling when period is finished
        idTypesafeTime < int , millisecondUnique_t , 1000 > triggerDurationMS; // Offset: 0x14

        // World velocity for the trigger {{ units = m / s }}
        idVec3 velocity; // Offset: 0x18

        // World gravity for the trigger {{ units = m / ( s * s ) }}
        idVec3 gravity; // Offset: 0x24

        // Scales the size in the trigger def {{ units = m }}
        idVec3 startScale; // Offset: 0x30

        // Scales the size in the trigger def {{ units = m }}
        idVec3 endScale; // Offset: 0x3C

        // Trace to the nearest solid, makes the trigger stop at walls and such
        bool traceToSolid; // Offset: 0x48

        // Can this trigger hurt demonplayers
        bool demonplayerCanActivate; // Offset: 0x49

    }; // Size: 0x50

    struct fxDestructibleParms_t
    {
        // destructible to spawn
        idDeclDestructible* destructible; // Offset: 0x0

    }; // Size: 0x8

    struct fxScreenFlashParms_t
    {
        // how much exposure to start with before fading
        float exposure; // Offset: 0x0

    }; // Size: 0x4

    struct fxScreenOverlayParms_t
    {
        // 0 for backmost layer, NUM_SCREEN_OVERLAY_LAYERS - 1 for frontmost layer
        int layer; // Offset: 0x0

        // Overlay material, uses $overlayColorMap and $overlayFlowMap.
        idMaterial2* overlayMaterial; // Offset: 0x8

        // Overlay tint
        idColor tintColor; // Offset: 0x10

        // Additional color scale
        float colorScale; // Offset: 0x20

        // Tiling factors for color map
        idVec2 colorMapTiling; // Offset: 0x24

        // Optional table to apply to tintColor.w
        idDeclTable* alphaTable; // Offset: 0x30

        // Period of alpha table (ms)
        idTypesafeTime < int , millisecondUnique_t , 1000 > alphaTablePeriod; // Offset: 0x38

        // Scale factor applied flowmap vectors
        float flowMapScale; // Offset: 0x3C

        // Period for flowmap cycle (ms).
        idTypesafeTime < int , millisecondUnique_t , 1000 > flowPeriod; // Offset: 0x40

        // Mask vignette curve scale
        float curveScale; // Offset: 0x44

        // Mask vignette curve power
        float curvePower; // Offset: 0x48

        // False for alpha-blend, true for additive
        bool blendAdditive; // Offset: 0x4C

        // If true, color map red channel is used for alpha, and tintColor is uses for color.
        bool useColorMapAsAlphaOnly; // Offset: 0x4D

        // If true, color map will be tiled in mirrored mode
        bool colorMapMirroredTiling; // Offset: 0x4E

        // If true, overlay will only be revealed by animated masks. Otherwise, masks have no effect on overlay.
        bool revealedByAnimatedMasks; // Offset: 0x4F

    }; // Size: 0x50

    struct fxScreenOverlayAnimatedMaskParms_t
    {
        // Tint color of mask
        idColor tintColor; // Offset: 0x0

        // Controls shape of the mask's propagating ring (max value 16.0)
        float maskShapePower; // Offset: 0x10

        // Controls speed of ring's propagation
        float animationSpeed; // Offset: 0x14

    }; // Size: 0x18

    struct fxScreenDistortionParms_t
    {
        // Distortion material, uses $distortionMap, $aberrationMap, and $distortionFlowMap
        idMaterial2* distortionMaterial; // Offset: 0x0

        // Scale factor applied to distortion map vectors
        float distortionMapScale; // Offset: 0x8

        // Scale factor applied to aberration map kernels
        float aberrationMapScale; // Offset: 0xC

        // Scale factor applied to flowmap vectors
        float flowMapScale; // Offset: 0x10

        // Period for flowmap cycle (ms).
        idTypesafeTime < int , millisecondUnique_t , 1000 > flowPeriod; // Offset: 0x14

        // Mask vignette curve scale
        float curveScale; // Offset: 0x18

        // Mask vignette curve power
        float curvePower; // Offset: 0x1C

    }; // Size: 0x20

    struct fxScreenVignetteParms_t
    {
        // Layer (0: back, 2: front)
        int layer; // Offset: 0x0

        // Scale of vignette
        float scale; // Offset: 0x4

        // Curve of vignette
        float curve; // Offset: 0x8

    }; // Size: 0xC

    struct fxLightScatteringVolumeParms_t
    {
        // Radius of volume
        idVec3 radius; // Offset: 0x0

        // Density starts fading out starting at this fraction of the radius
        float densityFalloff; // Offset: 0xC

    }; // Size: 0x10

    // ------------------------ Editing ------------------------ name of this action, used by editor only
    idAtomicString name; // Offset: 0x0

    // the group this action belongs to, used by editor only
    idAtomicString group; // Offset: 0x8

    // used to mark actions for easier breakpoint management during debugging
    bool debug; // Offset: 0x10

    // if false, don't use this action
    bool enabled; // Offset: 0x11

    // ------------------------ System Specific Parms ------------------------ type of this action
    fxActionType_t type; // Offset: 0x14

    // system duration, in MS
    idTypesafeTime < int , millisecondUnique_t , 1000 > duration; // Offset: 0x18

    // system delay Min, in MS
    idTypesafeTime < int , millisecondUnique_t , 1000 > delayMin; // Offset: 0x1C

    // system delay Max, in MS
    idTypesafeTime < int , millisecondUnique_t , 1000 > delayMax; // Offset: 0x20

    // if true, restart the system once it's completed
    bool restart; // Offset: 0x24

    // ignore duration, loop until stop condition met
    bool looping; // Offset: 0x25

    // if true, action can be triggered again before it finishes
    bool allowRestartBeforeEnd; // Offset: 0x26

    // fade in duration
    idTypesafeTime < int , millisecondUnique_t , 1000 > fadeInTime; // Offset: 0x28

    // fade out duration
    idTypesafeTime < int , millisecondUnique_t , 1000 > fadeOutTime; // Offset: 0x2C

    // start fading at this distance {{ units = m }} *** MUST BE NON-ZERO FOR FADE / DISTANCE TO WORK!!! *** So, 0.00001 or something to start at the fx position.
    float fadeStartDistance; // Offset: 0x30

    // only players views within this distance will be effected (distance of -1 means always in range). Additionally, any effects which require distance fading will be fully faded at this distance {{ units = m }}
    float distance; // Offset: 0x34

    // size scale of the model or flare occlusion quad
    float size; // Offset: 0x38

    // used instead of 'size' if set
    idDeclTable* sizeTable; // Offset: 0x40

    // extents of action bounds {{ units = m }}
    idVec3 extents; // Offset: 0x48

    // color to apply to this action (modulate)
    idVec4 color; // Offset: 0x54

    // if true, noshadows on lights/rendermodels
    bool noshadows; // Offset: 0x64

    // hide this action if the owning entity is considered 'invisible'
    bool hideWhenInvisible; // Offset: 0x65

    // specifies another action to fire from within this action
    idAtomicString fire; // Offset: 0x68

    // ------------------------ Tag Usage Parms ------------------------ specifies how multiple tags are supposed to be handled
    fxMultiTagUseType_t multiTagUseType; // Offset: 0x70

    // tag(s) to bind this action to
    idList < idAtomicString , TAG_FX , false > tagNames; // Offset: 0x78

    // ------------------------ Condition Parms ------------------------ only play this action if the start condition(s) is met
    idList < fxCondition_t , TAG_FX , false > startCondition; // Offset: 0x90

    // only stop this action if the stop condition(s) is met
    idList < fxCondition_t , TAG_FX , false > stopCondition; // Offset: 0xA8

    // store game-specific additional condition(s)
    idList < fxExtraCondition_t , TAG_FX , false > extraCondition; // Offset: 0xC0

    // while this is active, stop active FX and do not start new FX that have this as a startCondition
    idList < fxCondition_t , TAG_FX , false > suppressCondition; // Offset: 0xD8

    // while this is active, stop active FX and do not start new FX that have this as an extraCondition
    idList < fxExtraCondition_t , TAG_FX , false > suppressExtraCondition; // Offset: 0xF0

    // ------------------------ Position Parms ------------------------ specifies how the origin should be calculated for this action each frame
    fxOriginType_t originType; // Offset: 0x108

    // offset to apply to origin {{ units = m }}
    idVec3 offset; // Offset: 0x10C

    // offset table to apply to origin X position
    idDeclTable* offsetTableX; // Offset: 0x118

    // offset table to apply to origin Y position
    idDeclTable* offsetTableY; // Offset: 0x120

    // offset table to apply to origin Z position
    idDeclTable* offsetTableZ; // Offset: 0x128

    // offset applied in local space
    bool localOffset; // Offset: 0x130

    // apply the entity scale to the offset
    bool scaleOffset; // Offset: 0x131

    // ------------------------ Orientation Parms ------------------------ specifies how the rotation matrix should be calculated for this action each frame
    fxRotationType_t rotationType; // Offset: 0x134

    // local space rotation offset to apply to rotation matrix (pitch, yaw, roll)
    idAngles rotOffsetAngles; // Offset: 0x138

    // system derived/cached, put here to avoid a recurring cache miss
    idMat3 rotOffsetCached; // Offset: 0x144

    // rotation angles to use when rotationType == RANDOM_ANGLES [min,max] (in degrees)
    idVec2 rndRotX; // Offset: 0x168

    // rotation angles to use when rotationType == RANDOM_ANGLES [min,max] (in degrees)
    idVec2 rndRotY; // Offset: 0x170

    // rotation angles to use when rotationType == RANDOM_ANGLES [min,max] (in degrees)
    idVec2 rndRotZ; // Offset: 0x178

    // explicit angles to use when rotationType == EXPLICIT_ANGLES (pitch, yaw, roll)
    idAngles explicitAngles; // Offset: 0x180

    // rotation table to use when rotationType == FX_ROT_EXPLICIT_TABLES
    idDeclTable* rotateTablePitch; // Offset: 0x190

    // rotation table to use when rotationType == FX_ROT_EXPLICIT_TABLES
    idDeclTable* rotateTableYaw; // Offset: 0x198

    // rotation table to use when rotationType == FX_ROT_EXPLICIT_TABLES
    idDeclTable* rotateTableRoll; // Offset: 0x1A0

    // ------------------------ Custom render features ------------------------ custom renderParm - passes down current customTable[N] values
    idDeclRenderParm* customRenderParm; // Offset: 0x1A8

    // custom table for X value fed to customRenderParm
    idDeclTable* customTable1; // Offset: 0x1B0

    // custom table for Y value fed to customRenderParm
    idDeclTable* customTable2; // Offset: 0x1B8

    // ------------------------ FX_LIGHT  TODO: Add light shadow functionality - muzzle flash lights had this enabled by default ------------------------ FX_LIGHT parms
    idFXSingleAction::fxLightParms_t lightParms; // Offset: 0x1C0

    // ------------------------ FX_PARTICLE ------------------------ FX_PARTICLE parms
    idFXSingleAction::fxParticleParms_t particleParms; // Offset: 0x208

    // ------------------------ FX_DECAL ------------------------ FX_DECAL parms
    idFXSingleAction::fxDecalParms_t decalParms; // Offset: 0x268

    // ------------------------ FX_MODEL ------------------------ FX_MODEL parms
    idFXSingleAction::fxModelParms_t modelParms; // Offset: 0x298

    // ------------------------ FX_SOUND ------------------------ FX_SOUND parms
    idFXSingleAction::fxSoundParms_t soundParms; // Offset: 0x2B0

    // ------------------------ FX_SCREEN_SHAKE ------------------------ FX_SCREEN_SHAKE parms
    idFXSingleAction::fxScreenShakeParms_t screenShakeParms; // Offset: 0x2C8

    // ------------------------ FX_CONTROLLER_SHAKE ------------------------ FX_CONTROLLER_SHAKE parms
    idFXSingleAction::fxControllerShakeParms_t controllerShakeParms; // Offset: 0x2F8

    // ------------------------ FX_RENDERPARM ------------------------ FX_RENDERPARM parms
    idFXSingleAction::fxRenderParmParms_t renderParmParms; // Offset: 0x308

    // ------------------------ FX_BLENDED_OPACITY ------------------------
    idFXSingleAction::fxBlendedOpacityParms_t blendedOpacityParms; // Offset: 0x348

    // ------------------------ FX_ENV_OVERRIDE ------------------------ FX_ENV_OVERRIDE parms
    idFXSingleAction::fxEnvOverrideParms_t envOverrideParms; // Offset: 0x350

    // FX_ENV_CHANGE parms
    idFXSingleAction::fxEnvChangeParms_t envChangeParms; // Offset: 0x358

    // ------------------------ FX_FLARE ------------------------ FX_FLARE parms
    idFXSingleAction::fxFlareParms_t flareParms; // Offset: 0x4F0

    // ------------------------ FX_BLUR_RADIAL ------------------------ FX_BLUR_RADIAL parms
    idFXSingleAction::fxBlurRadial2Parms_t blurRadial2Parms; // Offset: 0x510

    // ------------------------ FX_BLUR_GAUSSIAN ------------------------ FX_BLUR_GAUSSIAN parms
    idFXSingleAction::fxBlurGaussianParms_t blurGaussianParms; // Offset: 0x518

    // ------------------------ FX_DEPTH_OF_FIELD ------------------------ FX_DEPTH_OF_FIELD parms
    idFXSingleAction::fxDepthOfFieldParms_t depthOfFieldParms; // Offset: 0x520

    // ------------------------ FX_FOV ------------------------
    idFXSingleAction::fxFOVParms_t fovParms; // Offset: 0x530

    // ------------------------ FX_RIBBON_2 ------------------------ FX_RIBBON_2 parms
    idFXSingleAction::fxRibbon2Parms_t ribbon2Parms; // Offset: 0x540

    // ------------------------ FX_HURT_TRIGGER ------------------------ FX_HURT_TRIGGER parms
    idFXSingleAction::fxHurtTriggerParms_t hurtTriggerParms; // Offset: 0x590

    // ------------------------ FX_DESTRUCTIBLE ------------------------ FX_DESTRUCTIBLE parms
    idFXSingleAction::fxDestructibleParms_t destructibleParms; // Offset: 0x5E0

    // ------------------------ FX_SCREEN_FLASH ------------------------ FX_SCREEN_FLASH parms
    idFXSingleAction::fxScreenFlashParms_t screenFlashParms; // Offset: 0x5E8

    // ------------------------ FX_SCREEN_OVERLAY ------------------------ FX_SCREEN_OVERLAY parms
    idFXSingleAction::fxScreenOverlayParms_t screenOverlayParms; // Offset: 0x5F0

    // ------------------------ FX_SCREEN_OVERLAY_ANIMATED_MASK ------------------------ FX_SCREEN_OVERLAY_ANIMATED_MASK parms
    idFXSingleAction::fxScreenOverlayAnimatedMaskParms_t screenOverlayAnimatedMaskParms; // Offset: 0x640

    // ------------------------ FX_SCREEN_DISTORTION ------------------------ FX_SCREEN_DISTORTION parms
    idFXSingleAction::fxScreenDistortionParms_t screenDistortionParms; // Offset: 0x658

    // ------------------------ FX_SCREEN_VIGNETTE ------------------------ FX_SCREEN_VIGNETTE parms
    idFXSingleAction::fxScreenVignetteParms_t screenVignetteParms; // Offset: 0x678

    // ------------------------ FX_LIGHT_SCATTERING_VOLUME ------------------------ fxLightScatteringVolumeParms_t parms
    idFXSingleAction::fxLightScatteringVolumeParms_t lightScatteringVolumeParms; // Offset: 0x684

    // ------------------------ system derived / cached ------------------------
    idMat3 axis; // Offset: 0x694

    // this event should not be written out, it is implicitly generated
    bool implicit; // Offset: 0x6B8

    // this event is "fired" by another event
    bool triggered; // Offset: 0x6B9

}; // Size: 0x6C0
