struct idAutomapFogOfWar_Reveal
{
    idVec3 position; // Offset: 0x0

    float radius; // Offset: 0xC

    float halfHeight; // Offset: 0x10

    // Reveal tiles as traversed or not
    bool traversed; // Offset: 0x14

    // Half-reveal tiles that border the tiles to be revealed
    bool halfRevealBorder; // Offset: 0x15

    // If true, reveals all tiles (ignores position, radius, halfHeight)
    bool allTiles; // Offset: 0x16

    // If true, resets all tiles before real
    bool resetTilesBeforeReveal; // Offset: 0x17

}; // Size: 0x18
