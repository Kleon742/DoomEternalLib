struct idStaticModel : idResource
{
    enum modelLoadFlags_t : int
    {
        MODELLOADFLAGS_CPU_ONLY = 1,
        MODELLOADFLAGS_DEFAULT = 0
    };

    enum dependencyCallbacks_t : int
    {
        DEP_CALLBACK_MATERIAL = 0,
        DEP_CALLBACK_LODGROUP = 1,
        DEP_CALLBACK_NUM = 2
    };

    struct staticModelLodGroupPayload_t
    {
        char name[1]; // Offset: 0x0

    }; // Size: 0x1

    typedef idList < geoDecalProjection_t , TAG_STATICMODEL > geoDecalProjections_t;

    typedef idList < worldGeometryAllocHdl_t > hdlList_t;

    typedef idSpillableArray < geometryStreamMemLayout_t , 1 > streamMemLayoutArray_t;

    // load a prestine model without texcoord remapping and optimizations
    bool pristine; // Offset: 0x58

    bool streamable; // Offset: 0x59

    int reloadVersion; // Offset: 0x5C

    unsigned int timeStamp; // Offset: 0x60

    idBounds referenceBounds; // Offset: 0x64

    idVec3 referencePosition; // Offset: 0x7C

    int modelLoadFlags; // Offset: 0x88

    idList < bool , TAG_STATICMODEL , false > streamedSurfaces; // Offset: 0x90

    geometryStreamDiskLayout_t streamDiskLayouts[5]; // Offset: 0xA8

    idSpillableArray < geometryStreamMemLayout_t , 1 > streamMemLayouts[5]; // Offset: 0xF8

    unsigned int streamId; // Offset: 0x2D8

    geometryLodResidencyTable_t validLodMask; // Offset: 0x2DC

    idList < unsigned int , TAG_IDLIST , false > worldGeoHdls[5]; // Offset: 0x2E0

    idList < idStaticModelSurface , TAG_STATICMODEL , false > surfaces; // Offset: 0x3D0

    float maxLodDeviations[5]; // Offset: 0x3E8

    idDeclLODGroup* lodGroup; // Offset: 0x400

    idList < geoDecalProjection_t , TAG_STATICMODEL , false > geoDecalProjections; // Offset: 0x408

    idAtomicString geoDecalMaterialName; // Offset: 0x420

    int geoDecalTintStartOffset; // Offset: 0x428

    float geoDecalDsDw; // Offset: 0x42C

    float geoDecalDtDw; // Offset: 0x430

    // data necessary for surfaces to project SWF guis in world or move portal effects
    idList < const textureAxis_t * , TAG_STATICMODEL , false > textureAxis; // Offset: 0x438

    float lightmapSurfaceAreaSqrt; // Offset: 0x450

    short lighmapWidth; // Offset: 0x454

    short lighmapHeight; // Offset: 0x456

}; // Size: 0x458
