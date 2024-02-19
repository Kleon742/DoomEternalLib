struct idRenderModelInfo
{
    struct initRenderModelParms_t
    {
        idRenderWorld* renderWorld; // Offset: 0x0

        idRenderModel* modelPtr; // Offset: 0x8

        idVec3* spawnPosition; // Offset: 0x10

        idMat3* spawnOrientation; // Offset: 0x18

        char* name; // Offset: 0x20

        bool hasLightmapLayout; // Offset: 0x28

        bool isStaticEntity; // Offset: 0x29

    }; // Size: 0x30

    idRenderModel* modelPtr; // Offset: 0x0

    // automatically instantiated idRenderModel
    idStrRenderModel model; // Offset: 0x8

    // light rig decl. Lights in this decl will be bound to the origin of the model.
    idDeclLightRig* lightRigDecl; // Offset: 0x10

    // allow this render model to be inlined
    bool allowInline; // Offset: 0x0

    // if true, the model will be treated as sky geometry
    bool isSky; // Offset: 0x0

    // if true then don't apply ambient
    bool noAmbient; // Offset: 0x0

    // if true then casts no shadows
    bool noShadows; // Offset: 0x0

    // if true, model will sample ambient if on a static object
    bool ambientFromStaticModel; // Offset: 0x0

    // if true, model will get a lightmap layout if on a dynamic object
    bool lightmapFromDynamicModel; // Offset: 0x0

    // if true, cast lightmap shadows even if on a dynamic object
    bool staticShadowsFromDynamicModel; // Offset: 0x0

    // if true, this will be added to the scene with generating lightprobe env maps
    bool contributesToLightProbeGen; // Offset: 0x0

    // if true then draw entities first for occlusion tests (terrain, etc)
    bool occluder; // Offset: 0x0

    // if true will swap out preZ and ambient for Echo PreZ and Ambient
    bool isEchoModel; // Offset: 0x0

    // if true will apply the model color to echoes rendering
    bool echoUseModelColor; // Offset: 0x0

    // if true, use the blended opacity material pass
    bool isBlendedOpacityModel; // Offset: 0x0

    // this dynamic model accepts decals
    bool acceptsDecals; // Offset: 0x0

    // if true, rendermodel scale will influence vfx scale
    bool scaleFX; // Offset: 0x0

    // if true, model will render in color even if environment is desaturated.
    bool ignoreDesaturate; // Offset: 0x0

    // if true, augment highlight outlines/fill of other models will not render over this model.
    bool augmentHighlightKeepout; // Offset: 0x0

    // if true, augment highlight fill of other models will not render over this model.
    bool augmentHighlightKeepoutFill; // Offset: 0x0

    // if true and model is using a water material, this model may cast water caustics (please set only on the "main" water model of each area).
    bool castsWaterCaustics; // Offset: 0x0

    // if true, disable GPU triangle occlusion culling on this model. Should only be used as a workaround in extreme edge cases.
    bool skipGpuTriangleOcclusionCulling; // Offset: 0x0

    // If true, disable geo decals
    bool disableGeoDecals; // Offset: 0x0

    // custom LOD distance for LOD1
    float customLodDistance1; // Offset: 0x1C

    // custom LOD distance for LOD2
    float customLodDistance2; // Offset: 0x20

    // custom LOD distance for LOD3
    float customLodDistance3; // Offset: 0x24

    // custom LOD distance for LOD4
    float customLodDistance4; // Offset: 0x28

    // if positive, will be used during hte shadow baking process as the maximum trace distance to compute LOD self-occlusion
    float shadowMaxLodDeviation; // Offset: 0x2C

    // depth sort bias
    float depthSortBias; // Offset: 0x30

    // sort bias
    short sortBias; // Offset: 0x34

    // max texel density when baked to a megatexture ( defaults to 0 - map default )
    float maxTexelDensity; // Offset: 0x38

    // beyond this, all surfaces will be faded out {{ units = m }}
    float maxVisibleRange; // Offset: 0x3C

    // surfaces start fading at maxVisibleRange - fadeVisibilityOver {{ units = m }}
    float fadeVisibilityOver; // Offset: 0x40

    // If != -1 only lights with the same group ID will affect this model.
    int lightGroupID; // Offset: 0x44

    // different material forced onto model - remap table - new
    idList < materialRemap_t , TAG_IDLIST , false > materialRemap; // Offset: 0x48

    // different material(s) forced onto model - specifically for raytracing
    idList < materialRemap_t , TAG_IDLIST , false > materialRemapRT; // Offset: 0x60

    // if outlined rendered for it, this will override default outline material
    idMaterial2* outlineMaterial; // Offset: 0x78

    // geo decal material
    idMaterial2* geoDecalMaterial; // Offset: 0x80

    // geo decal tint color
    idColor geoDecalTint; // Offset: 0x88

    // model scale
    idVec3 scale; // Offset: 0x98

    // model color
    idColor color; // Offset: 0xA4

    // model color overbright
    float colorScale; // Offset: 0xB4

    // model emissiveColor
    idColor emissiveColor; // Offset: 0xB8

    // model emissiveScale;
    float emissiveScale; // Offset: 0xC8

    // render parms used for rendering the model
    idList < idRenderParm , TAG_IDLIST , false > renderParms; // Offset: 0xD0

    // copy all the expressions from this material into renderParms on spawn
    idMaterial2* parmBlock; // Offset: 0xE8

    // set to allow only certain stamps to apply to an entity
    int traceGroup; // Offset: 0xF0

    // scales the ambient light contribution for this model
    float ambientScale; // Offset: 0xF4

    // custom skin index
    int customSkinIndex; // Offset: 0xF8

    // for hiding meshes on spawn
    idMD6Util::meshShowHideInfo_t showHideMeshInfo; // Offset: 0x100

}; // Size: 0x138
