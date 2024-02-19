struct idBotEntityList
{
    // true if "Init" was called on the filter, else its invalid!
    bool initialized; // Offset: 0x8

    // the type of entity we're looking for
    int desiredEntityType; // Offset: 0xC

    // the flags the type of entity we're looking for should have.
    int desiredEntityFlags; // Offset: 0x10

    // the flags the type of entity we're looking for shouldn't have.
    int ignoreEntityFlags; // Offset: 0x14

    // a list of all the entities that match our requirements
    idList < botEntityInfo_t , TAG_BOT , false > entitiesList; // Offset: 0x18

}; // Size: 0x30
