struct idDeclUICustomData_EndOfLevel_MasterLevel : idGameDeclTypeInfo
{
    struct defaultInfo_t
    {
        // Default challenge name, if none specified
        idStrId challengeName; // Offset: 0x0

        // Default challenge icon, if none specified
        idMaterial2* challengeIcon; // Offset: 0x8

    }; // Size: 0x10

    struct animationDurations_t
    {
        // Time to wait before kicking off animation sequence
        idTypesafeTime < int , millisecondUnique_t , 1000 > preDelay; // Offset: 0x0

        // Challenge stage duration
        idTypesafeTime < int , millisecondUnique_t , 1000 > challengeStageDuration; // Offset: 0x4

        // Progress initial delay before animating items
        idTypesafeTime < int , millisecondUnique_t , 1000 > progressInitialDelay; // Offset: 0x8

        // Progress item fill duration
        idTypesafeTime < int , millisecondUnique_t , 1000 > progressItemFillDuration; // Offset: 0xC

        // Progress item wait duration
        idTypesafeTime < int , millisecondUnique_t , 1000 > progressItemWaitDuration; // Offset: 0x10

        // Delay between progress and reward stages
        idTypesafeTime < int , millisecondUnique_t , 1000 > rewardInitialDelay; // Offset: 0x14

    }; // Size: 0x18

    struct soundEvents_t
    {
        // sound to play when showing the challenge details (the top-left notification-y thing)
        idSoundEvent* showChallenge; // Offset: 0x0

        // sound to play when filling the progress bar
        idSoundEvent* progressBarFill; // Offset: 0x8

        // sound to play when marking a progress item (difficulty) complete
        idSoundEvent* progressItemComplete; // Offset: 0x10

        // sound to play when showing the reward details on the right-hand side (provided the player gained a reward)
        idSoundEvent* showReward; // Offset: 0x18

        // sound to play when showing the "no reward" thingy on the right-hand side, if the player gained no rewards.
        idSoundEvent* showNoReward; // Offset: 0x20

    }; // Size: 0x28

    // Default info
    idDeclUICustomData_EndOfLevel_MasterLevel::defaultInfo_t defaultInfo; // Offset: 0x90

    // Animation durations
    idDeclUICustomData_EndOfLevel_MasterLevel::animationDurations_t animationDurations; // Offset: 0xA0

    // sounds to play during various bits of animation
    idDeclUICustomData_EndOfLevel_MasterLevel::soundEvents_t soundEvents; // Offset: 0xB8

}; // Size: 0xE0
