struct libLoggingData_t
{
    idPrintListener* printListener; // Offset: 0x0

    idStructuredLogListener* structuredLogListener; // Offset: 0x8

    rwlHandle_t structuredLogListenerMutex; // Offset: 0x10

    interlockedInt_t structuredLogListenerMutexCreated; // Offset: 0x18

    void (*fatalErrorHandler)(const char * msg); // Offset: 0x20

    libWarningInfo_t warningInfo[32]; // Offset: 0x28

    int numWarningInfo; // Offset: 0x228

}; // Size: 0x230
