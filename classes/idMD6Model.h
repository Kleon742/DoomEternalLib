struct idMD6Model : idResource
{
    enum loadFlags_t : int
    {
        LOADFLAGS_RESIDE_ON_CPU = 1,
        LOADFLAGS_RESIDE_ON_GPU = 2,
        LOADFLAGS_DEFAULT = 2
    };

    enum dependencyCallbacks_t : int
    {
        DEP_CALLBACK_LODGROUP = 0,
        DEP_CALLBACK_NUM = 1
    };

    struct md6ModelLodGroupPayload_t
    {
        char name[1]; // Offset: 0x0

    }; // Size: 0x1

    // default bounds of all the meshes
    idBounds defaultBounds; // Offset: 0x58

    // if true, remap joints for GPU skinning
    bool remapForSkinning; // Offset: 0x70

    idList < idMD6Mesh * , TAG_MD6 , false > meshes; // Offset: 0x78

    // joint remapping FOR SKINNING ONLY -- this has no relation to remapping joints for animation playback / blending
    idList < unsigned char , TAG_MD6 , false > jointRemap; // Offset: 0x90

    // Most good models will be reduced to only one or two genericMaterial surfaces after merging, but we still need to know all the original materials for the low-mip virtual texture page locking.
    idList < sourceSurface_t , TAG_IDLIST , false > sourceSurfaces; // Offset: 0xA8

    geometryStreamMemLayout_t streamMemLayouts[5]; // Offset: 0xC0

    geometryStreamDiskLayout_t streamDiskLayouts[5]; // Offset: 0x278

    float maxLodDeviations[5]; // Offset: 0x2C8

    idDeclLODGroup* lodGroup; // Offset: 0x2E0

    unsigned int streamModelId; // Offset: 0x2E8

    geometryLodResidencyTable_t validLodMask; // Offset: 0x2EC

    unsigned int currentlyLockedLods; // Offset: 0x2F0

    idHeapArray < idAtomicString , TAG_HEAP_ARRAY > blendShapeNames; // Offset: 0x2F8

    idMD6Skel* skeleton; // Offset: 0x310

    // how much to expand the minimum bounds of animations playing on this model
    idVec3 minBoundsExpansion; // Offset: 0x318

    // how much to expand the maximum bounds of animations playing on this model
    idVec3 maxBoundsExpansion; // Offset: 0x324

    // data necessary for surfaces to project SWF guis in world or move portal effects
    idList < textureAxis_t * , TAG_MD6 , false > textureAxis; // Offset: 0x330

    idMD6Model::loadFlags_t loadFlags; // Offset: 0x348

    int numGeoDecalProjections; // Offset: 0x34C

    idBufferObject geoDecalProjToTriBuffer; // Offset: 0x350

    idList < idBufferView , TAG_IDLIST , false > geoDecalProjToTriBufferViews; // Offset: 0x3B8

    idAtomicString geoDecalMaterialName; // Offset: 0x3D0

    float geoDecalDsDw; // Offset: 0x3D8

    float geoDecalDtDw; // Offset: 0x3DC

}; // Size: 0x3E0
