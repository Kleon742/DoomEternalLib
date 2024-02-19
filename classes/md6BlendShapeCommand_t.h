struct md6BlendShapeCommand_t
{
    enum enum_BC00 : int
    {
        OP_NO = 0,
        OP_INIT = 1,
        OP_END = 2,
        OP_BLEND = 3,
        OP_BLANK = 4
    };

    md6BlendShapeCommand_t::enum_BC00 op; // Offset: 0x0

    float weight; // Offset: 0x4

    int numVerts; // Offset: 0x8

    unsigned char* input; // Offset: 0x10

    unsigned char* output; // Offset: 0x18

}; // Size: 0x20
