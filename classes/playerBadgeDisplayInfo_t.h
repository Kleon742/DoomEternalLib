struct playerBadgeDisplayInfo_t
{
    // ID used to reference this display style in code
    playerBadgeDisplayStyle_t displayStyleID; // Offset: 0x0

    // Display style to use for Doom Level widget
    doomLevelDisplayStyle_t doomLevelDisplayStyle; // Offset: 0x4

    // Type of rank to show on this badge (if any)
    playerBadgeRankType_t rankType; // Offset: 0x8

    // Show skill frame on badge
    bool showSkillFrame; // Offset: 0xC

    // Show streak meter on badge
    bool showStreakMeter; // Offset: 0xD

    // Show custom title on badge
    bool showCustomTitle; // Offset: 0xE

    // Show boosters on badge
    bool showBoosters; // Offset: 0xF

    // Show prestige level on badge
    bool showPrestige; // Offset: 0x10

    // Badge icon
    idMaterial2* icon; // Offset: 0x18

    // Badge icon color
    swfNamedColors_t iconColor; // Offset: 0x20

    // Badge background color
    swfNamedColors_t backgroundColor; // Offset: 0x24

}; // Size: 0x28
