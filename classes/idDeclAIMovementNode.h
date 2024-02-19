struct idDeclAIMovementNode : idTypeInfoGraphNode
{
    // name of state for creating idAnimWebState
    idAtomicString stateName; // Offset: 0x30

    // flags applied to this node
    aiMoveNodeOptionFlags_t nodeFlags; // Offset: 0x38

    // whether this node can be used
    bool enabled; // Offset: 0x0

}; // Size: 0x40
