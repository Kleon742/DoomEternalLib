struct idMatX
{
    // number of rows
    int numRows; // Offset: 0x0

    // number of columns
    int numColumns; // Offset: 0x4

    // floats allocated, if -1 then mat points to data set with SetData
    int alloced; // Offset: 0x8

    // memory the matrix is stored
    float* mat; // Offset: 0x10

}; // Size: 0x18
