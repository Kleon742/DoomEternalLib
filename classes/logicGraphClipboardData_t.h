struct logicGraphClipboardData_t
{
    // Nodes
    idList < logicNodeAsset_t , TAG_LOGIC , false > nodes; // Offset: 0x0

    // Links
    idList < logicLinkAsset_t , TAG_LOGIC , false > links; // Offset: 0x18

}; // Size: 0x30
