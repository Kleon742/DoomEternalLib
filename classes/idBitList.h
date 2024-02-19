struct idBitList
{
    struct findIterator_t
    {
        unsigned int pos; // Offset: 0x0

        idBitList* list; // Offset: 0x8

    }; // Size: 0x10

    struct findRange_t
    {
        idBitList* list; // Offset: 0x0

    }; // Size: 0x8

    typedef unsigned long long block_type;

    typedef long long signed_block_type;

    typedef unsigned long long* block_pointer;

    typedef unsigned int size_type;

    typedef int difference_type;

    unsigned long long* blocks; // Offset: 0x0

    unsigned int num; // Offset: 0x8

    unsigned int capacity; // Offset: 0xC

}; // Size: 0x10
