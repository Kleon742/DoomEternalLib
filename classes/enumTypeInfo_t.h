struct enumTypeInfo_t
{
    char* name; // Offset: 0x0

    long long flags; // Offset: 0x8

    enumType type; // Offset: 0x10

    int valueIndexLength; // Offset: 0x14

    enumValueInfo_t* values; // Offset: 0x18

    int* valueIndex; // Offset: 0x20

}; // Size: 0x28
