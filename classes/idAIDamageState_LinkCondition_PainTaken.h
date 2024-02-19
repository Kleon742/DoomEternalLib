struct idAIDamageState_LinkCondition_PainTaken : idAIDamageState_LinkCondition
{
    // list of reactions to look for
    idList < painReactionData_t , TAG_AI_FSM , false > painReactionList; // Offset: 0x20

    // if true, require all reactions in list
    bool requireAll; // Offset: 0x38

    // if true, accept anything larger than what is in the list
    bool acceptAnyGreaterThan; // Offset: 0x39

    // if true, only count pains caused by entities we could take as an enemy
    bool onlyFromEnemies; // Offset: 0x3A

    // if true, only count pains caused by current action target or enemy
    bool onlyFromTarget; // Offset: 0x3B

}; // Size: 0x40
