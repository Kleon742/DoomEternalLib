struct idSWFWidget_CommandBar : idSWFWidget
{
    enum commandBarAlignment_t : int
    {
        ALIGN_CB_LEFT = 0,
        ALIGN_CB_CENTER = 1,
        ALIGN_CB_RIGHT = 2
    };

    idArray < commandBarButtonInfo_t , 26 > buttonInfo; // Offset: 0x180

    idStaticList < commandBarButton_t , 26 , false , TAG_IDLIST > buttonOrder; // Offset: 0x6BF0

    idSWFWidget_CommandBar::commandBarAlignment_t alignment; // Offset: 0x6C70

    // Padding, in pixels, between buttons
    float buttonPadding; // Offset: 0x6C74

    bool showJoy1KeyOnPC; // Offset: 0x6C78

    bool showJoy1KeyOnConsole; // Offset: 0x6C79

    bool needsPositionUpdate; // Offset: 0x6C80

    idList < float , TAG_IDLIST , false > preUpdateChildPositions; // Offset: 0x6C88

    idTypesafeTime < int , millisecondUnique_t , 1000 > preUpdateTimeMS; // Offset: 0x6CA0

}; // Size: 0x6CA8
