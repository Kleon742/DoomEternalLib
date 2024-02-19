struct idInteractable_GoreNest : idInteractable
{
    // gore buds we're linked to
    idList < idManagedClassPtr < idInteractable_GoreBud > , TAG_IDLIST , false > goreBuds; // Offset: 0x2B50

}; // Size: 0x2B68
