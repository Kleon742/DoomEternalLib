struct idAnimSysGenerateSupport
{
    enum enum_11800 : int
    {
        GENERATE_MAX_ANIMQUEUE_SIZE = 16
    };

    struct generateSlot_t
    {
        idAnimSysNode::blendInfo_t blendInfo; // Offset: 0x0

        idAnimSysNode* node; // Offset: 0x20

        void* nodeData; // Offset: 0x28

    }; // Size: 0x30

    struct pushedPose_t
    {
        md6AnimCommand_t* blendCmd; // Offset: 0x0

        md6AnimCommand_t* poseBlendCmd; // Offset: 0x8

        float generatorAlpha; // Offset: 0x10

        float poseAlpha; // Offset: 0x14

        int startNumCommands; // Offset: 0x18

        idMD6Blend::blendOp_t blendOp; // Offset: 0x1C

    }; // Size: 0x20

    idRingList < idAnimSysGenerateSupport::generateSlot_t , 16 > nodeGenerateQueue; // Offset: 0x0

    idRingList < idAnimSysGenerateSupport::pushedPose_t , 16 > poseStack; // Offset: 0x308

    idAnimSysNode::blendInfo_t blendInfo; // Offset: 0x510

    unsigned long long nodeFlags; // Offset: 0x530

    bool lerpPoses; // Offset: 0x538

}; // Size: 0x540
