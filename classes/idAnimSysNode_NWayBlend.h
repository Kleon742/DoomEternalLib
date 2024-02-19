struct idAnimSysNode_NWayBlend : idAnimSysNode
{
    struct nwayAnimInstance_t : idAnimSysNode::idAnimSysNode::animInstance_t
    {
        // m/s for this anim
        float speedBlendScale; // Offset: 0x28

    }; // Size: 0x30

    idList < idAnimSysNode_NWayBlend::nwayAnimInstance_t , TAG_IDLIST , false > anims; // Offset: 0xA8

    idAnimSysNode_NWayBlend::nwayAnimInstance_t* curAnim0; // Offset: 0xC0

    idAnimSysNode_NWayBlend::nwayAnimInstance_t* curAnim1; // Offset: 0xC8

    float curAnimAlpha; // Offset: 0xD0

    float loopCount; // Offset: 0xD4

    int lastAliasEnumValue; // Offset: 0xD8

    float* refValuePtr; // Offset: 0xE0

    // {{ units = m / s }}
    float* refSpeedPtr; // Offset: 0xE8

}; // Size: 0xF0
