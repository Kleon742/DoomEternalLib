struct idStreamDecoder
{
    enum enum_1C600 : int
    {
        MAX_DECODERS = 16
    };

    struct jobDef_t
    {
        streamDecoderInterface_t* decodeIface; // Offset: 0x0

        void* decodeParms; // Offset: 0x8

        void* initialSource; // Offset: 0x10

        size_t initialSourceLen; // Offset: 0x18

        unsigned int priority; // Offset: 0x20

        streamDecodeCallbacks_t* callbacks; // Offset: 0x28

        void* cbParm; // Offset: 0x30

    }; // Size: 0x38

    struct stats_t
    {
        long long bytesPushed; // Offset: 0x0

        long long bytesPulled; // Offset: 0x8

        long long bytesPushedByCompression[16]; // Offset: 0x10

        long long bytesPulledByCompression[16]; // Offset: 0x90

    }; // Size: 0x110

}; // Size: 0x8
