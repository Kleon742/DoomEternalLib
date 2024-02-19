struct idAICondition_Shared_TokensAvailable : idAICondition
{
    // if true, check tokens against our current action target
    bool includeTarget; // Offset: 0x18

    // if true, also check if we have reserved those tokens already
    bool checkReserved; // Offset: 0x19

    // Name of the tokens we want to be available on any potential targets
    idList < aiTokenType_t , TAG_IDLIST , false > tokens; // Offset: 0x20

}; // Size: 0x38
