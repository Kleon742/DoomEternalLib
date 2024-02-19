struct ObjExportOptions_t : exporterOptions_t
{
    // Export in world coordinates
    bool exportWorldCoordinates; // Offset: 0x38

    // Export game objects
    bool exportGameObjects; // Offset: 0x39

    // the file that will contain the exported json document
    idStr exportFilePath; // Offset: 0x40

}; // Size: 0x70
