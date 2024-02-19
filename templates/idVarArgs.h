// idVarArgs < 5 >
template <auto _N0_>
struct idVarArgs
{
    unsigned short numArgs; // Offset: 0x0

    unsigned short argSize; // Offset: 0x2

    unsigned short buffSize; // Offset: 0x4

    unsigned short argOffsets[_N0_]; // Offset: 0x6

    unsigned char argTypes[_N0_]; // Offset: 0x10

    unsigned char argExTypes[_N0_]; // Offset: 0x15

    unsigned char* args; // Offset: 0x20

}; // Size: 0x28
