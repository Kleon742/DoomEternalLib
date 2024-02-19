struct idSWFWidget_Seasons_Reward_Badge : idSWFWidget_Seasons_Reward_Base
{
    enum badgeType_t : int
    {
        ICON = 0,
        NAMEPLATE = 1
    };

    idSWFWidget_Seasons_Reward_Badge::badgeType_t badgeType; // Offset: 0x198

}; // Size: 0x1A0
