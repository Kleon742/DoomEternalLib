struct idStr
{
    char* data; // Offset: 0x8

    int len; // Offset: 0x10

    // top bit is used to store a flag that indicates if the string data is static or not
    int allocedAndFlag; // Offset: 0x14

    char baseBuffer[20]; // Offset: 0x18

}; // Size: 0x30
