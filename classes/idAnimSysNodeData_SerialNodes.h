struct idAnimSysNodeData_SerialNodes : idAnimSysNodeData
{
    // Using def on this so that the animsyseditor don't include this in the normal edit field (since it's recursive) Nodes in this instance
    idList < idAnimSysNodeData * , TAG_ANIMSYS , false > nodes; // Offset: 0xB8

    // External blend modifier between the nodes (0-1)
    idAtomicString externalBlendRef; // Offset: 0xD0

}; // Size: 0xD8
