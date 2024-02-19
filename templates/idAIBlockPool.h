// idAIBlockPool < idAICover , 16 >
template <typename _type_, auto _N0_>
struct idAIBlockPool
{
    idPoolDynamic < dataBlock_t < _type_ , _N0_ > , TAG_AI_BLOCKLIST >* pool; // Offset: 0x0

    idPoolDynamic < dataBlock_t < _type_ , _N0_ > , TAG_AI_BLOCKLIST >* pool_reserve; // Offset: 0x8

}; // Size: 0x10
