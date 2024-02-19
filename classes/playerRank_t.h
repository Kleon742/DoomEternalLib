struct playerRank_t
{
    // Series Icon for this rank
    idMaterial2* seriesIcon; // Offset: 0x0

    // Player Badge Icon for this rank
    idMaterial2* playerBadgeIcon; // Offset: 0x8

    // Label for this rank (non-localized; used for roman numerals)
    idStr label; // Offset: 0x10

}; // Size: 0x40
