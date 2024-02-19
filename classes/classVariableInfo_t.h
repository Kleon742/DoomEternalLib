struct classVariableInfo_t
{
    char* type; // Offset: 0x0

    char* ops; // Offset: 0x8

    char* name; // Offset: 0x10

    int offset; // Offset: 0x18

    int size; // Offset: 0x1C

    long long flags; // Offset: 0x20

    char* comment; // Offset: 0x28

    int (*get)(void * ptr); // Offset: 0x30

    void (*set)(void * ptr , int value); // Offset: 0x38

    void* (*reallocate)(void * ptr , const int oldNum , const int newNum , const memTag_t tag , const bool zeroBuffer , const void * hint); // Offset: 0x40

}; // Size: 0x48
