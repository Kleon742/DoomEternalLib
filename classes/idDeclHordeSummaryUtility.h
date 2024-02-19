struct idDeclHordeSummaryUtility : idGameDeclTypeInfo
{
    struct defaultInfo_t
    {
        // Default challenge name, if none specified
        idStrId challengeName; // Offset: 0x0

        // Default challenge icon, if none specified
        idMaterial2* challengeIcon; // Offset: 0x8

    }; // Size: 0x10

    struct idHordeSummaryScoreItemInfo_t
    {
        // icon used for the score item
        idMaterial2* icon; // Offset: 0x0

        // name for the score item
        idStrId name; // Offset: 0x8

    }; // Size: 0x10

    struct scoreItemIcons_t
    {
        // score item info for the BFG ammo bonus
        idDeclHordeSummaryUtility::idHordeSummaryScoreItemInfo_t bfgAmmoBonus; // Offset: 0x0

        // score item info for the extra live bonus
        idDeclHordeSummaryUtility::idHordeSummaryScoreItemInfo_t extraLivesBonus; // Offset: 0x10

        // score item info for the ccoin bonus
        idDeclHordeSummaryUtility::idHordeSummaryScoreItemInfo_t coinBonus; // Offset: 0x20

        // score item info for the bounty bonus
        idDeclHordeSummaryUtility::idHordeSummaryScoreItemInfo_t bountyBounus; // Offset: 0x30

        // score item info for the power-up kill bonus
        idDeclHordeSummaryUtility::idHordeSummaryScoreItemInfo_t powerUpKillBonus; // Offset: 0x40

        // score item info for the blitz bonus
        idDeclHordeSummaryUtility::idHordeSummaryScoreItemInfo_t blitzBonus; // Offset: 0x50

        // score item info for the combat bonus
        idDeclHordeSummaryUtility::idHordeSummaryScoreItemInfo_t combatBonus; // Offset: 0x60

        // score item info for the easy difficulty bonus
        idDeclHordeSummaryUtility::idHordeSummaryScoreItemInfo_t difficultyBonusEasy; // Offset: 0x70

        // score item info for the medium difficulty bonus
        idDeclHordeSummaryUtility::idHordeSummaryScoreItemInfo_t difficultyBonusMedium; // Offset: 0x80

        // score item info for the hard difficulty bonus
        idDeclHordeSummaryUtility::idHordeSummaryScoreItemInfo_t difficultyBonusHard; // Offset: 0x90

        // score item info for the nightmare difficulty bonus
        idDeclHordeSummaryUtility::idHordeSummaryScoreItemInfo_t difficultyBonusNightmare; // Offset: 0xA0

    }; // Size: 0xB0

    struct difficultyScoreThreshold_t
    {
        // score threshold for this difficulty and up (unless better found)
        int value; // Offset: 0x0

        // difficulty that this applies to
        gameDifficulty_t difficulty; // Offset: 0x4

    }; // Size: 0x8

    struct idHordeSummaryMedalInfo_t
    {
        // image for the active medal
        idMaterial2* activeMedal; // Offset: 0x0

        // color for the medal
        swfNamedColors_t medalColor; // Offset: 0x8

        // color for the medal text
        swfNamedColors_t medalTextColor; // Offset: 0xC

        // color for the medal glow
        swfNamedColors_t medalGlowColor; // Offset: 0x10

        // thresholds for medal by difficulty
        idArray < idDeclHordeSummaryUtility::difficultyScoreThreshold_t , 5 > scoreThreshold; // Offset: 0x14

        // name of the medal
        idStrId name; // Offset: 0x3C

        // Sound played when the medal is activated
        idSoundEvent* activationSound; // Offset: 0x40

    }; // Size: 0x48

    struct medalInfos_t
    {
        // medal info for bronze
        idDeclHordeSummaryUtility::idHordeSummaryMedalInfo_t bronze; // Offset: 0x0

        // medal info for silver
        idDeclHordeSummaryUtility::idHordeSummaryMedalInfo_t silver; // Offset: 0x48

        // medal info for gold
        idDeclHordeSummaryUtility::idHordeSummaryMedalInfo_t gold; // Offset: 0x90

        // medal info for slayer
        idDeclHordeSummaryUtility::idHordeSummaryMedalInfo_t slayer; // Offset: 0xD8

    }; // Size: 0x120

    struct soundEvents_t
    {
        // Sound for when the counter is incrementing
        idSoundEvent* counterIncrementSound; // Offset: 0x0

        // Sound for when the counter is finished
        idSoundEvent* counterIncrementEnd; // Offset: 0x8

    }; // Size: 0x10

    // Get the points to the next medal Default info
    idDeclHordeSummaryUtility::defaultInfo_t defaultInfo; // Offset: 0x90

    // images used for each of the score icons
    idDeclHordeSummaryUtility::scoreItemIcons_t scoreItemIcons; // Offset: 0xA0

    // information for medals
    idDeclHordeSummaryUtility::medalInfos_t medals; // Offset: 0x150

    // Sound events for the progress bar and counter
    idDeclHordeSummaryUtility::soundEvents_t soundEvents; // Offset: 0x270

    // duration for the progress bar in ms
    int progressDuration_ms; // Offset: 0x280

    // duration for the counter in ms
    int counterDuration_ms; // Offset: 0x284

    // Logic decl for animations (experimental)
    idDeclLogicEntity* animationLogicDecl; // Offset: 0x288

}; // Size: 0x290
