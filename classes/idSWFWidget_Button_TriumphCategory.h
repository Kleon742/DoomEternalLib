struct idSWFWidget_Button_TriumphCategory : idSWFWidget_Button
{
    // TODO: copy the data, don't use a pointer, else this may go bad during refresh.
    triumphCategory_t* categoryInfo; // Offset: 0x2A0

    int sectionIndex; // Offset: 0x2A8

    bool isExpanded; // Offset: 0x2AC

}; // Size: 0x2B0
