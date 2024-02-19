struct idDefragAllocator
{
    enum blockFlags_t : int
    {
        BLOCK_FLAG_FREE = 1,
        BLOCK_FLAG_PINNED_SHIFT = 1,
        BLOCK_FLAG_PINNED_MASK = 127
    };

    struct initParms_t
    {
        size_t poolSize; // Offset: 0x0

        unsigned int internalAlignment; // Offset: 0x8

        unsigned int maxAllocs; // Offset: 0xC

        bool supportDefrag; // Offset: 0x10

        size_t* sentinalOffsets; // Offset: 0x18

        unsigned int numSentinalOffsets; // Offset: 0x20

        void (*traceCallback)(void * userData , const char * fmt , ...); // Offset: 0x28

        void* traceCallbackUserData; // Offset: 0x30

        char* debugName; // Offset: 0x38

    }; // Size: 0x40

    struct defragAllocParms_t
    {
        size_t size; // Offset: 0x0

        size_t alignment; // Offset: 0x8

    }; // Size: 0x10

    struct defragParms_t
    {
        size_t (*callback)(void * user , const uint64 dst , const uint64 src , const size_t size , const size_t align , bool aliasing , idDefragAllocatorHdl hdl); // Offset: 0x0

        void* callbackUser; // Offset: 0x8

        idDefragAllocator::defragAllocParms_t* allocs; // Offset: 0x10

        int numAllocs; // Offset: 0x18

        int allocsTimeout; // Offset: 0x1C

        size_t maxBytes; // Offset: 0x20

        unsigned int maxItems; // Offset: 0x28

    }; // Size: 0x30

    struct blockInfo_t
    {
        unsigned long long offset; // Offset: 0x0

        size_t size; // Offset: 0x8

        void* userData; // Offset: 0x10

        unsigned short tag; // Offset: 0x18

        bool allocated; // Offset: 0x1A

    }; // Size: 0x20

    struct idBlockEnumerator
    {
        idDefragAllocator* alloc; // Offset: 0x0

        unsigned int current; // Offset: 0x8

        unsigned int sentinal; // Offset: 0xC

    }; // Size: 0x10

    struct block_t
    {
        unsigned int offset; // Offset: 0x0

        unsigned int size; // Offset: 0x4

        unsigned short tag; // Offset: 0x8

        unsigned char logAlignment; // Offset: 0xA

        unsigned char flags; // Offset: 0xB

        unsigned int prevBlockByAddressIdx; // Offset: 0xC

        unsigned int nextBlockByAddressIdx; // Offset: 0x10

        idDefragAllocator::block_t::anon_8 disjoint; // Offset: 0x14

    }; // Size: 0x1C

    struct move_t
    {
        unsigned int from; // Offset: 0x0

        unsigned int to; // Offset: 0x4

    }; // Size: 0x8

    struct blockReservation_t
    {
        unsigned int block; // Offset: 0x0

        unsigned int offset; // Offset: 0x4

        unsigned int size; // Offset: 0x8

    }; // Size: 0xC

    struct BlockReservationSearch : idSearch_Binary < idDefragAllocator::blockReservation_t , idDefragAllocator::BlockReservationSearch >
    {
    }; // Size: 0x8

    typedef unsigned int blockIdx_t;

    typedef size_t (*defragCallback_t)(void * user , const uint64 dst , const uint64 src , const size_t size , const size_t align , bool aliasing , idDefragAllocatorHdl hdl);

    typedef void (*traceCallback_t)(void * userData , const char * fmt , ...);

    typedef idGrowableList < idDefragAllocator::block_t , 256 , TAG_DEFRAG_ALLOCATOR > blockList_t;

    typedef idGrowableList < idDefragAllocator::blockIdx_t , 256 , TAG_DEFRAG_ALLOCATOR > freeBlockList_t;

    void (*traceCallback)(void * userData , const char * fmt , ...); // Offset: 0x0

    void* traceCallbackUserData; // Offset: 0x8

    idStrStatic < 256 > debugName; // Offset: 0x10

    idGrowableList < idDefragAllocator::block_t , 256 , TAG_DEFRAG_ALLOCATOR > blocks; // Offset: 0x140

    idGrowableList < unsigned int , 256 , TAG_DEFRAG_ALLOCATOR > freeBlocks; // Offset: 0x1D58

    unsigned int freeSentinals[33]; // Offset: 0x2170

    unsigned int addressSentinal; // Offset: 0x21F4

    unsigned int internalAlignment; // Offset: 0x21F8

    unsigned int internalLogAlignment; // Offset: 0x21FC

    bool supportDefrag; // Offset: 0x2200

    bool currentShuntDirection; // Offset: 0x2201

    unsigned int poolSize; // Offset: 0x2204

    unsigned int usedSize; // Offset: 0x2208

}; // Size: 0x2210
