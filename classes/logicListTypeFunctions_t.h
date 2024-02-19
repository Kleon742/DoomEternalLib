struct logicListTypeFunctions_t
{
    int (*length)(const void * pointer); // Offset: 0x0

    void (*add)(void * pointer , const void * element); // Offset: 0x8

    void (*append)(void * lhs , const void * rhs); // Offset: 0x10

    bool (*removeByIndex)(void * pointer , int index , void * value); // Offset: 0x18

    bool (*removeByValue)(void * pointer , const void * value); // Offset: 0x20

    bool (*get)(const void * pointer , int index , void * value); // Offset: 0x28

    bool (*set)(void * pointer , int index , const void * value); // Offset: 0x30

    void (*clear)(void * pointer); // Offset: 0x38

}; // Size: 0x40
