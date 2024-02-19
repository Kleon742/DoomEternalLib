struct socialPlayerInfo_t
{
    idHandle < int , socialPlayerInfoId_type , socialPlayerInfoId_type::SPII_INVALID > socialPlayerId; // Offset: 0x0

    // Filled in by SetSocialDisplayInfo
    idStr playerName; // Offset: 0x8

    idStr ghostPresence; // Offset: 0x38

    socialPlayerBattlemodeInfo_t battlemodeSlayer; // Offset: 0x68

    socialPlayerBattlemodeInfo_t battlemodeDemon; // Offset: 0x80

    accountEquippedSet_t accountEquipped; // Offset: 0x98

    unsigned int level; // Offset: 0xC8

    // XXX: What is the maximum size XXX: What is the maximum size
    unsigned int xpValue; // Offset: 0xCC

    int numFollowers; // Offset: 0xD0

    int casualBMRank; // Offset: 0xD4

    socialPlatform_t socialPlatform; // Offset: 0xD8

    bool canViewProfile; // Offset: 0xD9

    bool hasDoomProfile; // Offset: 0xDA

    idPlatformExternalIdentity::onlineState_t onlineState; // Offset: 0xDC

    bool isCrossPlatform; // Offset: 0xE0

    bool isInvited; // Offset: 0xE1

    bool canBattleArenaTogether; // Offset: 0xE2

    bool canPartyTogether; // Offset: 0xE3

}; // Size: 0xE8
