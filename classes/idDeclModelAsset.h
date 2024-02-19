struct idDeclModelAsset : idDeclTypeInfo
{
    enum getAssetName_t : int
    {
        NONE = 0,
        USE_UVLAYOUT_LIGHTMAP = 1,
        IGNORE_VPAINT = 2
    };

    enum collisionType_t : int
    {
        NONE = 0,
        BOX = 1,
        CAPSULE = 2,
        SPHERE = 3,
        MESH = 4
    };

    enum modelAssetCopyFlags_t : int
    {
        ALL = 0
    };

    struct collisionInfo_t
    {
        struct proceduralShapes_t
        {
            // material to use on procedural shape
            idMaterial2* material; // Offset: 0x0

            // axis to create the capsule along
            idVec3 centerAxis; // Offset: 0x8

            // offset from origin
            idVec3 offset; // Offset: 0x14

            // radius of the shape
            float radius; // Offset: 0x20

            // length of capsule
            float length; // Offset: 0x24

        }; // Size: 0x28

        // type of collision to generated
        idDeclModelAsset::collisionType_t type; // Offset: 0x0

        // model to use for generating collision assets
        idAtomicString sourceModel; // Offset: 0x8

        // level of simplification, maxDeviation * 100
        int simplify; // Offset: 0x10

        // convex decomposition setting
        convexDecomposition_t convexDecomposition; // Offset: 0x14

        // information for setting up procedural shapes
        idDeclModelAsset::collisionInfo_t::proceduralShapes_t proceduralShapes; // Offset: 0x20

    }; // Size: 0x48

    // type of rendermodel to create
    idAtomicString type; // Offset: 0x88

    // lwo model
    idStrRenderModel model; // Offset: 0x90

    // paint history for m_model
    idAtomicString vpaint; // Offset: 0x98

    idRenderModel* (*createModelFunc)(const idDeclModelAsset * , const uint32); // Offset: 0xA0

    // setup information for collision
    idDeclModelAsset::collisionInfo_t collisionSetup; // Offset: 0xA8

}; // Size: 0xF0
