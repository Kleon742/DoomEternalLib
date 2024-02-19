struct idMaterial2 : idDeclTypeInfo
{
    // list of material Passes
    idStaticList < idMaterialPass * , 21 , false , TAG_IDLIST > Passes; // Offset: 0x88

    // Render Layer Info
    idList < idMaterialRenderLayer , TAG_IDLIST , false > RenderLayers; // Offset: 0x148

    // list of material RayPayloads
    idStaticList < idMaterialRayPayload * , 2 , false , TAG_IDLIST > RayPayloads; // Offset: 0x160

    // render parms
    idParmBlock Parms; // Offset: 0x188

    // base material flags
    materialFlags_t Flags; // Offset: 0x198

    // surface flags
    surfaceFlags_t FlagsSurface; // Offset: 0x19C

    // content flags
    contentsFlags_t FlagsContents; // Offset: 0x1A0

    // surface type
    surfTypes_t SurfaceType; // Offset: 0x1A4

    // editor data
    materialToolData_t EditorData; // Offset: 0x1A8

    // cinematic file path
    idStr CinematicPath; // Offset: 0x2B0

    // designates whether the cinematic loops- default is true
    bool CinematicIsLooping; // Offset: 0x2E0

    // Physics Info
    idMaterialPhysicsInfo PhysicsInfo; // Offset: 0x2E8

    // Base layer used for material blending
    idMaterial2* BaseBlendLayer; // Offset: 0x330

    // Secondary layer used for material blending
    idMaterial2* SecondaryBlendLayer; // Offset: 0x338

    // Third layer used for material blending
    idMaterial2* ThirdBlendLayer; // Offset: 0x340

    // Fourth layer used for material blending
    idMaterial2* FourthBlendLayer; // Offset: 0x348

    // Additional permutation flags sent to all render programs
    idList < const idDeclRenderProgFlag * , TAG_IDLIST , false > PermutationFlags; // Offset: 0x350

    // Stream category
    imageStreamCategory_t StreamCategory; // Offset: 0x368

    streamedMaterialId_t ImageStreamingPacket; // Offset: 0x36C

    unsigned short MaterialIndex; // Offset: 0x370

    // Only for MATERIALPASS_WATER: whether or not this is flowing water.
    bool WaterFlowing; // Offset: 0x372

    idCinematic* Cinematic; // Offset: 0x378

    unsigned int MergedPermutationFlags; // Offset: 0x380

    // Special Flags that should not be editable cached flag of whether the material has any valid material pass to avoid searching all the time
    bool HasAnyPass; // Offset: 0x0

    // cached flag for ray payloads; same as material passes
    bool HasAnyRayPayload; // Offset: 0x0

    // is there a pass without visibility mask set
    bool HasNonEditorPasses; // Offset: 0x0

    // cached flag of whether the material is a proper composite material
    bool IsCompositeMaterial; // Offset: 0x0

    // cached flag of whether the material is a multi-layer material
    bool IsMultiLayerMaterial; // Offset: 0x0

    // MaterialPainting - never set this dynamically
    bool HasHeightmap; // Offset: 0x0

    bool isGeoDecalMaterial; // Offset: 0x0

    bool isGeoDecalTintMaterial; // Offset: 0x0

    layeredMaterialId_t SingleMaterialId; // Offset: 0x388

    streamedLayeredMaterialId_t SingleMaterialStreamingPacket; // Offset: 0x38C

    layeredMaterialId_t CompositeMaterialId; // Offset: 0x390

    streamedLayeredMaterialId_t CompositeMaterialStreamingPacket; // Offset: 0x394

}; // Size: 0x398
