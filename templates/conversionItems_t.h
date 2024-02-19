// conversionItems_t < idDeclInventory >
template <typename T>
struct conversionItems_t
{
    // the item type we need
    T* itemType; // Offset: 0x0

    // the number of items necessary
    int numItems; // Offset: 0x8

    // Remove this item on convert.
    bool removeItemOnConvert; // Offset: 0xC

}; // Size: 0x10
