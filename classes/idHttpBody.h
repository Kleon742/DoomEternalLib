struct idHttpBody
{
    struct bufferPosition_t
    {
        size_t offset; // Offset: 0x0

        size_t bufferOffset; // Offset: 0x8

        int bufferIndex; // Offset: 0x10

    }; // Size: 0x18

    struct chunkedBufferPosition_t
    {
        // Length of the current chunk
        size_t chunkLength; // Offset: 0x0

        // Offset into the current chunk
        size_t chunkOffset; // Offset: 0x8

        idHttpBody::bufferPosition_t position; // Offset: 0x10

    }; // Size: 0x28

    typedef idPair < byte * , size_t > buffer_t;

    idList < idPair < byte * , size_t > , TAG_IDLIST , false > buffers; // Offset: 0x0

    size_t length; // Offset: 0x18

    size_t lastBufferLength; // Offset: 0x20

    bool finalized; // Offset: 0x28

    bool chunked; // Offset: 0x29

}; // Size: 0x30
