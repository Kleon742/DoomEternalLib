struct logicCommonTypeFunctions_t
{
    void (*create)(void * placement , const void * value); // Offset: 0x0

    void (*destroy)(void * pointer); // Offset: 0x8

    void (*copy)(void * lhs , const void * rhs); // Offset: 0x10

    void (*serialize)(idJsonSerializer & jsonSer , const char * key , void * pointer); // Offset: 0x18

    void (*toString)(idStr & output , const void * pointer); // Offset: 0x20

    idLogicVariableModel* (*createVariableModelDefault)(); // Offset: 0x28

}; // Size: 0x30
