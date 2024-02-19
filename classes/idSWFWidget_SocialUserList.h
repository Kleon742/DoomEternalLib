struct idSWFWidget_SocialUserList : idSWFWidget
{
    idSWFWidget_SocialNotificationItem* notification; // Offset: 0x180

    idSWFWidget_SectionList* list; // Offset: 0x188

    // idList< idSWFWidget_SocialUserButton * >m_userButtons;
    idSWFWidget_DropDownList* dropDownList; // Offset: 0x190

    idSWFWidget* messageBox; // Offset: 0x198

    socialUserListType_t listType; // Offset: 0x1A0

    idList < socialFriendId_t , TAG_IDLIST , false >* friendIdList; // Offset: 0x1A8

    idList < socialRecentPlayerId_t , TAG_IDLIST , false >* recentPlayerIdList; // Offset: 0x1B0

    idMenu* menu; // Offset: 0x1B8

    bool queuedSimpleListUpdate; // Offset: 0x1C0

    bool repopulateOnShow; // Offset: 0x1C1

    idProxyPtr < idSWFWidget_SocialUserList > proxyPtr; // Offset: 0x1C8

    int cachedIndexForRepopulate; // Offset: 0x1D0

}; // Size: 0x1D8
