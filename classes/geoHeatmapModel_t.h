struct geoHeatmapModel_t
{
    idStr name; // Offset: 0x0

    float committedLodDeviations[5]; // Offset: 0x30

    int numSurfaces; // Offset: 0x44

    idList < geoHeatmapSurfaceInfo_t , TAG_IDLIST , false > surfaceInfo; // Offset: 0x48

}; // Size: 0x60
