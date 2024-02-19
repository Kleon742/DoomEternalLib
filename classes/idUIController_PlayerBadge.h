struct idUIController_PlayerBadge
{
    lobbyUserId_t lobbyUserId; // Offset: 0x0

    socialFriendId_t friendId; // Offset: 0x4

    lobbyUserId_t partyMemberId; // Offset: 0x8

    socialRecentPlayerId_t recentPlayerId; // Offset: 0xC

    idHandle < int , socialPlayerInfoId_type , socialPlayerInfoId_type::SPII_INVALID > socialPlayerId; // Offset: 0x10

    socialPlayerInfo_t* socialPlayerInfo; // Offset: 0x18

    socialPlayerInfo_t* localPlayerInfo; // Offset: 0x20

    playerBadgeDisplayStyle_t displayStyle; // Offset: 0x28

    bool modelNeedsRefresh; // Offset: 0x2C

}; // Size: 0x30
