struct idUpgradeComponent
{
    struct activeUpgradeInfo_t
    {
        // the definition of the upgrade
        idDeclUpgrade* upgradeDecl; // Offset: 0x0

        // how many times this upgrade has been awarded
        int upgradeCount; // Offset: 0x8

        // many of these are from a cheat count
        int cheatCount; // Offset: 0xC

    }; // Size: 0x10

    idList < idUpgradeComponent::activeUpgradeInfo_t , TAG_IDLIST , false > activeUpgrades; // Offset: 0x8

    bool allowMultipleUpgrades; // Offset: 0x20

    bool loadingFromFile; // Offset: 0x21

}; // Size: 0x28
