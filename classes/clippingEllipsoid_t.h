struct clippingEllipsoid_t
{
    // matrix
    idMat3 ellipsoidAxis; // Offset: 0x0

    // position
    idVec3 ellipsoidPosition; // Offset: 0x24

    // whether or not to use ellipsoid
    bool useEllipsoid; // Offset: 0x30

}; // Size: 0x34
