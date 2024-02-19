struct idHighlights
{
    idVec4 fillColorHitFlash; // Offset: 0x0

    // all the highlights currently created.
    idList < idHighlightBehavior * , TAG_IDLIST , false > highlights; // Offset: 0x10

}; // Size: 0x28
