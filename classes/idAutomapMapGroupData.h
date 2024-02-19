struct idAutomapMapGroupData
{
    // The group ID of the Automap Map Group
    automapMapGroupId_t mapGroupId; // Offset: 0x0

    // The name associated with the Automap Map Group
    idStr mapGroupName; // Offset: 0x8

    // The readable name string
    idStrId readableName; // Offset: 0x38

    // The Map Sections belonging to this map group
    idList < idAutomapMapSection , TAG_IDLIST , false > mapSections; // Offset: 0x40

    // Image used for the map group in selection display
    idMaterial2* mapGroupImage; // Offset: 0x58

    // Map group bounds min xyz
    idVec3 groupBoundsMins; // Offset: 0x60

    // Map group bounds max xyz
    idVec3 groupBoundsMaxs; // Offset: 0x6C

    // Fast travel point to center camera on when previewing the group
    idStrEntity groupFocusFastTravelPoint; // Offset: 0x78

}; // Size: 0xA8
