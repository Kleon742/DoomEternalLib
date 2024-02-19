struct idAISnippet_Shared_ElevateGameplayPriority : idAISnippet
{
    // priority to set
    aiGameplayPriority_t priority; // Offset: 0x18

    // duration of priority
    idTypesafeTime < float , secondUnique_t , 1 > duration; // Offset: 0x1C

    // max distance from player{{ units = m }}
    float playerDistance; // Offset: 0x20

    // max view angle for player
    idTypesafeNumber < float , DegreesUnique_t > playerViewAngle; // Offset: 0x24

}; // Size: 0x28
