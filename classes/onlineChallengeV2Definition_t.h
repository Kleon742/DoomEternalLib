struct onlineChallengeV2Definition_t
{
    idStringHandle handle; // Offset: 0x0

    // Unique identifier for this challenge
    idStr id; // Offset: 0x8

    // The challenges target goal
    int target; // Offset: 0x38

    idStr displayName; // Offset: 0x40

    idStr displayDescription; // Offset: 0x70

    idMaterial2* displayIcon; // Offset: 0xA0

    // The XP earned
    int rewardXp; // Offset: 0xA8

    // The item earned
    idDeclWarehouseItem* rewardItem; // Offset: 0xB0

}; // Size: 0xB8
