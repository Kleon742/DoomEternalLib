// itemConversion_t < idDeclInventory , idDeclInventory >
template <typename T_from>
struct itemConversion_t
{
    // the items we need to have in order to convert
    conversionItems_t < T_from > convertItemsFrom; // Offset: 0x0

    // the item type we need to convert To
    T_from* convertItemTo; // Offset: 0x10

}; // Size: 0x18
