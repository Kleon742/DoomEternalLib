struct idDeclAnimWebBlendTree
{
    // this node's blend tree
    idMD6Node* tree; // Offset: 0x0

    // Index of first offset, so we can find nodes easily when setting up scalarpairs
    int allocatorIndex; // Offset: 0x8

    // How many nodes that were allocated
    int numNodesAllocated; // Offset: 0xC

    // index of the node this blend tree is for
    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > nodeIndex; // Offset: 0x10

    short modelIndex; // Offset: 0x12

    // scalar pairs for all leaves in this blend tree
    idList < idAnimWebScalarPair , TAG_ANIMWEB , false > scalarPairs; // Offset: 0x18

    // all reference blend tree leaves used at this animWeb node
    idList < idMD6LeafPlay * , TAG_ANIMWEB , false > leaves; // Offset: 0x30

    // all blend tree leaves used at this animWeb node
    idList < idMD6Leaf * , TAG_ANIMWEB , false > runtimeLeaves; // Offset: 0x48

}; // Size: 0x60
