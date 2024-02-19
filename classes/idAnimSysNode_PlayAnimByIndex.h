struct idAnimSysNode_PlayAnimByIndex : idAnimSysNode
{
    idList < idList < idAnimSysNode::animInstance_t , TAG_ANIMSYS > , TAG_ANIMSYS , false > anims; // Offset: 0xA8

    idAnimSysGenerateSupport::generateSlot_t* lastGenerateSlot; // Offset: 0xC0

    float* externalBlendPtr; // Offset: 0xC8

    float* externalTimePtr; // Offset: 0xD0

    float* externalTimeScalePtr; // Offset: 0xD8

    int useAnimIndex; // Offset: 0xE0

    int useAnimVariation; // Offset: 0xE4

    float loopCount; // Offset: 0xE8

    float varLoopCount; // Offset: 0xEC

}; // Size: 0xF0
