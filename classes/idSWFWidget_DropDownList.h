struct idSWFWidget_DropDownList : idSWFWidget
{
    idSWFWidget* trackingWidget; // Offset: 0x180

    idSWFWidget* coverWidget; // Offset: 0x188

    int numItemSprites; // Offset: 0x190

    bool needListSpritesUpdate; // Offset: 0x194

    bool needsListItemsPositionUpdate; // Offset: 0x195

    bool needsTrackingWidgetPositionUpdate; // Offset: 0x196

    float totalListItemsHeight; // Offset: 0x198

    float distanceBetweenItems; // Offset: 0x19C

    float screenPercentToShowAbove; // Offset: 0x1A0

    float backingHeight; // Offset: 0x1A4

    float totalHeight; // Offset: 0x1A8

    bool isBesideTrackingWidget; // Offset: 0x1AC

    bool allowWrapping; // Offset: 0x1AD

    float belowPositionOffset; // Offset: 0x1B0

    float abovePositionOffset; // Offset: 0x1B4

    float aboveWithMaskPositionOffset; // Offset: 0x1B8

    bool focusOnRollOver; // Offset: 0x1BC

    idSWFWidget_ScrollBar* scrollBar; // Offset: 0x1C0

    float scrollOffset; // Offset: 0x1C8

    idStr maskSpriteName; // Offset: 0x1D0

    idList < idStr , TAG_IDLIST , false > listItemsPath; // Offset: 0x200

}; // Size: 0x218
