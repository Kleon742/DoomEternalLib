struct idAISnippet_Shared_FXConditions_CheckContext : idAISnippet
{
    struct aiFXCondition_Context
    {
        // which FX Condition to trigger
        fxCondition_t condition; // Offset: 0x0

        // perform this context check before triggering the FX Condition
        aiFXContext_t context; // Offset: 0x4

        // if true, invert return value of context check
        bool invertLogic; // Offset: 0x8

    }; // Size: 0xC

    // type of replication to use for the FX
    fxEventReplicationType_t replicationType; // Offset: 0x18

    // conditions to start when this snippet is run
    idList < idAISnippet_Shared_FXConditions_CheckContext::aiFXCondition_Context , TAG_IDLIST , false > startConditions; // Offset: 0x20

    // conditions to stop when this snippet is run
    idList < idAISnippet_Shared_FXConditions_CheckContext::aiFXCondition_Context , TAG_IDLIST , false > stopConditions; // Offset: 0x38

}; // Size: 0x50
