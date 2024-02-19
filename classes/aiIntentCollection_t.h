struct aiIntentCollection_t
{
    idMat3 axis; // Offset: 0x0

    // {{ units = m }}
    idVec3 origin; // Offset: 0x24

    idStaticList < aiIntent_t , 2 , false , TAG_IDLIST > intents; // Offset: 0x30

    idSpawnId spawnId; // Offset: 0xA0

    // {{ units = m }}
    float radius; // Offset: 0xA4

    aiMonsterType_t monsterType; // Offset: 0xA8

}; // Size: 0xB0
