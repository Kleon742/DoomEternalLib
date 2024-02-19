struct idAnimSysNodeData_StateMachine : idAnimSysNodeData
{
    // Using def on this so that the animsyseditor don't include this in the normal edit field (since it's recursive) Nodes in this state machine
    idList < idAnimSysNodeData * , TAG_ANIMSYS , false > nodes; // Offset: 0xB8

    // Default start state
    idAnimSysTargetNode defaultNode; // Offset: 0xD0

}; // Size: 0xD8
