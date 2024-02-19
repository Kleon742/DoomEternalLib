struct idSuitManager
{
    // All potential suit upgrades
    idDeclPerkGroup* masterSuitGroup; // Offset: 0x0

    idList < const idDeclPerk * , TAG_IDLIST , false > activeSuitPerks; // Offset: 0x8

    // Category.
    idSuitUpgradePackage fundamentals; // Offset: 0x20

    // Category.
    idSuitUpgradePackage extermination; // Offset: 0x88

    // Category.
    idSuitUpgradePackage selfPreservation; // Offset: 0xF0

    // Category.
    idSuitUpgradePackage powerups; // Offset: 0x158

    // Category.
    idSuitUpgradePackage exploration; // Offset: 0x1C0

    // Category.
    idSuitUpgradePackage dash; // Offset: 0x228

    // mastery for getting everything.
    idDeclPerk* mastery; // Offset: 0x290

    // perk group for argent cell upgrades
    idDeclPerkGroup* argentCellPerkGroup; // Offset: 0x298

    // perk group for suit upgrades
    idDeclPerkGroup* suitPerkGroup; // Offset: 0x2A0

    // Cheat code granted for gettin em all.
    idCheatCodeManager::idCheatCodesTypes_t cheatcode; // Offset: 0x2A8

    // Event for Getting em all.
    idDeclTutorialEvent* allAcqTutorial; // Offset: 0x2B0

    int numCells_Health; // Offset: 0x2B8

    int numCells_Armor; // Offset: 0x2BC

    int numCells_Ammo; // Offset: 0x2C0

    bool mastery_acquired; // Offset: 0x2C4

    idManagedClassPtr < idPlayer > playerOwner; // Offset: 0x2C8

    idList < const idDeclPerk * , TAG_IDLIST , false > cheatAcquiredNonMasteryPerks; // Offset: 0x2E8

    idList < const idDeclPerk * , TAG_IDLIST , false > cheatAcquiredMasteryPerks; // Offset: 0x300

    bool hasAppliedFullyUpgradedProgressionWheelCheat; // Offset: 0x318

}; // Size: 0x320
