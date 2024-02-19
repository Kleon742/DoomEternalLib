// aiScaledListGroup_t < entityModel_t >
template <typename _type_>
struct aiScaledListGroup_t
{
    idList < aiScaledListEntry_t < _type_ > , TAG_AI_SCALEDLIST , false > entries; // Offset: 0x0

    idList < aiScaledListSwapInfo_t , TAG_AI_SCALEDLIST , false > swapInfos; // Offset: 0x18

}; // Size: 0x30
