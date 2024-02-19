struct idSWFWidget_Seasons_Reward_Base : idSWFWidget
{
    enum rewardState_t : int
    {
        LOCKED = 0,
        UNLOCKED = 1
    };

    idSWFWidget_Seasons_Reward_Base::rewardState_t state; // Offset: 0x180

    idDeclWarehouseItem* rewardItem; // Offset: 0x188

    bool hideRewardImage; // Offset: 0x190

}; // Size: 0x198
