struct idAIEventPool : idClass
{
    int initialPoolSize; // Offset: 0x10

    // type of the event -- this should be a reference but typeinfo / savegames don't like that
    idTypeInfo* eventType; // Offset: 0x18

    idList < idAIEvent * , TAG_IDLIST , false > freeEvents; // Offset: 0x20

}; // Size: 0x38
