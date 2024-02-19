struct idMainMenu_Popup_AddFavorite : idMenuElement
{
    enum verifyInputTextState_t : int
    {
        VERIFY_INPUT_TEXT_NONE = 0,
        VERIFY_INPUT_TEXT_LOADING = 1,
        VERIFY_INPUT_TEXT_SUCCESS = 2,
        VERIFY_INPUT_TEXT_ERROR = 3,
        VERIFY_INPUT_TEXT_INFO = 4
    };

    idSWFWidget_List* list; // Offset: 0x100

    idSWFWidget_Button* codeEntryButton; // Offset: 0x108

    idSWFWidget_Text* descText; // Offset: 0x110

    idSWFWidget* myCode; // Offset: 0x118

    swfPlatform_t currentSWFPlatform; // Offset: 0x120

    // Async Task Info
    idProxyPtr < idMainMenu_Popup_AddFavorite > proxyPtr; // Offset: 0x128

    asyncio::idTaskResultPtr < bool , bool > addFavoriteTaskResult; // Offset: 0x130

    bool isEditing; // Offset: 0x138

    bool isShowingVirtualKeyboard; // Offset: 0x139

    bool isShowingMyCode; // Offset: 0x13A

}; // Size: 0x140
