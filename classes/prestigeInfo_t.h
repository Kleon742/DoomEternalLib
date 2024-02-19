struct prestigeInfo_t
{
    // Number of times to prestige on the current tier before progressing to the next tier (e.g. prestige in stone 10 times before progressing to bronze tier)
    int numPrestigeLevelsPerTier; // Offset: 0x0

    // List of icons for each tier
    idList < const idMaterial2 * , TAG_IDLIST , false > tierIcons; // Offset: 0x8

}; // Size: 0x20
