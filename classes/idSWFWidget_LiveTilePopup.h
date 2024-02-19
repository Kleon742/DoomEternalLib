struct idSWFWidget_LiveTilePopup : idSWFWidget
{
    bool buttonsEnabled; // Offset: 0x180

    liveTileInfo_t info; // Offset: 0x188

    idSWFWidget_List* buttonList; // Offset: 0x438

    idSWFWidget_Button* goButton; // Offset: 0x440

    idSWFWidget_Button* closeButton; // Offset: 0x448

    idSWFWidget* spinner; // Offset: 0x450

    idSWFWidget_LiveTileImage* image; // Offset: 0x458

    // just an image really, we are doing some smoke and mirrors to give the impression of chained live tile popups
    idSWFWidget* paginator; // Offset: 0x460

}; // Size: 0x468
