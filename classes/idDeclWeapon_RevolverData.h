struct idDeclWeapon_RevolverData : idDeclWeapon_Data
{
    // the anims that advance the cylinder from one position to the next position for firing (size should equal clipSize)
    idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_IDLIST , false > cylinderFireAnims; // Offset: 0x90

    // the anims that advance the cylinder from one position to the next position for reloading (size should equal clipSize)
    idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_IDLIST , false > cylinderReloadAnims; // Offset: 0xA8

    // the 38 and the 45 have their shells managed en masse during reload events, but the grenade launcher manages individually as shells are fired or reloaded
    bool manageShellsIndividually; // Offset: 0xC0

}; // Size: 0xC8
