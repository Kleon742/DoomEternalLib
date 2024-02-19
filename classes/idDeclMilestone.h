struct idDeclMilestone : idGameDeclTypeInfo
{
    struct milestoneDisplay_t
    {
        // Title of the Milestone.
        idStrId title; // Offset: 0x0

        // Description of the Milestone.
        idStrId description; // Offset: 0x4

        // Totally hidden before completion.
        bool hidden; // Offset: 0x8

        // Title and description is hidden until completion. ( See ???? )
        bool titleHidden; // Offset: 0x9

        // Reward is hidden until completion.
        bool rewardHidden; // Offset: 0xA

        // progression bar is hidden until completion.
        bool progressionHidden; // Offset: 0xB

        // Does this Milestone give a platform achievement.
        idDeclUnlockable* platformAchievement; // Offset: 0x10

        // Icon to use for the Milestone.
        idMaterial2* icon; // Offset: 0x18

    }; // Size: 0x20

    struct statTracking_t
    {
        // Stat to track.
        gameStat_t stat; // Offset: 0x0

        // How much is needed for completion.
        int max; // Offset: 0x4

        // Divisor for what we render in the UI. If it's 1000 we can convert milliseconds to seconds.
        int uiDivisor; // Offset: 0x8

        // Scope of the stat (i.e. is it per lifetime-profile, sku-profile, or game-slot?)
        milestoneStatScope_t statScope; // Offset: 0xC

        // SKU this milestone belongs to; required if statScope is sku-profile
        doomEternalSku_t doomEternalSku; // Offset: 0x10

        // A list of milestones that need to be unlocked in order to unlock this milestone
        idList < idDeclMilestone * , TAG_IDLIST , false > unlockingMilestones; // Offset: 0x18

    }; // Size: 0x30

    // The category that this milestone belongs to.
    mileStoneCategory_t category; // Offset: 0x90

    // Rewards for getting this milestone.
    idArray < const idDeclWarehouseOfflineContainer * , 3 > rewardList; // Offset: 0x98

    // Sorting value for the milestone decl.
    int order; // Offset: 0xB0

    // allow this milestone to be ticked up in master levels
    bool allowInMasterLevel; // Offset: 0xB4

    // Display Information for the milestone.
    idDeclMilestone::milestoneDisplay_t display; // Offset: 0xB8

    // Tracking data for the milestone.
    idDeclMilestone::statTracking_t tracking; // Offset: 0xD8

    // Stat to trigger when this milestone has completed.
    gameStat_t completedStat; // Offset: 0x108

    // Put your extra Unlockables here baby.
    idList < const idDeclUnlockable * , TAG_IDLIST , false > otherNeededDecls; // Offset: 0x110

}; // Size: 0x128
