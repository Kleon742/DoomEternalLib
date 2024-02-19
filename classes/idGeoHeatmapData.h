struct idGeoHeatmapData : idResource
{
    int numModels; // Offset: 0x58

    int numProbes; // Offset: 0x5C

    int fileVersion; // Offset: 0x60

    int mapVersion; // Offset: 0x64

    int numEntityLists; // Offset: 0x68

    idList < geoHeatmapModel_t , TAG_IDLIST , false > models; // Offset: 0x70

    idList < geoHeatmapProbe_t , TAG_IDLIST , false > probes; // Offset: 0x88

}; // Size: 0xA0
