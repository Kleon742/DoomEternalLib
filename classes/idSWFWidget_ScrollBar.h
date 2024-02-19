struct idSWFWidget_ScrollBar : idSWFWidget
{
    idSWFWidget* trackingWidget; // Offset: 0x180

    float dragOffset; // Offset: 0x188

    bool dragging; // Offset: 0x18C

    bool needsUpdate; // Offset: 0x18D

    idSWFWidget_Button* upButton; // Offset: 0x190

    idSWFWidget_Button* downButton; // Offset: 0x198

    idSWFWidget_Button* scrollButton; // Offset: 0x1A0

    float nodeTopEndPos; // Offset: 0x1A8

    // Minimum height a scroll bar node can be, assets can only get so small. Only supported by advanced scrollbars.
    float minimumNodeHeight; // Offset: 0x1AC

    swfNamedColors_t arrowColor; // Offset: 0x1B0

    swfNamedColors_t buttonColor; // Offset: 0x1B4

    swfNamedColors_t trackColor; // Offset: 0x1B8

}; // Size: 0x1C0
