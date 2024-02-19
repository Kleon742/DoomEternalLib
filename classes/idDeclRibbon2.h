struct idDeclRibbon2 : idDeclTypeInfo
{
    enum ribbonType_t : int
    {
        RIBBON_TRACER = 0,
        RIBBON_TRAIL = 1,
        RIBBON_DECAL = 2
    };

    struct face_t
    {
        // whether this face should be visible or not
        bool visible; // Offset: 0x0

        // whether uvs should range from 0 to 1 across this face or not.
        bool uniqueTextureMapping; // Offset: 0x1

        // whether this face should perform its own texcoord update or not.
        bool performOwnUVUpdate; // Offset: 0x2

        // texture settings for this face ( ignored if useRibbonTextureSettings is set )
        ribbonTextureSettings_t texture; // Offset: 0x4

        // material applied to the face. if not specified uses ribbon material
        idMaterial2* material; // Offset: 0x30

    }; // Size: 0x38

    struct helix_t
    {
        // Adjusts the frequency of the helix
        float rotationScale; // Offset: 0x0

        // Adjusts how big the circles are {{ units = m }}
        float radius; // Offset: 0x4

        // Adjusts how fast the nodes fly out from the circles {{ units = 1 / s }}
        float velocity; // Offset: 0x8

        // Adjusts the frequency of the distortion
        idVec2 distortion0; // Offset: 0xC

        // Adjusts the amplitude of the distortion {{ units = m }}
        idVec2 distortion1; // Offset: 0x14

        // Adjust the offset of the wave to create helix patterns with multiple ribbons {{ units = radians }}
        float waveOffset; // Offset: 0x1C

        // check to use ribbon length to calculate helix instea of time
        bool useLength; // Offset: 0x20

    }; // Size: 0x24

    struct ribbonSegment_t
    {
        // color when the ribbon segment is spawned
        idColor colorOnSpawn; // Offset: 0x0

        // color when the ribbon segment is killed
        idColor colorOnDeath; // Offset: 0x10

        // range of widths when the ribbon segment is spawned
        interval_t < float > widthOnSpawn; // Offset: 0x20

        // range of widths when the ribbon segment is killed
        interval_t < float > widthOnDeath; // Offset: 0x28

    }; // Size: 0x30

    struct tracerInfo_t
    {
        // the end point of a tracer ribbon
        idDeclRibbon2::ribbonSegment_t tracerEnd; // Offset: 0x0

        // how long to make segments of the tracer (m)
        float tracerSegmentLength; // Offset: 0x30

        // cap the tracer length at this distance, 0 = unlimited (m)
        interval_t < float > tracerMaxLengthRange; // Offset: 0x34

        // maximum and minimum number of segments to use (0 = not constrained)
        interval_t < int > tracerSegmentCount; // Offset: 0x3C

    }; // Size: 0x44

    struct trailInfo_t
    {
        // distance the spawn point travels before making new trail segments (m, 0 = never spawn on traveled distance)
        float trailSpawnDistance; // Offset: 0x0

        // if set to a value greater than zero, the spawn distance will get interpolated to this value based on distance to camera
        float trailSpawnDistanceFar; // Offset: 0x4

        // time between spawning new trail segments (s, 0 = never spawn based on elapsed time)
        float trailSpawnPeriod; // Offset: 0x8

        // if set to a value greater than zero, the spawn period will get interpolated to this value based on distance to camera
        float trailSpawnPeriodFar; // Offset: 0xC

        // average tangents of adjacent trail segments, may give smoother results with noise
        bool trailSmoothed; // Offset: 0x10

        // offset when spawning trails
        idVec3 trailStartOffset; // Offset: 0x14

        // max angle between segments ( 0 = don't take angle into account ) {{ units = degrees }}
        float maxAngle; // Offset: 0x20

        // if set to a value greater than zero, the max segment angle will get interpolated to this value based on distance to camera
        float maxAngleFar; // Offset: 0x24

        // distance to camera at which the 'far' versions of spawn distance, period, angle get fully applied.
        float farDistance; // Offset: 0x28

    }; // Size: 0x2C

    // material applied to the ribbon (particle materials should be used)
    idMaterial2* material; // Offset: 0x88

    // how long ribbons last for (s)
    float lifespan; // Offset: 0x90

    // slow the velocity of segments over time
    float drag; // Offset: 0x94

    // accelerate ribbons over time (for example gravity, world space)
    idVec3 acceleration; // Offset: 0x98

    // accelerate ribbons over time (local space).
    idVec3 localAcceleration; // Offset: 0xA4

    // starting velocity for ribbon segments (local space).
    interval_t < idVec3 > initialVelocity; // Offset: 0xB0

    // speed of turbulence applied after spawn (global space)
    idVec3 turbulenceMagnitude; // Offset: 0xC8

    // size of turbulent features
    float turbulenceScale; // Offset: 0xD4

    // determines if turbulence gets applied to spawn position or not
    bool turbulenceOnSpawnPos; // Offset: 0xD8

    // Adjusts how fast the nodes fly in the turbulence direction
    float turbulenceSpeedScale; // Offset: 0xDC

    // amplitude of noise (local space)
    idVec3 noiseAmplitude; // Offset: 0xE0

    // frequency of noise
    float noiseFrequency; // Offset: 0xEC

    // controls at which distance amplitude will get fully applied
    float noiseFadeInDist; // Offset: 0xF0

    // speed at which noise moves along length of ribbon
    float noiseAnimSpeed; // Offset: 0xF4

    // type of offset to apply to the noise
    ribbonNoiseOffsetType_t noiseOffsetType; // Offset: 0xF8

    // todo: replace individual texture settings with ribbonTextureSettings_t struct and update existing ribbon assets. how to generate uv coords
    ribbonTextureMode_t textureMode; // Offset: 0xFC

    // size of texture along ribbon (m)
    float textureTileLength; // Offset: 0x100

    // animation of texture coordinate along ribbon (texture units/s)
    float texturePanSpeed; // Offset: 0x104

    // offset the v texture coordinate by this amount per second
    float textureVOffsetOverTime; // Offset: 0x108

    // offset the v texture coordinate by this amount per meter
    float textureVOffsetOverDistance; // Offset: 0x10C

    // texture animation parms
    ribbonTextureAnimation_t textureAnimation; // Offset: 0x110

    // picks a random value between the specified min and max values and uses that as texture offset for the whole ribbon.
    interval_t < float > textureOffset; // Offset: 0x120

    // per face settings
    idDeclRibbon2::face_t faces[8]; // Offset: 0x128

    // constrain the ribbon between the specified start and end points.
    bool constrainToEndPoint; // Offset: 0x2E8

    // when adding segments follow curved path towards spawn position instead of straight line
    bool smoothPath; // Offset: 0x2E9

    // tag particles used for loot, so we can post process their colors
    bool ribbonLootParticle; // Offset: 0x2EA

    // 0 = flat, 1 = tube
    float curvature; // Offset: 0x2EC

    // 0 = flat, 1 = tube, affects generated vertices
    float curvatureGeo; // Offset: 0x2F0

    // proportion of life to spend fading in
    float fadeInFraction; // Offset: 0x2F4

    // proportion of life to spend fading out
    float fadeOutFraction; // Offset: 0x2F8

    // proportion of length to fade in
    float fadeInFractionLength; // Offset: 0x2FC

    // proportion of length to fade out
    float fadeOutFractionLength; // Offset: 0x300

    // opacity curve
    idParticleScalar opacity; // Offset: 0x308

    // width curve
    idParticleScalar width; // Offset: 0x328

    // how to orient the ribbon segments?
    ribbonOrientType_t orientation; // Offset: 0x348

    // fade bias to apply when viewing ribbon edge on
    float viewFade; // Offset: 0x34C

    // alpha tweak for materials which use the soft particle rendering
    float softParticleAlphaScale; // Offset: 0x350

    // controls the distance to camera at which the ribbon should be fully faded in
    float cameraFadeInDistance; // Offset: 0x354

    // controls the distance to camera at which the ribbon should start fading out
    float cameraFadeOutStartDistance; // Offset: 0x358

    // controls the distance to camera at which the ribbon should be fully faded out
    float cameraFadeOutEndDistance; // Offset: 0x35C

    // Helix parameters
    idDeclRibbon2::helix_t helix; // Offset: 0x360

    // shape of the ribbon
    ribbonShape_t shape; // Offset: 0x384

    // offset each individual face of cylinder by this amount {{ units = m }}
    float faceOffset; // Offset: 0x388

    // how fast to rotate each segment around its forward axis using segment lifetime {{ units = degrees / second }}
    float segmentRotationSpeed; // Offset: 0x38C

    // how fast to rotate each segment around its forward axis using ribbon lifetime {{ units = degrees / second }}
    float ribbonRotationSpeed; // Offset: 0x390

    // inital amount that each segment should be rotated along its forward axis {{ units = degrees }}
    float initialRotation; // Offset: 0x394

    // this is the default for trail ribbons and the start point for tracer ribbons
    idDeclRibbon2::ribbonSegment_t ribbonSegment; // Offset: 0x398

    // is this a tracer-like ribbon spawned instantaneously or something created over a number of frames?
    idDeclRibbon2::ribbonType_t ribbonType; // Offset: 0x3C8

    // properties specific to tracer-like ribbons
    idDeclRibbon2::tracerInfo_t tracerInfo; // Offset: 0x3CC

    // properties specific to trail-like ribbons
    idDeclRibbon2::trailInfo_t trailInfo; // Offset: 0x410

    idList < unsigned int , TAG_PARTICLE , false > materialLocks; // Offset: 0x440

}; // Size: 0x458
