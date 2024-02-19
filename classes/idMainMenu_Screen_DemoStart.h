struct idMainMenu_Screen_DemoStart : idMenuElement
{
    idSWFWidget_SectionList* options; // Offset: 0x100

    idSWFWidget_Button* btnStartDemo; // Offset: 0x108

    idSWFWidget_Button* btnSettings; // Offset: 0x110

    idSWFWidget_Button* btnContinueGame; // Offset: 0x118

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > resetProfileEndTime; // Offset: 0x120

}; // Size: 0x128
