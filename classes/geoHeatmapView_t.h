struct geoHeatmapView_t
{
    idList < geoHeatmapRenderModel_t , TAG_IDLIST , false > renderModelInfo; // Offset: 0x0

    int numDecals; // Offset: 0x18

    int numVisibleSurfaceTris; // Offset: 0x1C

    int numVisibleSurfaceVerts; // Offset: 0x20

}; // Size: 0x28
