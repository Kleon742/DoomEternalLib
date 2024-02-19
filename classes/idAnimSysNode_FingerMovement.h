struct idAnimSysNode_FingerMovement : idAnimSysNode
{
    idList < idAnimSysNode::animInstance_t , TAG_IDLIST , false > fingerMovementAnims; // Offset: 0xA8

    animInstance_t* currentAnimInstance; // Offset: 0xC0

    unsigned long long fingerMovementActiveFlag; // Offset: 0xC8

    float* externalTimeScalePtr; // Offset: 0xD0

    float* externalBlendPtr; // Offset: 0xD8

}; // Size: 0xE0
