struct commandDef_s
{
    char* name; // Offset: 0x0

    void (*function)(const idCmdArgs & args); // Offset: 0x8

    void (*argCompletion)(idAutoComplete & autoComplete); // Offset: 0x10

    char* description; // Offset: 0x18

    int flags; // Offset: 0x20

}; // Size: 0x28
