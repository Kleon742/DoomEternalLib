// idHierarchy < idTypeInfo >
template <typename type>
struct idHierarchy
{
    idHierarchy* parent; // Offset: 0x0

    idHierarchy* sibling; // Offset: 0x8

    idHierarchy* child; // Offset: 0x10

    type* owner; // Offset: 0x18

}; // Size: 0x20
