struct idTypeInfoSubGraph : idTypeInfoGraphItem
{
    // list of nodes that are in this subGraph
    idList < idTypeInfoGraphNode * , TAG_IDLIST , false > nodes; // Offset: 0x18

    // position of subGraph, relative to containing subGraph
    idVec2 position; // Offset: 0x30

    // bit mask of layers that this subGraph is enabled for
    typeInfoGraphLayersMask_t layersMask; // Offset: 0x38

}; // Size: 0x40
