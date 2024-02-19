// idGrowableParmBlock < 32 >
template <auto _N0_>
struct idGrowableParmBlock : idParmBlock
{
    unsigned char staticParmStorage[((ID_ALIGN(sizeof*_N0_,alignof)+(sizeof*_N0_))>(16)?(ID_ALIGN(sizeof*_N0_,alignof)+(sizeof*_N0_)):(16))]; // Offset: 0x10

}; // Size: 0x250
