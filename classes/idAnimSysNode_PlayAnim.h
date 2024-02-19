struct idAnimSysNode_PlayAnim : idAnimSysNode
{
    idAnimSysNode::animInstance_t animInstance; // Offset: 0xA8

    idAnimSysGenerateSupport::generateSlot_t* lastGenerateSlot; // Offset: 0xD0

    float* externalBlendPtr; // Offset: 0xD8

    float* externalTimePtr; // Offset: 0xE0

    float* externalTimeScalePtr; // Offset: 0xE8

    float originalTimeScale; // Offset: 0xF0

}; // Size: 0xF8
