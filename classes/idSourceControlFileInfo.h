struct idSourceControlFileInfo
{
    scFileStatus_t status; // Offset: 0x0

    idStr depotFile; // Offset: 0x8

    idStr clientFile; // Offset: 0x38

    idStr headAction; // Offset: 0x68

    idStr headType; // Offset: 0x98

    idStr headTime; // Offset: 0xC8

    int headRevision; // Offset: 0xF8

    int headChange; // Offset: 0xFC

    long long headModTime; // Offset: 0x100

    int haveRevision; // Offset: 0x108

    idStr modifiedDate; // Offset: 0x110

    idStr statusText; // Offset: 0x140

    idList < idStr , TAG_IDLIST , false > users; // Offset: 0x170

    bool mapped; // Offset: 0x188

    bool unresolved; // Offset: 0x189

    bool managed; // Offset: 0x18A

    bool checkedOut; // Offset: 0x18B

    bool added; // Offset: 0x18C

    bool moved; // Offset: 0x18D

    bool checkedOutByOther; // Offset: 0x18E

    bool exclusiveCheckout; // Offset: 0x18F

    bool writable; // Offset: 0x190

}; // Size: 0x198
