struct idDeclAISensoryBehavior : idGameDeclTypeInfo
{
    // percepts remove themselves after this time no matter what
    idTypesafeTime < float , secondUnique_t , 1 > perceptTimeoutInSeconds; // Offset: 0x90

    // list of relations with other entitydef types
    idList < aiSocialInteraction_t , TAG_IDLIST , false > interactionList; // Offset: 0x98

}; // Size: 0xB0
