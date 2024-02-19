struct idAnimSysNode_ExternalControl : idAnimSysNode
{
    idMD6Anim* curAnim; // Offset: 0xA8

    idMD6Anim* subtractiveAnim; // Offset: 0xB0

    idMD6Anim* additiveBaseAnim; // Offset: 0xB8

    idAnimSysNodeData::animLoopMode_t loopMode; // Offset: 0xC0

    float curLoopCount; // Offset: 0xC4

    bool advanceTime; // Offset: 0xC8

}; // Size: 0xD0
