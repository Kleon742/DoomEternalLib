struct doomLevelInfo_t
{
    // xp required to reach this level
    int xpRequired; // Offset: 0x0

    // icon to show at this level (if not specified the nearest valid icon before this level is used)
    idMaterial2* icon; // Offset: 0x8

    // small icon to show at this level (if not specified the nearest valid icon before this level is used)
    idMaterial2* iconSmall; // Offset: 0x10

    // rewards for reaching this level
    idList < doomLevelReward_t , TAG_IDLIST , false > rewards; // Offset: 0x18

}; // Size: 0x30
