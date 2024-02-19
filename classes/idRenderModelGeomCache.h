struct idRenderModelGeomCache : idRenderModel
{
    enum bufferAllocationState_t : int
    {
        FREED = 0,
        STATIC = 1,
        PLAYBACK = 2
    };

    struct modelInterpolationDispatches_t
    {
        idRenderModelGeomCache* model; // Offset: 0x0

        bool forceDispatches; // Offset: 0x8

        idRenderModelGeomCache::transformInterpolationDispatch_t transformInterpolationDispatch; // Offset: 0xC

        int numInterpolationDispatches; // Offset: 0xA4

        idRenderModelGeomCache::meshInterpolationDispatch_t* meshInterpolationDispatches; // Offset: 0xA8

        int numInterpolationSkinnedDispatches; // Offset: 0xB0

        idRenderModelGeomCache::meshInterpolationSkinnedDispatch_t* meshInterpolationSkinnedDispatches; // Offset: 0xB8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > gpuTime; // Offset: 0xC0

        int lastFrameInterpolated; // Offset: 0xC8

        int gpuTimeBufferIndex; // Offset: 0xCC

    }; // Size: 0xD8

    struct meshStreamInterpSourceBuffers_t
    {
        unsigned int positionsOffset; // Offset: 0x0

        unsigned int texcoordsOffset; // Offset: 0x4

        unsigned int tangentFramesOffset; // Offset: 0x8

        unsigned int colorsOffset; // Offset: 0xC

    }; // Size: 0x10

    struct meshAutoSkinSourceBuffers_t
    {
        unsigned int boneTranslationsOffset; // Offset: 0x0

        unsigned int boneBasisVectorsOffset; // Offset: 0x4

    }; // Size: 0x8

    struct transformInterpolationDispatch_t
    {
        idRenderMatrix modelMatrix; // Offset: 0x0

        idRenderMatrix inverseModelMatrix; // Offset: 0x40

        float interpolationFactor; // Offset: 0x80

        int numNodes; // Offset: 0x84

        unsigned int floorTransformsOffset; // Offset: 0x88

        unsigned int ceilTransformsOffset; // Offset: 0x8C

        unsigned int outTransformsOffset; // Offset: 0x90

        unsigned int outInverseTransformsOffset; // Offset: 0x94

    }; // Size: 0x98

    struct meshInterpolationDispatch_t
    {
        int numVertices; // Offset: 0x0

        float interpolationFactor; // Offset: 0x4

        unsigned int floorPositionsOffset; // Offset: 0x8

        unsigned int ceilPositionsOffset; // Offset: 0xC

        unsigned int outPositionsOffset; // Offset: 0x10

    }; // Size: 0x14

    struct meshInterpolationSkinnedDispatch_t
    {
        int numVertices; // Offset: 0x0

        float interpolationFactor; // Offset: 0x4

        int meshIndex; // Offset: 0x8

        unsigned int basePoseOffset; // Offset: 0xC

        unsigned int boneIndicesOffset; // Offset: 0x10

        unsigned int boneWeightsOffset; // Offset: 0x14

        unsigned int floorBoneTranslationsOffset; // Offset: 0x18

        unsigned int ceilBoneTranslationsOffset; // Offset: 0x1C

        unsigned int floorBoneBasisVectorsOffset; // Offset: 0x20

        unsigned int ceilBoneBasisVectorsOffset; // Offset: 0x24

        unsigned int outPositionsOffset; // Offset: 0x28

    }; // Size: 0x2C

    struct geoDecalSurfaceDesc_t
    {
        int geoDecalProjSet; // Offset: 0x0

        int nodeIndex; // Offset: 0x4

        int meshIndex; // Offset: 0x8

        bool visible; // Offset: 0xC

    }; // Size: 0x10

    struct geometryData_t
    {
        int nodeIndex; // Offset: 0x0

        int meshIndex; // Offset: 0x4

        int meshSurfaceIndex; // Offset: 0x8

    }; // Size: 0xC

    struct mergedSurfaceDesc_t
    {
        unsigned int materialId; // Offset: 0x0

        int geoDecalProjSet; // Offset: 0x4

        idList < idRenderModelGeomCache::geometryData_t , TAG_IDLIST , false > geometryData; // Offset: 0x8

        unsigned int surfaceParmsBufferOffset; // Offset: 0x20

        idBitArray visibility; // Offset: 0x28

    }; // Size: 0x40

    idGeomCache* geomCache; // Offset: 0x4D0

    geomCacheStream_t stream; // Offset: 0x4D8

    idStaticModelStream* paintStream; // Offset: 0x510

    idRenderModelGeomCache::bufferAllocationState_t bufferAllocationState; // Offset: 0x518

    unsigned long long nameHash; // Offset: 0x520

    int floorInterpolationSourceBuffersIndex; // Offset: 0x528

    int ceilInterpolationSourceBuffersIndex; // Offset: 0x52C

    int currentInterpolationTargetBufferIndex; // Offset: 0x530

    int currentTransformInterpolationTargetBufferIndex; // Offset: 0x534

    int lastFrameInterpolated; // Offset: 0x538

    int numVisibleGeometries; // Offset: 0x53C

    bool recreateSurfaces; // Offset: 0x0

    bool rebindBuffers; // Offset: 0x0

    bool subGeometriesEnabled; // Offset: 0x0

    bool surfaceDataValid; // Offset: 0x0

    idList < idRenderModelGeomCache::geoDecalSurfaceDesc_t , TAG_IDLIST , false > geoDecalSurfaceDescriptions; // Offset: 0x548

    idList < idRenderModelGeomCache::mergedSurfaceDesc_t , TAG_IDLIST , false > mergedSurfaceDescriptions; // Offset: 0x560

    unsigned int surfaceParmsAllocationSize; // Offset: 0x578

    unsigned int surfaceDebugParmsAllocationSize; // Offset: 0x57C

    unsigned int surfaceParmsSize; // Offset: 0x580

    unsigned int sourceTransformsAllocationSize; // Offset: 0x584

    unsigned int targetTransformsAllocationSize; // Offset: 0x588

    unsigned int vertexShaderSourceBufferAllocationSize; // Offset: 0x58C

    unsigned int computeShaderSourceBufferAllocationSize; // Offset: 0x590

    unsigned int computeShaderTargetBufferAllocationSize; // Offset: 0x594

    geomCacheBufferAllocation_t surfaceParmsAllocation; // Offset: 0x59C

    geomCacheBufferAllocation_t surfaceDebugParmsAllocation; // Offset: 0x5A4

    geomCacheBufferAllocation_t sourceTransformsAllocation; // Offset: 0x5AC

    geomCacheBufferAllocation_t targetTransformsAllocations[2]; // Offset: 0x5B4

    geomCacheBufferAllocation_t vertexShaderSourceBufferAllocations[2]; // Offset: 0x5C4

    geomCacheBufferAllocation_t computeShaderSourceBufferAllocations[2]; // Offset: 0x5D4

    geomCacheBufferAllocation_t computeShaderTargetBufferAllocations[2]; // Offset: 0x5E4

    unsigned long long interpSourceBuffersIndexToFrameIndex[2]; // Offset: 0x600

    unsigned int transformInterpSourceBufferOffsets[2]; // Offset: 0x610

    unsigned int transformsFrameSize; // Offset: 0x618

    unsigned int transformTargetBufferOffset; // Offset: 0x61C

    unsigned int inverseTransformTargetBufferOffset; // Offset: 0x620

    idList < idRenderModelGeomCache::meshStreamInterpSourceBuffers_t , TAG_RENDERMODEL_GEOMCACHE , false > meshStreamInterpSourceBuffers; // Offset: 0x628

    idList < idRenderModelGeomCache::meshAutoSkinSourceBuffers_t , TAG_RENDERMODEL_GEOMCACHE , false > meshAutoSkinSourceBuffers; // Offset: 0x640

    idList < unsigned int , TAG_RENDERMODEL_GEOMCACHE , false > computeShaderTargetBufferOffsets; // Offset: 0x658

    idList < int , TAG_RENDERMODEL_GEOMCACHE , false > meshIndexToInterpolationSourceBufferIndex; // Offset: 0x670

    idList < int , TAG_RENDERMODEL_GEOMCACHE , false > meshIndexToAutoSkinBufferIndex; // Offset: 0x688

    idList < int , TAG_RENDERMODEL_GEOMCACHE , false > meshIndexToInterpolationTargetBufferIndex; // Offset: 0x6A0

    idList < unsigned int , TAG_IDLIST , false > geoDecalStreamIds; // Offset: 0x6B8

    idDeclMD6* declMD6; // Offset: 0x6D0

}; // Size: 0x6E0
