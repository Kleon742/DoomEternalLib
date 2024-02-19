struct idEventDef
{
    char* name; // Offset: 0x0

    char* formatspec; // Offset: 0x8

    char* argTypes; // Offset: 0x10

    char* argNames; // Offset: 0x18

    char* argDefaultValues; // Offset: 0x20

    int returnType; // Offset: 0x28

    int numargs; // Offset: 0x2C

    int numstrings; // Offset: 0x30

    int eventnum; // Offset: 0x34

    // see eventFlags_t for description of individual flags.
    int flags; // Offset: 0x38

    eventType_t type; // Offset: 0x3C

    char* timelineEventGroup; // Offset: 0x40

    char* comment; // Offset: 0x48

    idEventDef* noticeEvent; // Offset: 0x50

    idEventDef* next; // Offset: 0x58

}; // Size: 0x60
