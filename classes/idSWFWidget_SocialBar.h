struct idSWFWidget_SocialBar : idSWFWidget
{
    enum socialBarRequest_t : int
    {
        SOCIAL_BAR_REQUEST_NONE = 0,
        SOCIAL_BAR_REQUEST_OPEN_SOCIAL_SCREEN = 1,
        SOCIAL_BAR_REQUEST_TOGGLE_CHAT = 2
    };

    idMenuElement* parentElement; // Offset: 0x180

    idSWFWidget_CommandIconButton* socialButton; // Offset: 0x188

    idSWFWidget_CommandIconButton* chatButton; // Offset: 0x190

    idSWFWidget_TextChatInput* chatInput; // Offset: 0x198

    idSWFWidget_TextChatLog* chatLog; // Offset: 0x1A0

    idSWFWidget_PartyList* partyList; // Offset: 0x1A8

    idSWFWidget_SocialBarNotification* notification; // Offset: 0x1B0

    idSWFWidget_CommandIconButton* offlineButton; // Offset: 0x1B8

    idSWFWidget* coverWidget; // Offset: 0x1C0

    int socialScreenID; // Offset: 0x1C8

    bool needsPositionUpdate; // Offset: 0x1CC

    idSWFWidget_SocialBar::socialBarRequest_t currentRequest; // Offset: 0x1D0

    bool chatActive; // Offset: 0x1D4

    bool chatEnabled; // Offset: 0x1D5

    bool hasNewSocialInfo; // Offset: 0x1D6

    bool hasNewChatMessages; // Offset: 0x1D7

    bool chatButtonVisible; // Offset: 0x1D8

    bool socialButtonVisible; // Offset: 0x1D9

    bool isOnline; // Offset: 0x1DA

    swfPlatform_t lastPlatform; // Offset: 0x1DC

    uint16 hudSysId; // Offset: 0x1E0

    asyncio::idTaskResultPtr < bool , PermissionError > permissionCheckTask; // Offset: 0x1E8

    idProxyPtr < idSWFWidget_SocialBar > proxyPtr; // Offset: 0x1F0

}; // Size: 0x1F8
