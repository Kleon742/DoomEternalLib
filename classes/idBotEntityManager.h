struct idBotEntityManager
{
    // this changes anytime the entity list changes.
    unsigned int currentEntityListHandle; // Offset: 0x0

    idStaticList < botEntityInfo_t , 384 , false , TAG_BOT > entityList; // Offset: 0x8

    idSysMutex mutex; // Offset: 0x4820

}; // Size: 0x4848
