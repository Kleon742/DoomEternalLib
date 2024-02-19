// dataBlock_t < idAICover , 16 >
template <typename _type_, auto _N0_>
struct dataBlock_t
{
    idStaticList < _type_ , _N0_ , false , TAG_IDLIST > data; // Offset: 0x0

    // this should point back to the pool this block was sourced from
    idPool* pool; // Offset: 0x58

    unsigned int poolIndex; // Offset: 0x60

}; // Size: 0x68
