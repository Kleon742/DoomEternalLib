struct idHUDEvent_PVPRoundUpgradeChosen
{
    struct pvpUpgradeInfo_t
    {
        idDeclPVPUpgrade* upgradeDecl; // Offset: 0x0

        int upgradeBit; // Offset: 0x8

    }; // Size: 0x10

    idHUDEvent_PVPRoundUpgradeChosen::pvpUpgradeInfo_t info; // Offset: 0x0

}; // Size: 0x10
