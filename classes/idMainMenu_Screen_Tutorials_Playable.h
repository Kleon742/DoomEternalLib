struct idMainMenu_Screen_Tutorials_Playable : idMenuElement
{
    enum playableTutorialType_t : int
    {
        PLAYABLE_TUTORIAL_SLAYER = 0,
        PLAYABLE_TUTORIAL_BATTLEMODE = 1,
        PLAYABLE_TUTORIAL_DEMON = 2
    };

    idSWFWidget_Button* btnSlayer; // Offset: 0x100

    idSWFWidget_Button* btnBattlemode; // Offset: 0x108

    idProxyPtr < idMainMenu_Screen_Tutorials_Playable > proxyPtr; // Offset: 0x110

    asyncio::idTaskWeakPtr onTutorialOptionSelectedTask; // Offset: 0x118

}; // Size: 0x120
