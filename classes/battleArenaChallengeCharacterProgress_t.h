struct battleArenaChallengeCharacterProgress_t
{
    idStr id; // Offset: 0x0

    // Reference to the definition
    idSharedPtr < battleArenaChallengeCharacterDefinition_t > battleArenaCharacter; // Offset: 0x30

    // All challenge progress for a group
    idVector < idSharedPtr < battleArenaChallengeProgress_t > > challenges; // Offset: 0x38

}; // Size: 0x50
