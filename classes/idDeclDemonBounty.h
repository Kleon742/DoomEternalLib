struct idDeclDemonBounty : idDeclInventory
{
    // the bitflags for the ai types we are allowed to use for bounty purposes on this map
    aiMonsterType_t aiMonsterTypes; // Offset: 0x3F8

    // the upgrades to give out to the demons when a bounty is on them per level
    idList < demonBountyUpgradeList_t , TAG_IDLIST , false > demonBountyUpgradeLevels; // Offset: 0x400

    // The POI to show on the enemy.
    idDeclPOI* poiDecl; // Offset: 0x418

    // sound to play when a bounty is closed
    idSoundEvent* bountyCompleteSound; // Offset: 0x420

}; // Size: 0x428
