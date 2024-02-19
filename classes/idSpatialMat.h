struct idSpatialMat
{
    // number of rows
    int numRows; // Offset: 0x0

    // number of columns
    int numColumns; // Offset: 0x4

    // rows allocated, negative if data set with SetData
    int allocatedRows; // Offset: 0x8

    // memory the matrix is stored, operated on by SIMD, so it must be 16 byte aligned
    float* mat; // Offset: 0x10

}; // Size: 0x18
