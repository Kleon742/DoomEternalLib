struct idAISnippet_Shared_ReserveAndUseTokens : idAISnippet
{
    struct tokenData_t
    {
        // token type
        aiTokenType_t token; // Offset: 0x0

        // use after reserving for this long (set < 0 to reserve without using)
        idTypesafeTime < float , secondUnique_t , 1 > useAfter; // Offset: 0x4

        // if true, reserve and use even if no tokens are available
        bool force; // Offset: 0x8

    }; // Size: 0xC

    // the tokens
    idList < idAISnippet_Shared_ReserveAndUseTokens::tokenData_t , TAG_IDLIST , false > tokens; // Offset: 0x18

}; // Size: 0x30
