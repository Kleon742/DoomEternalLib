struct libAssertData_t
{
    unsigned int activeAssertCategories; // Offset: 0x0

    mutexHandle_t assertionMutex; // Offset: 0x8

    interlockedInt_t assertionMutexCreated; // Offset: 0x30

    skippedAssertion_t skippedAssertions[128]; // Offset: 0x38

    int skippedAssertionHighWater; // Offset: 0x838

}; // Size: 0x840
