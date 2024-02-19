struct idPrintListener
{
    idPrintListener* next; // Offset: 0x8

    bool wantLinksAndColor; // Offset: 0x10

    bool wantColor; // Offset: 0x11

    bool threadSafe; // Offset: 0x12

    printSeverity_t minSeverity; // Offset: 0x14

}; // Size: 0x18
