struct idDeclInventoryConvTable : idGameDeclTypeInfo
{
    typedef itemConversion_t < idDeclInventory , idDeclInventory > itemConversion;

    typedef listConversion_t < idDeclInventory , idDeclInventory > listConversion;

    // conversion list of single items to other item
    idList < itemConversion_t < idDeclInventory , idDeclInventory > , TAG_IDLIST , false > simpleConversionsList; // Offset: 0x90

    // conversion list of multiple items to other items
    idList < listConversion_t < idDeclInventory , idDeclInventory > , TAG_IDLIST , false > complexConversionsList; // Offset: 0xA8

}; // Size: 0xC0
