struct idMidnightGraphPathNode : idClass
{
    // indicate the type of node
    idMidnight::NodeType_t nodeType; // Offset: 0x10

    // indicate the unique id of node.
    idMidnightObjectUID < idMidnightNodeUIDType , 255 > uid; // Offset: 0x14

    // kept for backward compatibility
    idAtomicString nodeName; // Offset: 0x18

    // properties of the node
    idMidnightGraphPathNodeProp* properties; // Offset: 0x20

    // the node position
    idVec2 nodePos; // Offset: 0x28

}; // Size: 0x30
