struct idEntityHierarchy
{
    struct childInfo_t
    {
        // Name of the child
        idStr name; // Offset: 0x0

        // Origin relative to parent {{ units = m }}
        idVec3 localOrigin; // Offset: 0x30

        // Orientation relative to parent
        idMat3 localOrientation; // Offset: 0x3C

        // Scale relative to parent
        idVec3 localScale; // Offset: 0x60

    }; // Size: 0x70

    // Parent
    idStr parent; // Offset: 0x8

    // Children
    idList < idEntityHierarchy::childInfo_t , TAG_IDLIST , false > childrenInfo; // Offset: 0x38

}; // Size: 0x50
