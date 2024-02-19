struct idCommandLink
{
    idCommandLink* next; // Offset: 0x0

    char* cmdName; // Offset: 0x8

    void (*function)(const idCmdArgs & args); // Offset: 0x10

    char* description; // Offset: 0x18

    void (*argCompletion)(idAutoComplete & autoComplete); // Offset: 0x20

    int flags; // Offset: 0x28

}; // Size: 0x30
