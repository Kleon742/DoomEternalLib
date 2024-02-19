struct idSWFWidget_SocialUserButton : idSWFWidget_Button
{
    idSWFWidget_PlayerBadge* playerBadge; // Offset: 0x2A0

    socialFriendId_t friendId; // Offset: 0x2A8

    lobbyUserId_t partyMemberId; // Offset: 0x2AC

    socialRecentPlayerId_t recentPlayerId; // Offset: 0x2B0

    playerBadgeDisplayStyle_t displayStyle; // Offset: 0x2B4

    idStr addLabelString; // Offset: 0x2B8

}; // Size: 0x2E8
