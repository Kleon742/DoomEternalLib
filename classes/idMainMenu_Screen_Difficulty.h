struct idMainMenu_Screen_Difficulty : idMenuElement
{
    enum difficultyScreenState_t : int
    {
        DIFFICULTY_STATE_INVALID = -1,
        DIFFICULTY_STATE_ROOT = 0,
        DIFFICULTY_STATE_EXTRA_LIVES_OPTIONS = 1,
        DIFFICULTY_STATE_ULTRANIGHTMARE_OPTIONS = 2
    };

    idMainMenu_Screen_Difficulty::difficultyScreenState_t state; // Offset: 0x100

    idMainMenu_Screen_Difficulty::difficultyScreenState_t nextState; // Offset: 0x104

    idSWFWidget_SectionList* options; // Offset: 0x108

    idSWFWidget_SectionList* ultraViolenceOptions; // Offset: 0x110

    idSWFWidget_SectionList* extraLifeOptions; // Offset: 0x118

    idSWFWidget_Button* btnEasy; // Offset: 0x120

    idSWFWidget_Button* btnMedium; // Offset: 0x128

    idSWFWidget_Button* btnHard; // Offset: 0x130

    idSWFWidget_Button* btnNightmare; // Offset: 0x138

    idSWFWidget_Button* btnUltraNightmare; // Offset: 0x140

    idSWFWidget_DropdownButton* btnExtraLiveMode; // Offset: 0x148

    idSWFWidget_Button* confirmAcceptButton; // Offset: 0x150

    idSWFWidget_Button* confirmCancelButton; // Offset: 0x158

    idSWFWidget_List* confirmButtonList; // Offset: 0x160

    int currentDifficulty; // Offset: 0x168

}; // Size: 0x170
