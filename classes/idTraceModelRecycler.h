struct idTraceModelRecycler
{
    idBlockAlloc < idRecycledTraceModel , 64 , TAG_COLLISION > allocator; // Offset: 0x0

    idList < idRecycledTraceModel * , TAG_COLLISION , false > allocated; // Offset: 0x28

    // 3 lists, deferred releases get trickled down from list[2] to list [0]
    idList < idRecycledTraceModel * , TAG_COLLISION , false > free[3]; // Offset: 0x40

}; // Size: 0x88
