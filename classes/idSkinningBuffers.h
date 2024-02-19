struct idSkinningBuffers
{
    enum enum_1B400 : int
    {
        MAX_NUM_BUFFERS = 5
    };

    idArray < idBufferObject , 5 > refBuffers; // Offset: 0x0

    idBufferObject buffer; // Offset: 0x208

    idBufferObject drawBuffers; // Offset: 0x270

    int index; // Offset: 0x2D8

    int indexCommitted; // Offset: 0x2DC

    int indexCommittedPrevious; // Offset: 0x2E0

    int indexDeferred; // Offset: 0x2F4

    idDefragAllocatorHdl bufferHdl; // Offset: 0x2F8

    idDefragAllocatorHdl bufferDrawHdl; // Offset: 0x2FC

}; // Size: 0x300
