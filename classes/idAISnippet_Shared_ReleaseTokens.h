struct idAISnippet_Shared_ReleaseTokens : idAISnippet
{
    // whether or not to use tokens before release
    bool use; // Offset: 0x18

    // the tokens to release
    idList < aiTokenType_t , TAG_IDLIST , false > tokens; // Offset: 0x20

}; // Size: 0x38
