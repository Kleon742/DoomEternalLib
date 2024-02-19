struct threadCreateParm_t
{
    unsigned int (*function)(void *); // Offset: 0x0

    void* parms; // Offset: 0x8

    xthreadPriority priority; // Offset: 0x10

    char* name; // Offset: 0x18

    core_t affinity; // Offset: 0x20

    int stackSize; // Offset: 0x28

    bool suspended; // Offset: 0x2C

}; // Size: 0x30
