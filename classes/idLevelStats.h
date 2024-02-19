struct idLevelStats
{
    // time at start of level
    int startTime; // Offset: 0x0

    // time at end of level
    int endTime; // Offset: 0x4

    // damage taken
    int damageTaken; // Offset: 0x8

    // items picked-up / looted
    int itemsTaken; // Offset: 0xC

    // xp gained during the level
    int xpGained; // Offset: 0x10

    // Did the player's DOOM level increase
    bool doomLevelIncreased; // Offset: 0x14

    idStaticList < weaponStats_t , 20 , false , TAG_IDLIST > weaponStats; // Offset: 0x18

}; // Size: 0x670
