struct idLobbyUIManager_DemonDeckLookup
{
    struct declIndexData_t
    {
        int globalDeckIndex; // Offset: 0x0

        idDeclDemonCardDeck* demonCardDecl; // Offset: 0x8

    }; // Size: 0x10

    struct declDemonData_t
    {
        unsigned long long demonResourceId; // Offset: 0x0

        idList < idLobbyUIManager_DemonDeckLookup::declIndexData_t , TAG_IDLIST , false > deckSet; // Offset: 0x8

    }; // Size: 0x20

    idList < idLobbyUIManager_DemonDeckLookup::declDemonData_t , TAG_IDLIST , false > declSet; // Offset: 0x0

}; // Size: 0x18
