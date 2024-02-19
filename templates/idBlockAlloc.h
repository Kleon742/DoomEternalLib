// idBlockAlloc < idPolytope::vertex_t , 32 , TAG_COMPILER >
template <typename _type_, auto _N0_>
struct idBlockAlloc
{
    // idBlockAlloc < idPolytope::vertex_t , 32 , TAG_COMPILER >::element_t
    struct element_t
    {
        // this is a hack to make sure the save game system marks _type_ as saveable
        _type_* data; // Offset: 0x0

        idBlockAlloc < _type_ , _N0_ , TAG_COMPILER >::element_t* next; // Offset: 0x0

        unsigned char buffer[(((sizeof(_type_))>(sizeof(idBlockAlloc<_type_,_N0_,14>::element_t*))?(sizeof(_type_)):(sizeof(idBlockAlloc<_type_,_N0_,14>::element_t*)))+(16-1))&~(16-1)]; // Offset: 0x0

    }; // Size: 0x20

    // idBlockAlloc < idPolytope::vertex_t , 32 , TAG_COMPILER >::idBlock
    struct idBlock
    {
        idBlockAlloc < _type_ , _N0_ , TAG_COMPILER >::element_t elements[_N0_]; // Offset: 0x0

        idBlockAlloc < _type_ , _N0_ , TAG_COMPILER >::idBlock* next; // Offset: 0x400

        // list with free elements in this block (temp used only by FreeEmptyBlocks)
        idBlockAlloc < _type_ , _N0_ , TAG_COMPILER >::element_t* free; // Offset: 0x408

        // number of free elements in this block (temp used only by FreeEmptyBlocks)
        int freeCount; // Offset: 0x410

        int usedCount; // Offset: 0x414

    }; // Size: 0x418

    idBlockAlloc < _type_ , _N0_ , TAG_COMPILER >::idBlock* blocks; // Offset: 0x0

    idBlockAlloc < _type_ , _N0_ , TAG_COMPILER >::idBlock* unusedBlocks; // Offset: 0x8

    idBlockAlloc < _type_ , _N0_ , TAG_COMPILER >::element_t* free; // Offset: 0x10

    int total; // Offset: 0x18

    int active; // Offset: 0x1C

    bool allowAllocs; // Offset: 0x20

    bool clearAllocs; // Offset: 0x21

}; // Size: 0x28
