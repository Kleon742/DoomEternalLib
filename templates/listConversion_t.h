// listConversion_t < idDeclInventory , idDeclInventory >
template <typename T_from>
struct listConversion_t
{
    // the items we need to have in order to convert
    idList < conversionItems_t < T_from > , TAG_IDLIST , false > convertListItemsFrom; // Offset: 0x0

    // the item type we need to convert To
    idList < conversionItems_t < T_from > , TAG_IDLIST , false > convertListItemsTo; // Offset: 0x18

}; // Size: 0x30
