struct idTriangulatorEC
{
    struct triNode
    {
        // index in the polygon point array
        int index; // Offset: 0x0

        int vertPrev; // Offset: 0x4

        // link to next/previous vertex
        int vertNext; // Offset: 0x8

        int crPrev; // Offset: 0xC

        // link to next/previous convex or reflex vert
        int crNext; // Offset: 0x10

        int earPrev; // Offset: 0x14

        // link to next/previous ear tip vert;
        int earNext; // Offset: 0x18

        bool isConvex; // Offset: 0x1C

        bool isEar; // Offset: 0x1D

    }; // Size: 0x20

    typedef idTriangulatorEC::triNode triNode_t;

    // {{ units = m }}
    idList < idVec2 , TAG_IDLIST , false >* polygonPoints; // Offset: 0x0

    idList < int , TAG_IDLIST , false > triangles; // Offset: 0x8

    idList < idTriangulatorEC::triNode , TAG_IDLIST , false > linkedList; // Offset: 0x20

    int earFirst; // Offset: 0x38

    int earLast; // Offset: 0x3C

    int cvxFirst; // Offset: 0x40

    int cvxLast; // Offset: 0x44

    int refFirst; // Offset: 0x48

    int refLast; // Offset: 0x4C

}; // Size: 0x50
