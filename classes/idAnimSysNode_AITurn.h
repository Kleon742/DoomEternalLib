struct idAnimSysNode_AITurn : idAnimSysNode
{
    struct turnAnim_t : animInstance_t
    {
        // What angle this animation turns with
        float turnAngle; // Offset: 0x28

        unsigned char pad[4]; // Offset: 0x2C

        md6BlendOriginOutput_t originOutput; // Offset: 0x30

    }; // Size: 0xA0

    idList < idAnimSysNode_AITurn::turnAnim_t , TAG_IDLIST , false > turnLeftAnims; // Offset: 0xA8

    idList < idAnimSysNode_AITurn::turnAnim_t , TAG_IDLIST , false > turnRightAnims; // Offset: 0xC0

    idAnimSysNode_AITurn::turnAnim_t* curAnim0; // Offset: 0xD8

    idAnimSysNode_AITurn::turnAnim_t* curAnim1; // Offset: 0xE0

    float* refValuePtrNameTurnAngle; // Offset: 0xE8

    float blendValue; // Offset: 0xF0

    float loopCount; // Offset: 0xF4

    // In case of just one animation, scale the rotation
    float turnScale; // Offset: 0xF8

}; // Size: 0x100
