struct idSerializeFuncPtr : idSerializeFunctor
{
    typedef void (*nonMemSerializeFunc)(idJsonSerializer & jsonSer);

    void (*callbackF)(idJsonSerializer & jsonSer); // Offset: 0x8

}; // Size: 0x10
