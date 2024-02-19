// idBitset < 256 >
template <auto _N0_>
struct idBitset
{
    idBitset < _N0_ >::basetype_t blocks[(_N0_+(BITS_PER_BLOCK-1))/BITS_PER_BLOCK]; // Offset: 0x0

}; // Size: 0x20
