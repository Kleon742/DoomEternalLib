struct idDeclLootDrop : idGameDeclTypeInfo
{
    struct itemMaxDropPair_t
    {
        // max amount dropped
        idBranchedOptionValue < declInputBranch_t , int > item_maxDrop; // Offset: 0x0

        // context for this pair
        lootDropContextFlags_t context; // Offset: 0x28

    }; // Size: 0x30

    struct gameDifficultyItemPercentagePair_t
    {
        // Percentage of Max Holdings based on difficulty. ( used with ITEM_AMT_CALC_PERCENTAGE )
        float item_percentageDifficulty; // Offset: 0x0

        // Game difficulty setting for this loot drop
        gameDifficulty_t gameDifficulty; // Offset: 0x4

    }; // Size: 0x8

    struct dropCooldownInfo_t
    {
        // Easy lootdop cooldown value
        idTypesafeTime < int , millisecondUnique_t , 1000 > dropCooldownEasy; // Offset: 0x0

        // Medium lootdrop cooldown value
        idTypesafeTime < int , millisecondUnique_t , 1000 > dropCooldownMedium; // Offset: 0x4

        // Hard lootdrop cooldown value
        idTypesafeTime < int , millisecondUnique_t , 1000 > dropCooldownHard; // Offset: 0x8

        // Nightmare lootdrop cooldown value
        idTypesafeTime < int , millisecondUnique_t , 1000 > dropCooldownNightmare; // Offset: 0xC

        // UltraNightmare lootdrop cooldown value
        idTypesafeTime < int , millisecondUnique_t , 1000 > dropCooldownUltraNightmare; // Offset: 0x10

    }; // Size: 0x14

    // how does the component drop these items
    lootDropMode_t dropMode; // Offset: 0x90

    // In what scenarios should this loot drop be considered
    lootDropRestriction_t dropRestriction; // Offset: 0x94

    // Ignores game challenge restrictions for this droppable loot
    bool ignoreChallengeRestriction; // Offset: 0x98

    // Player must be above this percentage value.
    float value_MinConditional; // Offset: 0x9C

    // Player must be below this percentage value.
    float value_MaxConditional; // Offset: 0xA0

    // What type of item is this.
    lootItemType_t itemType; // Offset: 0xA4

    // entity def to drop for this droppable loot.
    idDeclEntityDef* entityDef; // Offset: 0xA8

    // How do we calculate the amount.
    lootItemAmountCalculation_t item_amt_calc; // Offset: 0xB0

    // max amount dropped
    idBranchedOptionValue < declInputBranch_t , int > item_maxDrop; // Offset: 0xB8

    // max amount dropped
    idList < idDeclLootDrop::itemMaxDropPair_t , TAG_IDLIST , false > item_maxDrop_Overrides; // Offset: 0xE0

    // 0 - 100, Interpolate from this value based on deficiency.
    int item_dropChanceMin; // Offset: 0xF8

    // 0 - 100, Interpolate to this value based on deficiency.
    int item_dropChanceMax; // Offset: 0xFC

    // How long until this item disappears.
    idTypesafeTime < int , millisecondUnique_t , 1000 > item_removalTimeMS; // Offset: 0x100

    // item data for the loot type.
    idDeclProp_Component* decl; // Offset: 0x108

    // Percentage of Max Holdings. ( used with ITEM_AMT_CALC_PERCENTAGE )
    float item_percentage; // Offset: 0x110

    // item percentage paired with the game difficulty
    idList < idDeclLootDrop::gameDifficultyItemPercentagePair_t , TAG_IDLIST , false > item_percentageDifficulty; // Offset: 0x118

    // Explicit spawn offset
    idVec3 explicitSpawnOffset; // Offset: 0x130

    // interval in MS between each item to drop
    idTypesafeTime < int , millisecondUnique_t , 1000 > item_dropTimeIntervalMS; // Offset: 0x13C

    // the environment suit restricts these drops
    bool envSuitRestricted; // Offset: 0x140

    // the type of environment suit we must have in order for these drops to be valid
    idUpgradeMod_Equipment::equipmentModType_t envSuitModType; // Offset: 0x144

    // if this is false for LOOT_AMMO then a weapon to use the ammo needn't be present in the inventory
    bool ammoRequiresWeapon; // Offset: 0x148

    // if no ammoItem exists in the inventory to allow querying ammoItem->GetItemMaxCount(), this is the maxCount to use instead
    int ammoItemMaxCount; // Offset: 0x14C

    // only drop loot if this item is in the inventory
    idDeclInventory* mustHaveItem; // Offset: 0x150

    // only drop loot if this item is not in the inventory
    idDeclInventory* mustNotHaveItem; // Offset: 0x158

    // only drop loot if this perk is in the perk inventory
    idDeclPerk* mustHavePerk; // Offset: 0x160

    // only drop loot if this perk is not in the perk inventory
    idDeclPerk* mustNotHavePerk; // Offset: 0x168

    // only drop if the damage matches the damage type bitflags
    weaponDamageTypeBits_t mustMatchAmmoDamageType; // Offset: 0x170

    // Will drop without the loot tracking check.
    bool noLootTrackingCheck; // Offset: 0x178

    // Will never fly "away" from the attacker
    bool alwaysSpawnTowardsAttacker; // Offset: 0x179

    // Loot will be exempt from Loot Blocked in PVP, and will guaranteed drop even if the next drop isn't supposed to happen yet
    bool ignoreNextDropTime; // Offset: 0x17A

    // if TRUE, spawn offset sequentially moves up the joint list (1st loot 1st joint, 2nd loot 2nd joint, etc..) OR from the AI viewPos; if FALSE, no offset is added
    bool spawnOffsetFromJointOrView; // Offset: 0x17B

    // loot drop cooldown info
    idDeclLootDrop::dropCooldownInfo_t lootDropCooldownInfo; // Offset: 0x17C

}; // Size: 0x190
