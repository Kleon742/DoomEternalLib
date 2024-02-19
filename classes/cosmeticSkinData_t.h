struct cosmeticSkinData_t
{
    // Cosmetic model def
    idDeclMD6* cosmeticModelDef; // Offset: 0x0

    // Cosmetic model def classic pose
    idDeclMD6* cosmeticModelDef_classic; // Offset: 0x8

    // Cosmetic mesh info. Using kits hides all other kits besides the one specified
    idMD6Util::meshShowHideInfo_t cosmeticMeshInfo; // Offset: 0x10

    // Cosmetic materials that need to be swapped.
    idList < materialRemap_t , TAG_IDLIST , false > cosmeticMaterialInfo; // Offset: 0x48

    // Cosmetic FX to play on character (uses FX_NONE)
    idDeclFX* cosmeticSkinFX; // Offset: 0x60

    // Testing decl slot for overriding FX on the entity. Unless you are Derek Best or Dylan Scheuring, you probably don't care about this right now.
    idDeclFX* overridingFX; // Offset: 0x68

}; // Size: 0x70
