struct sourceSurface_t
{
    // / FIXME: We should not be writing out structs containing pointers to files source surface material
    idMaterial2* mtr; // Offset: 0x0

    // source surface material checksum
    int mtrChecksum; // Offset: 0x8

    // surface on the render model the source surface was merged into
    int renderSurface; // Offset: 0xC

    // vertex of the render model surface that is the first vertex of the source surface
    int firstVertex; // Offset: 0x10

    // vertex of the render model surface that is the last vertex of the source surface
    int lastVertex; // Offset: 0x14

}; // Size: 0x18
