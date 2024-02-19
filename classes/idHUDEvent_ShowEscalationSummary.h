struct idHUDEvent_ShowEscalationSummary
{
    struct escalationReward_t
    {
        idDeclWarehouseItem* rewardItem; // Offset: 0x0

        int milestoneIndex; // Offset: 0x8

    }; // Size: 0x10

    struct escalationSummaryData_t
    {
        idDeclPerk* perkItem; // Offset: 0x0

        idHUDEvent_ShowEscalationSummary::escalationReward_t rewards[10]; // Offset: 0x8

        int numRewards; // Offset: 0xA8

        int progress; // Offset: 0xAC

    }; // Size: 0xB0

    idHUDEvent_ShowEscalationSummary::escalationSummaryData_t info; // Offset: 0x0

}; // Size: 0xB0
