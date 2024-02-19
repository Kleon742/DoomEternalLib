struct idDeclUICustomData_EndOfLevel_HordeSummary : idGameDeclTypeInfo
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

        // Duration for the sub scores to animate
        idTypesafeTime < int , millisecondUnique_t , 1000 > subScoreAnimationDuration; // Offset: 0x4

        // Time before kicking off a sub score animation
        idTypesafeTime < int , millisecondUnique_t , 1000 > subScoreAnimationDelay; // Offset: 0x8

        // Duration for the final score animation
        idTypesafeTime < int , millisecondUnique_t , 1000 > finalScoreAnimationDuration; // Offset: 0xC

        // Delay before animating the final score
        idTypesafeTime < int , millisecondUnique_t , 1000 > finalScoreAnimationDelay; // Offset: 0x10

        // Duration for the dead run animation
        idTypesafeTime < int , millisecondUnique_t , 1000 > deadRunAnimationDuration; // Offset: 0x14

        // Delay before animating the dead run animation
        idTypesafeTime < int , millisecondUnique_t , 1000 > deadRunAnimationDelay; // Offset: 0x18

        // Duration for the Success animation
        idTypesafeTime < int , millisecondUnique_t , 1000 > SuccessAnimationDuration; // Offset: 0x1C

        // Delay before animating the Success animation
        idTypesafeTime < int , millisecondUnique_t , 1000 > SuccessRunAnimationDelay; // Offset: 0x20

    }; // Size: 0x24

    struct soundEvents_t
    {
        // Sound to play when doing the sub score tally
        idSoundEvent* subScoreTallyProgress; // Offset: 0x0

        // Sound played when the sub score is complete
        idSoundEvent* subScoreScoreComplete; // Offset: 0x8

        // Sound to play when doing the final score tally
        idSoundEvent* finalScoreTallyProgress; // Offset: 0x10

        // Sound played when the final score is complete
        idSoundEvent* finalScoreComplete; // Offset: 0x18

        // Sound played on a dead run
        idSoundEvent* deadRun; // Offset: 0x20

        // Sound played when giving the stone rank to a player
        idSoundEvent* stoneRankSound; // Offset: 0x28

        // Sound played when giving the bronze rank sound
        idSoundEvent* bronzeRankSound; // Offset: 0x30

        // Sound played when giving the silver rank sound
        idSoundEvent* silverRankSound; // Offset: 0x38

        // Sound played when giving the gold rank sound
        idSoundEvent* goldRankSound; // Offset: 0x40

        // Sound played when giving the slayer rank sound
        idSoundEvent* slayerRankSound; // Offset: 0x48

    }; // Size: 0x50

    // Default info
    idDeclUICustomData_EndOfLevel_HordeSummary::defaultInfo_t defaultInfo; // Offset: 0x90

    // Animation durations
    idDeclUICustomData_EndOfLevel_HordeSummary::animationDurations_t animationDurations; // Offset: 0xA0

    // sounds to play during various bits of animation
    idDeclUICustomData_EndOfLevel_HordeSummary::soundEvents_t soundEvents; // Offset: 0xC8

}; // Size: 0x118
