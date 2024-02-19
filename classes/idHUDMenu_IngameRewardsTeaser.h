struct idHUDMenu_IngameRewardsTeaser : idHUDMenu_IngameRewards
{
    idMilestone* teaserMilestone; // Offset: 0x288

    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > teaserRewards; // Offset: 0x290

    idSWFWidget_Button_Milestone* milestoneProgress; // Offset: 0x2A8

}; // Size: 0x2B0
