struct idGuiEntity_Text : idGuiEntity
{
    // Header Text of the GUI
    idGuiEntity_TextData_t headerText; // Offset: 0xD98

    // Body Text of the GUI
    idGuiEntity_TextData_t bodyText; // Offset: 0xDF8

    // Root widget of the pause menu.
    idSWFWidget rootWidget; // Offset: 0xE58

}; // Size: 0xFD8
