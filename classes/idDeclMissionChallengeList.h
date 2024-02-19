struct idDeclMissionChallengeList : idGameDeclTypeInfo
{
    struct levelData_t
    {
        // The level that the mission challenges are active for
        idStrId levelName; // Offset: 0x0

        // the encounter challenge
        idDeclDynamicChallenge* encounterChallenge; // Offset: 0x8

        // list of mission challenges for the level
        idList < const idDeclUnlockable * , TAG_IDLIST , false > challenges; // Offset: 0x10

        // list of feats for the level, neat stuff, not challenges per say though
        idList < const idDeclUnlockable * , TAG_IDLIST , false > feats; // Offset: 0x28

        // The cosmetic reward for completing of the mission challenges in a DLC 1 mission. SHOULD BE LEFT NULL FOR CAMPAIGN LISTS.
        idDeclWarehouseOfflineContainer* completionUnlock; // Offset: 0x40

    }; // Size: 0x48

    // upgrades to the base perk
    idList < idDeclMissionChallengeList::levelData_t , TAG_IDLIST , false > levelList; // Offset: 0x90

}; // Size: 0xA8
