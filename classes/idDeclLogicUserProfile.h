struct idDeclLogicUserProfile : idDeclTypeInfo
{
    enum nodeFilterOperation_t : int
    {
        INCLUDE = 0,
        EXCLUDE = 1
    };

    struct nodeFilter_t
    {
        // Operation
        idDeclLogicUserProfile::nodeFilterOperation_t operation; // Offset: 0x0

        // Source path
        idStr source; // Offset: 0x8

        // Destination path
        idStr destination; // Offset: 0x38

    }; // Size: 0x68

    // Node filters
    idList < idDeclLogicUserProfile::nodeFilter_t , TAG_LOGIC , false > nodeFilters; // Offset: 0x88

}; // Size: 0xA0
