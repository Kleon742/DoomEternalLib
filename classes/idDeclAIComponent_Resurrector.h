struct idDeclAIComponent_Resurrector : idDeclAIComponent
{
    // temp
    idList < const idDeclEntityDef * , TAG_IDLIST , false > stuffToSpawn; // Offset: 0x98

    // FOR DEV/DEBUGGING ONLY -- Filter monster types that can be summoned from summons list below.
    aiMonsterType_t summonMonsterTypeFilter_devOnly; // Offset: 0xB0

    // defines what can be summoned, and how
    idList < archvileSummonData_t , TAG_IDLIST , false > summons; // Offset: 0xB8

}; // Size: 0xD0
