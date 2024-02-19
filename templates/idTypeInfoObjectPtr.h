// idTypeInfoObjectPtr < idRigComponent >
template <typename _base_>
struct idTypeInfoObjectPtr
{
    idTypeInfo* typeInfo; // Offset: 0x0

    _base_* object; // Offset: 0x8

}; // Size: 0x10
