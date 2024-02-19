struct idLogicGUIItemComboString : idLogicGUIItem
{
    // Variable output identifier
    unsigned int variableOutputId; // Offset: 0x78

    // Event output identifier
    unsigned int eventOutputId; // Offset: 0x7C

    // Options
    idList < idStr , TAG_LOGIC , false > options; // Offset: 0x80

    // Option index
    int optionIndex; // Offset: 0x98

    // Output event when value changes
    bool outputEvent; // Offset: 0x9C

}; // Size: 0xA0
