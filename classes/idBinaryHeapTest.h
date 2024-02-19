struct idBinaryHeapTest
{
    struct node_t
    {
        int priority; // Offset: 0x0

    }; // Size: 0x4

    typedef idBinaryHeap < idBinaryHeapTest::node_t * , int , idMath::MinValue < int > ( ) > heap_t;

}; // Size: 0x1
