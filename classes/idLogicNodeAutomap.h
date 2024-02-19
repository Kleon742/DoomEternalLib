struct idLogicNodeAutomap
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        INPUT_FULL_MAP_VISIBILITY = 2,
        INPUT_REVEAL_AREA_SIZE = 3,
        INPUT_REVEAL_PROGRESSION_ITEMS = 4
    };

    // reveal visibility of entire map
    bool fullMapVisibility; // Offset: 0x0

    // diameter of area to reveal around player
    float revealAreaSize; // Offset: 0x4

    // reveal all progression items
    bool revealProgressionItems; // Offset: 0x8

}; // Size: 0xC
