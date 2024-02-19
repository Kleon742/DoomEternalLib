struct idRuneManager
{
    struct cheatCodeRunesStatus_t
    {
        int runeIndex; // Offset: 0x0

        int initialRuneSlotIndex; // Offset: 0x4

        bool hadAcquiredBeforeCheat; // Offset: 0x8

        bool hadMasteryBeforeCheat; // Offset: 0x9

    }; // Size: 0xC

    idList < idRuneManager::cheatCodeRunesStatus_t , TAG_IDLIST , false > cheatCodeRuneMetaData; // Offset: 0x0

    // All potential runes
    idList < const idDeclPerk * , TAG_IDLIST , false > masterRuneList; // Offset: 0x18

    // Rune Perk Group
    idDeclPerkGroup* runePerkGroup; // Offset: 0x30

    // Support Rune Perk Group
    idDeclPerkGroup* supportRunePerkGroup; // Offset: 0x38

    // Number of Runes the player must own to unlock the slot
    idArray < int , 3 > runeSlotReq; // Offset: 0x40

    idList < const idDeclPerk * , TAG_IDLIST , false > runes; // Offset: 0x50

    idList < const idDeclPerk * , TAG_IDLIST , false > supportRunes; // Offset: 0x68

    idArray < const idDeclPerk * , 3 > runeSlots; // Offset: 0x80

    idDeclPerk* equippedSupportRune; // Offset: 0x98

    // the name of the slots we saved when last cheating
    idArray < idStr , 3 > runeCheatSlots; // Offset: 0xA0

    idManagedClassPtr < idPlayer > playerOwner; // Offset: 0x130

    idUpgradeSystem < idRuneManager > upgradeSystem; // Offset: 0x150

    bool hasAppliedCheatCodeRuneMasteryCheat; // Offset: 0x180

}; // Size: 0x188
