struct idDeclScoringItem : idGameDeclTypeInfo
{
    enum scoringType_t : int
    {
        SCORE_TYPE_DEFAULT = 0,
        SCORE_TYPE_MULTIPLIER_PUSH = 1,
        SCORE_TYPE_MULTIPLIER_POP = 2,
        SCORE_TYPE_MULTIPLIER_REPLACE = 3,
        SCORE_TYPE_SUBSECTION_PUSH = 4,
        SCORE_TYPE_SUBSECTION_POP = 5
    };

    enum scoreEventType_t : int
    {
        SCORE_EVENT_TYPE_DEFAULT = 0,
        SCORE_EVENT_TYPE_DEMON_KILL = 1,
        SCORE_EVENT_TYPE_POWERUP_MULTIPLIER = 2,
        SCORE_EVENT_TYPE_CHALLENGE = 3,
        SCORE_EVENT_TYPE_BOUNTY = 4,
        SCORE_EVENT_TYPE_BFG_AMMO = 5,
        SCORE_EVENT_TYPE_EXTRA_LIVES = 6,
        SCORE_EVENT_TYPE_COIN = 7,
        SCORE_EVENT_TYPE_ARCHVILE = 8
    };

    // score value
    float score; // Offset: 0x90

    // ui icon for this event
    idMaterial2* icon; // Offset: 0x98

    // color for the icon
    swfNamedColors_t iconColor; // Offset: 0xA0

    // hud event for this event to fire off
    hudEventID_t hudEventID; // Offset: 0xA4

    // scoring type for this event ( either additive, or a multiplier )
    idDeclScoringItem::scoringType_t scoringType; // Offset: 0xA8

    // extra enum to help with multiple multipliers
    idDeclScoringItem::scoreEventType_t eventType; // Offset: 0xAC

    // if the event only targets other events
    idDeclScoringItem::scoreEventType_t targetType; // Offset: 0xB0

    // sound to play when this event is scored
    idSoundEvent* scoreSound; // Offset: 0xB8

    // stat for how many times this item happens this run
    gameStat_t statCount; // Offset: 0xC0

    // stat for much score came from this item
    gameStat_t statScore; // Offset: 0xC4

    // stat for how many times this item happens for the lifetime of the profile
    gameStat_t statLifetimeCount; // Offset: 0xC8

}; // Size: 0xD0
