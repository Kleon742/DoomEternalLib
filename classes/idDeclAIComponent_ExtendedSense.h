struct idDeclAIComponent_ExtendedSense : idDeclAIComponent
{
    struct aimOffset_t
    {
        // focus type for this aim offset, MAX means this will be the default for all focus types
        aiFoci_t focusType; // Offset: 0x0

        // aim offset
        idVec3 offset; // Offset: 0x4

    }; // Size: 0x10

    struct aimOriginTagOverride_t
    {
        // focus type for this tag override
        aiFoci_t focusType; // Offset: 0x0

        // tag name
        idAtomicString tagName; // Offset: 0x8

    }; // Size: 0x10

    // list of weapons the AI should require/reserve an AITOKEN_BASIC_ATTACK for use
    idList < const idDeclWeapon * , TAG_IDLIST , false > basicWeaponDecls; // Offset: 0x98

    // offset from center mass, in muzzle dir space, that we try to get as close as possible to when aiming {{ units = m }}
    idList < idDeclAIComponent_ExtendedSense::aimOffset_t , TAG_IDLIST , false > aimOffsets; // Offset: 0xB0

    // how many muzzles does this AI have?
    int muzzleCount; // Offset: 0xC8

    // Use the specified tags for the aim types instead of the defaults
    idList < idDeclAIComponent_ExtendedSense::aimOriginTagOverride_t , TAG_IDLIST , false > aimOriginTagOverrides; // Offset: 0xD0

    // offsets centered around target, in the space of to target dir
    idList < idVec3 , TAG_IDLIST , false > boundsQueriesOffsets; // Offset: 0xE8

    // if true, keep blocked bounds query endpoints, and still pick closest to target
    bool useBlockedBoundsQueries; // Offset: 0x100

}; // Size: 0x108
