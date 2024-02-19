struct streamDecoderInterface_t
{
    char* name; // Offset: 0x0

    int id; // Offset: 0x8

    void (*init)(const streamDecodeState_t & state); // Offset: 0x10

    void (*decompress)(streamDecoderDecodeResult_t & res , const streamDecodeState_t & state , const streamDecodeInputVec_t & input); // Offset: 0x18

    void (*done)(const streamDecodeState_t & state); // Offset: 0x20

}; // Size: 0x28
