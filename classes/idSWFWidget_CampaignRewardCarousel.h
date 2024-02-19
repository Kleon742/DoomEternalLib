struct idSWFWidget_CampaignRewardCarousel : idSWFWidget
{
    idDeclCampaign* campaign; // Offset: 0x180

    idSWFWidget_MilestoneSet* milestoneSet; // Offset: 0x188

    idSWFWidget_EOL_MasterLevelRewardPips* selectionPips; // Offset: 0x190

    int selectionIndex; // Offset: 0x198

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pipCycleStartTime; // Offset: 0x1A0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pipCycleEndTime; // Offset: 0x1A8

}; // Size: 0x1B0
