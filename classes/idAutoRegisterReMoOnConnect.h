struct idAutoRegisterReMoOnConnect
{
    idAutoRegisterReMoOnConnect* next; // Offset: 0x0

    char* name; // Offset: 0x8

    void (*callback)(idRemoteMonitor * const remo , void * const param); // Offset: 0x10

    void* param; // Offset: 0x18

}; // Size: 0x20
