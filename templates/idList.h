// idList < idSWFTrait , TAG_SWF , false >
template <typename _type_>
struct idList
{
    // the saveobj here is used so TypeInfoGen will mark _type_ as saveable it's not actually used to generate saveobj code because idList is special cased
    _type_* list; // Offset: 0x0

    int num; // Offset: 0x8

    int size; // Offset: 0xC

    short granularity; // Offset: 0x10

    unsigned char memTag; // Offset: 0x12

    unsigned char listStatic; // Offset: 0x13

}; // Size: 0x18
