// idHandleArray < idSpawnResult , 10 >
template <typename _type_>
struct idHandleArray
{
    _type_* data; // Offset: 0x0

    unsigned int* handles; // Offset: 0x8

    unsigned int maxHandles; // Offset: 0x10

    unsigned int counter; // Offset: 0x14

}; // Size: 0x18
