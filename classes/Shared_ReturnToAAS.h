struct Shared_ReturnToAAS : idAIStateTransition
{
    // XY radius to check {{ units = m }}
    float distanceXY; // Offset: 0xF8

    // Z dist (height) to check {{ units = m }}
    float distanceZ; // Offset: 0xFC

}; // Size: 0x100
