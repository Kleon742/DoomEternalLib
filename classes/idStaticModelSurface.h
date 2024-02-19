struct idStaticModelSurface
{
    // Setting material to NULL will disable the surface.
    idMaterial2* material; // Offset: 0x0

    // Triangles that are rendered with LOD
    idArray < idTriangles * , 5 > geometry; // Offset: 0x8

    // Specified as <materialname>&<number> by artists.
    int materialNum; // Offset: 0x30

    // If true don't free the triangles, the pointer points into another model.
    bool geometryIsReference; // Offset: 0x34

}; // Size: 0x38
