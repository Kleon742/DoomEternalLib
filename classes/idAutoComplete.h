struct idAutoComplete
{
    // Amount of the buffer that matches the autocompletion
    int matchLength; // Offset: 0x0

    // Current autocomplete suggestion in the list
    int currentIndex; // Offset: 0x4

    // Command the user typed before hitting tab
    idCmdArgs args; // Offset: 0x8

    // List of suggestions, this should include the text in args
    idList < idStr , TAG_IDLIST , false > suggestions; // Offset: 0x2010

}; // Size: 0x2028
