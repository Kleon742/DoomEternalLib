struct idRenderLightParms
{
    // rotation vectors, must be unit length
    idMat3 axis; // Offset: 0x0

    idVec3 origin; // Offset: 0x24

    // If != -1 this light will only affect models with the same group ID.
    int lightGroupID; // Offset: 0x30

    int allowLightOnlyInViewID; // Offset: 0x34

    int suppressLightInViewID; // Offset: 0x38

    unsigned int umbraID; // Offset: 0x3C

    unsigned int staticShadowIndex; // Offset: 0x40

    int portalAreaIndex; // Offset: 0x44

    idColor color; // Offset: 0x48

    float colorScale; // Offset: 0x58

    // point / spot / parallel / area
    lightType_t lightType; // Offset: 0x5C

    // default, only particles, not particles
    lightParticleEffect_t particleLightEffect; // Offset: 0x60

    // dim the lights contribution to particle system
    float particleLightScale; // Offset: 0x64

    // Light flags (tbd: move all light state here, e.g. castShadows, backFaceShadows, etc) uint32flags; brighten or dim the contribution to the light map ( only valid for static lights )
    float staticLightMapScale; // Offset: 0x68

    // brighten or dim the specular highlights of dynamic lights
    float dynamicLightSpecularScale; // Offset: 0x6C

    // if true light is not allowed to move or change radius for culling reasons
    bool stationary; // Offset: 0x0

    // if true this light should cast shadows
    bool castShadows; // Offset: 0x0

    // if true, only static geometry will cast shadows;
    bool staticShadowsOnly; // Offset: 0x0

    // if true use triangles that face away from the light to cast shadows
    bool backFaceShadows; // Offset: 0x0

    // if true this light should bake into lightmap, and not render dynamically
    bool staticLight; // Offset: 0x0

    // light represent actual sun, make assumptions based on that (always covers entire screen)
    bool sunLight; // Offset: 0x0

    // if true the light will not contribute to any static ambient light (lightmap or light-probes)
    bool dynamicOnly; // Offset: 0x0

    // if true the light contributes to environment map generation
    bool contributesToLightProbeGen; // Offset: 0x0

    // lights start fading in at maxVisibleRange-fadeVisibilityOver
    bool flipFadeVisibility; // Offset: 0x0

    bool menuOnly; // Offset: 0x0

    // Light is affecting near models (guns)
    bool drawNear; // Offset: 0x0

    // 0 = minimum mip 1, 1 = minimum mip 0 (except xbox)
    unsigned char shadowResolutionQuality; // Offset: 0x72

    shadowRate_t shadowRate; // Offset: 0x74

    shadowFlags_t shadowFlags; // Offset: 0x78

    float shadowMipBias; // Offset: 0x7C

    // depth bias scale for slopes so we can tweak artifacts on a per light basis.
    float shadowSlopeScaleDepthBias; // Offset: 0x80

    // light probe inner falloff ratio
    float clipVolumeFalloffRatio; // Offset: 0x84

    // call MaterialWithDefaultCheck() to get this value or the apropriate default NULL = either lights/defaultPointLight or lights/defaultProjectedLight
    idMaterial2* shader; // Offset: 0x88

    // ------------------------ Frustum definition for a point light or parallel light. ------------------------ XYZ radius relative to the light 'origin/axis' for a point light or parallel light.
    idVec3 lightRadius; // Offset: 0x90

    // Light center relative to the light 'origin/axis' for shading and shadows from a point light.
    idVec3 lightCenter; // Offset: 0x9C

    // For a parallel light this is the direction the light comes from.
    float lightFalloff; // Offset: 0xA8

    // ------------------------ Frustum definition for a spot light and area light. The 'target' vector is relative to the light 'origin/axis'. The 'up' and 'right' vectors are oriented with the light 'axis' but they are relative to the 'target' vector. The 'up' and 'right' vectors are perpendicular to each other and they are on a plane that goes through the 'target' and is orthogonal to the 'target' vector. The 'start' and 'end' points are relative to the light 'origin/axis' and define the light near and far plane along the 'target' vector. ------------------------
    idVec3 target; // Offset: 0xAC

    idVec3 right; // Offset: 0xB8

    idVec3 up; // Offset: 0xC4

    idVec3 start; // Offset: 0xD0

    idVec3 end; // Offset: 0xDC

    // shape of the area light source
    lightArea_t areaShape; // Offset: 0xE8

    // the light will be culled at this range
    float maxVisibleRange; // Offset: 0xEC

    // lights start fading at maxVisibleRange-fadeVisibilityOver.
    float fadeVisibilityOver; // Offset: 0xF0

    // the light will not cast a shadow outside of this range.
    float maxShadowVisibleRange; // Offset: 0xF4

    // ------------------------ Light scattering properties. ------------------------ set true if this is used for a water volume
    bool isWaterVolume; // Offset: 0xF8

    // if true, density will fade when near view position. fade amount is controlled by env parms.
    bool viewDistFade; // Offset: 0xF9

    // volume density
    float density; // Offset: 0xFC

    // net change in density from top to bottom of volume
    float densityChange; // Offset: 0x100

    // volume density along height
    float densityHeight; // Offset: 0x104

    // min density variation
    float densityVariationMin; // Offset: 0x108

    // max density variation
    float densityVariationMax; // Offset: 0x10C

    // volume falloff
    float densityFalloff; // Offset: 0x110

    // ------------------------ Off-line global illumination properties. ------------------------  Area scale for static lighting. For high-quality rendering, shadows are generated at multiple points jittered inside this diameter in world units.
    float areaLightSize; // Offset: 0x114

    // Expose these as tweakables on top of the light start; allows careful wrecking of shadow precision
    float minNearZ; // Offset: 0x118

    float minFarZ; // Offset: 0x11C

    // control contribution of the light to scattering volumes - mostly required when using fake light setups for events, cutscenes
    float scatteringMultiplier; // Offset: 0x120

}; // Size: 0x130
