struct idMainMenu_Overlay : idMenuElement
{
    idMainMenu_Overlay::anon_17 sprites; // Offset: 0x100

    idSWFWidget_HeaderText* header; // Offset: 0x130

    idSWFWidget_HeaderTimer* headerTimer; // Offset: 0x138

    idSWFWidget_Text* screenPath; // Offset: 0x140

    idSWFWidget_TabList* tabList; // Offset: 0x148

    idSWFWidget_TabList* iconTabList; // Offset: 0x150

    idSWFWidget_Timer* timer; // Offset: 0x158

    idSWFWidget* pacifier; // Offset: 0x160

    idSWFWidget* partyStatus; // Offset: 0x168

    idSWFWidget_PlayerBadge* playerBadge; // Offset: 0x170

    idSWFWidget_PlayerBadge* playerBadgeMini; // Offset: 0x178

    idSWFWidget_LobbyMapSelected* selectedMap; // Offset: 0x180

    idSWFWidget_ServiceOutageIndicator* serviceOutageIndicator; // Offset: 0x188

    idSWFWidget_Text* hotStreakDemon; // Offset: 0x190

    idSWFWidget_Text* hotStreakSlayer; // Offset: 0x198

    idSWFWidget_CommandIconButton* settingsButton; // Offset: 0x1A0

    int settingsScreenID; // Offset: 0x1A8

    float commandBarEndPos; // Offset: 0x1AC

    bool needsPositionUpdate; // Offset: 0x1B0

    bool showPlayerBadge; // Offset: 0x1B1

    bool updatePlayerBadge; // Offset: 0x1B2

    bool forceUpdateServiceOutageIndicator; // Offset: 0x1B3

    bool showEdgeCovers; // Offset: 0x1B4

    bool hasRegisteredSocialBroadcasts; // Offset: 0x1B5

}; // Size: 0x1B8
