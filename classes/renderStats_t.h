struct renderStats_t
{
    int c_queriesIssued; // Offset: 0x0

    int c_queriesPassed; // Offset: 0x4

    int c_queriesWaitTime; // Offset: 0x8

    int c_queriesTooOld; // Offset: 0xC

    int c_gpuQueriesIssued; // Offset: 0x10

    int c_gpuQueriesPassed; // Offset: 0x14

    int c_gpuQueriesWaitTime; // Offset: 0x18

    int c_gpuQueriesTooOld; // Offset: 0x1C

    int c_programsBound; // Offset: 0x20

    int c_texturesBound; // Offset: 0x24

    int c_imageBuffersBound; // Offset: 0x28

    int c_buffersBound; // Offset: 0x2C

    int c_drawElements; // Offset: 0x30

    int c_gpuOnlyBatches; // Offset: 0x34

    int c_drawIndices; // Offset: 0x38

    int c_drawVertices; // Offset: 0x3C

    int c_computeDispatches; // Offset: 0x40

    int c_computeWorkgroups; // Offset: 0x44

    int c_RenderGather_drawElementsOpaque; // Offset: 0x48

    int c_RenderGather_numTotalStaticTris[5]; // Offset: 0x4C

    int c_RenderGather_numTotalDynamicTris[5]; // Offset: 0x60

    int c_RenderGather_numTotalGeomCacheTris[5]; // Offset: 0x74

    int c_RenderGather_numTotalFirstPersonTris[5]; // Offset: 0x88

    int c_NumGeoDecalProjections; // Offset: 0x9C

    // after gpu culling stats
    int c_AfterGPUCulling_numTotalStaticTris; // Offset: 0xA0

    int c_AfterGPUCulling_numTotalDynamicTris; // Offset: 0xA4

    int c_AfterGPUCulling_numTotalLODTris[5]; // Offset: 0xA8

    int c_UniqueVertices_UsedMemory; // Offset: 0xBC

    int c_UniqueVertices_TotalMemory; // Offset: 0xC0

    unsigned long long c_gpuSyncTimeUs; // Offset: 0xC8

}; // Size: 0xD0
