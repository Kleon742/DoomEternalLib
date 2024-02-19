struct attachmentStateColor_t
{
    // Color of attachment for the state specified.
    idColor color; // Offset: 0x0

    // The overbright value of the color.
    float colorScale; // Offset: 0x10

    // List of material swap changes for state.
    idList < materialRemap_t , TAG_IDLIST , false > materialSwapList; // Offset: 0x18

    // what state for this color.
    idStr state; // Offset: 0x30

}; // Size: 0x60
