struct idHavokModelData
{
    struct triangle_t
    {
        int a; // Offset: 0x0

        int b; // Offset: 0x4

        int c; // Offset: 0x8

        int material; // Offset: 0xC

    }; // Size: 0x10

    struct material_t
    {
        int contentFlags; // Offset: 0x0

        int surfaceType; // Offset: 0x4

        int surfaceFlags; // Offset: 0x8

        int surfaceVelocityGroup; // Offset: 0xC

        float staticFriction; // Offset: 0x10

        float dynamicFriction; // Offset: 0x14

        float restitution; // Offset: 0x18

        // For debugging purposes only
        char sourceFileName[1024]; // Offset: 0x1C

    }; // Size: 0x41C

    struct idConvexPolytope
    {
        idList < idVec3 , TAG_IDLIST , false > vertices; // Offset: 0x0

        idHavokModelData::material_t material; // Offset: 0x18

    }; // Size: 0x438

    struct idTriangleMesh
    {
        // 14 bits max within shape key bits
        idList < idHavokModelData::triangle_t , TAG_IDLIST , false > triangles; // Offset: 0x0

        idList < idVec3 , TAG_IDLIST , false > vertices; // Offset: 0x18

        idList < idHavokModelData::material_t , TAG_IDLIST , false > materials; // Offset: 0x30

        // This is populated if convex hulls are detected in the lwo
        idList < idHavokModelData::idConvexPolytope , TAG_IDLIST , false > convexHulls; // Offset: 0x48

    }; // Size: 0x60

    struct idTriangleInstance
    {
        int meshIndex; // Offset: 0x0

        idVec3 origin; // Offset: 0x4

        idQuat orientation; // Offset: 0x10

        idVec3 scale; // Offset: 0x20

    }; // Size: 0x2C

    idList < idHavokModelData::idConvexPolytope , TAG_IDLIST , false > polytopes; // Offset: 0x0

    idList < idHavokModelData::idTriangleMesh , TAG_IDLIST , false > triangleMeshes; // Offset: 0x18

    idList < idHavokModelData::idTriangleInstance , TAG_IDLIST , false > triangleInstances; // Offset: 0x30

}; // Size: 0x48
