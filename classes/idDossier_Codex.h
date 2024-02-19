struct idDossier_Codex : idMenuElement
{
    idSWFWidget_TabList* categoryTabs; // Offset: 0x108

    idSWFWidget_SectionList* entryList; // Offset: 0x110

    idCodexManager* codexManager; // Offset: 0x118

    int categoryCount; // Offset: 0x120

    int selectedCategoryIndex; // Offset: 0x124

    codexDisplayStyle_t selectedDisplayStyle; // Offset: 0x128

    idDeclCodexEntry* selectedEntry; // Offset: 0x130

    codexStatus_t selectedEntryStatus; // Offset: 0x138

    bool selectedEntryTruncated; // Offset: 0x13C

    codexDisplayMode_t displayMode; // Offset: 0x140

}; // Size: 0x148
