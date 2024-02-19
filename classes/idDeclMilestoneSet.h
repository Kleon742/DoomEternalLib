struct idDeclMilestoneSet : idGameDeclTypeInfo
{
    // Milestone set title (typically the name of the MC set we wish to show)
    idStr title; // Offset: 0x90

    // Milestone set description
    idStr description; // Offset: 0xC0

    // The primary (large) image to show on the landing page
    idMaterial2* image; // Offset: 0xF0

    // The secondary (small) icon image to show on the rewards list
    idMaterial2* icon; // Offset: 0xF8

    // Milestones in this group
    idList < const idDeclMilestone * , TAG_IDLIST , false > milestones; // Offset: 0x100

}; // Size: 0x118
