// idAIScaledPool < entityModel_t >
template <typename _type_>
struct idAIScaledPool
{
    idList < aiScaledListUser_t < _type_ > , TAG_AI_SCALEDLIST , false > users; // Offset: 0x0

    idArray < aiScaledListGroup_t < _type_ > , 10 > groups; // Offset: 0x18

    idList < aiScaledListUser_t < _type_ > * , TAG_AI_SCALEDLIST , false > requests; // Offset: 0x1F8

    idSysMutex mutex; // Offset: 0x210

}; // Size: 0x238
