struct idPVPUpgradeComponent
{
    idManagedClassPtr < idPlayer > owner; // Offset: 0x0

    // the current list of upgrades that the player has picked
    idList < idDeclPVPUpgrade::upgrade_t , TAG_IDLIST , false > currentUpgrades; // Offset: 0x20

    // upgrades need to be applied this round
    bool pendingUpgrades; // Offset: 0x38

    // exists to allow remote players to show this on HUD
    idDeclPVPUpgrade::upgrade_t remotePowerUpgrade; // Offset: 0x40

}; // Size: 0x50
