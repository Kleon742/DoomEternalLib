struct idMainMenu_Screen_Invasion : idMenuElement
{
    idSWFWidget_List* menuButtonList; // Offset: 0x100

    idSWFWidget_List* pulloutButtonList; // Offset: 0x108

    bool pulloutVisible; // Offset: 0x110

    idSWFWidget_DropdownButton* btnCampaign; // Offset: 0x118

    idSWFWidget_DropdownButton* btnInvade; // Offset: 0x120

    idSWFWidget_DropdownButton* btnTutorial; // Offset: 0x128

    idSWFWidget_DropdownButton* btnCustomize; // Offset: 0x130

    idSWFWidget_DropdownButton* btnBrowser; // Offset: 0x138

    idSWFWidget_BattleArena_PlayOnline_ModeButton* btnInvadeRandom; // Offset: 0x148

    idSWFWidget_BattleArena_PlayOnline_ModeButton* btnInvadeFriend; // Offset: 0x150

}; // Size: 0x158
