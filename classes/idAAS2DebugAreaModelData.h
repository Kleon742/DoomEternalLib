struct idAAS2DebugAreaModelData
{
    struct debugAreaInfo_t
    {
        int firstVertexIndex; // Offset: 0x0

        // numTris = numVertices / 3
        int numVertices; // Offset: 0x4

    }; // Size: 0x8

    // all vertices in the model {{ units = m }}
    idList < idVec3 , TAG_IDLIST , false > vertices; // Offset: 0x0

    // indices for all triangles, logically grouped by area
    idList < int , TAG_IDLIST , false > indices; // Offset: 0x18

    // tris for each area
    idList < idAAS2DebugAreaModelData::debugAreaInfo_t , TAG_IDLIST , false > areas; // Offset: 0x30

}; // Size: 0x48
