struct worldGeometryLayout_t
{
    unsigned int size; // Offset: 0x0

    unsigned int numVertexStreams; // Offset: 0x4

    unsigned int vertexMasks[9]; // Offset: 0x8

    unsigned int vertexOffsets[9]; // Offset: 0x2C

    unsigned int indexOffset; // Offset: 0x50

}; // Size: 0x54
