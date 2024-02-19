struct idAnimSysNode_4CornerBlend : idAnimSysNode
{
    idAnimSysNode::animInstance_t baseAnim; // Offset: 0xA8

    idAnimSysNode::animInstance_t anims[4]; // Offset: 0xD0

    float* refValuePtrFirstSecond; // Offset: 0x170

    float* refValuePtrThirdFourth; // Offset: 0x178

}; // Size: 0x180
