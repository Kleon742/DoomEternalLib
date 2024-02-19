struct idAnimSysNode_SerialNodes : idAnimSysNode
{
    float* externalBlendPtr; // Offset: 0xA8

    // Def so we can find it with typeinfotools
    idList < idAnimSysNode * , TAG_ANIMSYS , false > nodes; // Offset: 0xB0

    idList < idAnimSysGenerateSupport , TAG_IDLIST , false > generateSupports; // Offset: 0xC8

    unsigned int enterCounter; // Offset: 0xE0

    int lastGenerateCycle; // Offset: 0xE4

    bool doExitCheck; // Offset: 0xE8

}; // Size: 0xF0
