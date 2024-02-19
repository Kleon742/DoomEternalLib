struct idSpatialVec
{
    // size of the vector
    short size; // Offset: 0x0

    // 1 if allocated, 0 if data is set with SetData
    short allocated; // Offset: 0x2

    // memory the vector is stored, operated on by SIMD so it must be 16 byte aligned
    float* p; // Offset: 0x8

}; // Size: 0x10
