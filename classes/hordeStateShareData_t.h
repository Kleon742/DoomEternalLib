struct hordeStateShareData_t
{
    char version; // Offset: 0x0

    char map; // Offset: 0x1

    char roundTarget; // Offset: 0x2

    char difficulty; // Offset: 0x3

    char bloodPunch; // Offset: 0x4

    char runes[4]; // Offset: 0x5

    char extra_lives; // Offset: 0x9

    short dataSize; // Offset: 0xA

    short weapons; // Offset: 0xC

    short health; // Offset: 0xE

    short armor; // Offset: 0x10

    short ammo[10]; // Offset: 0x12

    float roundEndScore; // Offset: 0x28

}; // Size: 0x2C
