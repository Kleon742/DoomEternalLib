// aiScaledListEntry_t < entityModel_t >
template <typename _type_>
struct aiScaledListEntry_t
{
    idList < _type_ , TAG_AI_SCALEDLIST , false > list; // Offset: 0x0

    aiScaledListUser_t < _type_ >* user; // Offset: 0x18

}; // Size: 0x20
