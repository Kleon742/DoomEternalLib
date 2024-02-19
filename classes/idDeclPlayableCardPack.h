struct idDeclPlayableCardPack : idGameDeclTypeInfo
{
    // whether this pack is filled using local decl data or sent to server to fill
    cardPackMode_t cardPackMode; // Offset: 0x90

    // the demon cards to give out on this pack including gem assignment
    idList < demonCardPackData_t , TAG_IDLIST , false > demonCards; // Offset: 0x98

    // the sentinel gifts to give out as standalone items
    idList < const idDeclSentinelGift * , TAG_IDLIST , false > sentinelGifts; // Offset: 0xB0

    // the number of random demon cards to award
    int numRandomCards; // Offset: 0xC8

    // the number of random sentinel gifts to award
    int numRandomGifts; // Offset: 0xCC

}; // Size: 0xD0
