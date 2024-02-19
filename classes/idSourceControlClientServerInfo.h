struct idSourceControlClientServerInfo
{
    idStr userName; // Offset: 0x0

    idStr clientName; // Offset: 0x30

    idStr clientHost; // Offset: 0x60

    idStr clientRoot; // Offset: 0x90

    idStr clientStream; // Offset: 0xC0

    idStr currentDirectory; // Offset: 0xF0

    idStr peerAddress; // Offset: 0x120

    idStr clientAddress; // Offset: 0x150

    idStr serverAddress; // Offset: 0x180

    idStr serverRoot; // Offset: 0x1B0

    idStr serverDate; // Offset: 0x1E0

    idStr serverUptime; // Offset: 0x210

    idStr serverVersion; // Offset: 0x240

    idStr serverID; // Offset: 0x270

    idStr serverServices; // Offset: 0x2A0

    idStr serverLicense; // Offset: 0x2D0

    idStr serverLicenseIP; // Offset: 0x300

    idStr caseHandling; // Offset: 0x330

}; // Size: 0x360
