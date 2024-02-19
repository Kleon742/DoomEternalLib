struct idSWFWidget_SectionList : idSWFWidget
{
    struct sectionWidgetInfo_t
    {
        idSWFWidget* widget; // Offset: 0x0

        float spaceAboveItem; // Offset: 0x8

        int customSpriteIndex; // Offset: 0xC

    }; // Size: 0x10

    struct sectionInfo_t
    {
        // Name of this section.
        idStr name; // Offset: 0x0

        // ID for this section, must be unique per section.
        int id; // Offset: 0x30

        // if this is a ban, the message to set
        idStr banMessage; // Offset: 0x38

        // Ban Indicator
        idSWFWidget_BanIndicator* banIndicator; // Offset: 0x68

        // The widget info for this section
        idList < idSWFWidget_SectionList::sectionWidgetInfo_t , TAG_IDLIST , false > widgetList; // Offset: 0x70

        // Padding between this section header and the bottom of the previous section
        float spaceAboveSection; // Offset: 0x88

        // Padding between this section header and the list items
        float spaceBetweenHeaderAndItems; // Offset: 0x8C

        // Padding between list items
        float spaceBetweenListItems; // Offset: 0x90

    }; // Size: 0x98

    idList < idSWFWidget_SectionList::sectionInfo_t * , TAG_IDLIST , false > sections; // Offset: 0x180

    bool needsPositionUpdate; // Offset: 0x198

    float totalHeight; // Offset: 0x19C

    float distanceBetweenHeaderAndList; // Offset: 0x1A0

    // Distance between sections, this is the distance where the last section item ends and the next section header starts
    float distanceBetweenSections; // Offset: 0x1A4

    // For simple lists, will apply if non-zero to any sections in UpdatePositions()
    float spaceBetweenListItems; // Offset: 0x1A8

    // For lists with multiple sections, allow spaces between the last item of the previous and the next for asthetics
    float spaceBetweenListItemsAndHeader; // Offset: 0x1AC

    int cachedFocusIndex; // Offset: 0x1B0

    bool allowWrapping; // Offset: 0x1B4

    bool focusOnRollOver; // Offset: 0x1B5

    bool toggleVisibilityOfItems; // Offset: 0x1B6

    bool onlyFocusChildWhenListIsFocused; // Offset: 0x1B7

    float topScrollPadding; // Offset: 0x1B8

    float bottomScrollPadding; // Offset: 0x1BC

    float ensureFocusedAbovePadding; // Offset: 0x1C0

    float ensureFocusedBelowPadding; // Offset: 0x1C4

    float bottomPadding; // Offset: 0x1C8

    bool focusOnItemPress; // Offset: 0x1CC

    bool clearActionRepeaterOnItemPress; // Offset: 0x1CD

    bool allowZeroHeightItems; // Offset: 0x1CE

    idSWFWidget_ScrollBar* scrollBar; // Offset: 0x1D0

    float scrollOffset; // Offset: 0x1D8

    idStr maskSpriteName; // Offset: 0x1E0

    idList < idStr , TAG_IDLIST , false > customSpriteNames; // Offset: 0x210

    bool isAnimating; // Offset: 0x228

}; // Size: 0x230
