struct idDeclHordeStateShare : idGameDeclTypeInfo
{
    struct hordeTargetInfo_t
    {
        // Name of entity to activate
        idStr target; // Offset: 0x0

        // Index into round names array
        int roundIndex; // Offset: 0x30

    }; // Size: 0x38

    struct hordeMapInfo_t
    {
        // Map load decl
        idDeclMapLoad* mapLoad; // Offset: 0x0

        // Names of entities to activate for each round
        idList < idDeclHordeStateShare::hordeTargetInfo_t , TAG_IDLIST , false > roundTargets; // Offset: 0x8

    }; // Size: 0x20

    // Horde maps (must be in correct order!)
    idList < idDeclHordeStateShare::hordeMapInfo_t , TAG_IDLIST , false > maps; // Offset: 0x90

    // Weapons player can collect in Horde
    idList < const idDeclWeapon * , TAG_IDLIST , false > weapons; // Offset: 0xA8

}; // Size: 0xC0
