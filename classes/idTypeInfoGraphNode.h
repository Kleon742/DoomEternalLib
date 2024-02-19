struct idTypeInfoGraphNode : idTypeInfoGraphItem
{
    // position of node, relative to containing subGraph
    idVec2 position; // Offset: 0x18

    // flag for the node to hide it from anything external to the graph
    bool internalOnly; // Offset: 0x20

    // bit mask of layers that this node is enabled for
    typeInfoGraphLayersMask_t layersMask; // Offset: 0x28

}; // Size: 0x30
