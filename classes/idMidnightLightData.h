struct idMidnightLightData
{
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

        // min density variation (only for non-water volumes)
        float densityVariationMin; // Offset: 0x10

        // max density variation (only for non-water volumes)
        float densityVariationMax; // Offset: 0x14

        // volume falloff (only for non-water volumes)
        float densityFalloff; // Offset: 0x18

    }; // Size: 0x1C

    struct colorCurve_t
    {
        // Individually controls the red color channel
        idDeclTable* red; // Offset: 0x0

        // Individually controls the Exgreen color channel
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

    // position of the light {{ units = m }}
    idVec3 position; // Offset: 0x0

    // orientation of the light
    idQuat orientation; // Offset: 0xC

    // the color of the light
    idColor lightColor; // Offset: 0x1C

    // light color multiplier that allows lights to get overbright
    float lightIntensity; // Offset: 0x2C

    // light bounding box size for point lights and parallel lights {{ units = m }}
    idVec3 lightRadius; // Offset: 0x30

    // light center relative to the spawn origin for point lights, or direction the light comes from for parallel lights {{ units = m }}
    idVec3 lightCenter; // Offset: 0x3C

    // light falloff distance
    float lightFalloff; // Offset: 0x48

    // light target for spot lights {{ units = m }}
    idVec3 lightTarget; // Offset: 0x4C

    // right vector for a spot lights {{ units = m }}
    idVec3 lightRight; // Offset: 0x58

    // up vector for a spot lights {{ units = m }}
    idVec3 lightUp; // Offset: 0x64

    // start for spot light falloff {{ units = m }}
    idVec3 lightStart; // Offset: 0x70

    // end for spot light falloff {{ units = m }}
    idVec3 lightEnd; // Offset: 0x7C

    // brighten or dim the specular highlights of dynamic lights
    float dynamicLightSpecularScale; // Offset: 0x88

    // if true the light will cast shadows
    bool castShadows; // Offset: 0x8C

    // light scattering volume parms
    idMidnightLightData::idLightScattering lightScattering; // Offset: 0x90

    // adjusts how much this light contributes to scattering volumes, 0.0 - 32.0
    float scatteringMultiplier; // Offset: 0xAC

    // Color curve lookups
    idMidnightLightData::colorCurve_t colorCurves; // Offset: 0xB0

    // light material
    idMaterial2* lightMaterial; // Offset: 0xD8

    // If != -1 this light will only affect models with the same group ID.
    int lightGroupID; // Offset: 0xE0

    // this factor is multiplied with the normally calculated color when approximating lighting on dynamic models. it can be raised, lowered or colored
    idVec3 dynamicModelLightingScale; // Offset: 0xE4

    // light will be completely culled at this range {{ units = m }}
    float maxVisibleRange; // Offset: 0xF0

    // light will begin fading at this range {{ units = m }}
    float fadeVisibilityOver; // Offset: 0xF4

    // light will not cast a shadow beyond this range {{ units = m }}
    float maxShadowVisibleRange; // Offset: 0xF8

    // Target to set for the spotlight. An empty string == none.
    idAtomicString spotTarget; // Offset: 0x100

}; // Size: 0x108
