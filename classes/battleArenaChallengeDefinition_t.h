struct battleArenaChallengeDefinition_t
{
    idStr id; // Offset: 0x0

    int target; // Offset: 0x30

    int maxVal; // Offset: 0x34

    idStr displayName; // Offset: 0x38

    idStr description; // Offset: 0x68

    idMaterial2* icon; // Offset: 0x98

    gameStat_t clientStat; // Offset: 0xA0

    // The XP earned
    int rewardXp; // Offset: 0xA4

}; // Size: 0xA8
