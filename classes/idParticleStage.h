struct idParticleStage
{
    enum stageType_t : int
    {
        STAGE_TYPE_CPU = 0,
        STAGE_TYPE_GPU = 1,
        STAGE_TYPE_NEW = 2
    };

    struct prtStageProperties_t
    {
        // generated file for specified static model (TODO: Does the static lwo name need to be stored?)
        idStaticParticleModelData* staticData; // Offset: 0x0

        // particle is a light source
        bool isLight; // Offset: 0x8

        // particle is a light that affects the particles only
        lightParticleEffect_t particleLightEffect; // Offset: 0xC

        // a scale that affects the amount of light particles receive from this light
        float particleLightScale; // Offset: 0x10

        // particle material
        idMaterial2* material; // Offset: 0x18

        // total num particles, some may be invisible at a given time
        short totalParticles; // Offset: 0x20

        // run for a set number of cycles or oneshot (1-cycle)
        short cycles; // Offset: 0x22

        // specific diversity [0,MAX_RND]
        int diversity; // Offset: 0x24

        // total seconds of life for a particle
        idParticleParm particleLife; // Offset: 0x28

        // time offset from system start for the first particle to spawn
        float timeOffset; // Offset: 0x40

        // time after particleLife before respawning
        idParticleParm deadTime; // Offset: 0x44

        // 0.0 = all come out at first instant, 1.0 = evenly spaced over cycle time
        float spawnBunching; // Offset: 0x5C

        // particle lifetime override for the emission rate
        float emissionTime; // Offset: 0x60

        // texcoord flipping mode on S
        prtTextureFlipMode_t textureFlipS; // Offset: 0x64

        // texcoord flipping mode on T
        prtTextureFlipMode_t textureFlipT; // Offset: 0x68

        // texcoord rotation
        prtTextureRotateMode_t textureRotate; // Offset: 0x6C

        // how much wind will effect the particle, 0=none, 6=smoke, 4=feathers, 1=flies
        idParticleParm windBias; // Offset: 0x70

        // sort based on age: newest-to-oldest, oldest-to-newest
        prtSortType_t sortType; // Offset: 0x88

        // user tweak to fix poorly calculated bounds {{ units = m }}
        float boundsExpansion; // Offset: 0x8C

        // if true, apply a new random seed for each cycle of a looping particle
        bool randomOnCycle; // Offset: 0x90

        // move the particles towards or away from the camera (for fire overlapping on smoke) {{ units = m }}
        float cameraOffset; // Offset: 0x94

        // if true, draw particles using first person projection matrix
        bool drawNear; // Offset: 0x98

        // defines particle curvature ( 0 - flat quad, 1 - spherical )
        float curvature; // Offset: 0x9C

    }; // Size: 0xA0

    struct prtLight_t
    {
        // does the stage have a particle light
        bool isLight; // Offset: 0x0

        // particle light intensity
        idParticleParm intensity; // Offset: 0x4

    }; // Size: 0x1C

    struct prtRendering_t
    {
        // render mode
        prtRenderModeOld_t renderMode; // Offset: 0x0

        // render with gun fov
        bool gunParticle; // Offset: 0x4

        // render with equipment launcher fov
        bool equipmentLauncherParticle; // Offset: 0x5

        // tag particles used for loot, so we can post process their colors
        bool lootParticle; // Offset: 0x6

        // particle fading begins here
        float nearFadeBeginDistance; // Offset: 0x8

        // particle is completely vanished at this distance
        float nearFadeEndDistance; // Offset: 0xC

        // depth offset scale ( scales depth map approximation for particle )
        float depthOffsetScale; // Offset: 0x10

        // specular contribution
        float specular; // Offset: 0x14

        // specular smoothness
        float smoothness; // Offset: 0x18

        // liquid clip threshold
        float liquidClipThreshold; // Offset: 0x1C

        // emissive multiplier
        float emissiveMultiplier; // Offset: 0x20

        // emissive multiplier
        float emissiveMaskMultiplier; // Offset: 0x24

        // emissive color
        idColor emissiveMaskColor; // Offset: 0x28

        // explosion gradient color 2
        idColor explosionGradient2; // Offset: 0x38

        // explosion gradient color 3
        idColor explosionGradient3; // Offset: 0x48

    }; // Size: 0x58

    struct prtDistribution_t
    {
        // rect, cylinder, sphere, surface rect, surface cylinder, surface spheres
        prtDistributionType_t type; // Offset: 0x0

        // distribution volume size for each of XYZ {{ units = m }}
        idParticleParm size[3]; // Offset: 0x4

        // apply random distribution ( defaults to true )
        bool random; // Offset: 0x4C

    }; // Size: 0x50

    struct prtOrientation_t
    {
        // view, trail, aimed, or axis fixed
        prtOrientationType_t type; // Offset: 0x0

        // trail only - number of segments
        short numTrails; // Offset: 0x4

        // trail and aimed - length of segment {{ units = m }}
        float segmentLength; // Offset: 0x8

        // aimed only - fade bias to apply when viewing particle edge on
        float aimedViewFade; // Offset: 0xC

        // aimed only - if true, particles will orient only to the velocity vector
        bool orientToVelOnly; // Offset: 0x10

        // aimed only - if true, account for emitter velocity in addition to particle local velocity
        bool orientToWorldVel; // Offset: 0x11

        // view only - orient to the viewer origin instead of viewer plane to preserve lighting
        bool orientToPoint; // Offset: 0x12

        // apply orientation in world space
        bool world; // Offset: 0x13

        // view aligned particles only - preserve the original aspect ratio
        bool preserveAspectRatio; // Offset: 0x14

    }; // Size: 0x18

    struct prtDirection_t
    {
        // cone, outward, speed
        prtDirectionType_t type; // Offset: 0x0

        // upward bias / cone angle
        float parms[1]; // Offset: 0x4

        // apply direction in world space
        bool world; // Offset: 0x8

    }; // Size: 0xC

    struct prtSpeed_t
    {
        // particle speed {{ units = m / s }}
        idParticleParm speed[3]; // Offset: 0x0

    }; // Size: 0x48

    struct prtDistanceScale_t
    {
        // near distance {{ units = m }}
        float nearDist; // Offset: 0x0

        // far distance {{ units = m }}
        float farDist; // Offset: 0x4

        // near scale factor
        float nearScale; // Offset: 0x8

        // far scale factor
        float farScale; // Offset: 0xC

    }; // Size: 0x10

    struct prtEmissionScale_t
    {
        // near distance {{ units = m }}
        float nearDist; // Offset: 0x0

        // far distance {{ units = m }}
        float farDist; // Offset: 0x4

        // near emission scale factor
        float nearEmissionScale; // Offset: 0x8

        // far emission scale factor
        float farEmissionScale; // Offset: 0xC

    }; // Size: 0x10

    struct prtAcceleration_t
    {
        // particle acceleration {{ units = m / ( s * s ) }}
        idParticleParm acceleration[3]; // Offset: 0x0

        // apply acceleration in world space
        bool world; // Offset: 0x48

    }; // Size: 0x4C

    struct prtGravity_t
    {
        // can be negative to float up {{ units = m / ( s * s ) }}
        idParticleParm gravity; // Offset: 0x0

        // apply gravity in world space
        bool world; // Offset: 0x18

    }; // Size: 0x1C

    struct prtFriction_t
    {
        // amount friction as pct for each of XYZ[0.0,1.0]
        idParticleParm friction[3]; // Offset: 0x0

    }; // Size: 0x48

    struct prtOffset_t
    {
        // offset from origin to spawn all particles, also applies to customPath {{units = m }}
        idParticleParm offset[3]; // Offset: 0x0

    }; // Size: 0x48

    struct prtSpawnLocation_t
    {
        // 'animated' offest from origin, specific to each particle, also applies to customPath {{ units = m }}
        idParticleParm spawnLocation[3]; // Offset: 0x0

    }; // Size: 0x48

    struct prtColorAttributes_t
    {
        // base stage particle color
        idParticleParm baseColor[4]; // Offset: 0x0

        // color gradient
        idParticleColorGradient color; // Offset: 0x60

        // particle fade color 0 0 0 0 for additive, or 1 1 1 0 for blended
        idColor fadeColor; // Offset: 0x90

        // fade in fraction [0.0, 1.0]
        float fadeInFraction; // Offset: 0xA0

        // fade out fraction [0.0, 1.0]
        float fadeOutFraction; // Offset: 0xA4

        // causes later index smokes to be more faded [0.0, 1.0]
        float fadeIndexFraction; // Offset: 0xA8

        // alpha tweak for materials which use the soft particle rendering
        float softParticleAlphaScale; // Offset: 0xAC

        // blend the entity color with white by this amount
        float entityColorBlendVal; // Offset: 0xB0

        // particle lights only
        float lightSpecularScale; // Offset: 0xB4

    }; // Size: 0xB8

    struct prtRotation_t
    {
        // particle rotation
        idParticleParm rotation[3]; // Offset: 0x0

        // if true, half of the particles will have negative rotation speeds
        bool allowRotDirOverride; // Offset: 0x48

    }; // Size: 0x4C

    struct prtEmitterSpaceVelocity_t
    {
        // 0.0 - 1.0: min point (in particle life cycle) that it will start moving away from it's local origin (0.0, start moving immediately. 0.5, locked to current origin until halfway through it's life cycle. etc..)
        float min; // Offset: 0x0

        // scale applied to movement derived from rotation (rotation only)
        float rotationScale; // Offset: 0x4

        // scale applied to overall forward/backward movement (translation and rotation)
        float fwdScale; // Offset: 0x8

        // scale applied to overall left/right movement (translation and rotation)
        float lfScale; // Offset: 0xC

        // scale applied to overall up/down movement (translation and rotation)
        float upScale; // Offset: 0x10

        // references the render view (player's view) for position and orientation data (rather than
        bool lockToView; // Offset: 0x14

    }; // Size: 0x18

    struct prtWorldSpaceEmission_t
    {
        // inherit from emitter's velocity when spawning
        bool inheritEmitterVelocity; // Offset: 0x0

        // blend factor to smoothly transition from emitter space (0.0) to world space (1.0) simulation
        idParticleParm blendFactor; // Offset: 0x4

    }; // Size: 0x1C

    struct prtInitialRotation_t
    {
        // initial rotation angle, in degrees
        idParticleParm initialAngle[3]; // Offset: 0x0

    }; // Size: 0x48

    struct prtPivot_t
    {
        // offset the rotation pivot on X,Y
        idVec2 pivotOffset; // Offset: 0x0

    }; // Size: 0x8

    struct prtSize_t
    {
        // 3 component size for static mesh, all other particle types use the first component {{ units = m }}
        idParticleParm size[3]; // Offset: 0x0

        // greater than 1 makes the T axis longer
        idParticleParm aspectRatio; // Offset: 0x48

    }; // Size: 0x60

    struct prtTexAnimation_t
    {
        // single cycle at rate, cycle at rate, single cycle
        prtAnimationType_t type; // Offset: 0x0

        // if > 1, subdivide the texture S axis
        unsigned short numColumns; // Offset: 0x4

        // if > 1, subdivide the texture T axis
        unsigned short numRows; // Offset: 0x6

        // frames per second
        idParticleParm rate; // Offset: 0x8

        // use an explicit start frame, if < 0, choose a start frame randomly
        short startFrame; // Offset: 0x20

        // when using an NxM particle atlas, pick a random row to play to increase diversity
        bool useRandomRow; // Offset: 0x22

        // use cross fading between frames
        bool useFrameBlending; // Offset: 0x23

    }; // Size: 0x24

    struct prtCustomPath_t
    {
        // use custom C code routines for determining the origin
        prtCustomPthType_t type; // Offset: 0x0

        // custom path parms
        idParticleParm parms[5]; // Offset: 0x4

    }; // Size: 0x7C

    struct prtGenericParms_t
    {
        // additional generic time based parm passed down to the renderprog for controlling various effects
        idParticleParm genericParm[4]; // Offset: 0x0

    }; // Size: 0x60

    struct prtLODParms_t
    {
        // size scale at highest LOD
        float sizeScale; // Offset: 0x0

        // amount to lerp total and scale between each LOD to next LOD
        float lerpAmount; // Offset: 0x4

        // LOD distance {{ units = m }}
        short radius; // Offset: 0x8

        // particle count at highest LOD
        short totalParticles; // Offset: 0xA

    }; // Size: 0xC

    struct prtStagePropertiesNEW_t
    {
        // particle material
        idMaterial2* material; // Offset: 0x0

        // generated file for specified static model (TODO: Does the static lwo name need to be stored?)
        idStaticParticleModelData* staticData; // Offset: 0x8

        // maximum number of active GPU-spawned particles per emitter
        int maxGpuSpawnedParticles; // Offset: 0x10

        // total seconds of life for a particle
        idParticleScalar lifeTime; // Offset: 0x18

        // let particle expire at the end of cycle
        bool expireAtEndOfCycle; // Offset: 0x38

        // run for a set number of cycles or oneshot (1-cycle)
        int cycles; // Offset: 0x3C

        // spawn mode
        prtSpawnMode_t spawnMode; // Offset: 0x40

        // spawn rate on the CPU (particles per second)
        idParticleScalar cpuSpawnRate; // Offset: 0x48

        // time after particleLife before respawning
        float deadTime; // Offset: 0x68

        // particle lifetime override for the emission rate
        float emissionTime; // Offset: 0x6C

        // time offset from system start for the first particle to spawn
        float timeOffset; // Offset: 0x70

        // depricated alignment - just for conversion
        int spriteAlignment; // Offset: 0x74

        // depricated space - just for conversion
        int simulationSpace; // Offset: 0x78

        // alignment
        prtAlignmentType_t alignment; // Offset: 0x7C

        // space
        prtSpaceType_t space; // Offset: 0x80

        // defines particle curvature ( 0 - flat quad, 1 - spherical )
        float curvature; // Offset: 0x84

        // emissive term ( 0 = only diffuse )
        float emissive; // Offset: 0x88

        // blend the entity color with white by this amount
        float entityColorBlendVal; // Offset: 0x8C

        // fixed bounds for this stage {{ units = m }}
        idVec3 bounds; // Offset: 0x90

        // procedural codepath
        bool parametric; // Offset: 0x9C

        // if enabled, game code will be able to provide a maximum distance to the emitter that will be stored per particle
        bool allowPerParticleMaxDistance; // Offset: 0x9D

    }; // Size: 0xA0

    struct prtRenderingNEW_t
    {
        // render mode
        prtRenderMode_t mode; // Offset: 0x0

        // draw particle in opque pass, not in transparent pass
        bool opaque; // Offset: 0x4

        // draw only onesided (useful for mesh particles)
        bool backfaceCulling; // Offset: 0x5

        // render with gun fov
        bool gunParticle; // Offset: 0x6

        // render with equipment launcher fov
        bool equipmentLauncherParticle; // Offset: 0x7

        // tag particles used for loot, so we can post process their colors
        bool lootParticle; // Offset: 0x8

        // alpha testing
        bool alphaTest; // Offset: 0x9

        // use gpu particle light atlas for more detailled lighting
        bool useLightAtlas; // Offset: 0xA

        // translucency approximation
        float translucencyScale; // Offset: 0xC

        // alpha tweak for materials which use the soft particle rendering
        float softParticleAlphaScale; // Offset: 0x10

        // particle fading begins here
        float nearFadeBeginDistance; // Offset: 0x14

        // particle is completely vanished at this distance
        float nearFadeEndDistance; // Offset: 0x18

        // particle far fading begins here
        float farFadeBeginDistance; // Offset: 0x1C

        // particle is completely vanished at this distance
        float farFadeEndDistance; // Offset: 0x20

        // minimum size required to be visible in raytraced reflection
        float minSizeForReflections; // Offset: 0x24

        // depth offset scale ( scales depth map approximation for particle )
        float depthOffsetScale; // Offset: 0x28

        // specular contribution
        float specular; // Offset: 0x2C

        // specular smoothness
        float smoothness; // Offset: 0x30

        // camera offset
        float cameraOffset; // Offset: 0x34

        // drives the opacity curve (0 - sqrt, 1 - linear)
        float alphaFade; // Offset: 0x38

        // used for liquid and explosion effects
        float emissiveMultiplier; // Offset: 0x3C

        // use emissive mask in material
        float emissiveMaskMultiplier; // Offset: 0x40

        // fade opacity and color based on angle
        float viewAngleFade; // Offset: 0x44

        // emissive mask mode
        prtEmissiveMaskMode_t emissiveMaskMode; // Offset: 0x48

        // color of emissive mask
        idColor emissiveMaskColor; // Offset: 0x4C

        // second color of emissive mask
        idColor emissiveMaskColor2; // Offset: 0x5C

    }; // Size: 0x6C

    struct prtSortingNEW_t
    {
        // sort particles in stage based on this parameter
        prtSortParameter_t sortParameter; // Offset: 0x0

        // reverse the order
        bool reverse; // Offset: 0x4

    }; // Size: 0x8

    struct prtOffsetNEW_t
    {
        // offset from origin to spawn all particles {{ units = m }}
        idParticleScalar offsetX; // Offset: 0x0

        // offset from origin to spawn all particles {{ units = m }}
        idParticleScalar offsetY; // Offset: 0x20

        // offset from origin to spawn all particles {{ units = m }}
        idParticleScalar offsetZ; // Offset: 0x40

    }; // Size: 0x60

    struct prtDistanceScaleNEW_t
    {
        // distance scale settings
        idList < prtDistanceScaleSetting_t , TAG_IDLIST , false > settings; // Offset: 0x0

    }; // Size: 0x18

    struct prtPivotNEW_t
    {
        // offset the rotation pivot on X,Y
        idVec2 pivotOffset; // Offset: 0x0

    }; // Size: 0x8

    struct prtSpawnDistributionNEW_t
    {
        // rect, cylinder, sphere, surface rect, surface cylinder, surface spheres
        prtDistributionTypeGPU_t type; // Offset: 0x0

        // distribution volume size for each of XYZ {{ units = m }}
        idParticleScalar size[3]; // Offset: 0x8

        // number of gridPoints in each dimension
        int gridPoints[3]; // Offset: 0x68

        // scale
        float velocityScale; // Offset: 0x74

        // ordered spawning on the grid
        bool ordered; // Offset: 0x78

        // even distribution
        bool evenDistribution; // Offset: 0x79

    }; // Size: 0x80

    struct prtSpawnBoxNEW_t
    {
        // extends of the box {{ units = m }}
        idVec3 dimensions; // Offset: 0x0

    }; // Size: 0xC

    struct prtSpawnSphereSurfaceNEW_t
    {
        // stretch factor in each dimension
        idVec3 stretch; // Offset: 0x0

        // initial velocity
        float velocityScale; // Offset: 0xC

        // even distribution
        bool evenDistribution; // Offset: 0x10

    }; // Size: 0x14

    struct prtSpawnSphereNEW_t
    {
        // stretch factor in each dimension {{ units = m }}
        idVec3 stretch; // Offset: 0x0

    }; // Size: 0xC

    struct prtSpawnGridNEW_t
    {
        // number of gridPoints in each dimension
        idVec3 gridPoints; // Offset: 0x0

        // grid spacing {{ units = m }}
        idVec3 gridSpacing; // Offset: 0xC

        // ordered spawning on the grid
        bool ordered; // Offset: 0x18

    }; // Size: 0x1C

    struct prtBeamNEW_t
    {
        // target
        prtBeamType_t beamType; // Offset: 0x0

        // use this parameter to scale along the beam
        particleFunctionOf_t functionOf; // Offset: 0x4

        // scale {{ units = m }}
        idParticleScalar displacementScale; // Offset: 0x8

    }; // Size: 0x28

    struct prtVelocityInheritNEW_t
    {
        // factor
        float factor; // Offset: 0x0

    }; // Size: 0x4

    struct prtVelocityConeNEW_t
    {
        // opening angle in degrees first axis
        idParticleScalar pitchAngle; // Offset: 0x0

        // opening angle in degrees second axis
        idParticleScalar jawAngle; // Offset: 0x20

        // speed {{ units = m / s }}
        idParticleScalar speed; // Offset: 0x40

    }; // Size: 0x60

    struct prtVelocitySphereNEW_t
    {
        // radius of the sphere {{ units = m }}
        idParticleScalar radius; // Offset: 0x0

    }; // Size: 0x20

    struct prtVelocityOffsetNEW_t
    {
        // offset velocity {{ units = m / s }}
        idParticleScalar offsetX; // Offset: 0x0

        // offset velocity {{ units = m / s }}
        idParticleScalar offsetY; // Offset: 0x20

        // offset velocity {{ units = m / s }}
        idParticleScalar offsetZ; // Offset: 0x40

    }; // Size: 0x60

    struct prtVortexGridNEW_t
    {
        // time evolution speed of the vortex grid
        float speed; // Offset: 0x0

        // scale of the vortices {{ units = 1 / m }}
        idParticleScalar scale; // Offset: 0x8

        // drag coefficient
        idParticleScalar drag; // Offset: 0x28

        // strength of the vortex velocity {{ units = m / s }}
        idParticleScalar factor; // Offset: 0x48

    }; // Size: 0x68

    struct prtVelocityFieldNEW_t
    {
        // uniform velocity of the field {{ units = m / s }}
        idVec3 velocity; // Offset: 0x0

        // drag coefficient
        idParticleScalar drag; // Offset: 0x10

    }; // Size: 0x30

    struct prtPlaneConstraintNEW_t
    {
        // enabled
        bool enabled; // Offset: 0x0

        // only enforces the constraint from one side of the plane
        bool oneSided; // Offset: 0x1

        // normal in emitter space
        idVec3 normal; // Offset: 0x4

    }; // Size: 0x10

    struct prtAttractorNEW_t
    {
        // type of attractor
        prtAttractorType_t type; // Offset: 0x0

        // factor for attraction force
        float factor; // Offset: 0x4

        // radius {{ units = m }}
        float radius; // Offset: 0x8

        // position or normal of attractor in emitter space {{ units = m }}
        idVec3 position; // Offset: 0xC

    }; // Size: 0x18

    struct prtAccelerationNEW_t
    {
        // uniform acceleration direction {{ units = m / ( s * s ) }}
        idVec3 acceleration; // Offset: 0x0

        // align with emitter orientation instead of world axis
        bool alignWithEmitter; // Offset: 0xC

    }; // Size: 0x10

    struct prtGravityNEW_t
    {
        // gravity acceleration {{ units = m / ( s * s ) }}
        float gravity; // Offset: 0x0

    }; // Size: 0x4

    struct prtColorNEW_t
    {
        // color
        idParticleColorGradient color; // Offset: 0x0

        // old initial color
        idVec4 initialColor; // Offset: 0x30

        // old final color;
        idVec4 finalColor; // Offset: 0x40

        // overbright
        idParticleScalar overbright; // Offset: 0x50

        // opacity
        idParticleScalar opacity; // Offset: 0x70

    }; // Size: 0x90

    struct prtWorldSpaceRotationNEW_t
    {
        // take emitter orientation into account
        bool useEmitterOrientation; // Offset: 0x0

        // initial orientation in Euler angles
        idParticleScalar initialAngleX; // Offset: 0x8

        // initial orientation in Euler angles
        idParticleScalar initialAngleY; // Offset: 0x28

        // initial orientation in Euler angles
        idParticleScalar initialAngleZ; // Offset: 0x48

        // rotation speed {{ units = m / s }}
        idVec3 rotationSpeed; // Offset: 0x68

    }; // Size: 0x78

    struct prtAxisRotationNEW_t
    {
        // rotation axis
        idVec3 axis; // Offset: 0x0

        // rotation angle around the axis
        idParticleScalar angle; // Offset: 0x10

        // rotation speed around the axis
        float rotationSpeed; // Offset: 0x30

    }; // Size: 0x38

    struct prtRotationNEW_t
    {
        // rotation type
        prtRotationType_t type; // Offset: 0x0

        // rotation axis or rotation speed for euler angles
        idVec3 axis; // Offset: 0x4

        // rotation angle around the axis
        idParticleScalar angle; // Offset: 0x10

        // rotation angle around the axis
        idParticleScalar pitch; // Offset: 0x30

        // rotation angle around the axis
        idParticleScalar yaw; // Offset: 0x50

        // rotation speed along axis
        float rotationSpeed; // Offset: 0x70

    }; // Size: 0x78

    struct prtSimulatedAngularMomentumNEW_t
    {
        // activate this feature
        bool simulateAngularMomentum; // Offset: 0x0

        // random initial rotation
        bool randomInitialOrientation; // Offset: 0x1

        // random initial speed
        float randomInitialSpeed; // Offset: 0x4

    }; // Size: 0x8

    struct prtViewSpaceRotationNEW_t
    {
        // initial orientation in Euler angles
        idParticleScalar initialAngle; // Offset: 0x0

        // rotation speed
        idParticleScalar rotationSpeed; // Offset: 0x20

    }; // Size: 0x40

    struct prtSizeNEW_t
    {
        // mode
        prtSizeMode_t mode; // Offset: 0x0

        // size {{ units = m }}
        idParticleScalar size; // Offset: 0x8

        // stretch
        idParticleScalar stretch; // Offset: 0x28

        // 3d size
        idParticleScalar size3D[3]; // Offset: 0x48

    }; // Size: 0xA8

    struct prtScreenSizeNEW_t
    {
        // minimal size in pixels on screen
        float minPixels; // Offset: 0x0

        // maximal size in pixels on screen
        float maxPixels; // Offset: 0x4

    }; // Size: 0x8

    struct prtTexAnimationNEW_t
    {
        // single cycle at rate, cycle at rate, single cycle
        prtAnimationType_t type; // Offset: 0x0

        // if > 1, subdivide the texture S axis
        unsigned short numColumns; // Offset: 0x4

        // if > 1, subdivide the texture T axis
        unsigned short numRows; // Offset: 0x6

        // frames per second as rate or absolute position for mode = curve
        idParticleScalar rate; // Offset: 0x8

        // use an explicit start frame, if < 0, choose a start frame randomly
        short startFrame; // Offset: 0x28

        // when using an NxM particle atlas, pick a random row to play to increase diversity
        bool useRandomRow; // Offset: 0x2A

        // use cross fading between frames
        bool useFrameBlending; // Offset: 0x2B

        // scale of the generated motion vector (1/fps with houdini)
        float motionVectorScale; // Offset: 0x2C

    }; // Size: 0x30

    struct prtVortexNEW_t
    {
        // axis
        idVec3 axis; // Offset: 0x0

        // falloff
        float falloff; // Offset: 0xC

        // velocity
        float velocity; // Offset: 0x10

        // drag
        float drag; // Offset: 0x14

    }; // Size: 0x18

    struct prtBrownianMotionNEW_t
    {
        // factor
        idParticleScalar factor; // Offset: 0x0

    }; // Size: 0x20

    struct prtCollisionNEW_t
    {
        // use collision detection in screen space
        prtCollisionMode_t collisionMode; // Offset: 0x0

        // collide with height map instead of screen space depth buffer
        bool collideWithHeightMap; // Offset: 0x4

        // minimum normalized lifetime or particle before it collides (0-1)
        float minimalLifeTime; // Offset: 0x8

        // depth offset
        float depthOffset; // Offset: 0xC

        // depth thickness
        float thickness; // Offset: 0x10

        // do react physically
        bool collisionResponse; // Offset: 0x14

        // elasticity
        float elasticity; // Offset: 0x18

        // restitution
        float restitution; // Offset: 0x1C

        // squeeze ampltitude
        float squeezeAmplitude; // Offset: 0x20

        // squeeze frequency
        float squeezeFrequency; // Offset: 0x24

        // squeeze amplitude decay
        float squeezeDecayTime; // Offset: 0x28

        // squeeze time
        float squeezeInitialDeformationTime; // Offset: 0x2C

        // final deformation amplitude
        float squeezeFinalDeformation; // Offset: 0x30

        // dampen angular momentum if available
        float angularMomentumDamping; // Offset: 0x34

        // kill particle on collision
        bool kill; // Offset: 0x38

        // minimal penetration before particle gets killed
        float penetrationThreshold; // Offset: 0x3C

        // minimal velocity before particle gets killed
        float velocityThreshold; // Offset: 0x40

        // drag coefficient of flow
        float flowDrag; // Offset: 0x44

        // radius of flow influence (softness of simulation)
        float flowRadius; // Offset: 0x48

    }; // Size: 0x4C

    struct prtEmitterDragNEW_t
    {
        // drag coefficient
        idParticleScalar drag; // Offset: 0x0

        // influence radius
        idParticleScalar influenceRadius; // Offset: 0x20

    }; // Size: 0x40

    struct prtTextureTransformNEW_t
    {
        // texcoord flipping mode on S
        prtTextureFlipMode_t textureFlipS; // Offset: 0x0

        // texcoord flipping mode on T
        prtTextureFlipMode_t textureFlipT; // Offset: 0x4

        // texcoord rotation
        prtTextureRotateMode_t textureRotate; // Offset: 0x8

    }; // Size: 0xC

    struct prtSpawnChildrenNEW_t
    {
        // condition
        prtSpawnCondition_t condition; // Offset: 0x0

        // delay
        float delay; // Offset: 0x4

        // duration
        float duration; // Offset: 0x8

        // spawn rate (particles per second)
        idParticleScalar rate; // Offset: 0x10

        // fraction of particles spawning
        float fraction; // Offset: 0x30

        // stage name
        idAtomicString stage; // Offset: 0x38

    }; // Size: 0x40

    struct prtSound_t
    {
        // sound event to play for this stage
        idSoundEvent* event; // Offset: 0x0

        // emitter offset from origin
        idVec3 emitterOffset; // Offset: 0x8

    }; // Size: 0x18

    struct prtSoundNEW_t
    {
        // sound event to play for this stage
        idSoundEvent* event; // Offset: 0x0

        // modulate spawn rate
        bool modulateSpawnRate; // Offset: 0x8

        // override slot to use for modulation
        int overrideSlot; // Offset: 0xC

        // offset value
        float offset; // Offset: 0x10

        // scale value
        float scale; // Offset: 0x14

        // threshold value
        float binaryThreshold; // Offset: 0x18

        // emitter offset from origin
        idVec3 emitterOffset; // Offset: 0x1C

    }; // Size: 0x28

    struct prtParmAccelerationNEW_t
    {
        // particle acceleration {{ units = m / ( s * s ) }}
        idParticleScalar acceleration[3]; // Offset: 0x0

        // apply acceleration in world space
        bool world; // Offset: 0x60

    }; // Size: 0x68

    struct prtParmDistributionNEW_t
    {
        // rect, cylinder, sphere, surface rect, surface cylinder, surface spheres, grid
        prtDistributionType_t type; // Offset: 0x0

        // distribution volume size for each of XYZ {{ units = m }}
        idParticleScalar size[3]; // Offset: 0x8

        // apply random distribution ( defaults to true )
        bool random; // Offset: 0x68

        // number of gridPoints in each dimension
        int gridPoints[3]; // Offset: 0x6C

        // ordered spawning on the grid
        bool ordered; // Offset: 0x78

    }; // Size: 0x80

    struct prtParmSpeedNEW_t
    {
        // particle speed {{ units = m / s }}
        idParticleScalar speed[3]; // Offset: 0x0

    }; // Size: 0x60

    struct prtParmDirectionNEW_t
    {
        // cone, outward, speed
        prtDirectionType_t type; // Offset: 0x0

        // cone angle
        float parms[1]; // Offset: 0x4

        // apply direction in world space
        bool world; // Offset: 0x8

    }; // Size: 0xC

    struct prtParmCustomPathNEW_t
    {
        // use custom C code routines for determining the origin
        prtCustomPthType_t type; // Offset: 0x0

        // custom path parms
        idParticleScalar parms[5]; // Offset: 0x8

    }; // Size: 0xA8

    // derived from static data
    idDrawVert* staticVerts; // Offset: 0x0

    // derived from static data
    int numStaticVerts; // Offset: 0x8

    // derived
    idBounds bounds; // Offset: 0xC

    // recorded
    idBounds recordedBounds; // Offset: 0x24

    // derived from material
    bool alphaBlended; // Offset: 0x0

    // this stage is part of the new particle system
    bool newSystem; // Offset: 0x0

    // CONVERSION ONLY, DO NOT USE
    idAtomicString tmpStageName; // Offset: 0x40

    idAtomicString debugStageName; // Offset: 0x48

    // list of table decls
    idList < const idDeclTable * , TAG_PARTICLE , false > tableDecls; // Offset: 0x50

    // ------------------------ System Specific Parms ------------------------ stage system properties
    idParticleStage::prtStageProperties_t systemProperties; // Offset: 0x68

    // light properties
    idParticleStage::prtLight_t light; // Offset: 0x108

    // ------------------------ Rendering ------------------------
    idParticleStage::prtRendering_t rendering; // Offset: 0x124

    // ------------------------ Distribution Specific Parms ------------------------ distribution parms
    idParticleStage::prtDistribution_t distribution; // Offset: 0x17C

    // ------------------------ Orientation Specific Parms ------------------------ orientationType parms
    idParticleStage::prtOrientation_t orientation; // Offset: 0x1CC

    // direction parms
    idParticleStage::prtDirection_t direction; // Offset: 0x1E4

    // ------------------------ Speed Specific Parms ------------------------ speed parms
    idParticleStage::prtSpeed_t speed; // Offset: 0x1F0

    // ------------------------ Distance Scaling Specific Parms ------------------------ distance scaling parms
    idParticleStage::prtDistanceScale_t distanceScale; // Offset: 0x238

    // distance emission rate scaling parms
    idParticleStage::prtEmissionScale_t emissionRateScale; // Offset: 0x248

    // ------------------------ Acceleration Specific Parms ------------------------ acceleration parms
    idParticleStage::prtAcceleration_t acceleration; // Offset: 0x258

    // ------------------------ Gravity Specific Parms ------------------------ gravity parms
    idParticleStage::prtGravity_t gravity; // Offset: 0x2A4

    // ------------------------ Friction Specific Parms ------------------------ friction parms
    idParticleStage::prtFriction_t friction; // Offset: 0x2C0

    // ------------------------ Offset Specific Parms ------------------------ offset parms
    idParticleStage::prtOffset_t offset; // Offset: 0x308

    // ------------------------ Spawn Location Specific Parms ------------------------ spawn location parms
    idParticleStage::prtSpawnLocation_t spawnLocation; // Offset: 0x350

    // ------------------------ Color Specific Parms ------------------------ color attributes
    idParticleStage::prtColorAttributes_t colorAttributes; // Offset: 0x398

    // ------------------------ Rotation Specific Parms ------------------------ rotation parms
    idParticleStage::prtRotation_t rotation; // Offset: 0x450

    // ------------------------ Emitter Space Velocity - "flamethrower values!" ------------------------ "flamethrower values": 0 - 1 for allowing particles to move away from their current origin and towards the origin they were at when their cycle started (basically, lerping between current and starting position over time)
    idParticleStage::prtEmitterSpaceVelocity_t emitterSpaceVelocity; // Offset: 0x49C

    // ------------------------ World Space Simulation ------------------------
    idParticleStage::prtWorldSpaceEmission_t emissionSpace; // Offset: 0x4B4

    // ------------------------ Initial Rotation Parms ------------------------ initial rotation parms
    idParticleStage::prtInitialRotation_t initialRotation; // Offset: 0x4D0

    // ------------------------ Pivot Specific Parms ------------------------ pivot parms
    idParticleStage::prtPivot_t pivot; // Offset: 0x518

    // ------------------------ Size Specific Parms ------------------------ size parms
    idParticleStage::prtSize_t size; // Offset: 0x520

    // ------------------------ Texture Animation Specific Parms ------------------------ texture animation parms
    idParticleStage::prtTexAnimation_t texAnimation; // Offset: 0x580

    // custom path parms
    idParticleStage::prtCustomPath_t customPath; // Offset: 0x5A4

    // ------------------------ Generic Parm Specific Variables ------------------------ generic parms
    idParticleStage::prtGenericParms_t genericParm; // Offset: 0x620

    // ------------------------ LOD Specific Parms ------------------------
    idParticleStage::prtLODParms_t lodParms; // Offset: 0x680

    // Here goes all parameters for the new particle system   ------------------------ Stage specific parms ------------------------
    idParticleStage::prtStagePropertiesNEW_t systemPropertiesNEW; // Offset: 0x690

    // ------------------------ Rendering ------------------------
    idParticleStage::prtRenderingNEW_t renderingNEW; // Offset: 0x730

    // ------------------------ Sorting ------------------------
    idParticleStage::prtSortingNEW_t sortingNEW; // Offset: 0x79C

    // ------------------------ Offset ------------------------
    idParticleStage::prtOffsetNEW_t offsetNEW; // Offset: 0x7A8

    // ------------------------ Distance scale ------------------------
    idParticleStage::prtDistanceScaleNEW_t distanceScaleNEW; // Offset: 0x808

    // ------------------------ Pivot Specific Parms ------------------------ pivot parms
    idParticleStage::prtPivotNEW_t pivotNEW; // Offset: 0x820

    // ------------------------ Distribution Specific Parms ------------------------ spawn distribution
    idParticleStage::prtSpawnDistributionNEW_t spawnDistributionNEW; // Offset: 0x828

    // ------------------------ Spawn Box ------------------------
    idParticleStage::prtSpawnBoxNEW_t spawnBoxNEW; // Offset: 0x8A8

    // ------------------------ Spawn Sphere Surface ------------------------
    idParticleStage::prtSpawnSphereSurfaceNEW_t spawnSphereSurfaceNEW; // Offset: 0x8B4

    // ------------------------ Spawn Sphere ------------------------
    idParticleStage::prtSpawnSphereNEW_t spawnSphereNEW; // Offset: 0x8C8

    // ------------------------ Spawn Grid ------------------------
    idParticleStage::prtSpawnGridNEW_t spawnGridNEW; // Offset: 0x8D4

    // ------------------------ Beam ------------------------
    idParticleStage::prtBeamNEW_t beamNEW; // Offset: 0x8F0

    // ------------------------ Velocity Inherit ------------------------
    idParticleStage::prtVelocityInheritNEW_t velocityInheritNEW; // Offset: 0x918

    // ------------------------ Velocity Cone ------------------------
    idParticleStage::prtVelocityConeNEW_t velocityConeNEW; // Offset: 0x920

    // ------------------------ Velocity Sphere ------------------------
    idParticleStage::prtVelocitySphereNEW_t velocitySphereNEW; // Offset: 0x980

    // ------------------------ Velocity Offset ------------------------
    idParticleStage::prtVelocityOffsetNEW_t velocityOffsetNEW; // Offset: 0x9A0

    // ------------------------ Vortex grid ------------------------
    idParticleStage::prtVortexGridNEW_t vortexGridNEW; // Offset: 0xA00

    // ------------------------ Velocity Field ------------------------
    idParticleStage::prtVelocityFieldNEW_t velocityFieldNEW; // Offset: 0xA68

    // ------------------------ Plane Projection ------------------------
    idParticleStage::prtPlaneConstraintNEW_t planeConstraintNEW; // Offset: 0xA98

    // ------------------------ Attractor ------------------------
    idParticleStage::prtAttractorNEW_t attractorNEW; // Offset: 0xAA8

    // ------------------------ Acceleration ------------------------
    idParticleStage::prtAccelerationNEW_t accelerationNEW; // Offset: 0xAC0

    // ------------------------ Gravity ------------------------
    idParticleStage::prtGravityNEW_t gravityNEW; // Offset: 0xAD0

    // ------------------------ Color ------------------------
    idParticleStage::prtColorNEW_t colorNEW; // Offset: 0xAD8

    // ------------------------ World Space Rotation ------------------------
    idParticleStage::prtWorldSpaceRotationNEW_t worldSpaceRotationNEW; // Offset: 0xB68

    // first rotation
    idParticleStage::prtAxisRotationNEW_t axisRotationNEW; // Offset: 0xBE0

    // second rotation
    idParticleStage::prtAxisRotationNEW_t axisRotation2NEW; // Offset: 0xC18

    // first rotation
    idParticleStage::prtRotationNEW_t rotationNEW; // Offset: 0xC50

    // second rotation
    idParticleStage::prtRotationNEW_t rotation2NEW; // Offset: 0xCC8

    // ------------------------ Simulated Angular Momentum ------------------------
    idParticleStage::prtSimulatedAngularMomentumNEW_t simulatedAngularMomentumNEW; // Offset: 0xD40

    // ------------------------ View Space Rotation ------------------------
    idParticleStage::prtViewSpaceRotationNEW_t viewSpaceRotationNEW; // Offset: 0xD48

    // ------------------------ Size ------------------------
    idParticleStage::prtSizeNEW_t sizeNEW; // Offset: 0xD88

    // ------------------------ Screen Size ------------------------
    idParticleStage::prtScreenSizeNEW_t screenSizeNEW; // Offset: 0xE30

    // ------------------------ Texture Animation ------------------------
    idParticleStage::prtTexAnimationNEW_t texAnimationNEW; // Offset: 0xE38

    // ------------------------ Vortex ------------------------
    idParticleStage::prtVortexNEW_t vortexNEW; // Offset: 0xE68

    // ------------------------ Brownian Motion ------------------------
    idParticleStage::prtBrownianMotionNEW_t brownianMotionNEW; // Offset: 0xE80

    // ------------------------ Collision ------------------------
    idParticleStage::prtCollisionNEW_t collisionNEW; // Offset: 0xEA0

    // ------------------------ Emitter Drag ------------------------
    idParticleStage::prtEmitterDragNEW_t emitterDragNEW; // Offset: 0xEF0

    // ------------------------ Texture transform ------------------------
    idParticleStage::prtTextureTransformNEW_t textureTransformNEW; // Offset: 0xF30

    // first child
    idParticleStage::prtSpawnChildrenNEW_t spawnChildren1NEW; // Offset: 0xF40

    // second child
    idParticleStage::prtSpawnChildrenNEW_t spawnChildren2NEW; // Offset: 0xF80

    // third child
    idParticleStage::prtSpawnChildrenNEW_t spawnChildren3NEW; // Offset: 0xFC0

    // forth child
    idParticleStage::prtSpawnChildrenNEW_t spawnChildren4NEW; // Offset: 0x1000

    // ------------------------ Sound Parms ------------------------
    idParticleStage::prtSound_t sound; // Offset: 0x1040

    // ------------------------ Sound Parms ------------------------
    idParticleStage::prtSoundNEW_t soundNEW; // Offset: 0x1058

    // ------------------------ Acceleration Specific Parms ------------------------ acceleration parms
    idParticleStage::prtParmAccelerationNEW_t parmAccelerationNEW; // Offset: 0x1080

    // ------------------------ Distribution Specific Parms ------------------------
    idParticleStage::prtParmDistributionNEW_t parmDistributionNEW; // Offset: 0x10E8

    // ------------------------ Speed Specific Parms ------------------------ speed parms
    idParticleStage::prtParmSpeedNEW_t parmSpeedNEW; // Offset: 0x1168

    // ------------------------ Direction Specific Parms ------------------------
    idParticleStage::prtParmDirectionNEW_t parmDirectionNEW; // Offset: 0x11C8

    // ------------------------ Custom Path Specific Parms ------------------------ custom path parms
    idParticleStage::prtParmCustomPathNEW_t parmCustomPathNEW; // Offset: 0x11D8

}; // Size: 0x1280
