struct idDecalEntity : idBloatedEntity
{
    // Stamp material
    idMaterial2* material; // Offset: 0xB88

    // The size of the decal {{ units = m }}
    idVec2 size; // Offset: 0xB90

    // The opacity of each channel
    idVec4 opacityParms; // Offset: 0xB98

    // multiplicative tint to the diffuse color
    idColor diffuseTint; // Offset: 0xBA8

    // decal specular color
    idColor specularColor; // Offset: 0xBB8

    // multiplicative tint to the emmissive color
    idColor emissiveTint; // Offset: 0xBC8

    // smoothness channel
    float smoothness; // Offset: 0xBD8

    // The depth of the decal projection {{ units = m }}
    float depth; // Offset: 0xBDC

    // horizontal offset {{ units = m }}
    float offsetHorizontal; // Offset: 0xBE0

    // vertical offset {{ units = m }}
    float offsetVertical; // Offset: 0xBE4

    // overides default fade distance
    float fadeDistance; // Offset: 0xBE8

    // threshold blending
    float thresholdBlend; // Offset: 0xBEC

    // softens the blending of the decal with respect to its bounds
    float softnessScale; // Offset: 0xBF0

    // decal rendering priority highest = rendering on top
    short priority; // Offset: 0xBF4

    // invert normal
    bool invertNormal; // Offset: 0xBF6

    // overlay on background
    bool overlayNormal; // Offset: 0xBF7

    // override on background
    bool overrideNormal; // Offset: 0xBF8

    // flips the decal horizontally
    bool flipHorizontally; // Offset: 0xBF9

    // flips the decal vertically
    bool flipVertically; // Offset: 0xBFA

    // if true, only shows on water surfaces. if false, does not show on water surfaces.
    bool waterDecal; // Offset: 0xBFB

    // animated water ripple
    bool rippleDecal; // Offset: 0xBFC

    // animated rain drip
    bool rainDripDecal; // Offset: 0xBFD

    // decal is for dynamic only objects
    bool dynamicOnly; // Offset: 0xBFE

    // decal is for static only objects
    bool staticOnly; // Offset: 0xBFF

    // decal does not fade due to culling
    bool ignoreFade; // Offset: 0xC00

    // decal should skip becoming an entity, because it wont' do anything dynamic.
    bool shouldSkipEntityCreation; // Offset: 0xC01

    // The created decal handle
    idDecalHandle handle; // Offset: 0xC04

}; // Size: 0xC08
