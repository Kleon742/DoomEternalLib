// idStaticList < short , 64 , true , TAG_IDLIST >
template <typename _type_, auto _N0_>
struct idStaticList : idList < _type_ , TAG_IDLIST , false >
{
    _type_ staticList[_N0_]; // Offset: 0x18

}; // Size: 0x98
