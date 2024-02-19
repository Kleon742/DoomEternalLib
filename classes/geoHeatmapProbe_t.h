struct geoHeatmapProbe_t
{
    idVec3 pos; // Offset: 0x0

    geoHeatmapView_t views[6]; // Offset: 0x10

    idList < geoHeatMapEntity_t , TAG_IDLIST , false > entities; // Offset: 0x100

}; // Size: 0x118
