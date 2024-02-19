struct idSWFWidget_ScrollPanel : idSWFWidget
{
    idSWFWidget_ScrollBar* scrollBar; // Offset: 0x180

    float scrollOffset; // Offset: 0x188

    float scrollStep; // Offset: 0x18C

    float childHeight; // Offset: 0x190

    float paddingTop; // Offset: 0x194

    float paddingBottom; // Offset: 0x198

    float mouseScrollOnHoverOnly; // Offset: 0x19C

    bool isMouseOverWidget; // Offset: 0x1A0

    bool recalculateHeight; // Offset: 0x1A1

    idStr maskSpriteName; // Offset: 0x1A8

}; // Size: 0x1D8
