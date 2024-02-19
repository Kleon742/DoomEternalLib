struct demonCardUpgradePath_t
{
    // the archetype for this path
    demonCardArchetype_t pathArchtype; // Offset: 0x0

    // the upgrade path for this archetype
    idList < demonCardUpgradeOption_t , TAG_IDLIST , false > upgradePath; // Offset: 0x8

}; // Size: 0x20
