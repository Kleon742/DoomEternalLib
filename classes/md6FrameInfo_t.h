struct md6FrameInfo_t
{
    // decode a pose from this animation
    idMD6AnimData* animData; // Offset: 0x0

    // decode a pose from this frame set of the animation
    frameSetData_t* frameSetData; // Offset: 0x8

    // / FIXME: we need to copy anim mods to a buffer -- this pointer currently points to an idMD6PauseLeaf and there / is no guarantee that leaf won't be deleted while the blend job is in flight. mods applied to the animation
    idMD6Blend::jointMod_t* animMods; // Offset: 0x10

    // If whoever sent this command need origin info back
    md6BlendOriginOutput_t* specificOriginOutPut; // Offset: 0x18

    // md6FrameInfoFlags_t
    unsigned short flags; // Offset: 0x20

    // parameter to idMD6SkelData::GetJointWeights and idMD6SkelData::GetUserWeights
    unsigned short weightGroup; // Offset: 0x22

    // size of the animation header
    unsigned short animInfoSize; // Offset: 0x24

    // size of the frame set
    unsigned short frameSetSize; // Offset: 0x26

    // size of the anim mod array
    unsigned short animModsSize; // Offset: 0x28

    short frame; // Offset: 0x2A

    float frameFraction; // Offset: 0x2C

    short frameSetFrame; // Offset: 0x30

    short originFrame; // Offset: 0x32

    float originFrameFraction; // Offset: 0x34

    short originFrameSetFrame; // Offset: 0x38

    // size of the frame set for the previous origin frame
    unsigned short originFrameSetSize; // Offset: 0x3A

    // pointer to the frame set that holds the previous origin frame (may be NULL if this is the first frame of the animation or this animation doesn't contribute to the origin delta)
    frameSetData_t* originFrameSetData; // Offset: 0x40

    short originFrame2; // Offset: 0x48

    float originFrameFraction2; // Offset: 0x4C

    short originFrameSetFrame2; // Offset: 0x50

    // size of the frame set for the previous origin frame
    unsigned short originFrameSetSize2; // Offset: 0x52

    // pointer to the frame set that holds the previous origin frame (may be NULL if this is the first frame of the animation or this animation doesn't contribute to the origin delta)
    frameSetData_t* originFrameSetData2; // Offset: 0x58

    // total alpha this leaf contributes to final blended tree result
    float totalAlpha; // Offset: 0x60

}; // Size: 0x68
