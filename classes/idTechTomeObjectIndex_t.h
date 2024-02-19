struct idTechTomeObjectIndex_t
{
    unsigned int numBuckets; // Offset: 0x0

    idTechTomeObjectIndexBucket_t* buckets; // Offset: 0x8

    unsigned long long* hashes; // Offset: 0x10

    unsigned int* umbraIDs; // Offset: 0x18

}; // Size: 0x20
