struct idLobbyMenu_BattleArena_AbilityList : idSWFWidget_List
{
    bool isSlayer; // Offset: 0x1D0

    idList < characterAbilityUIInfo , TAG_IDLIST , false >* abilityInfoList; // Offset: 0x1D8

    idList < idLobbyMenu_BattleArena_AbilityListItem * , TAG_IDLIST , false > abilityUIList; // Offset: 0x1E0

}; // Size: 0x1F8
