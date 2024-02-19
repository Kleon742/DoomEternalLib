struct idBufferObject
{
    struct subUpdate_t
    {
        void* data; // Offset: 0x0

        int dstOffset; // Offset: 0x8

        int size; // Offset: 0xC

    }; // Size: 0x10

    struct subTransformUpdate_t
    {
        void* data; // Offset: 0x0

        unsigned int dataVertexMask; // Offset: 0x8

        unsigned int dstOffset; // Offset: 0xC

        unsigned int bufferVertexMask; // Offset: 0x10

        vertexCompression_t* vertexCompression; // Offset: 0x18

        int numVerts; // Offset: 0x20

    }; // Size: 0x28

    struct subUpdateToken_t
    {
    }; // Size: 0x8

    // size in bytes
    int size; // Offset: 0x0

    // offset in bytes
    int offsetInOtherBuffer; // Offset: 0x4

    bufferMemoryType_t memoryType; // Offset: 0x8

    bufferObjectFlags_t flags; // Offset: 0x9

    unsigned char isMapped; // Offset: 0x0

    unsigned char ownsBuffer; // Offset: 0x0

    void* apiObject; // Offset: 0x10

    idBufferView baseView; // Offset: 0x18

}; // Size: 0x68
