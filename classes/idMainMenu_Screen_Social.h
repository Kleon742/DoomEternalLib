struct idMainMenu_Screen_Social : idMenuElement
{
    enum friendListUpdateError_t : int
    {
        FRIEND_LIST_UPDATE_ERROR_NONE = 0,
        FRIEND_LIST_UPDATE_ERROR_CONSENT = 1,
        FRIEND_LIST_UPDATE_ERROR_UNKNOWN = 2
    };

    idArray < idSWFWidget_SocialUserList * , 4 > userList; // Offset: 0x100

    idSWFWidget_SocialPartyList* partyList; // Offset: 0x120

    idSWFWidget* loading; // Offset: 0x128

    idList < socialUserListType_t , TAG_IDLIST , false > tabTypes; // Offset: 0x130

    socialUserListType_t requestedTabFocusType; // Offset: 0x148

    socialUserListType_t cachedTabFocusType; // Offset: 0x14C

    mainMenuElementID_t requestedBackScreenId; // Offset: 0x150

    idList < lobbyUserId_t , TAG_IDLIST , false > partyIdList; // Offset: 0x158

    idList < idHandle < int , socialInviteId_type , socialInviteId_type::SII_INVALID > , TAG_IDLIST , false > inviteIdList; // Offset: 0x170

    idList < socialFriendId_t , TAG_IDLIST , false > friendIdList; // Offset: 0x188

    idList < socialFriendId_t , TAG_IDLIST , false > favoriteIdList; // Offset: 0x1A0

    idList < socialRecentPlayerId_t , TAG_IDLIST , false > recentPlayerIdList; // Offset: 0x1B8

    idMainMenu_Screen_Social::friendListUpdateError_t friendListSucceeded; // Offset: 0x1D0

    bool favoritePlayerListSucceeded; // Offset: 0x1D4

    bool recentPlayerListSucceeded; // Offset: 0x1D5

    idProxyPtr < idMainMenu_Screen_Social > proxyPtr; // Offset: 0x1D8

    asyncio::idTaskResultPtr < bool , bool > refreshTask; // Offset: 0x1E0

    idList < socialUserListType_t , TAG_IDLIST , false > queuedDataUpdates; // Offset: 0x1E8

    idList < socialUserListType_t , TAG_IDLIST , false > listTypesThatNeedRefresh; // Offset: 0x200

    // telemetry
    socialScreenData_t socialScreen; // Offset: 0x218

    bool hasRegisteredSocialBroadcasts; // Offset: 0x268

    bool isLoading; // Offset: 0x269

}; // Size: 0x270
