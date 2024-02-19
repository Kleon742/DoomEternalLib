struct idMD6Util
{
    enum enum_1F700 : int
    {
        FRAME_FIRST = 0,
        FRAME_LAST = -1
    };

    struct animDelta_t
    {
        // {{ units = m }}
        idVec3 deltaTranslation; // Offset: 0x0

        idMat3 deltaAxis; // Offset: 0xC

    }; // Size: 0x30

    struct idAnimWebBlendInfo
    {
        short startBlendFrame; // Offset: 0x0

        short endBlendFrame; // Offset: 0x2

    }; // Size: 0x4

    struct idAnimPoseErrorResult
    {
        float totalPoseError; // Offset: 0x0

        float maxJointError; // Offset: 0x4

        int maxErrorFrame; // Offset: 0x8

        idIndex < short , invalidJointIndex_t , - 1 > maxJointErrorJointIndex; // Offset: 0xC

        idList < float , TAG_IDLIST , false > maxJointErrors; // Offset: 0x10

    }; // Size: 0x28

    struct idJointCache
    {
        idJointMat jointMatrices[256]; // Offset: 0x0

        idDeclAnimWeb* webRef; // Offset: 0x3000

        idDeclMD6* md6Decl; // Offset: 0x3008

        idMD6Anim* md6anim; // Offset: 0x3010

        int frameNum; // Offset: 0x3018

        bool validJointCache; // Offset: 0x301C

    }; // Size: 0x3020

    struct meshShowHideInfo_t
    {
        // meshes hidden with upgrade
        idList < idAtomicString , TAG_IDLIST , false > meshesToHide; // Offset: 0x0

        // meshes shown with upgrade
        idList < idAtomicString , TAG_IDLIST , false > meshesToShow; // Offset: 0x18

        // kit to show from the BODY kit group
        idAtomicString bodyKit; // Offset: 0x30

    }; // Size: 0x38

    typedef bool (*pfnCheckDestAnim)(const idDeclAnimWeb * webRef , const idMD6Anim * md6Anim);

}; // Size: 0x1
