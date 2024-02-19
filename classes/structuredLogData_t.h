struct structuredLogData_t
{
    // Should not be null
    char* eventName; // Offset: 0x0

    // Strictly increasing integer as the data changes
    int schemaVersion; // Offset: 0x8

    Json::Value* data; // Offset: 0x10

}; // Size: 0x18
