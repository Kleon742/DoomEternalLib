struct JsonExportOptions_t : exporterOptions_t
{
    // only export the selection if true only the selected entities are exported, if false all entities are exported
    bool selectionOnly; // Offset: 0x38

    // Export merged VPaint for matching ABC
    bool exportMergedVPaint; // Offset: 0x39

    // the file that will contain the exported json document
    idStr exportFilePath; // Offset: 0x40

}; // Size: 0x70
