struct md6AnimCommand_t
{
    enum enum_BB00 : int
    {
        OP_NO = 0,
        OP_END = 1,
        OP_DECODE_AND_PUSH = 2,
        OP_DECODE_MORPHCOMPOSITE_AND_BLEND = 3,
        OP_POP_AND_BLEND = 4,
        OP_COPY_POSE = 5
    };

    md6AnimCommand_t::enum_BB00 op; // Offset: 0x0

    md6FrameInfo_t frameInfo; // Offset: 0x8

    md6BlendInfo_t blendInfo; // Offset: 0x70

    md6AnimEventInfo_t animEventInfo; // Offset: 0x80

    int debugCommand; // Offset: 0xA0

    char* animName; // Offset: 0xA8

}; // Size: 0xB0
