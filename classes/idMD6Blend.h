struct idMD6Blend
{
    enum blendOp_t : int
    {
        BOP_NO = 0,
        BOP_LERP = 1,
        BOP_REF_LERP = 2,
        BOP_LERP_ALPHAONEFORFILTERGROUP = 3,
        BOP_ADD_LEFT = 4,
        BOP_ADD_RIGHT = 5,
        BOP_SUB_LEFT = 6,
        BOP_SUB_RIGHT = 7,
        BOP_BLEND = 8,
        BOP_BLENDA = 9,
        BOP_PROCUSERCHANNELS = 10,
        BOP_MAX = 11
    };

    enum originBlend_t : int
    {
        ORIGINBLEND_BRANCH = 0,
        ORIGINBLEND_LEFT = 1,
        ORIGINBLEND_RIGHT = 2,
        ORIGINBLEND_DEFAULT = 0,
        ORIGINBLEND_SOURCE = 1,
        ORIGINBLEND_DEST = 2,
        ORIGINBLEND_MAX = 3
    };

    struct blendExport_t
    {
        float* localR; // Offset: 0x0

        float* localS; // Offset: 0x8

        // {{ units = m }}
        float* localT; // Offset: 0x10

        float* localU; // Offset: 0x18

        bool applyJointMods; // Offset: 0x20

    }; // Size: 0x28

    struct configInfo_t
    {
        // {{ units = m }}
        float visualOffset[4]; // Offset: 0x0

    }; // Size: 0x10

    struct jointMod_t
    {
        enum jointModFlags_t : unsigned short
        {
            JOINTMOD_NONE = 0,
            DRIVER_MODEL = 1,
            DRIVER_ROTATION = 2,
            DRIVER_SCALE = 4,
            DRIVER_TRANSLATION = 8,
            DRIVER_PIVOT = 16,
            DRIVER_OVERRIDE = 32,
            DRIVER_CONSTRAINT = 64,
            DRIVER_THREEJOINTIK = 128,
            DRIVER_IKJOINT = 256,
            POSE_REFERENCE = 512,
            POSE_FINAL = 1024,
            POST_POSE = 2048,
            DISABLED = 4096
        };

        // rotation
        float q[4]; // Offset: 0x0

        // translation
        float t[4]; // Offset: 0x10

        // scale
        float s[4]; // Offset: 0x20

        // index of joint
        idIndex < short , invalidJointIndex_t , - 1 > joint; // Offset: 0x30

        // index of joint that we will constrain to when using DRIVER_CONSTRAINT
        idIndex < short , invalidJointIndex_t , - 1 > constrainParentJoint; // Offset: 0x32

        // DRIVER_* flags
        unsigned short flags; // Offset: 0x34

        unsigned char pad[10]; // Offset: 0x36

    }; // Size: 0x40

    struct channelMod_t
    {
        idIndex < short , invalidUserChannelIndex_t , - 1 > index; // Offset: 0x0

        float value; // Offset: 0x4

    }; // Size: 0x8

    struct blendParms_t
    {
        // input:
        idMD6SkelData* skeleton; // Offset: 0x0

        float* originOffset; // Offset: 0x8

        // blend shape command list
        md6BlendShapeCommand_t* blendShapeCommands; // Offset: 0x10

        md6AnimCommand_t* cmds; // Offset: 0x18

        idMD6Blend::jointMod_t* mods; // Offset: 0x20

        idMD6Blend::channelMod_t* channelMods; // Offset: 0x28

        float* invertedBasePose; // Offset: 0x30

        unsigned char* jointRemap; // Offset: 0x38

        // morph map compression/decompression bias
        float morphMapBias[4]; // Offset: 0x40

        // morph map compression scale
        float morphMapCompressionScale[4]; // Offset: 0x50

        // morph map decompression scale
        float morphMapDecompressionScale[4]; // Offset: 0x60

        // Size of blendshape work buffer
        unsigned int blendShapeWorkBufferSize; // Offset: 0x70

        // Overall morphmap weight
        unsigned char morphMapWeight; // Offset: 0x74

        unsigned char pad[3]; // Offset: 0x75

        // blend shape command count
        unsigned int numBlendShapeCommands; // Offset: 0x78

        unsigned int numCmds; // Offset: 0x7C

        unsigned int numMods; // Offset: 0x80

        unsigned int numChannelMods; // Offset: 0x84

        // joint to skip when calculating bounds from joints
        idIndex < short , invalidJointIndex_t , - 1 > boundsSkipJoint; // Offset: 0x88

        idRigInstance* rigInstance; // Offset: 0x90

        // output: 3x4 matrices in model space
        float* referencePose; // Offset: 0xA0

        // 3x4 matrices in model space
        float* finalPose; // Offset: 0xA8

        // 3x4 matrices in model space from previous frame
        float* finalPosePrev; // Offset: 0xB0

        // 3x4 matrices relative to the base pose
        float* renderPose; // Offset: 0xB8

        // blended user channels output
        float* userChannels; // Offset: 0xC0

        // movement delta on the origin joint
        md6BlendOutputs_t* blendOutputs; // Offset: 0xC8

        idDrawDataList* drawData; // Offset: 0xD0

        idMD6Blend::blendExport_t* blendExport; // Offset: 0xD8

        // when using a copyPose node, this is a pointer to the jointmatrix buffer we will copy
        float* copyPose; // Offset: 0xE0

        // when using a copyPose node, this is the joint remap table from the copy pose to the target pose
        idIndex < short , invalidJointIndex_t , - 1 >* copyTargetJointRemap; // Offset: 0xE8

        // when using a copyPose node, this is the joint retargeting info
        float* copyTargetJointRetargetInfo; // Offset: 0xF0

    }; // Size: 0xF8

    struct frameOffsets_t
    {
        unsigned char leftFrameOffset[256]; // Offset: 0x0

        unsigned char rightFrameOffset[256]; // Offset: 0x100

        unsigned short leftKeyOffset[256]; // Offset: 0x200

        unsigned short rightKeyOffset[256]; // Offset: 0x400

    }; // Size: 0x600

    struct doubleStack_t
    {
        char* start; // Offset: 0x0

        char* end; // Offset: 0x8

        char* top; // Offset: 0x10

        char* bot; // Offset: 0x18

    }; // Size: 0x20

}; // Size: 0x1
