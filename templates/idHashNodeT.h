// idHashNodeT < int , idSWFSpriteInstance * >
template <typename _key_, typename _value_>
struct idHashNodeT
{
    _key_ key; // Offset: 0x0

    _value_ value; // Offset: 0x8

    idHashNodeT < _key_ , idSWFSpriteInstance * >* next; // Offset: 0x10

}; // Size: 0x18
