struct idAICondition_Shared_ShotsBlocked : idAICondition
{
    // total number of blocked shots
    int totalThisPull; // Offset: 0x18

    // number of consecutive blocked shots
    int consecutiveThisPull; // Offset: 0x1C

    // percentage of blocked shots
    float percentThisPull; // Offset: 0x20

}; // Size: 0x28
