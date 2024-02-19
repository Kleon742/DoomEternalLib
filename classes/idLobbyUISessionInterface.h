struct idLobbyUISessionInterface
{
    struct podiumSlot_t
    {
        // entity in map indicating location for podium
        idManagedClassPtr < idEntity > position; // Offset: 0x0

        // invalid if unused, otherwise the player's userHandle
        lobbyUserId_t usedByLobbyUserId; // Offset: 0x20

    }; // Size: 0x28

    struct pvpMapSelectInfoWithWeight_t
    {
        idDeclPVPMapSelectInfoList::pvpMapSelectInfo_t mapSelectInfo; // Offset: 0x0

        int probabilityWeight; // Offset: 0x58

    }; // Size: 0x60

    idLobbyUIFaultedState::faultReason_t failureState; // Offset: 0x8

}; // Size: 0x10
