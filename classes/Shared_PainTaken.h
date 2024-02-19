struct Shared_PainTaken : idAIStateTransition
{
    // list of reactions to look for
    idList < painReactionData_t , TAG_AI_FSM , false > painReactionList; // Offset: 0xF8

    // if true, require all reactions in list
    bool requireAll; // Offset: 0x110

    // if true, accept anything larger than what is in the list
    bool acceptAnyGreaterThan; // Offset: 0x111

    // if true, only count pains caused by entities we could take as an enemy
    bool onlyFromEnemies; // Offset: 0x112

    // if true, only count pains caused by current action target or enemy
    bool onlyFromTarget; // Offset: 0x113

}; // Size: 0x118
