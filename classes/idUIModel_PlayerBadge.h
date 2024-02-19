struct idUIModel_PlayerBadge
{
    struct uiModelPlayerBadgeProgress_t
    {
        int xpValue; // Offset: 0x0

        battlemodePlayerStreak_t streak; // Offset: 0x8

        int rank; // Offset: 0x18

    }; // Size: 0x20

    idStr userName; // Offset: 0x0

    bool isLocalPlayer; // Offset: 0x30

    bool isPartyLeader; // Offset: 0x31

    bool isFavorite; // Offset: 0x32

    idDeclWarehouseItem* customIconDecl; // Offset: 0x38

    idDeclWarehouseItem* customTitleDecl; // Offset: 0x40

    int numBoosters; // Offset: 0x48

    idMaterial2* platformIcon; // Offset: 0x50

    idUIModel_PlayerBadge::uiModelPlayerBadgeProgress_t previous; // Offset: 0x58

    idUIModel_PlayerBadge::uiModelPlayerBadgeProgress_t current; // Offset: 0x78

}; // Size: 0x98
