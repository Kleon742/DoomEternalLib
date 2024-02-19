struct idSWFWidget_TabList : idSWFWidget
{
    enum tabListAlignment_t : int
    {
        TABLIST_ALIGN_LEFT = 0,
        TABLIST_ALIGN_CENTER = 1,
        TABLIST_ALIGN_RIGHT = 2
    };

    idSWFWidget_TabList::tabListAlignment_t alignment; // Offset: 0x180

    float minimumItemWidth; // Offset: 0x184

    float minimumDistanceBetweenItems; // Offset: 0x188

    float spaceBetweenItems; // Offset: 0x18C

    // Sigh...hack. Tab backgrounds are made with padding around them for alpha and glows and such, requiring moving them closer together with negative "m_spaceBetweenItems", so this is to fix the next button position.
    float nextButtonOffset; // Offset: 0x190

    // ...What they ^ said
    float prevButtonOffset; // Offset: 0x194

    bool allowWrapping; // Offset: 0x198

    bool showDividers; // Offset: 0x199

    idStr protoItemName; // Offset: 0x1A0

    idStr protoDividerName; // Offset: 0x1D0

    // This will offset the button position by (width * scale) in in UpdatePositions(). For example. if the tab button art is centered this should be "0.5f", if it is left aligned it should be "0.0f".
    float buttonPositionOffsetMultiplier; // Offset: 0x200

    keyNum_t prevJoyKey; // Offset: 0x204

    keyNum_t nextJoyKey; // Offset: 0x208

    keyNum_t prevPCKey; // Offset: 0x20C

    keyNum_t nextPCKey; // Offset: 0x210

    swfPlatform_t lastSWFPlatform; // Offset: 0x214

    bool inputEnabled; // Offset: 0x218

    bool isHidden; // Offset: 0x219

    // Should we execute scroll events on release rather than press?
    bool executeOnRelease; // Offset: 0x21A

}; // Size: 0x220
