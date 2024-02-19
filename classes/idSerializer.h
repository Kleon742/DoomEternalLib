struct idSerializer
{
    typedef void (*OnTraceOpen)(idSerializer & ser , const char * label);

    typedef void (*OnTraceClose)(idSerializer & ser);

    bool writing; // Offset: 0x0

    idBitMsg* msg; // Offset: 0x8

    idSerializeTrace* trace; // Offset: 0x10

    void (*traceOpenCallback)(idSerializer & ser , const char * label); // Offset: 0x18

    void (*traceCloseCallback)(idSerializer & ser); // Offset: 0x20

}; // Size: 0x28
