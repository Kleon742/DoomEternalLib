struct idAnimWebScalarPair
{
    enum fieldFlag_t : int
    {
        FF_NO_OVERRIDE = 0,
        FF_COPY_PRE_BLEND = 1,
        FF_COPY_ON_PLAY = 2,
        FF_INDEX_MODULO = 4,
        FF_INDEX_OFFSET = 8,
        FF_INDEX_TAG = 16,
        FF_COPY_ON_WRAP = 32
    };

    enum scalarType_t : int
    {
        FT_CUR_ALPHA = 0,
        FT_RATE_SCALE = 1,
        FT_ANIMATION = 2,
        FT_PAUSE_FRAME = 3,
        FT_COORDINATE = 4
    };

    // index into list of idAnimWebScalars
    int scalarIndex; // Offset: 0x0

    // blend node coordinate index
    int coordinateIndex; // Offset: 0x4

    // pointer to the node
    idMD6Node* node; // Offset: 0x8

    // enum indicating which field in the node this scalar updates
    unsigned char fieldType; // Offset: 0x10

    // flags inidicating special properties for this scalar
    unsigned char fieldFlags; // Offset: 0x11

    // blind data
    unsigned char data1; // Offset: 0x12

    // blind data
    unsigned char data2; // Offset: 0x13

}; // Size: 0x18
