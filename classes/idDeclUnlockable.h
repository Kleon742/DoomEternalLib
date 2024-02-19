struct idDeclUnlockable : idGameDeclTypeInfo
{
    enum customReqType_t : int
    {
        REQU_NONE = 0,
        REQU_ENVSUIT_MOD = 1,
        REQU_NUM_WEAPONS = 2
    };

    struct flags_t
    {
        // used internally at id
        bool internalUse; // Offset: 0x0

        // valid on PC
        bool sys_pc; // Offset: 0x0

        // valid on XBOX
        bool sys_xbox; // Offset: 0x0

        // valid on MAC
        bool sys_mac; // Offset: 0x0

    }; // Size: 0x1

    struct statPreRequisite_t
    {
        // game stat tied to this rule
        gameStat_t stat; // Offset: 0x0

        // stat duration tied to this rule
        gameStatDuration_t statDuration; // Offset: 0x4

        // number of times the requirements must be met to satisfy this rule.
        int count; // Offset: 0x8

    }; // Size: 0xC

    struct unlockableRule_t
    {
        // game stat tied to this rule
        gameStat_t stat; // Offset: 0x0

        // stat duration tied to this rule
        gameStatDuration_t statDuration; // Offset: 0x4

        // number of times the requirements must be met to satisfy this rule.
        int count; // Offset: 0x8

        // 'friendly' name of the rule
        idStrId name; // Offset: 0xC

        // description of the rule
        idStrId description; // Offset: 0x10

    }; // Size: 0x14

    struct multiTieredChallenge_t
    {
        struct tierInfo_t
        {
            // stat value for this tier
            int count; // Offset: 0x0

            // xp awarded for completing this tier
            int xp; // Offset: 0x4

        }; // Size: 0x8

        // game stat for this challenge (all tiers use same stat)
        gameStat_t stat; // Offset: 0x0

        // stat duration for this challenge
        gameStatDuration_t statDuration; // Offset: 0x4

        // what percent of total to show challenge progress display
        float showProgressPercent; // Offset: 0x8

        // list of the tier infos for each tier of the challenge
        idList < idDeclUnlockable::multiTieredChallenge_t::tierInfo_t , TAG_IDLIST , false > tierInfoList; // Offset: 0x10

    }; // Size: 0x28

    struct customRequirements_t
    {
        // custom requirement type
        idDeclUnlockable::customReqType_t customReqType; // Offset: 0x0

        // perk data required
        idDeclPerk* perkRequired; // Offset: 0x8

        // number of weapons required by the player to have
        int numWeapons; // Offset: 0x10

    }; // Size: 0x18

    // 'friendly' display name of the unlockable
    idStrId displayName; // Offset: 0x90

    // display description of the achievement/game unlockable
    idStrId description; // Offset: 0x94

    // type of challenge to show on mission challenge cards (e.g. "glory kill challenge" or similar).
    idStrId challengeType; // Offset: 0x98

    // what kind of unlockable is this?
    unlockableDescriptionFlags_t unlockableFlags; // Offset: 0x9C

    // used to count previous requirements stats into this unlockable i.e. carry over previous stats
    bool carryCustomStats; // Offset: 0xA0

    // if true all stats reqs must be satisfied( and ), if false only one stats reqs must be satisfied( or )
    bool allStatsPrereqsRequired; // Offset: 0xA1

    // id of achievement tied to this unlock
    achievementId_t achievementId; // Offset: 0xA4

    // Currecny to give on completion
    idList < playerCurrency_t , TAG_IDLIST , false > currencyToGive; // Offset: 0xA8

    // Give perk on unlock.
    idDeclPerk* perkToGive; // Offset: 0xC0

    // This Unlockable must be unlocked before we even conside this unlockable.
    idDeclUnlockable* preRequisite; // Offset: 0xC8

    // Tier number if part of a multi tier challenge (0 if it is not)
    int tier; // Offset: 0xD0

    // xp awarded for completing this unlock
    int xp; // Offset: 0xD4

    // player must have reached this echelon level to accumulate the associated stat
    int minEchelonLevel; // Offset: 0xD8

    // the number of times we need to show this when it first starts
    int showInitialNum; // Offset: 0xDC

    // the number of times we need to show this when it is about to end
    int showFinalNum; // Offset: 0xE0

    // the number to use to divide showings, 1 every one, 2 every two, 3 every three etc
    int showAtSpanNum; // Offset: 0xE4

    // Notification for when the unlockable is updated
    idDeclNotification* updateNotification; // Offset: 0xE8

    // icon for the unlockable
    idMaterial2* icon; // Offset: 0xF0

    // icon for the unlockable when it is locked
    idMaterial2* lockedIcon; // Offset: 0xF8

    // image to show on mission challenge cards
    idMaterial2* challengeImage; // Offset: 0x100

    // custom metric that the decl uses
    idDeclMetric* customMetric; // Offset: 0x108

    // violence event that drives the stat for the unlockable
    idDeclViolenceEvent* violenceEvent; // Offset: 0x110

    // Marks this unlockable as a hero stat - hacky fix to tell the unlockable manager to update data platform -- DO NOT USE UNLESS YOU ASK JEBUS FIRST
    bool isDurangoHeroStat; // Offset: 0x118

    // 'hero' stat used by the XboxOne backend
    gameStat_t durangoHeroStat; // Offset: 0x11C

    // Notification for when the unlockable is completed
    idDeclNotification* completionNotification; // Offset: 0x120

    // Item to remove from inventory after completing the unlockable
    idDeclInventory* inventoryItemToRemove; // Offset: 0x128

    // Reward for completing the unlockable
    idDeclInventory* inventoryItemReward; // Offset: 0x130

    // Reward for completing the unlockable
    int inventoryItemRewardCount; // Offset: 0x138

    // Stat to increment on completing the unlockable
    gameStat_t completionStat; // Offset: 0x13C

    // extra metadata for the notification to use, if not awarding an inventory item
    idDeclTypeInfo* notificationData; // Offset: 0x140

    // Warehouse Offline Container for completing the unlockable. Used mainly for awarding cosmetics.
    idDeclWarehouseOfflineContainer* warehouseContainerReward; // Offset: 0x148

    // scoring item to reward when completing the challenge
    idDeclScoringItem* scoringItem; // Offset: 0x150

    // all the stats/counts that need to be met to consider this "unlocked"
    idList < idDeclUnlockable::unlockableRule_t , TAG_IDLIST , false > rules; // Offset: 0x158

    // stat prerequisites for the unlockable
    idList < idDeclUnlockable::statPreRequisite_t , TAG_IDLIST , false > statPrerequisites; // Offset: 0x170

    // stats to increment on unlockable completion
    idList < statManipulation_t , TAG_IDLIST , false > onCompletionStats; // Offset: 0x188

    // multi-tiered challenge info for this decl if applicable
    idDeclUnlockable::multiTieredChallenge_t multiTieredChallenge; // Offset: 0x1A0

    // list of custom pre requirements that need to be fulfilled before we allow updating of this unlockable
    idList < idDeclUnlockable::customRequirements_t , TAG_IDLIST , false > customRequirements; // Offset: 0x1C8

}; // Size: 0x1E0
