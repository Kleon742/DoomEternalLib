// idAIScaledList < entityModel_t >
template <typename _type_>
struct idAIScaledList
{
    aiScaledListUser_t < _type_ >* ptr; // Offset: 0x0

    idAIScaledPool < _type_ >* pool; // Offset: 0x8

}; // Size: 0x10
