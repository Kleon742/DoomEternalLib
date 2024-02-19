struct idSWFWidget_Button_CommandBar : idSWFWidget_Button
{
    enum commandBarTextAlignment_t : int
    {
        CBB_ALIGNMENT_LEFT = 0,
        CBB_ALIGNMENT_CENTER = 1,
        CBB_ALIGNMENT_RIGHT = 2
    };

    commandBarButtonInfo_t* buttonInfo; // Offset: 0x2A0

    commandBarButton_t buttonID; // Offset: 0x2A8

    idSWFWidget_Button_CommandBar::commandBarTextAlignment_t textAlignment; // Offset: 0x2AC

    float width; // Offset: 0x2B0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > holdStartTime; // Offset: 0x2B8

    bool holdFired; // Offset: 0x2C0

    bool ignoreHoldPositioning; // Offset: 0x2C1

    bool isCleared; // Offset: 0x2C2

    bool isCopy; // Offset: 0x2C3

    bool isCustomKey; // Offset: 0x2C4

    bool needsPositionUpdate; // Offset: 0x2C5

}; // Size: 0x2C8
