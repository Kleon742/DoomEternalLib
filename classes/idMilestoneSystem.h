struct idMilestoneSystem
{
    bool profileLoadedOnce; // Offset: 0x0

    bool gameLoadedOnce; // Offset: 0x1

    // the list of all the milestone tracking.
    idList < idMilestone , TAG_IDLIST , false > milestones; // Offset: 0x8

    idSysMutex milestonesMutex; // Offset: 0x20

    idArray < profileStatValue_t , 1459 > initialGameStats; // Offset: 0x48

}; // Size: 0x1718
