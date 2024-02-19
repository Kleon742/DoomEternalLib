struct playerStreakIcons_t
{
    // Streak name
    idStr streakName; // Offset: 0x0

    // Skill frame icon
    idMaterial2* skillFrame; // Offset: 0x30

    // Streak meter icon
    idMaterial2* streakMeter; // Offset: 0x38

    // Small streak tab icon
    idMaterial2* streakTabSmall; // Offset: 0x40

    // Large streak tab icon
    idMaterial2* streakTabLarge; // Offset: 0x48

}; // Size: 0x50
