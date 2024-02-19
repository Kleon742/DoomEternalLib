struct idRenderModelSurface
{
    // Setting material to NULL will disable the surface.
    idMaterial2* material; // Offset: 0x0

    // Triangles that are rendered with LOD
    idArray < idTriangles * , 5 > geometry; // Offset: 0x8

    // Extra state bits or'd with prog->glState.
    unsigned long long extraGLState; // Offset: 0x30

    // Number of idTriangle pointers per geometry
    int numGeometries; // Offset: 0x38

    layeredMaterialId_t layeredMaterialId; // Offset: 0x3C

    streamedLayeredMaterialId_t layeredStreamPacketId; // Offset: 0x40

    // If true don't free the triangles, the pointer points into another model.
    bool geometryIsReference; // Offset: 0x0

    // If true don't free the joints, the pointer points into another model.
    bool jointsAreReference; // Offset: 0x0

    bool streamEnabled; // Offset: 0x0

    bool streamUseModelBounds; // Offset: 0x0

    // If true, need to use delete[] in FreeSurfaces instead of delete
    bool geometryArrays; // Offset: 0x0

    // surface specific parm block
    idGrowableParmBlock < 12 > parmBlock; // Offset: 0x50

}; // Size: 0x140
