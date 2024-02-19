struct idSWFWidget_BattleArenaLobby_SlotListItem_LocalPlayer : idSWFWidget
{
    enum screenState_LocalPlayer_t : int
    {
        INVALID = 0,
        PREMATCH = 1,
        VOTING = 2
    };

    enum contextButtonState_t : int
    {
        NONE = 0,
        NORMAL = 1,
        VOTE = 2
    };

    idSWFWidget_Button* leftContextButton; // Offset: 0x180

    idSWFWidget_Button* rightContextButton; // Offset: 0x188

    bool queuedUpdate; // Offset: 0x190

    swfPlatform_t lastSWFPlatform; // Offset: 0x194

    lobbyUserId_t lobbyUserId; // Offset: 0x198

    int slotToUse; // Offset: 0x19C

    bool isLocalPlayer; // Offset: 0x1A0

    idSWFWidget_BattleArenaLobby_SlotListItem_LocalPlayer::contextButtonState_t contextButtonState; // Offset: 0x1A4

    idSWFWidget_BattleArenaLobby_SlotListItem_LocalPlayer::screenState_LocalPlayer_t state; // Offset: 0x1A8

    idSWFWidget_BattleArenaLobby_SlotListItem_LocalPlayer::screenState_LocalPlayer_t nextState; // Offset: 0x1AC

    idList < unsigned long long , TAG_IDLIST , false > demonList; // Offset: 0x1B0

    bool loadoutLock; // Offset: 0x1C8

}; // Size: 0x1D0
