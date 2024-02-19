struct idAICondition_Shared_NextPainReaction : idAICondition
{
    // if the AI's next ( pending ) pain reaction matches, go
    painType_t painType; // Offset: 0x18

    // if true, accept any pain larger than this
    bool acceptGreaterThan; // Offset: 0x1C

}; // Size: 0x20
