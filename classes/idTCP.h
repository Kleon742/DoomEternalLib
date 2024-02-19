struct idTCP
{
    netadr_t bound_to; // Offset: 0x8

    // remote address
    netadr_t address; // Offset: 0x10

    // OS specific socket
    int fd; // Offset: 0x18

}; // Size: 0x20
