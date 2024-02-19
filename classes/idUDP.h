struct idUDP
{
    enum initFlag_t : int
    {
        INIT_FLAG_NONE = 0,
        INIT_FLAG_USEBACKEND = 1,
        INIT_FLAG_BROADCAST = 2,
        INIT_FLAG_MULTICAST = 4,
        INIT_FLAG_MAXSENDBUF = 8,
        INIT_FLAG_DONTFRAGMENT = 16
    };

    int packetsRead; // Offset: 0x8

    int bytesRead; // Offset: 0xC

    int packetsWritten; // Offset: 0x10

    int bytesWritten; // Offset: 0x14

    // interface and port
    netadr_t bound_to; // Offset: 0x18

    // OS specific socket
    int netSocket; // Offset: 0x20

    // don't emit anything ( black hole )
    bool silent; // Offset: 0x24

}; // Size: 0x28
