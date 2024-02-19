struct idDeclMilestoneList : idGameDeclTypeInfo
{
    struct milestoneCategory_t
    {
        // list of milestones
        idList < const idDeclUnlockable * , TAG_IDLIST , false > milestones; // Offset: 0x0

        // title of the category group
        idStr title; // Offset: 0x18

    }; // Size: 0x48

    // list of milestone categories
    idList < idDeclMilestoneList::milestoneCategory_t , TAG_IDLIST , false > categories; // Offset: 0x90

}; // Size: 0xA8
