struct idSWFWidget_BattleArenaLobby_SlotButton : idSWFWidget_Button
{
    bool needsInitialize; // Offset: 0x2A0

    bool isReady; // Offset: 0x2A1

    // Displays user data for which ever user's slot (idLobbyUser::slotToUse) matches this value
    int slotToUse; // Offset: 0x2A4

}; // Size: 0x2A8
