struct idAnimSysNode_StateMachine : idAnimSysNode
{
    // Def so we can find it with typeinfotools
    idList < idAnimSysNode * , TAG_ANIMSYS , false > nodes; // Offset: 0xA8

    idAnimSysNode* defaultNode; // Offset: 0xC0

    // Only the last active node is updated
    idAnimSysNode* activeNode; // Offset: 0xC8

}; // Size: 0xD0
