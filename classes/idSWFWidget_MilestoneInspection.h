struct idSWFWidget_MilestoneInspection : idSWFWidget
{
    idMilestone* milestone; // Offset: 0x180

    bool showSlotSpecificProgress; // Offset: 0x188

    bool useProfileCompletion; // Offset: 0x189

    idArray < idSWFWidget_Seasons_RewardListItem * , 3 > milestoneRewardItems; // Offset: 0x190

}; // Size: 0x1A8
