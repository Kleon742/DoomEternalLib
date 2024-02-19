struct idMD6AnimProps
{
    enum animPropFlags_t : int
    {
        ANIMPROP_RANDOMIZE_START = 1
    };

    idMD6Anim* anim; // Offset: 0x0

    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > aliasHandle; // Offset: 0x8

    unsigned short flags; // Offset: 0xA

    idMD6Leaf::wrapMode_t wrap; // Offset: 0xC

    float rate; // Offset: 0x10

    unsigned int tags; // Offset: 0x14

}; // Size: 0x18
