struct demonBountyUpgrade_t
{
    // The bitflags for which AI type this upgrade applies to.
    aiMonsterType_t aiType; // Offset: 0x0

    // Which size-class of AI should this apply to (fodder, heavy, etc.)
    aiSizeClass_t aiClass; // Offset: 0x8

    // highlight fx to apply to ai
    idDeclHighlight* aiHighlightDecl; // Offset: 0x10

    // outline color for this bounty
    idColor aiHighlightColor; // Offset: 0x18

    // list of upgrades to apply to ai
    idList < const idDeclUpgrade * , TAG_IDLIST , false > aiUpgrades; // Offset: 0x28

    // list of status effects to apply to AI
    idList < const idDeclStatusEffect * , TAG_IDLIST , false > aiStatusEffects; // Offset: 0x40

    // the list of loot drop extras to give the bountied Ai
    idList < const idDeclLootDrop * , TAG_IDLIST , false > aiLootDrops; // Offset: 0x58

    // if true we remove the original loot drop and only use the extras in the list
    bool aiRemoveOtherLootDrops; // Offset: 0x70

}; // Size: 0x78
