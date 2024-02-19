struct cm_polytope_t
{
    // polytope bounds
    idBoundsShort bounds; // Offset: 0x0

    // material index
    unsigned char material; // Offset: 0xC

    // number of bounding planes
    unsigned char numPlanes; // Offset: 0xD

    // first plane in cm_polytopePlane_t list
    unsigned short firstPlane; // Offset: 0xE

}; // Size: 0x10
