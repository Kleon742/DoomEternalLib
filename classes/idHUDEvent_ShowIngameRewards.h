struct idHUDEvent_ShowIngameRewards
{
    struct ingameReward_t
    {
        idDeclWarehouseItem* rewardItem; // Offset: 0x0

        int progress; // Offset: 0x8

        int goal; // Offset: 0xC

    }; // Size: 0x10

    struct ingameRewardsData_t
    {
        idHUDEvent_ShowIngameRewards::ingameReward_t rewards[10]; // Offset: 0x0

        int numRewards; // Offset: 0xA0

    }; // Size: 0xA8

    idHUDEvent_ShowIngameRewards::ingameRewardsData_t info; // Offset: 0x0

}; // Size: 0xA8
