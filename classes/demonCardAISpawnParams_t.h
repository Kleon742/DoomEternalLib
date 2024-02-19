struct demonCardAISpawnParams_t
{
    int index; // Offset: 0x0

    idDeclDemonCard::demonCardPayload_t* payload; // Offset: 0x8

    idManagedClassPtr < idDemonCard > demonCard; // Offset: 0x10

}; // Size: 0x30
