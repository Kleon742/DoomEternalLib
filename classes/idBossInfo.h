struct idBossInfo : idBloatedEntity
{
    struct bossData_t
    {
        bool alive; // Offset: 0x0

        idEntityPtr_ThreadSafe < idAI2 > boss; // Offset: 0x8

    }; // Size: 0x20

    idStaticList < idBossInfo::bossData_t , 2 , false , TAG_IDLIST > bossDatum; // Offset: 0xB88

    // AI type of boss(s)
    aiMonsterType_t bossType; // Offset: 0xBE0

    // string keys to identify the bosses to associate with this entity
    idList < idAtomicString , TAG_IDLIST , false > bossKeys; // Offset: 0xBE8

}; // Size: 0xC00
