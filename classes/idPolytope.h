struct idPolytope
{
    enum side_t : int
    {
        SIDE_BACK = 0,
        SIDE_ON = 1,
        SIDE_FRONT = 2
    };

    struct polygon_t
    {
        idList < idPolytope::edge_t * , TAG_IDLIST , false > edges; // Offset: 0x0

    }; // Size: 0x18

    struct vertex_t
    {
        // {{ units = m }}
        idVec3 xyz; // Offset: 0x0

        // {{ units = m }}
        float dist; // Offset: 0xC

        idPolytope::side_t side; // Offset: 0x10

    }; // Size: 0x14

    struct edge_t
    {
        // vertices that define this edge
        idPolytope::vertex_t* verts[2]; // Offset: 0x0

        // polygons that define this edge
        polygon_t* polygons[2]; // Offset: 0x10

    }; // Size: 0x20

    idList < idPolytope::vertex_t * , TAG_IDLIST , false > vertices; // Offset: 0x0

    idList < idPolytope::edge_t * , TAG_IDLIST , false > edges; // Offset: 0x18

    idList < idPolytope::polygon_t * , TAG_IDLIST , false > polygons; // Offset: 0x30

    idBlockAlloc < idPolytope::vertex_t , 32 , TAG_COMPILER > polytopeVertexAllocator; // Offset: 0x48

    idBlockAlloc < idPolytope::edge_t , 32 , TAG_COMPILER > polytopeEdgeAllocator; // Offset: 0x70

    idBlockAlloc < idPolytope::polygon_t , 32 , TAG_COMPILER > polytopePolygonAllocator; // Offset: 0x98

}; // Size: 0xC0
