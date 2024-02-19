struct libErrataData_t
{
    production_t production; // Offset: 0x0

    uintptr_t mainThreadID; // Offset: 0x8

    unsigned int activeWarningCategories; // Offset: 0x10

    int frameNumber; // Offset: 0x14

}; // Size: 0x18
