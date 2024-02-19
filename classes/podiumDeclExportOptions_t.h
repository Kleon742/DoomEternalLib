struct podiumDeclExportOptions_t : exporterOptions_t
{
    // only export the selection if true only the selected entities are exported, if false all entities are exported
    bool selectionOnly; // Offset: 0x38

    // the path to the decl to export the entities too
    idDeclPodium* podiumDecl; // Offset: 0x40

}; // Size: 0x48
