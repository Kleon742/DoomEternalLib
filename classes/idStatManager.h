struct idStatManager
{
    idManagedClassPtr < idPlayer > playerOwner; // Offset: 0x0

    bool initialized; // Offset: 0x20

    // List of all hint options
    idList < dataDrivenOption_t , TAG_IDLIST , false > explorationHintOptions; // Offset: 0x28

    // List of all hint options
    idList < dataDrivenOption_t , TAG_IDLIST , false > combatHintOptions; // Offset: 0x40

    idList < resultHistory_t , TAG_IDLIST , false > hintResultHistory; // Offset: 0x58

}; // Size: 0x70
