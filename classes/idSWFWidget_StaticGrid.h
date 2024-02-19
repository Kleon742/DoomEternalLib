struct idSWFWidget_StaticGrid : idSWFWidget
{
    int numColumns; // Offset: 0x180

    int numRows; // Offset: 0x184

    float distanceBetweenColumns; // Offset: 0x188

    float distanceBetweenRows; // Offset: 0x18C

    float distanceBetweenGridAndScrollBar; // Offset: 0x190

    int cachedFocusIndex; // Offset: 0x194

    bool focusOnRollOver; // Offset: 0x198

    bool hasMask; // Offset: 0x199

    idSWFWidget_ScrollBar* scrollBar; // Offset: 0x1A0

    int scrollIndex; // Offset: 0x1A8

    idStr maskSpriteName; // Offset: 0x1B0

}; // Size: 0x1E0
