struct aiFSMDataKey_t
{
    // should be a pointer to an ai state or transition
    void* ownerObject; // Offset: 0x0

    idAtomicString name; // Offset: 0x8

    idIndex < int , invalidAIDataID_t , - 1 > dataKey; // Offset: 0x10

}; // Size: 0x18
