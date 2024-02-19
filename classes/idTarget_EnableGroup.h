struct idTarget_EnableGroup : idTarget
{
    // name of group to enable / disable
    idStr groupName; // Offset: 0xB88

    // true to enable group, false to disable group
    bool enable; // Offset: 0xBB8

}; // Size: 0xBC0
