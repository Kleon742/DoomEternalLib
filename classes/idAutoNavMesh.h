struct idAutoNavMesh : idResource
{
    struct face_t
    {
        int startEdgeIndex; // Offset: 0x0

        int numEdges; // Offset: 0x4

    }; // Size: 0x8

    struct edge_t
    {
        // start, end
        int vertexIndex[2]; // Offset: 0x0

        int faceIndex; // Offset: 0x8

        int oppositeEdgeIndex; // Offset: 0xC

        int oppositeFaceIndex; // Offset: 0x10

        int flags; // Offset: 0x14

    }; // Size: 0x18

    // Data
    idList < idAutoNavMesh::face_t , TAG_IDLIST , false > faces; // Offset: 0x58

    idList < idAutoNavMesh::edge_t , TAG_IDLIST , false > edges; // Offset: 0x70

    idList < idVec3 , TAG_IDLIST , false > vertices; // Offset: 0x88

}; // Size: 0xA0
