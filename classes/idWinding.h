struct idWinding
{
    // number of points
    int numPoints; // Offset: 0x8

    // pointer to point data
    idVec5* p; // Offset: 0x10

    int allocedSize; // Offset: 0x18

}; // Size: 0x20
