struct idAutomapMapGroupRevealEntity : idTarget
{
    // The name associated with the Automap Map Group. This is mainly used for display purposes but will be used as a backup search method if no ID match can be found
    idStr mapGroupName; // Offset: 0xB88

    // The group ID of the Automap Map Group. This is used to match to the MapGroup on the current map to unlock the MapGroup section for Fast Travel
    automapMapGroupId_t mapGroupId; // Offset: 0xBB8

    // Whether this entity has been activated or not
    bool hasBeenActivated; // Offset: 0xBBC

}; // Size: 0xBC0
