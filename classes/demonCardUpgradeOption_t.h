struct demonCardUpgradeOption_t
{
    // the payload selection of what this upgrade is supposed to do for this level, only one is selected as the upgrade
    int tierCost; // Offset: 0x0

    // the payload selection of what this upgrade is supposed to do for this level, only one is selected as the upgrade
    idList < demonCardUpgradeOptionPayload_t , TAG_IDLIST , false > tierUpgrades; // Offset: 0x8

}; // Size: 0x20
