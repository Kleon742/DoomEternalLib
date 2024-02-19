struct layerNode_t
{
    // hierarchy
    layerNode_t* parent; // Offset: 0x0

    idList < layerNode_t * , TAG_GAME , false > children; // Offset: 0x8

    // data
    idList < int , TAG_GAME , false > mapEntityIndexes; // Offset: 0x20

    // runtime data
    idList < idSpawnId , TAG_GAME , false > entities; // Offset: 0x38

    idList < int , TAG_GAME , false > rendermodelIdxs; // Offset: 0x50

    idList < idPair < resourceID_t , idSpawnId > , TAG_GAME , false > spawnIdCache; // Offset: 0x68

    layerState_t state; // Offset: 0x80

}; // Size: 0x90
