struct idGameplayFilter
{
    struct Element
    {
        enum flagState_t : int
        {
            FS_FALSE = 0,
            FS_TRUE = 1,
            FS_IGNORE = 2
        };

        enum elementType_t : int
        {
            ET_AND = 0,
            ET_OR = 1
        };

        unsigned int desiredBits; // Offset: 0x0

        unsigned int activeBits; // Offset: 0x4

        idGameplayFilter::Element::elementType_t elementType; // Offset: 0x8

    }; // Size: 0xC

    typedef idList < idGameplayFilter::Element > ElementList;

    idList < idGameplayFilter::Element , TAG_IDLIST , false > elements; // Offset: 0x0

}; // Size: 0x18
