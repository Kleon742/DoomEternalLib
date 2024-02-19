struct idAICondition_PainElemental_LostSoulsNum : idAICondition
{
    // condition passes if the current number of available LostSouls is more than minLostSouls
    int minLostSouls; // Offset: 0x18

    // condition passes if the current number of available LostSouls is less than maxLostSouls
    int maxLostSouls; // Offset: 0x1C

}; // Size: 0x20
