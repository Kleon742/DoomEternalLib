struct idSWFWidget_Seasons_Reward_Skin : idSWFWidget_Seasons_Reward_Base
{
    enum skinType_t : int
    {
        CHARACTER = 0,
        WEAPON = 1,
        PODIUM = 2
    };

    idSWFWidget_Seasons_Reward_Skin::skinType_t skinType; // Offset: 0x198

}; // Size: 0x1A0
