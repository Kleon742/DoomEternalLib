struct idRenderModelParms
{
    // ------------------------ Positioning. Axis vectors are [0] = forward, [1] = left, [2] = up ------------------------ {{ units = m }}
    idVec3 origin; // Offset: 0x0

    idMat3 axis; // Offset: 0xC

    idVec3 scale; // Offset: 0x30

    idVec4 color; // Offset: 0x3C

    // Bitmask that enables/disables render passes in materialPassType_t for this model.
    unsigned int materialPassMask; // Offset: 0x4C

    // 0 for no remappings.
    int customSkin; // Offset: 0x50

    // If != -1 only lights with the same group ID will affect this model.
    int lightGroupID; // Offset: 0x54

    // If non-zero, the surface and shadow (if it casts one) will only show up in the specific  view, ie: player weapons. This can also be used to completely disable an entity by  setting it to a view number that will never be used.
    int allowSurfaceOnlyInViewID; // Offset: 0x58

    // Player bodies & possibly player shadows should be suppressed in views from that player's  eyes, but will show up in mirrors and other subviews security cameras could suppress  their model in their subviews if we add a way of specifying a view number for a  remoteRenderMap view
    int suppressSurfaceInViewID; // Offset: 0x5C

    int suppressShadowInViewID; // Offset: 0x60

    // World models for player & weapons will not cast shadows from view weapon muzzle flashes
    int suppressShadowInLightIndex; // Offset: 0x64

    // Number of frames the model needs to be in view before it is actually rendered. This only affects dynamic models and defaults to 2 to make sure any dynamic model (like a skeletal animated model) is fully setup before it is rendered. For most dynamic models it is better to not render it for the first couple of frames as opposed to render it in the wrong pose the first frame.
    int firstVisibleFrameCount; // Offset: 0x68

    // Index into geo decal projection buffer
    int geoDecalProjectionOffset; // Offset: 0x6C

    // Guaranteed not to change again.
    bool isStatic; // Offset: 0x0

    // Static instance entity.
    bool isStaticEntity; // Offset: 0x0

    // Is brush
    bool isBrush; // Offset: 0x0

    // Accepts decals
    bool acceptsDecals; // Offset: 0x0

    // Set if this is the sky model.
    bool isSky; // Offset: 0x0

    // If set, sorting will be done done using surface bounds instead not model bounds
    bool sortSurfaces; // Offset: 0x0

    // No shadow at all, static or dim-shadow, overriding surface material property.
    bool noShadow; // Offset: 0x0

    bool isGeomCache; // Offset: 0x0

    bool isSkinned; // Offset: 0x0

    // Generate a unique model texture layout in buildUnique, and load it when running combo maps.
    bool lightmapFromDynamicModel; // Offset: 0x0

    // Don't create references and interactions for this model, add it to the view list  automatically. Global smoke particles use this. If you are sure a model is almost always going to need to be drawn, this will reduce some overhead.
    bool addAlways; // Offset: 0x0

    bool viewOriented; // Offset: 0x0

    bool mvpIsIdentity; // Offset: 0x0

    bool mvpIsOrthographic; // Offset: 0x0

    bool mvpIsWorldGui; // Offset: 0x0

    bool isUiProxyModel; // Offset: 0x0

    bool firstPerson; // Offset: 0x0

    // If set, triangle occlusion culling will apply a small linear depth bias. This is to avoid self-occlusion on some objects whose bounds are rendered in the occlusion buffer.
    bool skipTriangleOcclusionCulling; // Offset: 0x0

    // Track whether the render model has any active gore wounds  This allows us to determine whether we need to use a special shader for  the dimshadow create render pass to prevent shadow problems when gore  wounds are active.
    bool woundsActive; // Offset: 0x0

    // Track whether the burn fade is active and we need to allow special clipping in the prez pass for certain prez shaders
    bool burnFade; // Offset: 0x0

    // Do not perform any kind of occlusion test, instead always draw the model if it passes frustum culling, and don't bother counting fragments on blended surfaces during the depth fill pass. This is appropriate for very simple models that are just about as fast to draw as a bounding box, like sun flares.
    bool noGPUocclusionTest; // Offset: 0x0

    // Always draw the actual geometry for occlusion testing (instead of a bounding box).
    bool neverOcclusionCullBounds; // Offset: 0x0

    // Particles set this to true at initialization time so that the exact surfaces are never drawn with the occlusionQueryOnly renderprog, and the bounding box is always used. If a model will have more transparent overdraw in its surfaces than the projected bounding box would have, this is generally a benefit.
    bool alwaysOcclusionCullBounds; // Offset: 0x0

    // 'addAlways' models do not issue occlusion queries by default but in some cases (ie sun flare) we need the occlusion results.
    bool addAlwaysForceOcclusionQuery; // Offset: 0x0

    // Don't add any ambient lighting, which can be used by the editor preview to ensure visualized character lighting is exactly as it will draw in the game.
    bool noAmbient; // Offset: 0x0

    // If set this model will be present when generating light probe environment maps
    bool contributesToLightProbeGen; // Offset: 0x0

    // Don't stipple fade when modelFade set, assume a constant fade
    bool noStippleFade; // Offset: 0x0

    // Forces committed object to be dynamic.
    bool forceDynamic; // Offset: 0x0

    // Lighting method for static instances
    unsigned int instanceLightingMode; // Offset: 0x0

    // internal state to determine if we need to remap materials - never set this via an API call
    bool isMaterialRemapDirty; // Offset: 0x0

    // If true, model will render in color even if environment is desaturated.
    bool ignoreDesaturate; // Offset: 0x0

    // If true, this model is outlined/filled using RenderAugment.
    bool augmentHighlighted; // Offset: 0x0

    // The index of the color to use for the RenderAugment outline.
    unsigned int augmentHighlightColorId; // Offset: 0x0

    // If true, this model will have fill color applied to its occluded pixels when augment highlighted.
    bool augmentHighlightFill; // Offset: 0x0

    // If true, the RenderAugment highlight outlines/fill of other models will not render over this model.
    bool augmentHighlightKeepout; // Offset: 0x0

    // if true, the RenderAugment highlight fill of other models will not render over this model.
    bool augmentHighlightKeepoutFill; // Offset: 0x0

    // If true, this model will have aura outlines.
    bool augmentHighlightedAura; // Offset: 0x0

    // If true, this model will disable aura outlines if augmentHighlighted is false.
    bool augmentHighlightAuraRequiresAugmentHighlight; // Offset: 0x0

    // If true, this model is a water body that's swimmable.
    bool isSwimmableWater; // Offset: 0x0

    // If true and model is using a water material, this model may cast water caustics (please set only on the "main" water model of each area).
    bool castsWaterCaustics; // Offset: 0x0

    // If true geo decals are disabled
    bool disableGeoDecals; // Offset: 0x0

    // Set if model supports ray tracing
    bool supportsRayTracing; // Offset: 0x0

    // the 8-bit instance mask getting passed to the BLAS
    uint8_t rayTracingInstanceMask; // Offset: 0x0

    // Set if GUI animation changed since last commit
    bool hasGUIChanged; // Offset: 0x0

    // Set if this model is a supporting model for a world GUI
    bool supportsWorldGUI; // Offset: 0x0

    // Trace groups allow application of stamps to only one surface FIXME: this should not be in the latched data, it doesn't effect rendering
    int traceGroup; // Offset: 0x0

    unsigned short editorSortBias; // Offset: 0x0

    // custom lod switch distances
    float customLodDistances[5]; // Offset: 0x8C

    float depthSortBias; // Offset: 0xA0

    short sortBias; // Offset: 0xA4

    // scale the models ambient contribution
    float ambientLightingScale; // Offset: 0xA8

    // stream id for model's lightmap
    streamedMaterialId_t lightmapStreamMaterialId; // Offset: 0xAC

    // draw with a blinking effect added to the lighting to highlight items
    highlightColor_t highlightColor; // Offset: 0xB0

    highlightFreq_t highlightFreq; // Offset: 0xB4

    // maximum texel density for this model in the unique layout, 0 == default FIXME: this should not be in the latched data, it doesn't effect rendering
    float maxTexelDensity; // Offset: 0xB8

    // set to less than 1.0 to fade all surfaces (stipple fade on consoles, possibly coverage fade on PC)
    float modelFade; // Offset: 0xBC

    // All surfaces will be gone at this range. {{ units = m }}
    float maxVisibleRange; // Offset: 0xC0

    // Surfaces start fading at maxVisibleRange-fadeVisibilityOver. {{ units = m }}
    float fadeVisibilityOver; // Offset: 0xC4

    // RenderProg permutation flags added during dynamic render prog selection
    unsigned int renderProgPermutationFlags; // Offset: 0xC8

    // the reference model to render onto this model (used by in-game guis)
    idRenderModel* referenceModel; // Offset: 0xD0

}; // Size: 0xD8
