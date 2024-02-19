struct idHUDMenu_Screen_Pause : idMenuElement
{
    idSWFWidget_Button* btnResume; // Offset: 0x100

    idSWFWidget_Button* btnLoadCheckpoint; // Offset: 0x108

    // idSWFWidget_Button *m_btnStartOver;
    idSWFWidget_Button* btnSettings; // Offset: 0x110

    idSWFWidget_Button* btnDemoSettings; // Offset: 0x118

    idSWFWidget_Button* btnMilestones; // Offset: 0x120

    idSWFWidget_Button* btnDevGui; // Offset: 0x128

    idSWFWidget_Button* btnDevCheckpoints; // Offset: 0x130

    idSWFWidget_Button* btnQuitSP; // Offset: 0x138

    idSWFWidget_Button* btnQuitMP; // Offset: 0x140

    idSWFWidget_Button* btnSaveAndQuit; // Offset: 0x148

    idSWFWidget_Button* btnExitAndResumeCampaign; // Offset: 0x150

    idSWFWidget_Button* btnExitToDesktop; // Offset: 0x158

    idSWFWidget_Button* btnSkipTutorialMap; // Offset: 0x160

    idSWFWidget_Button* btnQuitUltraNightmare; // Offset: 0x168

    idSWFWidget_Button* btnExitToDesktopUltraNightmare; // Offset: 0x170

    idSWFWidget_Button* btnRestartMission; // Offset: 0x178

    idLobbyMenu_LobbyPlayerCollection* playerCollection; // Offset: 0x180

    bool isInvasionActive; // Offset: 0x188

    bool clearPlayerCollectionDropdown; // Offset: 0x189

    bool isShowingDemoDevOptions; // Offset: 0x18A

    uint16 lobbyUsersBroadcastId; // Offset: 0x18C

}; // Size: 0x190
