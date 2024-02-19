struct idSuitUpgradePackage
{
    // category index
    int index; // Offset: 0x0

    // Display name of the Package.
    idStrId display; // Offset: 0x4

    // Description of the Package.
    idStrId description; // Offset: 0x8

    // Icon of the Package.
    idMaterial2* iconMaterial; // Offset: 0x10

    // All the Suit Upgrades ( Should be 4 )
    idList < const idDeclPerk * , TAG_IDLIST , false > suitUpgrades; // Offset: 0x18

    // All the Argent Upgrades ( Should be 2 )
    idList < const idDeclPerk * , TAG_IDLIST , false > argentUpgrades; // Offset: 0x30

    // Passive Upgrade When All 6 upgrades are applied.
    idDeclPerk* passiveUpgrade; // Offset: 0x48

    // Unlockable requirement to be able to purchase suit upgrades
    idDeclUnlockable* unlockable; // Offset: 0x50

    // How many have we gotten.
    int acquiredSuitUpgrades; // Offset: 0x58

    // How many we've gotten.
    int acquiredArgentUpgrades; // Offset: 0x5C

    bool passiveAcquired; // Offset: 0x60

    bool unlockableMet; // Offset: 0x61

}; // Size: 0x68
