struct idLogicGUIItemString : idLogicGUIItem
{
    // Variable output identifier
    unsigned int variableOutputId; // Offset: 0x78

    // Event output identifier
    unsigned int eventOutputId; // Offset: 0x7C

    // Value
    idStr value; // Offset: 0x80

    // Output event when value changes
    bool outputEvent; // Offset: 0xB0

}; // Size: 0xB8
