// idSpillableArray < geometryStreamMemLayout_t , 1 >
template <typename T, auto _N0_>
struct idSpillableArray
{
    // idSpillableArray < geometryStreamMemLayout_t , 1 >::union_t
    struct union_t
    {
        T* p; // Offset: 0x0

    }; // Size: 0x58

    idSpillableArray < T , _N0_ >::union_t u; // Offset: 0x0

    int num; // Offset: 0x58

}; // Size: 0x60
