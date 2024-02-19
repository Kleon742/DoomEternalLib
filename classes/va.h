struct va
{
    char buffer[16384]; // Offset: 0x0

    // Far from the other pointer, but after so that accidental usage in a char * situation will behave well.
    int written; // Offset: 0x4000

}; // Size: 0x4004
