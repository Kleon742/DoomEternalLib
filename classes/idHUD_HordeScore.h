struct idHUD_HordeScore : idHUDElement
{
    struct idScoreEventData_t
    {
        int score_increase; // Offset: 0x0

        int total_score; // Offset: 0x4

        idMaterial2* icon; // Offset: 0x8

        float multiplier; // Offset: 0x10

        idSoundEvent* sound; // Offset: 0x18

        idDeclScoringItem* multiplierItem; // Offset: 0x20

        bool playSound; // Offset: 0x28

    }; // Size: 0x30

    int score; // Offset: 0xF8

    int blitzScore; // Offset: 0xFC

    int coinCount; // Offset: 0x100

    int coinGoal; // Offset: 0x104

    int bountyCount; // Offset: 0x108

    short medalIndex; // Offset: 0x10C

    short medalIndexBuffer; // Offset: 0x10E

    int medalGoal; // Offset: 0x110

    int previousMedalGoal; // Offset: 0x114

    int medalGoalBuffer; // Offset: 0x118

    bool blitzRound; // Offset: 0x11C

    bool hasPreviousBest; // Offset: 0x11D

    idSWFWidget_Seasons_XP_Counter* scoreWidget; // Offset: 0x120

    idSWFWidget_Seasons_XP_Counter* blitzWidget; // Offset: 0x128

    idSWFWidget_Seasons_XP_Counter* coinWidget; // Offset: 0x130

    idSWFWidget_Seasons_XP_Counter* bountyWidget; // Offset: 0x138

    idSWFWidget_ArenaWaves* waveWidget; // Offset: 0x140

    idSWFWidget_Ticker* ticker; // Offset: 0x148

    // Cached Sprites
    idSWFCachedSpriteInstance previousBestSprite; // Offset: 0x150

    idSWFCachedSpriteInstance medalProgressSprite; // Offset: 0x180

    idDeclScoringItem* currentMultiplier; // Offset: 0x1B0

    idDeclStatusEffect* powerupDecl; // Offset: 0x1B8

    float multiplierPercentage; // Offset: 0x1C0

    idSWFCachedSpriteInstance multiplierStatusSprite; // Offset: 0x1C8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > notificationStartTime; // Offset: 0x1F8

    swfNamedColors_t overrideColor; // Offset: 0x200

    swfNamedColors_t medalColor; // Offset: 0x204

    idMaterial2* medalIcon; // Offset: 0x208

    idList < idHUD_HordeScore::idScoreEventData_t , TAG_IDLIST , false > scoreEventList; // Offset: 0x210

    // Last time a ticker was posted
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastScorePostTime; // Offset: 0x228

    // Amount the score increased for previous notifications. This should be cleared when the score is finally submitted.
    int cumulativeScoreGain; // Offset: 0x230

    // Amount the score increased for previous notifications. This should be cleared when the score is finally submitted.
    int savedTickerScore; // Offset: 0x234

    // Sound to use for the ticker sound if there's a multiplier active
    idSoundEvent* tickerSoundMultiplier; // Offset: 0x238

}; // Size: 0x240
