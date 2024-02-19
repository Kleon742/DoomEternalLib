struct libInterface_t
{
    libLoggingData_t loggingData; // Offset: 0x0

    libErrataData_t errataData; // Offset: 0x230

    libAssertData_t assertData; // Offset: 0x248

    libPlatformData_t* platformData; // Offset: 0xA88

    libThreadingData_t* threadingData; // Offset: 0xA90

    idSourceControl* sourceControl; // Offset: 0xA98

    int initializationCount; // Offset: 0xAA0

}; // Size: 0xAA8
