struct idAnimSysNode_CustomCommands : idAnimSysNode
{
    struct commandInstance_t : idAnimSysNode::idAnimSysNode::animInstance_t
    {
        float* externalLoopCountPtr; // Offset: 0x28

        float* externalBlendValuePtr; // Offset: 0x30

        unsigned char* jointWeights; // Offset: 0x38

    }; // Size: 0x40

    idList < idAnimSysNode_CustomCommands::commandInstance_t , TAG_IDLIST , false > commandEntries; // Offset: 0xA8

}; // Size: 0xC0
