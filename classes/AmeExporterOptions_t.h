struct AmeExporterOptions_t : exporterOptions_t
{
    // the file that will contain the exported json document
    idStr exportFilePath; // Offset: 0x38

    // Do we export as an obj or lwo
    bool exportOBJ; // Offset: 0x68

    idDeclMD6* declMD6; // Offset: 0x70

    idModelEditorScene* scene; // Offset: 0x78

    int lodLevel; // Offset: 0x80

}; // Size: 0x88
