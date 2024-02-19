struct idLogicNodeModelPlayerGiveDemonCardDeck : idLogicNodeModel
{
    // player this affects (-1 = local player)
    int playerNum; // Offset: 0x10

    // deck to give
    idDeclDemonCardDeck* deckToGive; // Offset: 0x18

}; // Size: 0x20
