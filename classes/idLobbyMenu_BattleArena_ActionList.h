struct idLobbyMenu_BattleArena_ActionList : idSWFWidget_List
{
    idDeclDemonCardDeck* demonCardDeckDecl; // Offset: 0x1D8

    idList < idLobbyMenu_BattleArena_ActionListItem * , TAG_IDLIST , false > cardList; // Offset: 0x1E0

}; // Size: 0x1F8
