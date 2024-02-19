// idHashTableT < int , idSWFSpriteInstance * , 4 >
template <typename _key_>
struct idHashTableT
{
    idHashNodeT < _key_ , idSWFSpriteInstance * >** heads; // Offset: 0x0

    idHashNodeT < _key_ , idSWFSpriteInstance * >* freeList; // Offset: 0x8

    _key_ freeCount; // Offset: 0x10

    _key_ tableSize; // Offset: 0x14

    _key_ numEntries; // Offset: 0x18

    _key_ tableSizeMask; // Offset: 0x1C

}; // Size: 0x20
