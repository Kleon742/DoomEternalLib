struct idAnimWebBlendTree
{
    // this node's blend tree
    idMD6Node* tree; // Offset: 0x0

    // index of the node this blend tree is for
    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > nodeIndex; // Offset: 0x8

    short modelIndex; // Offset: 0xA

    // pointer to owning animweb, so we can free leaves on delete - I don't particular like have a reference back to the owner, but in this case we want to ensure that destruction of the blend tree frees the associated web leaves
    idAnimator_AnimWeb* web; // Offset: 0x10

    // scalar pairs for all leaves in this blend tree
    idList < idAnimWebScalarPair , TAG_ANIMWEB , false > scalarPairs; // Offset: 0x18

    // all runtime blend tree leaves used at this animWeb node
    idList < idMD6Leaf * , TAG_ANIMWEB , false > runtimeLeaves; // Offset: 0x30

    // all blend tree reference leaves used at this animWeb node
    idList < idMD6LeafPlay * , TAG_ANIMWEB , false >* leavesFromDecl; // Offset: 0x48

}; // Size: 0x50
