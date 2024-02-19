struct idAnimSysNode_idAnimated : idAnimSysNode
{
    idList < idAnimated::anim_t , TAG_IDLIST , false >* animList; // Offset: 0xA8

    idAnimSysNode::animInstance_t* lastAnimInstance; // Offset: 0xB0

    idAnimSysNode::animInstance_t animInstances[2]; // Offset: 0xB8

    int curAnim; // Offset: 0x108

    int curInstance; // Offset: 0x10C

    bool loopAnimList; // Offset: 0x110

    bool keepOneUpdate; // Offset: 0x111

}; // Size: 0x118
