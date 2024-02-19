struct aiPositioningQuery_t
{
    // {{ units = m }}
    idStaticList < idVec3 , 256 , false , TAG_IDLIST > origins; // Offset: 0x0

    // each int int in results is encoded as 8 individual 4 bit portions
    idStaticList < idAIPositionCollisions , 256 , false , TAG_IDLIST > results; // Offset: 0xC18

    idSpawnId spawnId; // Offset: 0x1030

    float fovDot; // Offset: 0x1034

    // {{ units = m }}
    float distance; // Offset: 0x1038

    int monsterTypes; // Offset: 0x103C

    int myIntentCollectionIndex; // Offset: 0x1040

    bool dirty; // Offset: 0x1044

}; // Size: 0x1048
