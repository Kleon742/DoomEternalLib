struct idDeclNarrativeNode : idTypeInfoGraphNode
{
    // actions to take when this node executes
    idList < narrativeAction_t , TAG_IDLIST , false > actions; // Offset: 0x30

    // actions to take when leaving this node.
    idList < narrativeAction_t , TAG_IDLIST , false > postActions; // Offset: 0x48

}; // Size: 0x60
