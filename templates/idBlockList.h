// idBlockList < idAICover , 16 , 64 >
template <typename _type_, auto _N0_, auto _N1_>
struct idBlockList
{
    idStaticList < void * , _N1_ , false , TAG_IDLIST > list; // Offset: 0x0

    idAIBlockPool < _type_ , _N0_ >* blocks; // Offset: 0x218

    char* name; // Offset: 0x220

}; // Size: 0x228
