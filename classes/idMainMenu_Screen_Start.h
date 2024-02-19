struct idMainMenu_Screen_Start : idMenuElement
{
    asyncio::idTaskResultPtr < userHandle_t , bool > signInTask; // Offset: 0x100

    idSWFWidget* infoWidget; // Offset: 0x108

    bool isShowingInfo; // Offset: 0x110

    swfPlatform_t lastPlatform; // Offset: 0x114

}; // Size: 0x118
