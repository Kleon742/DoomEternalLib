struct triumphCategory_t
{
    idList < triumphChallenge_t , TAG_IDLIST , false > challenges; // Offset: 0x0

    idStr id; // Offset: 0x18

    idStr displayName; // Offset: 0x48

    idStr description; // Offset: 0x78

    idMaterial2* icon; // Offset: 0xA8

    idDeclWarehouseItem* reward; // Offset: 0xB0

}; // Size: 0xB8
