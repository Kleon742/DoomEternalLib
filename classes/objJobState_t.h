struct objJobState_t
{
    unsigned char* data; // Offset: 0x0

    unsigned short size; // Offset: 0x8

    unsigned short objectNum; // Offset: 0xA

    unsigned char valid; // Offset: 0xC

    unsigned char createdFromTemplate; // Offset: 0xD

    unsigned long long resourceID; // Offset: 0x10

    unsigned short objectPeerMask; // Offset: 0x18

    int snapSequence; // Offset: 0x1C

}; // Size: 0x20
