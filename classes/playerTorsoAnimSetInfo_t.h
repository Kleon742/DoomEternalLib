struct playerTorsoAnimSetInfo_t
{
    char* weaponPrefix; // Offset: 0x0

    char* aliasName; // Offset: 0x8

    // Which anims are additive
    unsigned int additiveMask; // Offset: 0x10

    // Which is the last animation in playerTorsoAnims_t that this set can use.
    playerTorsoAnims_t lastTorsoAnimAllowed; // Offset: 0x14

    // Should we actually cache these animations? Only true if we are going to use them.
    bool shouldCacheAnimations; // Offset: 0x18

    // does this set respect CEASEFIRE actions?
    bool ignoresCeasefire; // Offset: 0x19

}; // Size: 0x20
