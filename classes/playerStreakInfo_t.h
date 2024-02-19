struct playerStreakInfo_t
{
    // Win icon
    idMaterial2* winIcon; // Offset: 0x0

    // Loss icon
    idMaterial2* lossIcon; // Offset: 0x8

    // Player streak icons
    idList < playerStreakIcons_t , TAG_IDLIST , false > streakIcons; // Offset: 0x10

}; // Size: 0x28
