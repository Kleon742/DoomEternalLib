struct mainMenuEventData_openSeasonsBoosters_t
{
    struct replacementBoosterInfo_t
    {
        lobbyUserId_t lobbyUserId; // Offset: 0x0

        socialFriendId_t friendId; // Offset: 0x4

        socialRecentPlayerId_t recentPlayerId; // Offset: 0x8

        bool forceOpen; // Offset: 0xC

        bool walkthroughInProgress; // Offset: 0xD

    }; // Size: 0x10

    mainMenuEventData_openSeasonsBoosters_t::replacementBoosterInfo_t replaceInfo; // Offset: 0x0

}; // Size: 0x10
