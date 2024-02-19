struct idAICondition_Shared_PainTaken : idAICondition
{
    // list of reactions to look for
    idList < painReactionData_t , TAG_IDLIST , false > painReactionList; // Offset: 0x18

    // if true, require all reactions in list
    bool requireAll; // Offset: 0x30

    // if true, accept anything larger than what is in the list
    bool acceptAnyGreaterThan; // Offset: 0x31

    // if true, only count pains caused by entities we could take as an enemy
    bool onlyFromEnemies; // Offset: 0x32

    // if true, only count pains caused by our current action target or enemy
    bool onlyFromTarget; // Offset: 0x33

}; // Size: 0x38
