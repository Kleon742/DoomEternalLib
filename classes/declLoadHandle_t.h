struct declLoadHandle_t
{
    idFile* file; // Offset: 0x0

    void* buffer; // Offset: 0x8

    long long length; // Offset: 0x10

    resourceError_t error; // Offset: 0x18

    declFileParseResult_t parseResult; // Offset: 0x20

}; // Size: 0x120
