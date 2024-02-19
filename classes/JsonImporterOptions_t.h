struct JsonImporterOptions_t : importerOptions_t
{
    // replaces the current selection with the importer entities if true
    bool replaceSelection; // Offset: 0x38

    // creates a new group for the imported entities
    bool createNewGroup; // Offset: 0x39

    // the file that will contain the json document to import
    idStr importFilePath; // Offset: 0x40

}; // Size: 0x70
