struct idLight : idBloatedEntity
{
    struct idSpotLight
    {
        // light target for spot lights {{ units = m }}
        idVec3 lightTarget; // Offset: 0x0

        // right vector for a spot lights {{ units = m }}
        idVec3 lightRight; // Offset: 0xC

        // up vector for a spot lights {{ units = m }}
        idVec3 lightUp; // Offset: 0x18

        // start for spot light falloff {{ units = m }}
        idVec3 lightStart; // Offset: 0x24

        // end for spot light falloff {{ units = m }}
        idVec3 lightEnd; // Offset: 0x30

        // length between spawnPos and target {{ units = m }}
        float lightConeLength; // Offset: 0x3C

        // length of width/height, which ever is highest {{ units = m }}
        float lightConeSize; // Offset: 0x40

        // ratio width to cone size ( 0-1 )
        float lightWidthRatio; // Offset: 0x44

        // ratio height to cone size ( 0-1 )
        float lightHeightRatio; // Offset: 0x48

    }; // Size: 0x4C

    struct idAreaLight
    {
        // light target for spot lights {{ units = m }}
        idVec3 lightTarget; // Offset: 0x0

        // right vector for a spot lights {{ units = m }}
        idVec3 lightRight; // Offset: 0xC

        // up vector for a spot lights {{ units = m }}
        idVec3 lightUp; // Offset: 0x18

        // shape of light surface
        lightArea_t shape; // Offset: 0x24

    }; // Size: 0x28

    struct idLightScattering
    {
        // set true if this is used for a water volume
        bool isWaterVolume; // Offset: 0x0

        // if true, density will fade when near view position. fade amount is controlled by env parms.
        bool viewDistFade; // Offset: 0x1

        // volume density
        float density; // Offset: 0x4

        // net change in density from top to bottom of volume
        float densityChange; // Offset: 0x8

        // volume density along height (only for water volumes)
        float densityHeight; // Offset: 0xC

        // min density variation
        float densityVariationMin; // Offset: 0x10

        // max density variation
        float densityVariationMax; // Offset: 0x14

        // volume falloff (only for non water volumes)
        float densityFalloff; // Offset: 0x18

    }; // Size: 0x1C

    struct colorCurve_t
    {
        // Individually controls the red color channel
        idDeclTable* red; // Offset: 0x0

        // Individually controls the green color channel
        idDeclTable* green; // Offset: 0x8

        // Individually controls the blue color channel
        idDeclTable* blue; // Offset: 0x10

        // Controls the light intensity
        idDeclTable* intensity; // Offset: 0x18

        // Controls duration of the curves
        float duration; // Offset: 0x20

        // Play the table in reverse
        bool reverse; // Offset: 0x24

    }; // Size: 0x28

    struct idSoundInfo
    {
        // sound event to play for this light
        idSoundEvent* event; // Offset: 0x0

        // true if light should wait for a trigger to play its sound
        bool waitForTrigger; // Offset: 0x8

        // modulate the light curve rather than just activating the sound
        bool modulate; // Offset: 0x9

        // scale value to scale the curve intensity from the sound
        float scale; // Offset: 0xC

        // sound threshold value for when the light should be activated, or threshold for when the sound should activate
        float threshold; // Offset: 0x10

        // sound particle id
        idSoundParticleID soundID; // Offset: 0x14

    }; // Size: 0x18

    // the type of light ( point, spot, parallel )
    lightType_t lightType; // Offset: 0xB88

    // light material
    idMaterial2* lightMaterial; // Offset: 0xB90

    // the color of the light
    idColor lightColor; // Offset: 0xB98

    // light color multiplier that allows lights to get overbright
    float lightIntensity; // Offset: 0xBA8

    // light bounding box size for point lights and parallel lights {{ units = m }}
    idVec3 lightRadius; // Offset: 0xBAC

    // light center relative to the spawn origin for point lights, or direction the light comes from for parallel lights {{ units = m }}
    idVec3 lightCenter; // Offset: 0xBB8

    // light falloff distance {{ units = m }}
    float lightFalloff; // Offset: 0xBC4

    // light probe inner falloff ratio
    float clipVolumeFalloff; // Offset: 0xBC8

    // if true the light will cast shadows
    bool castShadows; // Offset: 0xBCC

    // if true, only static geometry will cast shadows
    bool staticShadowsOnly; // Offset: 0xBCD

    // if true, user can override clip volume setup
    bool userClipVolume; // Offset: 0xBCE

    // settings for spotlights
    idLight::idSpotLight spotLight; // Offset: 0xBD0

    // target for spotlight to calculate lookat
    idManagedClassPtr < idEntity > spotTarget; // Offset: 0xC20

    // settings for arealights
    idLight::idAreaLight areaLight; // Offset: 0xC40

    // lightScattering light scattering volume parms
    idLight::idLightScattering lightScattering; // Offset: 0xC68

    // adjusts how much this light contributes to scattering volumes, 0.0 - 1.0
    float scatteringMultiplier; // Offset: 0xC84

    // Color curve lookups
    idLight::colorCurve_t colorCurves; // Offset: 0xC88

    // if true light is not allowed to move or change radius for culling reasons
    bool stationary; // Offset: 0x0

    // if true probe is not allowed to move or change radius for culling reasons
    bool stationaryProbe; // Offset: 0x0

    // if true the light is baked into the lightmap and light-probes and does not affect run-time performance
    bool staticLight; // Offset: 0x0

    // if true the light will not contribute to any static ambient light (lightmap or light-probes)
    bool dynamicOnly; // Offset: 0x0

    // causes the light to be off when the level starts
    bool startOff; // Offset: 0x0

    // in the case of light probes allows the lightprobe to be affected by the env override areas
    bool allowEnvOverride; // Offset: 0x0

    // light will begin fading in at fadeVisibilityOver range
    bool flipFadeVisibility; // Offset: 0x0

    // if true use triangles that face away from the light to cast shadows
    bool backFaceShadows; // Offset: 0x0

    // if true we will save on checkpoints
    bool saveOnCheckpoint; // Offset: 0x0

    // If true, the light will be animated by a Scene Director setup and cannot be assumed to be stationary.
    bool controlledBySceneDirector; // Offset: 0x0

    // light contributes to environment map generation
    bool contributesToLightProbeGen; // Offset: 0x0

    // static light contributes to ambient node generation directly
    bool contributesToAmbientDirectional; // Offset: 0x0

    // brighten or dim contribution to the lightmap ( only valid for static lights )
    float staticLightMapScale; // Offset: 0xCB4

    // brighten or dim the specular highlights of dynamic lights
    float dynamicLightSpecularScale; // Offset: 0xCB8

    // dynamicOnly must be tree for this to have any effect
    lightParticleEffect_t particleLightEffect; // Offset: 0xCBC

    // dim the lights contribution to the particle systems
    float particleLightScale; // Offset: 0xCC0

    // Determines the max shadow resolution, 0 = default, 1 = higher res (but not on xbone, atm)
    int shadowResolutionQuality; // Offset: 0xCC4

    // Adds a bias to the mip computation, can be fractional, can be negative. Use with caution.
    float shadowMipBias; // Offset: 0xCC8

    // Depth bias scale for slopes so we can tweak artifacts on a per light basis. Only applies if value is not equal 0.0 (Default is 0.0)
    float shadowSlopeScaleDepthBias; // Offset: 0xCCC

    // Shadow update rate behavior
    shadowRate_t shadowRate; // Offset: 0xCD0

    // Shadow flags
    shadowFlags_t shadowFlags; // Offset: 0xCD4

    // diameter of the area light for smooth pre-generated shadows {{ units = m }}
    float lightGenAreaScale; // Offset: 0xCD8

    // light will be completely culled at this range {{ units = m }}
    float maxVisibleRange; // Offset: 0xCDC

    // light will begin fading at this range {{ units = m }}
    float fadeVisibilityOver; // Offset: 0xCE0

    // light will not cast a shadow beyond this range {{ units = m }}
    float maxShadowVisibleRange; // Offset: 0xCE4

    // settings for the lights sound
    idLight::idSoundInfo soundInfo; // Offset: 0xCE8

    // If != -1 this light will only affect models with the same group ID.
    int lightGroupID; // Offset: 0xD00

    // this factor is multiplied with the normally calculated color when approximating lighting on dynamic models. it can be raised, lowered or colored
    idVec3 dynamicModelLightingScale; // Offset: 0xD04

    // These values are protected so their defaults can be different in subclasses light will be serialized if set to true
    bool isNetworked; // Offset: 0xD10

    idRenderLight* renderLight; // Offset: 0xD18

    idEntity* lightParent; // Offset: 0xD20

    idDeclTable* fadeTable_Color; // Offset: 0xD28

    idDeclTable* fadeTable_Intensity; // Offset: 0xD30

    // saved off for fades etc.. reset with a setlightparms call
    idColor fadeBeginColor; // Offset: 0xD38

    idColor originalColor; // Offset: 0xD48

    idVec3 originalRadius; // Offset: 0xD58

    // used instead of originalColor when light is controlled by a midnight
    idColor midnightColor; // Offset: 0xD64

    unsigned int umbraID; // Offset: 0xD74

    unsigned int materialLock; // Offset: 0xD78

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lightOnOffTime; // Offset: 0xD80

    float originalIntensity; // Offset: 0xD88

    bool soundWasPlaying; // Offset: 0x0

    // True if the light has animated modulates
    bool hasColorCurves; // Offset: 0x0

    bool renderLightUnlinkedStatus; // Offset: 0x0

    // The two colors to fade between.
    idPair < idColor , idColor > fadeColors; // Offset: 0xD90

    // The two radii to fade between. {{ units = m }}
    idPair < idVec3 , idVec3 > fadeRadii; // Offset: 0xDB0

    // The two intensities to fade between.
    idPair < float , float > fadeIntensities; // Offset: 0xDC8

    // The start and end times to use for fading the colors.
    idPair < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > fadeColorTimes; // Offset: 0xDD0

    // The start and end times to use for fading the intensities.
    idPair < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > fadeIntensityTimes; // Offset: 0xDE0

    // The start and end times to use for fading the radii.
    idPair < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > fadeRadiiTimes; // Offset: 0xDF0

}; // Size: 0xE00
