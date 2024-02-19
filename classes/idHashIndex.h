struct idHashIndex
{
    // each entry holds the index of the first item hashed to that slot in the hash table.
    int* hash; // Offset: 0x0

    // each entry points to the next index in a list of indices for a particular hash table entry.
    int* indexChain; // Offset: 0x8

    // number of slots in the hash table
    int hashSize; // Offset: 0x10

    // maximum number of indexes that can be hashed. To get the indexChain buffer size in byes: indexSize * sizeof( indexChain[0] );
    int indexSize; // Offset: 0x14

    // amount to increase the table size each time the hash table grows (0 = geometric growth).
    int granularity; // Offset: 0x18

    // mask for looking up an key in the hash, equal to ( hashSize - 1 )
    int hashMask; // Offset: 0x1C

    int lookupMask; // Offset: 0x20

    // memory tag for hash allocations
    memTag_t memTag; // Offset: 0x24

}; // Size: 0x30
