struct idAICondition_Shared_GameDifficulty : idAICondition
{
    // only pass condition of difficulty matches
    gameDifficulty_t difficulty; // Offset: 0x18

    // allow any difficulty greater
    bool acceptGreatherThan; // Offset: 0x1C

    // allow any difficulty less
    bool acceptLessThan; // Offset: 0x1D

}; // Size: 0x20
