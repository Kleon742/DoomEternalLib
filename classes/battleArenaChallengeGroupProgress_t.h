struct battleArenaChallengeGroupProgress_t
{
    // All challenge progress for a group
    idVector < idSharedPtr < battleArenaChallengeCharacterProgress_t > > characters; // Offset: 0x0

    idSharedPtr < battleArenaChallengeGroupDefinition_t > group; // Offset: 0x18

}; // Size: 0x20
