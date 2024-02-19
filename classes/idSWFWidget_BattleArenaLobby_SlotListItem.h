struct idSWFWidget_BattleArenaLobby_SlotListItem : idSWFWidget
{
    lobbyUserId_t lobbyUserId; // Offset: 0x180

    // Displays user data for which ever user's slot (idLobbyUser::slotToUse) matches this value
    int slotToUse; // Offset: 0x184

    bool queuedUpdate; // Offset: 0x188

    bool isVoting; // Offset: 0x189

    bool lockLoadout; // Offset: 0x18A

    idSWFWidget* loadingSpinner; // Offset: 0x190

    idSWFWidget* voteOption; // Offset: 0x198

    idSWFWidget_PlayerBadge* playerBadge; // Offset: 0x1A0

    idSWFWidget_BattleArenaLobby_SlotButton* selectionButton; // Offset: 0x1A8

    idSWFWidget_BattleArenaLobby_SlotListItem_LocalPlayer* localPlayer; // Offset: 0x1B0

}; // Size: 0x1B8
