struct triumphProgressInfo_t
{
    idStr id; // Offset: 0x0

    idStr displayName; // Offset: 0x30

    idStr description; // Offset: 0x60

    idMaterial2* icon; // Offset: 0x90

    idDeclWarehouseItem* reward; // Offset: 0x98

    int progress; // Offset: 0xA0

    int goal; // Offset: 0xA4

}; // Size: 0xA8
