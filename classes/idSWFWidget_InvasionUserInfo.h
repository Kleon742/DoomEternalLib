struct idSWFWidget_InvasionUserInfo : idSWFWidget
{
    enum invasionUserState_t : int
    {
        INVASION_USER_STATE_INVALID = -1,
        INVASION_USER_STATE_NORMAL = 0,
        INVASION_USER_STATE_HIT = 1,
        INVASION_USER_STATE_LOW_HEALTH = 2,
        INVASION_USER_STATE_DEAD = 3,
        INVASION_USER_STATE_UNKNOWN = 4,
        INVASION_USER_STATE_GHOST = 5,
        INVASION_USER_STATE_DISGUISE = 6
    };

    idSWFWidget_InvasionUserInfo::invasionUserState_t currentState; // Offset: 0x180

    idHUDEvent_InvasionMatchInfoUpdate::playerInfo_t currentData; // Offset: 0x188

    idHUDEvent_InvasionMatchInfoUpdate::playerInfo_t previousData; // Offset: 0x288

    bool localPlayerIsSlayer; // Offset: 0x388

    bool isBeingSpectated; // Offset: 0x389

    int fillFramesPerPip; // Offset: 0x38C

    int maxPipsPerBar; // Offset: 0x390

    idSWFCachedSpriteInstance mainSprite; // Offset: 0x398

    idSWFCachedSpriteInstance iconSprite; // Offset: 0x3C8

    idSWFCachedSpriteInstance iconImageSprite; // Offset: 0x3F8

    idSWFCachedSpriteInstance iconGlowSprite; // Offset: 0x428

    idSWFCachedSpriteInstance frameSprite; // Offset: 0x458

    idSWFCachedSpriteInstance framePulseSprite; // Offset: 0x488

    idSWFCachedSpriteInstance usernameSprite; // Offset: 0x4B8

    idSWFCachedSpriteInstance voiceTalkIconSprite; // Offset: 0x4E8

    idSWFCachedSpriteInstance voiceMuteIconSprite; // Offset: 0x518

    idSWFCachedSpriteInstance spectatorBorderSprite; // Offset: 0x548

    idSWFCachedSpriteInstance healthContainerSprite; // Offset: 0x578

    idSWFCachedSpriteInstance healthBarTopSprite; // Offset: 0x5A8

    idSWFCachedSpriteInstance healthBarTopFillSprite; // Offset: 0x5D8

    idSWFCachedSpriteInstance healthBarTopBackgroundSprite; // Offset: 0x608

    idSWFCachedSpriteInstance healthBarBottomSprite; // Offset: 0x638

    idSWFCachedSpriteInstance healthBarBottomFillSprite; // Offset: 0x668

    idSWFCachedSpriteInstance healthBarBottomBackgroundSprite; // Offset: 0x698

}; // Size: 0x6C8
