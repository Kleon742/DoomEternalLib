struct actorHighlightOptions_t
{
    // how should ally slayers be highlighted
    entityHighlightMode_t allySlayer; // Offset: 0x0

    // how should ally demons be highlighted
    entityHighlightMode_t allyDemon; // Offset: 0x4

    // how should ally summoned ai be highlighted
    entityHighlightMode_t allySummoned; // Offset: 0x8

    // how should enemy slayers be highlighted
    entityHighlightMode_t enemySlayer; // Offset: 0xC

    // how should enemy demons be highlighted
    entityHighlightMode_t enemyDemon; // Offset: 0x10

    // how should enemy summoned ai be highlighted
    entityHighlightMode_t enemySummoned; // Offset: 0x14

}; // Size: 0x18
