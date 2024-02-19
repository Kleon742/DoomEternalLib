struct idAISnippet_Shared_ModifyContextFlags : idAISnippet
{
    enum modifyType_t : int
    {
        SET = 0,
        ADD = 1,
        REMOVE = 2
    };

    // the type of modification
    idAISnippet_Shared_ModifyContextFlags::modifyType_t modificationType; // Offset: 0x18

    // context flags to match
    aiContextFlags_t contextFlags; // Offset: 0x1C

}; // Size: 0x20
