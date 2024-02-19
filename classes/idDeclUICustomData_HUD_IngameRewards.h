struct idDeclUICustomData_HUD_IngameRewards : idGameDeclTypeInfo
{
    struct notificationInfo_t
    {
        // Notification name
        idStrId notificationName; // Offset: 0x0

        // Notification icon
        idMaterial2* notificationIcon; // Offset: 0x8

        // Notification description
        idStrId notificationDesc; // Offset: 0x10

        // Notification accent color
        swfNamedColors_t notificationColor; // Offset: 0x14

        // Notification animation name (if empty, defaults to "rollOn")
        idStr notificationAnimName; // Offset: 0x18

        // Notification "completed" text (if non-blank)
        idStrId completedText; // Offset: 0x48

    }; // Size: 0x50

    struct notificationInfoSet_t
    {
        // Notification info for DLC1 Secret Encounter complete
        idDeclUICustomData_HUD_IngameRewards::notificationInfo_t secretEncounter; // Offset: 0x0

        // Notification info for DLC2 Escalation Encounter half-complete
        idDeclUICustomData_HUD_IngameRewards::notificationInfo_t escalationEncounterHalf; // Offset: 0x50

        // Notification info for DLC2 Escalation Encounter fully-complete
        idDeclUICustomData_HUD_IngameRewards::notificationInfo_t escalationEncounterFull; // Offset: 0xA0

        // Notification info for Campaign (Horde) rewards
        idDeclUICustomData_HUD_IngameRewards::notificationInfo_t campaignRewards; // Offset: 0xF0

    }; // Size: 0x140

    struct animationDurations_t
    {
        // Time to wait before kicking off animation sequence
        idTypesafeTime < int , millisecondUnique_t , 1000 > preDelay; // Offset: 0x0

        // show notification duration
        idTypesafeTime < int , millisecondUnique_t , 1000 > showNotification; // Offset: 0x4

        // show reward duration
        idTypesafeTime < int , millisecondUnique_t , 1000 > showReward; // Offset: 0x8

        // reward progress duration
        idTypesafeTime < int , millisecondUnique_t , 1000 > rewardProgress; // Offset: 0xC

        // reward complete duration
        idTypesafeTime < int , millisecondUnique_t , 1000 > rewardComplete; // Offset: 0x10

        // hide duration
        idTypesafeTime < int , millisecondUnique_t , 1000 > hide; // Offset: 0x14

    }; // Size: 0x18

    struct soundEvents_t
    {
        // sound to play when showing the notification (left side of the screen)
        idSoundEvent* showNotification; // Offset: 0x0

        // sound to play when showing the perk details on the right-hand side (provided the player gained a perk)
        idSoundEvent* showPerk; // Offset: 0x8

        // sound to play when showing the reward details on the right-hand side (provided the player gained a reward)
        idSoundEvent* showReward; // Offset: 0x10

        // sound to play when showing the "no reward" thingy on the right-hand side, if the player gained no rewards.
        idSoundEvent* showNoReward; // Offset: 0x18

    }; // Size: 0x20

    struct rewardAnim_t
    {
        // initial frame name when preparing to show reward animation
        idStr startFrameName; // Offset: 0x0

        // frame name to play when kicking off reward animation
        idStr playFrameName; // Offset: 0x30

        // sound event for reward animation
        idSoundEvent* soundEvent; // Offset: 0x60

    }; // Size: 0x68

    struct rewardAnimData_t
    {
        // unlock "1 of 2" animation
        idDeclUICustomData_HUD_IngameRewards::rewardAnim_t unlock1of2; // Offset: 0x0

        // unlock "2 of 2" animation
        idDeclUICustomData_HUD_IngameRewards::rewardAnim_t unlock2of2; // Offset: 0x68

        // unlock complete animation
        idDeclUICustomData_HUD_IngameRewards::rewardAnim_t unlockComplete; // Offset: 0xD0

    }; // Size: 0x138

    // Notification info
    idDeclUICustomData_HUD_IngameRewards::notificationInfoSet_t notificationInfo; // Offset: 0x90

    // Animation durations
    idDeclUICustomData_HUD_IngameRewards::animationDurations_t animationDurations; // Offset: 0x1D0

    // sounds to play during various bits of animation
    idDeclUICustomData_HUD_IngameRewards::soundEvents_t soundEvents; // Offset: 0x1E8

    // reward animations; sort of a special-case thing for DLC1 ship
    idDeclUICustomData_HUD_IngameRewards::rewardAnimData_t rewardAnims; // Offset: 0x208

}; // Size: 0x340
