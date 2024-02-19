struct idVecX
{
    // size of the vector
    int size; // Offset: 0x0

    // if -1 p points to data set with SetData
    int alloced; // Offset: 0x4

    // memory the vector is stored
    float* p; // Offset: 0x8

}; // Size: 0x10
