struct idSourceControlClientSpec
{
    // Workspace name
    idStr client; // Offset: 0x0

    idStr owner; // Offset: 0x30

    // Read-only
    idStr update; // Offset: 0x60

    // Read-only
    idStr access; // Offset: 0x90

    // Optional
    idStr host; // Offset: 0xC0

    idStr description; // Offset: 0xF0

    idStr root; // Offset: 0x120

    // Optional
    idStr altRoots; // Offset: 0x150

    idClientSpecOptions options; // Offset: 0x180

    idClientSpecSubmitOptions submitOptions; // Offset: 0x184

    idClientSpecLineEndMode lineEnd; // Offset: 0x188

    // Optional
    idStr stream; // Offset: 0x190

    // Optional
    idStr streamAtChange; // Offset: 0x1C0

    // Optional
    idStr serverID; // Offset: 0x1F0

    idList < idStr , TAG_IDLIST , false > view; // Offset: 0x220

    // Optional
    idList < idStr , TAG_IDLIST , false > changeView; // Offset: 0x238

}; // Size: 0x250
