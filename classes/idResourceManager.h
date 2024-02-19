struct idResourceManager
{
    struct kickOffStreamingParm_t
    {
        idGameSpawnInfo* mapSpawnInfo; // Offset: 0x0

        idMapFileStaticInstances* staticInstances; // Offset: 0x8

        idStaticStreamTree* staticStreamTree; // Offset: 0x10

        idStaticGeoStreamTree* staticGeoStreamTree; // Offset: 0x18

        idStaticLightProbeStreamWorld* staticLightProbeStreamWorld; // Offset: 0x20

        idPrefetchGraphResource* prefetchGraph; // Offset: 0x28

        lightmapData_t* lightDb; // Offset: 0x30

    }; // Size: 0x38

}; // Size: 0x8
